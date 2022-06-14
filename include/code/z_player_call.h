#ifndef __Z_PLAYER_CALL__
#define __Z_PLAYER_CALL__

#include "global.h"

extern void (*sPlayerCallInitFunc);
extern void (*sPlayerCallDestroyFunc);
extern void (*sPlayerCallUpdateFunc);
extern void (*sPlayerCallDrawFunc);
void PlayerCall_Destroy(Actor* thisx, PlayState* play);
void PlayerCall_Update(Actor* thisx, PlayState* play);
void PlayerCall_Draw(Actor* thisx, PlayState* play);
void Player_Init(Actor* thisx, PlayState* play);
void Player_Destroy(Actor* thisx, PlayState* play);
void PlayerCall_Destroy(Actor* thisx, PlayState* play);
void PlayerCall_Update(Actor* thisx, PlayState* play);
void PlayerCall_Draw(Actor* thisx, PlayState* play);

#endif // __Z_PLAYER_CALL__
