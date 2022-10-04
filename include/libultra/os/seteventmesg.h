#ifndef Z64_SETEVENTMESG_H
#define Z64_SETEVENTMESG_H

#include "global.h"
#include "ultra64/internal.h"

extern __OSEventState __osEventStateTab[OS_NUM_EVENTS];

extern u32 __osPreNMI;

void osSetEventMesg(OSEvent e, OSMesgQueue* mq, OSMesg msg);

#endif
