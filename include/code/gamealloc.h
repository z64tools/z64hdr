#ifndef GAMEALLOC_H
#define GAMEALLOC_H

#include "global.h"

void GameAlloc_Log(GameAlloc* this);

void* GameAlloc_MallocDebug(GameAlloc* this, u32 size, const char* file, s32 line);

void* GameAlloc_Malloc(GameAlloc* this, u32 size);

void GameAlloc_Free(GameAlloc* this, void* data);

void GameAlloc_Cleanup(GameAlloc* this);

void GameAlloc_Init(GameAlloc* this);

#endif
