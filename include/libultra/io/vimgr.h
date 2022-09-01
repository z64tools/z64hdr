#ifndef Z64_VIMGR_H
#define Z64_VIMGR_H

#include "global.h"
#include "ultra64/internal.h"

extern OSThread viThread;
STACK(viThreadStack, 0x1000);
extern OSMesgQueue viEventQueue;
extern OSMesg viEventBuf[5];
extern OSIoMesg viRetraceMsg;
extern OSIoMesg viCounterMsg;
extern OSMgrArgs __osViDevMgr;
extern u32 __additional_scanline;

void viMgrMain(void*);

void osCreateViManager(OSPri pri);

void viMgrMain(void* vargs);

#endif
