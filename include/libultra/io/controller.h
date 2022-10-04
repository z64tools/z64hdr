#ifndef Z64_CONTROLLER_H
#define Z64_CONTROLLER_H

#include "global.h"

extern OSPifRam __osContPifRam;
extern u8 __osContLastCmd;
extern u8 __osMaxControllers; // always 4

extern OSTimer __osEepromTimer;
extern OSMesgQueue __osEepromTimerMsgQueue;
extern OSMesg __osEepromTimerMsg;

extern u32 __osContInitialized;

#define HALF_SECOND OS_USEC_TO_CYCLES(500000)

s32 osContInit(OSMesgQueue* mq, u8* ctlBitfield, OSContStatus* status);

void __osContGetInitData(u8* ctlBitfield, OSContStatus* data);

void __osPackRequestData(u8 poll);

#endif
