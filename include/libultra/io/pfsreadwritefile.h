#ifndef Z64_PFSREADWRITEFILE_H
#define Z64_PFSREADWRITEFILE_H

#include "ultra64.h"
#include "global.h"

#define CHECK_IPAGE(p, pfs)                                                                                   \
    (((p).ipage >= (pfs).inodeStartPage) && ((p).inode_t.bank < (pfs).banks) && ((p).inode_t.page >= 0x01) && \
     ((p).inode_t.page < 0x80))

extern __OSInode __osPfsInodeCache;

s32 __osPfsGetNextPage(OSPfs* pfs, u8* bank, __OSInode* inode, __OSInodeUnit* page);

s32 osPfsReadWriteFile(OSPfs* pfs, s32 fileNo, u8 flag, s32 offset, s32 size, u8* data);

#endif
