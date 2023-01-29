#ifndef Z64_FBDEMO_FADE_H
#define Z64_FBDEMO_FADE_H

#include "global.h"
#include "vt.h"

extern Gfx sRCPSetupFade[];

void TransitionFade_Start(void* thisx);

void* TransitionFade_Init(void* thisx);

void TransitionFade_Destroy(void* thisx);

void TransitionFade_Update(void* thisx, s32 updateRate);

void TransitionFade_Draw(void* thisx, Gfx** gfxP);

s32 TransitionFade_IsDone(void* thisx);

void TransitionFade_SetColor(void* thisx, u32 color);

void TransitionFade_SetType(void* thisx, s32 type);

#endif
