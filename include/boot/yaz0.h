#ifndef Z64_YAZ0_H
#define Z64_YAZ0_H

#include "global.h"

extern u8 sYaz0DataBuffer[0x400];
extern u8* sYaz0DataBufferEnd;
extern uintptr_t sYaz0CurRomStart;
extern u32 sYaz0CurSize;
extern u8* sYaz0MaxPtr;

void* Yaz0_FirstDMA(void);

void* Yaz0_NextDMA(u8* curSrcPos);

void Yaz0_DecompressImpl(Yaz0Header* hdr, u8* dst);

void Yaz0_Decompress(uintptr_t romStart, u8* dst, u32 size);

#endif
