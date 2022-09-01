#ifndef Z64_IDLE_H
#define Z64_IDLE_H

#include "global.h"
#include "vt.h"

extern OSThread gMainThread;
STACK(sMainStack, 0x900);
extern StackEntry sMainStackInfo;
extern OSMesg sPiMgrCmdBuff[50];
extern OSMesgQueue gPiMgrCmdQueue;
extern OSViMode gViConfigMode;
extern u8 D_80013960;

extern s8 D_80009430;
extern vu8 gViConfigBlack;
extern u8 gViConfigAdditionalScanLines;
extern u32 gViConfigFeatures;
extern f32 gViConfigXScale;
extern f32 gViConfigYScale;

void Main_ThreadEntry(void* arg);

void Idle_ThreadEntry(void* arg);

#endif
