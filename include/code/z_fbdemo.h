#ifndef Z_FBDEMO_H
#define Z_FBDEMO_H

#include "global.h"

extern Gfx D_8012AFB0[];

extern Gfx D_8012B000[];

void TransitionUnk_InitGraphics(TransitionUnk* this);

void TransitionUnk_InitData(TransitionUnk* this);

void TransitionUnk_Destroy(TransitionUnk* this);

TransitionUnk* TransitionUnk_Init(TransitionUnk* this, s32 row, s32 col);

void TransitionUnk_SetData(TransitionUnk* this);

void TransitionUnk_Draw(TransitionUnk* this, Gfx** gfxP);

void TransitionUnk_Update(TransitionUnk* this);

void func_800B23E8(TransitionUnk* this);

s32 func_800B23F0(TransitionUnk* this);

#endif
