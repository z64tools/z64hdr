#ifndef __GETHWINTRROUTINE__
#define __GETHWINTRROUTINE__

#include "global.h"
#include "ultra64/internal.h"

void __osGetHWIntrRoutine(OSHWIntr intr, s32 (**callbackOut)(void), void** spOut);

#endif // __GETHWINTRROUTINE__
