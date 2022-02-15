# This is free and unencumbered software released into the public domain.
#
# Anyone is free to copy, modify, publish, use, compile, sell, or
# distribute this software, either in source code form or as a compiled
# binary, for any purpose, commercial or non-commercial, and by any
# means.
#
# In jurisdictions that recognize copyright laws, the author or authors
# of this software dedicate any and all copyright interest in the
# software to the public domain. We make this dedication for the benefit
# of the public at large and to the detriment of our heirs and
# successors. We intend this dedication to be an overt act of
# relinquishment in perpetuity of all present and future rights to this
# software under copyright law.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
# IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
# OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
# ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
# OTHER DEALINGS IN THE SOFTWARE.
#
# For more information, please refer to <http://unlicense.org>

# This is partly based on this asm-differ fork
# https://github.com/Dragorn421/asm-differ/blob/bc4189857a2218f320cd81d88ba508915c9201c2/diff.py#L969
# asm-differ is also in the public domain (unlicense)

import sys
from pathlib import Path
import shutil
import traceback
import re

from typing import (
    Tuple,
    Dict,
    Iterable,
    Callable,
    Generator,
    NoReturn,
)


def parse_map_file(
    mapfile_lines: Iterable[str],
) -> Generator[Tuple[str, str, int, int, str], None, None]:

    symbol_pattern = re.compile(r"[a-zA-Z_][0-9a-zA-Z_]*")

    cur_section = None
    cur_objfile = None
    ram_to_rom = None

    for line in mapfile_lines:
        tokens = line.split()

        if not tokens:
            continue

        if (
            tokens == ["Memory", "Configuration"]
            or tokens[0] == "LOAD"
            or tokens == ["OUTPUT(zelda_ocarina_mq_dbg.elf", "elf32-tradbigmips)"]
        ):
            continue

        if tokens[0] in {".text", ".data", ".rodata", ".bss"}:
            cur_objfile = tokens[3]
            cur_section = tokens[0]
        elif line.startswith(" ."):
            cur_section = None

        if "load address" in line:
            if len(tokens) == 6:
                ram_str = tokens[1]
                rom_str = tokens[5]
            elif len(tokens) == 5:
                # long segment names are put in the previous line, shifting tokens by 1
                ram_str = tokens[0]
                rom_str = tokens[4]
            else:
                raise Exception(
                    f"Unexpected amount of tokens {len(tokens)} {tokens} in line {line}"
                )
            ram = int(ram_str, 0)
            rom = int(rom_str, 0)
            ram_to_rom = rom - ram

            # "load address" comes before sections
            cur_objfile = None
            cur_section = None

        if len(tokens) == 2:
            try:
                offset = int(tokens[0], 0)
            except ValueError:
                raise Exception(f"Could not parse {tokens}")
            if ram_to_rom is None:
                ram = None
                rom = offset
            else:
                ram = offset
                rom = ram + ram_to_rom
            symbol_name = tokens[1]
            if symbol_pattern.fullmatch(symbol_name):
                yield (
                    cur_objfile,
                    cur_section,
                    ram,
                    rom,
                    symbol_name,
                )
            else:
                if not symbol_name.startswith("0x"):
                    raise Exception(f"Could not parse {tokens}")


def read_and_organize_symbols(mapfile_lines):
    symbols: Dict[str, Dict[str, Dict[str, Tuple[int, int]]]] = dict()

    for objfile, section, ram, rom, symbol in parse_map_file(mapfile_lines):
        if objfile not in symbols:
            symbols[objfile] = dict()
        if section not in symbols[objfile]:
            symbols[objfile][section] = dict()
        if symbol in symbols[objfile][section]:
            raise Exception("Duplicate symbol", symbol)
        symbols[objfile][section][symbol] = (ram, rom)
        # print(objfile, section, ram, rom, symbol)
        if ram is None:
            if symbol not in {"entrypoint"}:
                raise Exception(
                    "the only expected symbol without a load address is entrypoint, encountered another one",
                    symbol,
                )
        else:
            pass

    return symbols


def get_old_symbols_by_ram(lines: Iterable[str]):

    symbol_def = re.compile(r"([a-zA-Z_][0-9a-zA-Z_]*)\s*=\s*(0x[0-9a-fA-F]+)\s*;")

    symbols_by_ram = dict()

    for line in lines:
        line = line.strip()
        if line == "":
            continue
        if line.startswith("/*") and line.endswith("*/"):
            if "*/" in line[:-1]:
                raise Exception('"Complex" comments not handled 1', line)
            continue
        if line.endswith("*/"):
            comment_start = line.find("/*")
            if comment_start < 0:
                raise Exception('"Complex" comments not handled 2 (multiline?)', line)
            if line[:-1].find("*/", comment_start + 1) >= 0:
                raise Exception('"Complex" comments not handled 3', line)
            line = line[:comment_start]
            line = line.strip()
        m = symbol_def.fullmatch(line)
        if m is None:
            raise Exception("line does not match a symbol definition", line)
        symbol = m[1]
        ram_str = m[2]
        ram = int(ram_str, 16)
        if ram in symbols_by_ram:
            if (
                symbols_by_ram[ram] == symbol
            ):  # ignore duplicate but identical definitions
                pass
            # memset and fabsf are defined manually as a hacky fix,
            # they don't actually appear in the decomp map file
            elif {symbol, symbols_by_ram[ram]} == {"Lib_MemSet", "memset"}:
                symbols_by_ram[ram] = "Lib_MemSet"
            elif {symbol, symbols_by_ram[ram]} == {"absf", "fabsf"}:
                symbols_by_ram[ram] = "absf"
            else:
                raise Exception(
                    "Duplicate symbol for address", ram, symbols_by_ram[ram], symbol
                )
        else:
            symbols_by_ram[ram] = symbol
    return symbols_by_ram


def update_z64hdr(
    oot_decomp_repo_path: Path,
    compare: bool,
):
    """
    `oot_decomp_repo_path` should be a `Path` to the oot decomp repo
        for example `Path("/home/dragorn421/Documents/oot/")`

    This writes syms_*.ld files under oot_mq_debug

    if `compare` is true, it will establish a list of changes compared to the previous symbols
        this currently only works with the old syms.ld
    """

    # read map
    with (oot_decomp_repo_path / "build" / "z64.map").open() as f:
        mapfile_lines = f.readlines()
    new_symbols = read_and_organize_symbols(mapfile_lines)

    if compare:
        # read old symbols
        with open("oot_mq_debug/syms.ld") as f:
            lines = f.readlines()
        old_symbols_by_ram = get_old_symbols_by_ram(lines)

    # write new linker script (and figure out name changes if compare)

    # TODO comparing addresses for assets won't work as there can be duplicate address usage,
    # so it may only be possible for src/ this way, may diff xmls for assets

    # one out_lines_* per syms_*.ld file
    out_lines_src = []
    out_lines_assets_scenes = []
    out_lines_assets_objects = []
    out_lines_assets_others = []
    out_lines_others = []

    if compare:
        symbol_new = []
        symbol_changes = dict()
        symbol_removed = set(old_symbols_by_ram.values())

    for objfile, objfile_symbols in new_symbols.items():
        # decide to which syms_*.ld file append this .o file's symbols
        out_lines = None
        if objfile.startswith("build/src/overlays/"):
            # we don't need the symbols from overlays
            # and because they get relocated using them usually makes little sense
            continue
        elif objfile.startswith("build/src/elf_message/"):
            # this is data which symbols aren't used directly
            continue
        elif objfile.startswith("build/src/"):
            out_lines = out_lines_src
        elif objfile == "build/asm/entry.o":  # skip `entrypoint` symbol
            continue
        elif objfile.startswith("build/assets/scenes/"):
            out_lines = out_lines_assets_scenes
        elif objfile.startswith("build/assets/objects/"):
            out_lines = out_lines_assets_objects
        elif objfile.startswith("build/assets/"):
            out_lines = out_lines_assets_others
        else:
            out_lines = out_lines_others

        # append symbols
        out_lines.append(f"/* {objfile} */")
        for section in (".text", ".data", ".rodata", ".bss"):
            section_symbols = objfile_symbols.get(section)
            if section_symbols:
                out_lines.append(f" /* {section} */")
                symbol_pad = max(len(symbol) for symbol in section_symbols.keys())
                for symbol, (ram, rom) in section_symbols.items():
                    out_lines.append(
                        f"  {symbol:<{symbol_pad}} = 0x{ram:08X};  /* ROM: 0x{rom:08X} */"
                    )
                    if compare:
                        old_symbol = old_symbols_by_ram.get(ram)
                        if old_symbol is None:
                            symbol_new.append(symbol)
                        elif symbol != old_symbol:
                            if old_symbol in symbol_changes:
                                raise Exception(
                                    "Duplicate new symbol",
                                    old_symbol,
                                    symbol_changes[old_symbol],
                                    symbol,
                                )
                            symbol_changes[old_symbol] = symbol
                        if old_symbol is not None:
                            if old_symbol not in symbol_removed:
                                if (
                                    old_symbol == "MapMark_Draw"
                                ):  # /!\ issue in current syms.ld
                                    pass
                                else:
                                    raise Exception(
                                        "Something is duplicate about", old_symbol
                                    )
                            else:
                                symbol_removed.remove(old_symbol)
        out_lines.append("")

    if compare:
        if len(symbol_new) != len(set(symbol_new)):
            raise Exception("Duplicate new symbols")

    # write syms_*.ld files

    out_dir = Path("oot_mq_debug")

    for out_file_name, out_lines in (
        ("src", out_lines_src),
        ("assets_scenes", out_lines_assets_scenes),
        ("assets_objects", out_lines_assets_objects),
        ("assets_others", out_lines_assets_others),
        ("others", out_lines_others),
    ):
        with (out_dir / f"syms_{out_file_name}.ld").open("w") as f:
            f.writelines(f"{line}\n" for line in out_lines)

    with (oot_decomp_repo_path / "undefined_syms.txt").open() as f:
        undefined_syms = f.read()

    # convert single-line comments like `// abc` to `/* abc */`
    # (I think linker scripts can only have the multiline style comments)
    undefined_syms = re.sub(r"//([^\n]*)\n", "/*\\1 */\n", undefined_syms)

    with (out_dir / "undefined_syms.txt").open("w") as f:
        f.write(undefined_syms)

    if compare:
        # write changes
        # + symbol is a new symbol
        # - symbol is a removed symbol
        # symA -> symB is a renamed symbol
        with open("changes.txt", "w") as f:
            for symbol in symbol_new:
                f.write(f"+ {symbol}\n")
            for old_symbol, new_symbol in symbol_changes.items():
                f.write(f"{old_symbol} -> {new_symbol}\n")
            for symbol in symbol_removed:
                f.write(f"- {symbol}\n")

    # copy assets headers

    target_include_assets = Path("include/assets")

    if target_include_assets.exists():
        while (
            input(
                f"Delete directory {target_include_assets.absolute()} ? 'yes' to confirm: "
            )
            != "yes"
        ):
            pass
        shutil.rmtree(target_include_assets)

    def copy_assets_headers_ignore(dir, entries: Iterable[str]):
        ignored_entries = []
        dirpath = Path(dir)
        for entry in entries:
            path = dirpath / entry
            if not (path.is_dir() or entry.endswith(".h")):
                ignored_entries.append(entry)
        return ignored_entries

    shutil.copytree(
        oot_decomp_repo_path / "assets",
        target_include_assets,
        ignore=copy_assets_headers_ignore,
        # copy_function=print,
    )


def main():
    update_z64hdr(
        oot_decomp_repo_path=Path("/home/dragorn421/Documents/oot/"),
        compare=False,
    )


if __name__ == "__main__":
    main()
