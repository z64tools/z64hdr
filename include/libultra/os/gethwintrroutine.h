#ifndef GETHWINTRROUTINE_H
#define GETHWINTRROUTINE_H

#include "global.h"
#include "ultra64/internal.h"

void __osGetHWIntrRoutine(OSHWIntr intr, s32 (**callbackOut)(void), void** spOut);

#endif
