#ifndef Z_FBDEMO_CIRCLE_H
#define Z_FBDEMO_CIRCLE_H

#include "global.h"

// unused
extern Gfx sCircleEmptyDList[];

#include "assets/code/fbdemo_circle/z_fbdemo_circle.h"

extern Gfx sCircleDList[];

void TransitionCircle_Start(void* thisx);

void* TransitionCircle_Init(void* thisx);

void TransitionCircle_Destroy(void* thisx);

void TransitionCircle_Update(void* thisx, s32 updateRate);

void TransitionCircle_Draw(void* thisx, Gfx** gfxP);

s32 TransitionCircle_IsDone(void* thisx);

void TransitionCircle_SetType(void* thisx, s32 type);

void TransitionCircle_SetColor(void* thisx, u32 color);

void TransitionCircle_SetUnkColor(void* thisx, u32 unkColor);

#endif
