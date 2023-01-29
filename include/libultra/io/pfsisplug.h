#ifndef Z64_PFSISPLUG_H
#define Z64_PFSISPLUG_H

#include "ultra64.h"
#include "global.h"

s32 osPfsIsPlug(OSMesgQueue* mq, u8* pattern);

void __osPfsRequestData(u8 cmd);

void __osPfsGetInitData(u8* pattern, OSContStatus* contData);

#endif
