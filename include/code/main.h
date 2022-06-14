#ifndef __MAIN__
#define __MAIN__

#include "global.h"
#include "vt.h"

extern u32 gSystemHeapSize;
extern OSThread sGraphThread;
extern StackEntry sGraphStackInfo;
extern StackEntry sSchedStackInfo;
extern StackEntry sAudioStackInfo;
extern StackEntry sPadMgrStackInfo;
extern StackEntry sIrqMgrStackInfo;
extern AudioMgr gAudioMgr;
extern OSMesgQueue sSerialEventQueue;
extern OSMesg sSerialMsgBuf[1];

#endif // __MAIN__
