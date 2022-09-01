#ifndef PADUTILS_H
#define PADUTILS_H

#include "global.h"

void PadUtils_Init(Input* input);

void func_800FCB70(void);

void PadUtils_ResetPressRel(Input* input);

u32 PadUtils_CheckCurExact(Input* input, u16 value);

u32 PadUtils_CheckCur(Input* input, u16 key);

u32 PadUtils_CheckPressed(Input* input, u16 key);

u32 PadUtils_CheckReleased(Input* input, u16 key);

u16 PadUtils_GetCurButton(Input* input);

u16 PadUtils_GetPressButton(Input* input);

s8 PadUtils_GetCurX(Input* input);

s8 PadUtils_GetCurY(Input* input);

void PadUtils_SetRelXY(Input* input, s32 x, s32 y);

s8 PadUtils_GetRelXImpl(Input* input);

s8 PadUtils_GetRelYImpl(Input* input);

s8 PadUtils_GetRelX(Input* input);

s8 PadUtils_GetRelY(Input* input);

void PadUtils_UpdateRelXY(Input* input);

#endif
