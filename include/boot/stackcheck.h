#ifndef STACKCHECK_H
#define STACKCHECK_H

#include "global.h"
#include "vt.h"

extern StackEntry* sStackInfoListStart;
extern StackEntry* sStackInfoListEnd;

void StackCheck_Init(StackEntry* entry, void* stackTop, void* stackBottom, u32 initValue, s32 minSpace,
                     const char* name);

void StackCheck_Cleanup(StackEntry* entry);

s32 StackCheck_GetState(StackEntry* entry);

u32 StackCheck_CheckAll(void);

u32 StackCheck_Check(StackEntry* entry);

#endif
