#ifndef Z64_MAIN_H
#define Z64_MAIN_H

#include "global.h"
#include "vt.h"

extern s32 gScreenWidth;
extern s32 gScreenHeight;
extern u32 gSystemHeapSize;

extern PreNmiBuff* gAppNmiBufferPtr;
extern Scheduler gScheduler;
extern PadMgr gPadMgr;
extern IrqMgr gIrqMgr;
extern uintptr_t gSegments[NUM_SEGMENTS];
extern OSThread sGraphThread;
STACK(sGraphStack, 0x1800);
STACK(sSchedStack, 0x600);
STACK(sAudioStack, 0x800);
STACK(sPadMgrStack, 0x500);
STACK(sIrqMgrStack, 0x500);
extern StackEntry sGraphStackInfo;
extern StackEntry sSchedStackInfo;
extern StackEntry sAudioStackInfo;
extern StackEntry sPadMgrStackInfo;
extern StackEntry sIrqMgrStackInfo;
extern AudioMgr gAudioMgr;
extern OSMesgQueue sSerialEventQueue;
extern OSMesg sSerialMsgBuf[1];

void Main_LogSystemHeap(void);

void Main(void* arg);

#endif
