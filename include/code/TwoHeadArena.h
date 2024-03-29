#ifndef Z64_TWOHEADARENA_H
#define Z64_TWOHEADARENA_H

#include "global.h"

void THGA_Ct(TwoHeadGfxArena* thga, Gfx* start, u32 size);

void THGA_Dt(TwoHeadGfxArena* thga);

u32 THGA_IsCrash(TwoHeadGfxArena* thga);

void THGA_Init(TwoHeadGfxArena* thga);

s32 THGA_GetSize(TwoHeadGfxArena* thga);

Gfx* THGA_GetHead(TwoHeadGfxArena* thga);

void THGA_SetHead(TwoHeadGfxArena* thga, Gfx* start);

Gfx* THGA_GetTail(TwoHeadGfxArena* thga);

Gfx* THGA_AllocStartArray8(TwoHeadGfxArena* thga, u32 count);

Gfx* THGA_AllocStart8(TwoHeadGfxArena* thga);

Gfx* THGA_AllocStart8Wrapper(TwoHeadGfxArena* thga);

Gfx* THGA_AllocEnd(TwoHeadGfxArena* thga, u32 size);

Gfx* THGA_AllocEndArray64(TwoHeadGfxArena* thga, u32 count);

Gfx* THGA_AllocEnd64(TwoHeadGfxArena* thga);

Gfx* THGA_AllocEndArray16(TwoHeadGfxArena* thga, u32 count);

Gfx* THGA_AllocEnd16(TwoHeadGfxArena* thga);

void* THA_GetHead(TwoHeadArena* tha);

void THA_SetHead(TwoHeadArena* tha, void* start);

void* THA_GetTail(TwoHeadArena* tha);

void* THA_AllocStart(TwoHeadArena* tha, u32 size);

void* THA_AllocStart1(TwoHeadArena* tha);

void* THA_AllocEnd(TwoHeadArena* tha, u32 size);

void* THA_AllocEndAlign16(TwoHeadArena* tha, u32 size);

void* THA_AllocEndAlign(TwoHeadArena* tha, u32 size, u32 mask);

s32 THA_GetSize(TwoHeadArena* tha);

u32 THA_IsCrash(TwoHeadArena* tha);

void THA_Init(TwoHeadArena* tha);

void THA_Ct(TwoHeadArena* tha, void* ptr, u32 size);

void THA_Dt(TwoHeadArena* tha);

#endif
