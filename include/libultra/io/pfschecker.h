#ifndef Z64_PFSCHECKER_H
#define Z64_PFSCHECKER_H

#include "ultra64.h"
#include "global.h"
#include "ultra64/pfs.h"

#define CHECK_IPAGE(p)                                                                                      \
    (((p).ipage >= pfs->inodeStartPage) && ((p).inode_t.bank < pfs->banks) && ((p).inode_t.page >= 0x01) && \
     ((p).inode_t.page < 0x80))

s32 osPfsChecker(OSPfs* pfs);

// Original name: corrupted_init (probably needs better name)
s32 func_80105788(OSPfs* pfs, __OSInodeCache* cache);

// original name: corrupted (probably needs a better name)
s32 func_80105A60(OSPfs* pfs, __OSInodeUnit fpage, __OSInodeCache* cache);

#endif
