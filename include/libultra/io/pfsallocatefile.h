#ifndef Z64_PFSALLOCATEFILE_H
#define Z64_PFSALLOCATEFILE_H

#include "ultra64.h"
#include "global.h"
#include "ultra64/pfs.h"

s32 osPfsAllocateFile(OSPfs* pfs, u16 companyCode, u32 gameCode, u8* gameName, u8* extName, s32 fileSize, s32* fileNo);

s32 __osPfsDeclearPage(OSPfs* pfs, __OSInode* inode, s32 fileSizeInPages, s32* startPage, u8 bank, s32* decleared,
                       s32* finalPage);

#endif
