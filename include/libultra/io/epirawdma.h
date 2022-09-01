#ifndef EPIRAWDMA_H
#define EPIRAWDMA_H

#include "global.h"

s32 __osEPiRawStartDma(OSPiHandle* handle, s32 direction, u32 cartAddr, void* dramAddr, size_t size);

#endif
