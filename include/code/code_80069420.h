#ifndef Z64_CODE_80069420_H
#define Z64_CODE_80069420_H

#include "global.h"

/**
 * memcpy: copies `len` bytes from memory starting at `src` to memory starting at `dest`. Expects the memory
 * specified by `src` and `dest` to not overlap.
 *
 * @see libultra also has a memcpy().
 *
 * @param dest address of start of buffer writing to
 * @param src address of start of buffer to read from
 * @param len number of bytes to copy. (`s32` rather than the standard `size_t`)
 *
 * @return dest
 */
void* MemCpy(void* dest, const void* src, s32 len);

/**
 * memset: sets `len` bytes to `val` starting at address `dest`.
 *
 * @see There are two other memsets in this codebase, Lib_MemSet(), __osMemset().
 * This one is unused.
 *
 * @param dest address to start at
 * @param val value to write (`s32`, but interpreted as `u8`)
 * @param len number of bytes to write. (`s32` rather than the standard `size_t`)
 *
 * @return dest
 */
void* MemSet(void* dest, s32 val, s32 len);

#endif
