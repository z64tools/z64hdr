#ifndef __CONTROLLER__
#define __CONTROLLER__

#include "global.h"

extern OSTimer __osEepromTimer;
extern OSMesgQueue __osEepromTimerMsgQueue;
extern OSMesg __osEepromTimerMsg;
extern u32 gOSContInitialized;

#define HALF_SECOND OS_USEC_TO_CYCLES(500000)

#endif // __CONTROLLER__
