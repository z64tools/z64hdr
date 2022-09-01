#ifndef PIACS_H
#define PIACS_H

#include "global.h"

extern u32 __osPiAccessQueueEnabled;
extern OSMesg piAccessBuf[1];
extern OSMesgQueue __osPiAccessQueue;

void __osPiCreateAccessQueue(void);

void __osPiGetAccess(void);

void __osPiRelAccess(void);

#endif
