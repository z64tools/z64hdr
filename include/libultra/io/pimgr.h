#ifndef __PIMGR__
#define __PIMGR__

#include "global.h"
#include "ultra64/internal.h"

extern OSMgrArgs __osPiDevMgr;
extern OSThread piThread;
extern OSMesgQueue piEventQueue;
extern OSMesg piEventBuf[2];
extern OSThread __osThreadSave;

#endif // __PIMGR__
