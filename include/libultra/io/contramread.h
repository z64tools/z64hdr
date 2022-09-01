#ifndef Z64_CONTRAMREAD_H
#define Z64_CONTRAMREAD_H

#include "global.h"

#define BLOCKSIZE 32

extern s32 __osPfsLastChannel;

s32 __osContRamRead(OSMesgQueue* ctrlrqueue, s32 channel, u16 addr, u8* data);

#endif
