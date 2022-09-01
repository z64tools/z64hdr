#ifndef Z64_PFSDELETEFILE_H
#define Z64_PFSDELETEFILE_H

#include "ultra64/pfs.h"
#include "global.h"

s32 osPfsDeleteFile(OSPfs* pfs, u16 companyCode, u32 gameCode, u8* gameName, u8* extName);

s32 __osPfsReleasePages(OSPfs* pfs, __OSInode* inode, u8 initialPage, u8 bank, __OSInodeUnit* finalPage);

#endif
