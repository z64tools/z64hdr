#ifndef Z_SS_SRAM_H
#define Z_SS_SRAM_H

#include "ultra64.h"
#include "global.h"

typedef struct {
    /* 0x00 */ OSPiHandle piHandle;
    /* 0x74 */ OSIoMesg ioMesg;
    /* 0x8C */ OSMesgQueue msgQueue;
} SsSramContext; // size = 0xA4

extern SsSramContext sSsSramContext;

void SsSram_Init(u32 addr, u8 handleType, u8 handleDomain, u8 handleLatency, u8 handlePageSize, u8 handleRelDuration,
                 u8 handlePulse, u32 handleSpeed);

void SsSram_Dma(void* dramAddr, size_t size, s32 direction);

void SsSram_ReadWrite(u32 addr, void* dramAddr, size_t size, s32 direction);

#endif
