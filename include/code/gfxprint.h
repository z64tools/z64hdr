#ifndef GFXPRINT_H
#define GFXPRINT_H

#include "global.h"

extern u16 sGfxPrintFontTLUT[64];

extern u16 sGfxPrintRainbowTLUT[16];

extern u8 sGfxPrintRainbowData[8];

extern u8 sGfxPrintFontData[(16 * 256) / 2];

// Can be used to set GFXP_FLAG_ENLARGE by default
extern u8 sDefaultSpecialFlags;

void GfxPrint_Setup(GfxPrint* this);

void GfxPrint_SetColor(GfxPrint* this, u32 r, u32 g, u32 b, u32 a);

void GfxPrint_SetPosPx(GfxPrint* this, s32 x, s32 y);

void GfxPrint_SetPos(GfxPrint* this, s32 x, s32 y);

void GfxPrint_SetBasePosPx(GfxPrint* this, s32 x, s32 y);

void GfxPrint_PrintCharImpl(GfxPrint* this, u8 c);

void GfxPrint_PrintChar(GfxPrint* this, u8 c);

void GfxPrint_PrintStringWithSize(GfxPrint* this, const void* buffer, u32 charSize, u32 charCount);

void GfxPrint_PrintString(GfxPrint* this, const char* str);

void* GfxPrint_Callback(void* arg, const char* str, u32 size);

void GfxPrint_Init(GfxPrint* this);

void GfxPrint_Destroy(GfxPrint* this);

void GfxPrint_Open(GfxPrint* this, Gfx* dList);

Gfx* GfxPrint_Close(GfxPrint* this);

s32 GfxPrint_VPrintf(GfxPrint* this, const char* fmt, va_list args);

s32 GfxPrint_Printf(GfxPrint* this, const char* fmt, ...);

#endif
