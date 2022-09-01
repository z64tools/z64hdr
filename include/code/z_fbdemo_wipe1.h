#ifndef Z_FBDEMO_WIPE1_H
#define Z_FBDEMO_WIPE1_H

#include "global.h"

#include "assets/code/fbdemo_wipe1/z_fbdemo_wipe1.h"

extern Gfx sWipeDList[];

// unused.
extern Gfx sWipeSyncDList[];

void TransitionWipe_Start(void* thisx);

void* TransitionWipe_Init(void* thisx);

void TransitionWipe_Destroy(void* thisx);

void TransitionWipe_Update(void* thisx, s32 updateRate);

void TransitionWipe_Draw(void* thisx, Gfx** gfxP);

s32 TransitionWipe_IsDone(void* thisx);

void TransitionWipe_SetType(void* thisx, s32 type);

void TransitionWipe_SetColor(void* thisx, u32 color);

void TransitionWipe_SetEnvColor(void* thisx, u32 color);

#endif
