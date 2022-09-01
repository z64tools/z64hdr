#ifndef Z64_EN_A_KEEP_H
#define Z64_EN_A_KEEP_H

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

extern const ActorInit En_A_Obj_InitVars;

extern ColliderCylinderInit sCylinderInit;

//! @bug gHookshotPostCol and gHookshotPostDL are referenced below for type A_OBJ_UNKNOWN_6 but they aren't available
//! since object_d_hsblock isn't a dependency of this actor.
//! This doesn't cause issues in the base game because A_OBJ_UNKNOWN_6 is never used.

extern CollisionHeader* sColHeaders[];

extern Gfx* sDLists[];

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

#endif
