#ifndef Z_GAME_OVER_H
#define Z_GAME_OVER_H

#include "global.h"

void GameOver_Init(PlayState* play);

void GameOver_FadeInLights(PlayState* play);

// This variable cannot be moved into this file as all of z_message_PAL rodata is in the way
extern s16 gGameOverTimer;

void GameOver_Update(PlayState* play);

#endif
