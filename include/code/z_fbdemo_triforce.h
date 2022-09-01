#ifndef Z_FBDEMO_TRIFORCE_H
#define Z_FBDEMO_TRIFORCE_H

#include "global.h"

#include "assets/code/fbdemo_triforce/z_fbdemo_triforce.h"

void TransitionTriforce_Start(void* thisx);

void* TransitionTriforce_Init(void* thisx);

void TransitionTriforce_Destroy(void* thisx);

void TransitionTriforce_Update(void* thisx, s32 updateRate);

void TransitionTriforce_SetColor(void* thisx, u32 color);

void TransitionTriforce_SetType(void* thisx, s32 type);

// unused
void TransitionTriforce_SetState(void* thisx, s32 state);

void TransitionTriforce_Draw(void* thisx, Gfx** gfxP);

s32 TransitionTriforce_IsDone(void* thisx);

#endif
