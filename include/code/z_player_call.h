#ifndef __Z_PLAYER_CALL__
#define __Z_PLAYER_CALL__

#include "global.h"
#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_2 | ACTOR_FLAG_4 | ACTOR_FLAG_5 | ACTOR_FLAG_25 | ACTOR_FLAG_26)

void (*sPlayerCallInitFunc);
void (*sPlayerCallDestroyFunc);
void (*sPlayerCallUpdateFunc);
void (*sPlayerCallDrawFunc);
void PlayerCall_Destroy(Actor* thisx, PlayState* play);
void PlayerCall_Update(Actor* thisx, PlayState* play);
void PlayerCall_Draw(Actor* thisx, PlayState* play);
void Player_Init(Actor* thisx, PlayState* play);
void Player_Destroy(Actor* thisx, PlayState* play);
void PlayerCall_Destroy(Actor* thisx, PlayState* play);
void PlayerCall_Update(Actor* thisx, PlayState* play);
void PlayerCall_Draw(Actor* thisx, PlayState* play);

#endif // __Z_PLAYER_CALL__
