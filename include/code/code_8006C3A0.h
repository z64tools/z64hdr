#ifndef Z64_CODE_8006C3A0_H
#define Z64_CODE_8006C3A0_H

#include "global.h"

void Flags_UnsetAllEnv(PlayState* play);

void Flags_SetEnv(PlayState* play, s16 flag);

void Flags_UnsetEnv(PlayState* play, s16 flag);

s32 Flags_GetEnv(PlayState* play, s16 flag);

#endif
