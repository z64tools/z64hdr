#ifndef Z64_SYSTEM_MALLOC_H
#define Z64_SYSTEM_MALLOC_H

#include "global.h"

#define LOG_SEVERITY_NOLOG 0
#define LOG_SEVERITY_ERROR 2
#define LOG_SEVERITY_VERBOSE 3

extern s32 gSystemArenaLogSeverity;
extern Arena gSystemArena;

void SystemArena_CheckPointer(void* ptr, u32 size, const char* name, const char* action);

void* SystemArena_Malloc(u32 size);

void* SystemArena_MallocDebug(u32 size, const char* file, s32 line);

void* SystemArena_MallocR(u32 size);

void* SystemArena_MallocRDebug(u32 size, const char* file, s32 line);

void* SystemArena_Realloc(void* ptr, u32 newSize);

void* SystemArena_ReallocDebug(void* ptr, u32 newSize, const char* file, s32 line);

void SystemArena_Free(void* ptr);

void SystemArena_FreeDebug(void* ptr, const char* file, s32 line);

void* SystemArena_Calloc(u32 num, u32 size);

void SystemArena_Display(void);

void SystemArena_GetSizes(u32* outMaxFree, u32* outFree, u32* outAlloc);

void SystemArena_Check(void);

void SystemArena_Init(void* start, u32 size);

void SystemArena_Cleanup(void);

u8 SystemArena_IsInitalized(void);

#endif
