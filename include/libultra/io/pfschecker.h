#ifndef __PFSCHECKER__
#define __PFSCHECKER__

#include "ultra64.h"
#include "global.h"
#include "ultra64/pfs.h"
#define CHECK_IPAGE(p)                                                                                      \
    (((p).ipage >= pfs->inodeStartPage) && ((p).inode_t.bank < pfs->banks) && ((p).inode_t.page >= 0x01) && \
     ((p).inode_t.page < 0x80))

#endif // __PFSCHECKER__
