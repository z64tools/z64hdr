#ifndef Z64_CONTREADDATA_H
#define Z64_CONTREADDATA_H

#include "global.h"

s32 osContStartReadData(OSMesgQueue* mq);

void osContGetReadData(OSContPad* contData);

void __osPackReadData(void);

#endif
