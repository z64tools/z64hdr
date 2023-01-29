# z64hdr

Generated from: https://github.com/z64tools/z64oot

## OOT_VERSION_FOLDER

- oot_mq_debug
- oot_u10


## Compiler Flags
```bash
-I z64hdr/include/ -I z64hdr/OOT_VERSION_FOLDER/
```

## Linker Flags
#### Code
```bash
-L z64hdr/common/ -L z64hdr/OOT_VERSION_FOLDER/ -T z64hdr.ld
```
#### Overlay
```bash
-L z64hdr/common/ -L z64hdr/OOT_VERSION_FOLDER/ -T z64hdr_actor.ld
```