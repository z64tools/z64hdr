#ifndef PFSINITPAK_H
#define PFSINITPAK_H

#include "ultra64.h"
#include "global.h"

s32 osPfsInitPak(OSMesgQueue* queue, OSPfs* pfs, s32 channel);

s32 __osPfsCheckRamArea(OSPfs* pfs);

#endif
