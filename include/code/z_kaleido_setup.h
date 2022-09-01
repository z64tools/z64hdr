#ifndef Z_KALEIDO_SETUP_H
#define Z_KALEIDO_SETUP_H

#include "global.h"

extern s16 sKaleidoSetupKscpPos0[];
extern f32 sKaleidoSetupEyeX0[];
extern f32 sKaleidoSetupEyeZ0[];

extern s16 sKaleidoSetupKscpPos1[];
extern f32 sKaleidoSetupEyeX1[];
extern f32 sKaleidoSetupEyeZ1[];

void KaleidoSetup_Update(PlayState* play);

void KaleidoSetup_Init(PlayState* play);

void KaleidoSetup_Destroy(PlayState* play);

#endif
