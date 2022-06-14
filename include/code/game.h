#ifndef __GAME__
#define __GAME__

#include "global.h"
#include "vt.h"

extern SpeedMeter D_801664D0;
extern VisMono sMonoColors;
extern FaultClient sGameFaultClient;
extern u16 sLastButtonPressed;

size_t GameState_GetSize(GameState* gameState);
void* GameState_AllocEndAlign16(GameState* gameState, size_t size);
s32 GameState_GetArenaSize(GameState* gameState);

#endif // __GAME__
