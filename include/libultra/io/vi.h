#ifndef VI_H
#define VI_H

#include "global.h"

extern OSViContext vi[2];
extern OSViContext* __osViCurr;
extern OSViContext* __osViNext;

void __osViInit(void);

#endif
