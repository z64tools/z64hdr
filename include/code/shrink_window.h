#ifndef SHRINK_WINDOW_H
#define SHRINK_WINDOW_H

#include "global.h"

extern s32 D_8012CED0;

extern s32 sShrinkWindowVal;
extern s32 sShrinkWindowCurrentVal;

void ShrinkWindow_SetVal(s32 value);

u32 ShrinkWindow_GetVal(void);

void ShrinkWindow_SetCurrentVal(s32 currentVal);

u32 ShrinkWindow_GetCurrentVal(void);

void ShrinkWindow_Init(void);

void ShrinkWindow_Destroy(void);

void ShrinkWindow_Update(s32 updateRate);

#endif
