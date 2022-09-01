#ifndef SETHWINTRROUTINE_H
#define SETHWINTRROUTINE_H

#include "global.h"
#include "ultra64/internal.h"

void __osSetHWIntrRoutine(OSHWIntr intr, s32 (*callback)(void), void* sp);

#endif
