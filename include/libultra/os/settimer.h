#ifndef Z64_SETTIMER_H
#define Z64_SETTIMER_H

#include "global.h"

s32 osSetTimer(OSTimer* timer, OSTime countdown, OSTime interval, OSMesgQueue* mq, OSMesg msg);

#endif
