#ifndef PIMGR_H
#define PIMGR_H

#include "global.h"
#include "ultra64/internal.h"

extern OSMgrArgs __osPiDevMgr;

extern OSPiHandle __Dom1SpeedParam;
extern OSPiHandle __Dom2SpeedParam;
extern OSThread piThread;
STACK(piStackThread, 0x1000);
extern OSMesgQueue piEventQueue;
extern OSMesg piEventBuf[2];
extern OSThread __osThreadSave;

extern OSPiHandle* __osPiTable;
extern OSPiHandle* __osCurrentHandle[];

void osCreatePiManager(OSPri pri, OSMesgQueue* cmdQueue, OSMesg* cmdBuf, s32 cmdMsgCnt);

#endif
