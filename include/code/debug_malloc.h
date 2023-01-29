#ifndef Z64_DEBUG_MALLOC_H
#define Z64_DEBUG_MALLOC_H

#include "global.h"

#define LOG_SEVERITY_NOLOG 0
#define LOG_SEVERITY_ERROR 2
#define LOG_SEVERITY_VERBOSE 3

extern s32 gDebugArenaLogSeverity;
extern Arena sDebugArena;

void DebugArena_CheckPointer(void* ptr, u32 size, const char* name, const char* action);

void* DebugArena_Malloc(u32 size);

void* DebugArena_MallocDebug(u32 size, const char* file, s32 line);

void* DebugArena_MallocR(u32 size);

void* DebugArena_MallocRDebug(u32 size, const char* file, s32 line);

void* DebugArena_Realloc(void* ptr, u32 newSize);

void* DebugArena_ReallocDebug(void* ptr, u32 newSize, const char* file, s32 line);

void DebugArena_Free(void* ptr);

void DebugArena_FreeDebug(void* ptr, const char* file, s32 line);

void* DebugArena_Calloc(u32 num, u32 size);

void DebugArena_Display(void);

void DebugArena_GetSizes(u32* outMaxFree, u32* outFree, u32* outAlloc);

void DebugArena_Check(void);

void DebugArena_Init(void* start, u32 size);

void DebugArena_Cleanup(void);

u8 DebugArena_IsInitialized(void);

#endif
