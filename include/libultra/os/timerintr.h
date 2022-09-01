#ifndef Z64_TIMERINTR_H
#define Z64_TIMERINTR_H

#include "global.h"

extern OSTimer __osBaseTimer;
extern OSTime __osCurrentTime;
extern u32 __osBaseCounter;
extern u32 __osViIntrCount;
extern u32 __osTimerCounter;
extern OSTimer* __osTimerList;

void __osTimerServicesInit(void);

void __osTimerInterrupt(void);

void __osSetTimerIntr(OSTime time);

OSTime __osInsertTimer(OSTimer* timer);

#endif
