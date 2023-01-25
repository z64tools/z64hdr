#ifndef Z64COMMON_H
#define Z64COMMON_H

#define F3DEX_GBI_2
#define GS2DEX_H

#ifndef GLOBAL_H

#include "ultra64.h"
#include "global.h"

typedef struct {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 category;
    /* 0x04 */ u32 flags;
    /* 0x08 */ s16 objectId;
    /* 0x0A */ u16 padding;
    /* 0x0C */ u32 instanceSize;
    /* 0x10 */ ActorFunc init;
    /* 0x14 */ ActorFunc destroy;
    /* 0x18 */ ActorFunc update;
    /* 0x1C */ ActorFunc draw;
} ActorInitExplPad; // size = 0x20

#endif

extern struct GraphicsContext* __gfxCtx;

#endif