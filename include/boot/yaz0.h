#ifndef Z64_YAZ0_H
#define Z64_YAZ0_H

#include "global.h"

extern u8 sYaz0DataBuffer[0x400];
extern u32 sYaz0CurDataEnd;
extern u32 sYaz0CurRomStart;
extern u32 sYaz0CurSize;
extern u32 sYaz0MaxPtr;

void* Yaz0_FirstDMA(void);

void* Yaz0_NextDMA(void* curSrcPos);

void Yaz0_DecompressImpl(Yaz0Header* hdr, u8* dst);

void Yaz0_Decompress(u32 romStart, void* dst, u32 size);

#endif
