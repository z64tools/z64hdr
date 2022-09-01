#ifndef Z64_PFSFINDFILE_H
#define Z64_PFSFINDFILE_H

#include "ultra64.h"
#include "global.h"

s32 osPfsFindFile(OSPfs* pfs, u16 companyCode, u32 gameCode, u8* gameName, u8* extName, s32* fileNo);

#endif
