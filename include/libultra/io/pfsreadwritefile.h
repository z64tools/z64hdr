#ifndef __PFSREADWRITEFILE__
#define __PFSREADWRITEFILE__

#include "ultra64.h"
#include "global.h"
#define CHECK_IPAGE(p, pfs)                                                                                   \
    (((p).ipage >= (pfs).inodeStartPage) && ((p).inode_t.bank < (pfs).banks) && ((p).inode_t.page >= 0x01) && \
     ((p).inode_t.page < 0x80))

#endif // __PFSREADWRITEFILE__
