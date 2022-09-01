#ifndef GFXBUFFERS_H
#define GFXBUFFERS_H

#include "z64.h"

// 0x18000 bytes
extern u64 gGfxSPTaskOutputBuffer[0x3000];

// 0xC00 bytes
extern u64 gGfxSPTaskYieldBuffer[OS_YIELD_DATA_SIZE / sizeof(u64)];

// 0x400 bytes
extern u64 gGfxSPTaskStack[SP_DRAM_STACK_SIZE64];

// 0x12410 bytes each; 0x24820 bytes total
extern GfxPool gGfxPools[2];

#endif
