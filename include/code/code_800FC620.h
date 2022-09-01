#ifndef CODE_800FC620_H
#define CODE_800FC620_H

#include "global.h"

typedef void (*arg3_800FC868)(void*);
typedef void (*arg3_800FC8D8)(void*, u32);
typedef void (*arg3_800FC948)(void*, u32, u32, u32, u32, u32, u32, u32, u32);
typedef void (*arg3_800FCA18)(void*, u32);

typedef struct InitFunc {
    s32 nextOffset;
    void (*func)(void);
} InitFunc;

// .data
extern void* sInitFuncs;

extern char sNew[];

extern char D_80134488[0x18];

// possibly some kind of new() function
void* func_800FC800(u32 size);

// possibly some kind of delete() function
void func_800FC83C(void* ptr);

void func_800FC868(void* blk, u32 nBlk, u32 blkSize, arg3_800FC868 arg3);

void func_800FC8D8(void* blk, u32 nBlk, s32 blkSize, arg3_800FC8D8 arg3);

void* func_800FC948(void* blk, u32 nBlk, u32 blkSize, arg3_800FC948 arg3);

void func_800FCA18(void* blk, u32 nBlk, u32 blkSize, arg3_800FCA18 arg3, s32 arg4);

void func_800FCB34(void);

void SystemHeap_Init(void* start, u32 size);

#endif
