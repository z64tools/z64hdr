typedef void (*arg3_800FC868)(void*);

typedef void (*arg3_800FC8D8)(void*, u32);

typedef void (*arg3_800FC948)(void*, u32, u32, u32, u32, u32, u32, u32, u32);

typedef void (*arg3_800FCA18)(void*, u32);

typedef struct InitFunc {
    s32 nextOffset;
    void (*func)(void);
} InitFunc;

extern void* sInitFuncs;
extern char sNew[3];
extern char D_80134488[0];

void func_800FC868(void* blk, u32 nBlk, u32 blkSize, arg3_800FC868 arg3);
void func_800FC8D8(void* blk, u32 nBlk, s32 blkSize, arg3_800FC8D8 arg3);
void* func_800FC948(void* blk, u32 nBlk, u32 blkSize, arg3_800FC948 arg3);
void func_800FCA18(void* blk, u32 nBlk, u32 blkSize, arg3_800FCA18 arg3, s32 arg4);
void func_800FCB34(void);