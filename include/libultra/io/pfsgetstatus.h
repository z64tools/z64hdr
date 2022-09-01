#ifndef Z64_PFSGETSTATUS_H
#define Z64_PFSGETSTATUS_H

#include "ultra64.h"
#include "global.h"

extern OSPifRam gPifMempakBuf;

s32 __osPfsGetStatus(OSMesgQueue* queue, s32 channel);

void __osPfsRequestOneChannel(s32 channel, u8 poll);

void __osPfsGetOneChannelData(s32 channel, OSContStatus* contData);

#endif
