#ifndef ____OSMALLOC__
#define ____OSMALLOC__

#include "global.h"
#include "vt.h"
#define FILL_ALLOCBLOCK (1 << 0)
#define FILL_FREEBLOCK (1 << 1)
#define CHECK_FREE_BLOCK (1 << 2)
#define NODE_MAGIC (0x7373)
#define BLOCK_UNINIT_MAGIC (0xAB)
#define BLOCK_UNINIT_MAGIC_32 (0xABABABAB)
#define BLOCK_ALLOC_MAGIC (0xCD)
#define BLOCK_ALLOC_MAGIC_32 (0xCDCDCDCD)
#define BLOCK_FREE_MAGIC (0xEF)
#define BLOCK_FREE_MAGIC_32 (0xEFEFEFEF)

extern OSMesg sArenaLockMsg;

#endif // ____OSMALLOC__
