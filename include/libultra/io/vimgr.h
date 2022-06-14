#ifndef __VIMGR__
#define __VIMGR__

#include "global.h"
#include "ultra64/internal.h"

extern OSThread viThread;
extern OSMesgQueue viEventQueue;
extern OSMesg viEventBuf[5];
extern OSIoMesg viRetraceMsg;
extern OSIoMesg viCounterMsg;
extern OSMgrArgs __osViDevMgr;

void viMgrMain(void*);
void viMgrMain(void* vargs);

#endif // __VIMGR__
