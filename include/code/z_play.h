#ifndef __Z_PLAY__
#define __Z_PLAY__

#include "global.h"
#include "vt.h"

extern Input* D_8012D1F8;
extern TransitionUnk sTrnsnUnk;
extern VisMono D_80161498;
extern FaultClient D_801614B8;
extern s16 sTransitionFillTimer;
extern u64 D_801614D0[0xA00];

void Play_SpawnScene(PlayState* this, s32 sceneNum, s32 spawn);
void func_800BC450(PlayState* this);
void Play_SetupTransition(PlayState* this, s32 transitionType);
void func_800BC88C(PlayState* this);
void Play_Update(PlayState* this);
void Play_DrawOverlayElements(PlayState* this);
void Play_Draw(PlayState* this);
void Play_InitEnvironment(PlayState* this, s16 skyboxId);
void Play_InitScene(PlayState* this, s32 spawn);
void Play_SpawnScene(PlayState* this, s32 sceneNum, s32 spawn);
s16 Play_CameraGetUID(PlayState* this, s16 camId);
s16 func_800C09D8(PlayState* this, s16 camId, s16 arg2);
void Play_SetRespawnData(PlayState* this, s32 respawnMode, s16 entranceIndex, s32 roomIndex, s32 playerParams, Vec3f* pos, s16 yaw);
void Play_LoadToLastEntrance(PlayState* this);

#endif // __Z_PLAY__
