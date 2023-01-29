#ifndef Z64___OSMALLOC_H
#define Z64___OSMALLOC_H

#include "global.h"
#include "vt.h"

#define FILL_ALLOCBLOCK (1 << 0)
#define FILL_FREEBLOCK (1 << 1)
#define CHECK_FREE_BLOCK (1 << 2)

#define NODE_MAGIC (0x7373)

#define BLOCK_UNINIT_MAGIC (0xAB)
#define BLOCK_UNINIT_MAGIC_32 (0xABABABAB)
#define BLOCK_ALLOC_MAGIC (0xCD)
#define BLOCK_ALLOC_MAGIC_32 (0xCDCDCDCD)
#define BLOCK_FREE_MAGIC (0xEF)
#define BLOCK_FREE_MAGIC_32 (0xEFEFEFEF)

extern OSMesg sArenaLockMsg;
extern u32 __osMalloc_FreeBlockTest_Enable;

u32 ArenaImpl_GetFillAllocBlock(Arena* arena);
u32 ArenaImpl_GetFillFreeBlock(Arena* arena);
u32 ArenaImpl_GetCheckFreeBlock(Arena* arena);

void ArenaImpl_SetFillAllocBlock(Arena* arena);
void ArenaImpl_SetFillFreeBlock(Arena* arena);
void ArenaImpl_SetCheckFreeBlock(Arena* arena);

void ArenaImpl_UnsetFillAllocBlock(Arena* arena);
void ArenaImpl_UnsetFillFreeBlock(Arena* arena);
void ArenaImpl_UnsetCheckFreeBlock(Arena* arena);

void ArenaImpl_SetDebugInfo(ArenaNode* node, const char* file, s32 line, Arena* arena);

void ArenaImpl_LockInit(Arena* arena);

void ArenaImpl_Lock(Arena* arena);

void ArenaImpl_Unlock(Arena* arena);

ArenaNode* ArenaImpl_GetNextBlock(ArenaNode* node);

ArenaNode* ArenaImpl_GetPrevBlock(ArenaNode* node);

ArenaNode* ArenaImpl_GetLastBlock(Arena* arena);

void __osMallocInit(Arena* arena, void* start, u32 size);

void __osMallocAddBlock(Arena* arena, void* start, s32 size);

void ArenaImpl_RemoveAllBlocks(Arena* arena);

void __osMallocCleanup(Arena* arena);

u8 __osMallocIsInitialized(Arena* arena);

void __osMalloc_FreeBlockTest(Arena* arena, ArenaNode* node);

void* __osMalloc_NoLockDebug(Arena* arena, u32 size, const char* file, s32 line);

void* __osMallocDebug(Arena* arena, u32 size, const char* file, s32 line);

void* __osMallocRDebug(Arena* arena, u32 size, const char* file, s32 line);

void* __osMalloc_NoLock(Arena* arena, u32 size);

void* __osMalloc(Arena* arena, u32 size);

void* __osMallocR(Arena* arena, u32 size);

void __osFree_NoLock(Arena* arena, void* ptr);

void __osFree(Arena* arena, void* ptr);

void __osFree_NoLockDebug(Arena* arena, void* ptr, const char* file, s32 line);

void __osFreeDebug(Arena* arena, void* ptr, const char* file, s32 line);

void* __osRealloc(Arena* arena, void* ptr, u32 newSize);

void* __osReallocDebug(Arena* arena, void* ptr, u32 newSize, const char* file, s32 line);

void ArenaImpl_GetSizes(Arena* arena, u32* outMaxFree, u32* outFree, u32* outAlloc);

void __osDisplayArena(Arena* arena);

void ArenaImpl_FaultClient(Arena* arena);

u32 __osCheckArena(Arena* arena);

u8 func_800FF334(Arena* arena);

#endif
