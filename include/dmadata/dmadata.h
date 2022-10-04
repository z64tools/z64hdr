#ifndef Z64_DMADATA_H
#define Z64_DMADATA_H

#include "z64dma.h"

// Linker symbol declarations (used in the table below)
#define DEFINE_DMA_ENTRY(name, _1)        \
    extern u8 _##name##SegmentRomStart[]; \
    extern u8 _##name##SegmentRomEnd[];

// #include "tables/..."

#undef DEFINE_DMA_ENTRY

// dmadata Table definition
#define DEFINE_DMA_ENTRY(name, _1) \
    { (uintptr_t)_##name##SegmentRomStart, (uintptr_t)_##name##SegmentRomEnd, (uintptr_t)_##name##SegmentRomStart, 0 },

extern DmaEntry gDmaDataTable[];

#undef DEFINE_DMA_ENTRY

// Additional padding?
extern u8 sDmaDataPadding[0xF0];

#endif
