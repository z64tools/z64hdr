#ifndef PFSISPLUG_H
#define PFSISPLUG_H

#include "ultra64.h"
#include "global.h"

s32 osPfsIsPlug(OSMesgQueue* mq, u8* pattern);

void __osPfsRequestData(u8 poll);

void __osPfsGetInitData(u8* pattern, OSContStatus* contData);

#endif
