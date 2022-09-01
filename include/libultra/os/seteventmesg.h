#ifndef SETEVENTMESG_H
#define SETEVENTMESG_H

#include "global.h"
#include "ultra64/internal.h"

extern __OSEventState __osEventStateTab[OS_NUM_EVENTS + 1];

extern u32 __osPreNMI;

void osSetEventMesg(OSEvent e, OSMesgQueue* mq, OSMesg msg);

#endif
