#ifndef PRERENDER_H
#define PRERENDER_H

#include "global.h"
#include "alloca.h"

void PreRender_SetValuesSave(PreRender* this, u32 width, u32 height, void* fbuf, void* zbuf, void* cvg);

void PreRender_Init(PreRender* this);

void PreRender_SetValues(PreRender* this, u32 width, u32 height, void* fbuf, void* zbuf);

void PreRender_Destroy(PreRender* this);

void func_800C0F28(PreRender* this, Gfx** gfxp, void* buf, void* bufSave);

void func_800C1258(PreRender* this, Gfx** gfxp);

void func_800C170C(PreRender* this, Gfx** gfxp, void* fbuf, void* fbufSave, u32 r, u32 g, u32 b, u32 a);

void func_800C1AE8(PreRender* this, Gfx** gfxp, void* fbuf, void* fbufSave);

void func_800C1B24(PreRender* this, Gfx** gfxp, void* fbuf, void* cvgSave);

void func_800C1E9C(PreRender* this, Gfx** gfxp);

void func_800C1F20(PreRender* this, Gfx** gfxp);

void func_800C1FA4(PreRender* this, Gfx** gfxp);

void func_800C20B4(PreRender* this, Gfx** gfxp);

void func_800C2118(PreRender* this, Gfx** gfxp);

void func_800C213C(PreRender* this, Gfx** gfxp);

void func_800C24BC(PreRender* this, Gfx** gfxp);

void func_800C24E0(PreRender* this, Gfx** gfxp);

void func_800C2500(PreRender* this, s32 x, s32 y);

void func_800C2FE4(PreRender* this);

void PreRender_Calc(PreRender* this);

#endif
