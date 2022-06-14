#ifndef __Z_EN_A_KEEP__
#define __Z_EN_A_KEEP__

#include "global.h"
#include "vt.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/objects/object_d_hsblock/object_d_hsblock.h"
#define FLAGS ACTOR_FLAG_4

void EnAObj_Init(Actor* thisx, PlayState* play);
void EnAObj_Destroy(Actor* thisx, PlayState* play);
void EnAObj_Update(Actor* thisx, PlayState* play);
void EnAObj_Draw(Actor* thisx, PlayState* play);
void EnAObj_WaitFinishedTalking(EnAObj* this, PlayState* play);
void EnAObj_WaitTalk(EnAObj* this, PlayState* play);
void EnAObj_BlockRot(EnAObj* this, PlayState* play);
void EnAObj_BoulderFragment(EnAObj* this, PlayState* play);
void EnAObj_Block(EnAObj* this, PlayState* play);
void EnAObj_SetupWaitTalk(EnAObj* this, s16 type);
void EnAObj_SetupBlockRot(EnAObj* this, s16 type);
void EnAObj_SetupBoulderFragment(EnAObj* this, s16 type);
void EnAObj_SetupBlock(EnAObj* this, s16 type);
void EnAObj_SetupAction(EnAObj* this, EnAObjActionFunc actionFunc);
void EnAObj_Init(Actor* thisx, PlayState* play);
void EnAObj_Destroy(Actor* thisx, PlayState* play);
void EnAObj_WaitFinishedTalking(EnAObj* this, PlayState* play);
void EnAObj_SetupWaitTalk(EnAObj* this, s16 type);
void EnAObj_WaitTalk(EnAObj* this, PlayState* play);
void EnAObj_SetupBlockRot(EnAObj* this, s16 type);
void EnAObj_BlockRot(EnAObj* this, PlayState* play);
void EnAObj_SetupBoulderFragment(EnAObj* this, s16 type);
void EnAObj_BoulderFragment(EnAObj* this, PlayState* play);
void EnAObj_SetupBlock(EnAObj* this, s16 type);
void EnAObj_Block(EnAObj* this, PlayState* play);
void EnAObj_Update(Actor* thisx, PlayState* play);
void EnAObj_Draw(Actor* thisx, PlayState* play);

#endif // __Z_EN_A_KEEP__
