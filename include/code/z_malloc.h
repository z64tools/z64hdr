#ifndef Z_MALLOC_H
#define Z_MALLOC_H

#include "global.h"

#define LOG_SEVERITY_NOLOG 0
#define LOG_SEVERITY_ERROR 2
#define LOG_SEVERITY_VERBOSE 3

extern s32 gZeldaArenaLogSeverity;
extern Arena sZeldaArena;

void ZeldaArena_CheckPointer(void* ptr, u32 size, const char* name, const char* action);

void* ZeldaArena_Malloc(u32 size);

void* ZeldaArena_MallocDebug(u32 size, const char* file, s32 line);

void* ZeldaArena_MallocR(u32 size);

void* ZeldaArena_MallocRDebug(u32 size, const char* file, s32 line);

void* ZeldaArena_Realloc(void* ptr, u32 newSize);

void* ZeldaArena_ReallocDebug(void* ptr, u32 newSize, const char* file, s32 line);

void ZeldaArena_Free(void* ptr);

void ZeldaArena_FreeDebug(void* ptr, const char* file, s32 line);

void* ZeldaArena_Calloc(u32 num, u32 size);

void ZeldaArena_Display(void);

void ZeldaArena_GetSizes(u32* outMaxFree, u32* outFree, u32* outAlloc);

void ZeldaArena_Check(void);

void ZeldaArena_Init(void* start, u32 size);

void ZeldaArena_Cleanup(void);

u8 ZeldaArena_IsInitalized(void);

#endif
