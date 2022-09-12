#ifndef Z64HDR_H
#define Z64HDR_H

#define F3DEX_GBI_2
#define GS2DEX_H

#define MM_U10

#ifndef GLOBAL_H
  #include "ultra64.h"
  #include "global.h"
#endif

extern struct GraphicsContext* __gfxCtx;
asm("__gfxCtx = 0x80212020;");

#endif