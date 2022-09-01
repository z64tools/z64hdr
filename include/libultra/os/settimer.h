#ifndef SETTIMER_H
#define SETTIMER_H

#include "global.h"

s32 osSetTimer(OSTimer* timer, OSTime countdown, OSTime interval, OSMesgQueue* mq, OSMesg msg);

#endif
