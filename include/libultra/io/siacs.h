#ifndef SIACS_H
#define SIACS_H

#include "global.h"

extern OSMesg siAccessBuf[1];
extern OSMesgQueue __osSiAccessQueue;
extern u32 __osSiAccessQueueEnabled;

void __osSiCreateAccessQueue(void);

void __osSiGetAccess(void);

void __osSiRelAccess(void);

#endif
