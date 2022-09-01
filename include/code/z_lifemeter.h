#ifndef Z_LIFEMETER_H
#define Z_LIFEMETER_H

#include "global.h"
#include "assets/textures/parameter_static/parameter_static.h"

extern s16 sHeartsPrimColors[3][3];

extern s16 sHeartsEnvColors[3][3];

extern s16 sHeartsPrimFactors[3][3];

extern s16 sHeartsEnvFactors[3][3];

extern s16 sHeartsDDPrimColors[3][3];

extern s16 sHeartsDDEnvColors[3][3];

extern s16 sHeartsDDPrimFactors[3][3];

extern s16 sHeartsDDEnvFactors[3][3];

// Current colors for the double defense hearts
extern s16 sBeatingHeartsDDPrim[3];
extern s16 sBeatingHeartsDDEnv[3];
extern s16 sHeartsDDPrim[2][3];
extern s16 sHeartsDDEnv[2][3];

void Health_InitMeter(PlayState* play);

void Health_UpdateMeter(PlayState* play);

// Unused
s32 func_80078E18(PlayState* play);

// Unused
s32 func_80078E34(PlayState* play);

// Unused
s32 func_80078E84(PlayState* play);

extern void* sHeartTextures[];

extern void* sHeartDDTextures[];

void Health_DrawMeter(PlayState* play);

void Health_UpdateBeatingHeart(PlayState* play);

u32 Health_IsCritical(void);

#endif
