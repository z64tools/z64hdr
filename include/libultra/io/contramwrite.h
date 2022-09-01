#ifndef Z64_CONTRAMWRITE_H
#define Z64_CONTRAMWRITE_H

#include "ultra64.h"
#include "global.h"

s32 __osContRamWrite(OSMesgQueue* mq, s32 channel, u16 address, u8* buffer, s32 force);

#endif
