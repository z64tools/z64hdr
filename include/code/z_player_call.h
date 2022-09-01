#ifndef Z_PLAYER_CALL_H
#define Z_PLAYER_CALL_H

#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_2 | ACTOR_FLAG_4 | ACTOR_FLAG_5 | ACTOR_FLAG_25 | ACTOR_FLAG_26)

extern void (*sPlayerCallInitFunc)(Actor* thisx, PlayState* play);
extern void (*sPlayerCallDestroyFunc)(Actor* thisx, PlayState* play);
extern void (*sPlayerCallUpdateFunc)(Actor* thisx, PlayState* play);
extern void (*sPlayerCallDrawFunc)(Actor* thisx, PlayState* play);

void PlayerCall_Init(Actor* thisx, PlayState* play);
void PlayerCall_Destroy(Actor* thisx, PlayState* play);
void PlayerCall_Update(Actor* thisx, PlayState* play);
void PlayerCall_Draw(Actor* thisx, PlayState* play);

void Player_Init(Actor* thisx, PlayState* play);
void Player_Destroy(Actor* thisx, PlayState* play);
void Player_Update(Actor* thisx, PlayState* play);
void Player_Draw(Actor* thisx, PlayState* play);

extern const ActorInit Player_InitVars;

void PlayerCall_InitFuncPtrs(void);

void PlayerCall_Init(Actor* thisx, PlayState* play);

void PlayerCall_Destroy(Actor* thisx, PlayState* play);

void PlayerCall_Update(Actor* thisx, PlayState* play);

void PlayerCall_Draw(Actor* thisx, PlayState* play);

#endif
