#ifndef Z64_PLAY_H
#define Z64_PLAY_H

#include "global.h"
#include "vt.h"

extern void* D_8012D1F0;
extern UNK_TYPE D_8012D1F4; // unused
extern Input* D_8012D1F8;

extern TransitionUnk sTrnsnUnk;
extern s32 gTrnsnUnkState;
extern VisMono D_80161498;
extern Color_RGBA8_u32 D_801614B0;
extern FaultClient D_801614B8;
extern s16 sTransitionFillTimer;
extern u64 D_801614D0[0xA00];

void Play_SpawnScene(PlayState* this, s32 sceneId, s32 spawn);

// This macro prints the number "1" with a file and line number if R_ENABLE_PLAY_LOGS is enabled.
// For example, it can be used to trace the play state execution at a high level.
#define PLAY_LOG(line)                            \
    do {                                          \
        if (R_ENABLE_PLAY_LOGS) {                 \
            LOG_NUM("1", 1, "../z_play.c", line); \
        }                                         \
    } while (0)

void Play_ChangeViewpointBgCamIndex(PlayState* this);

void Play_SetViewpoint(PlayState* this, s16 viewpoint);

/**
 * @return true if the currently set viewpoint is the same as the one provided in the argument
 */
s32 Play_CheckViewpoint(PlayState* this, s16 viewpoint);

/**
 * If the scene is a shop, set the viewpoint that will set the bgCamIndex
 * to toggle the camera into a "browsing item selection" setting.
 */
void Play_SetShopBrowsingViewpoint(PlayState* this);

void Play_SetupTransition(PlayState* this, s32 transitionType);

void func_800BC88C(PlayState* this);

Gfx* Play_SetFog(PlayState* this, Gfx* gfx);

void Play_Destroy(GameState* thisx);

void Play_Init(GameState* thisx);

void Play_Update(PlayState* this);

void Play_DrawOverlayElements(PlayState* this);

void Play_Draw(PlayState* this);

void Play_Main(GameState* thisx);

// original name: "Game_play_demo_mode_check"
s32 Play_InCsMode(PlayState* this);

f32 func_800BFCB8(PlayState* this, MtxF* mf, Vec3f* pos);

void* Play_LoadFile(PlayState* this, RomFile* file);

void Play_InitEnvironment(PlayState* this, s16 skyboxId);

void Play_InitScene(PlayState* this, s32 spawn);

void Play_SpawnScene(PlayState* this, s32 sceneId, s32 spawn);

void Play_GetScreenPos(PlayState* this, Vec3f* src, Vec3f* dest);

s16 Play_CreateSubCamera(PlayState* this);

s16 Play_GetActiveCamId(PlayState* this);

s16 Play_ChangeCameraStatus(PlayState* this, s16 camId, s16 status);

void Play_ClearCamera(PlayState* this, s16 camId);

void Play_ClearAllSubCameras(PlayState* this);

Camera* Play_GetCamera(PlayState* this, s16 camId);

s32 Play_CameraSetAtEye(PlayState* this, s16 camId, Vec3f* at, Vec3f* eye);

s32 Play_CameraSetAtEyeUp(PlayState* this, s16 camId, Vec3f* at, Vec3f* eye, Vec3f* up);

s32 Play_CameraSetFov(PlayState* this, s16 camId, f32 fov);

s32 Play_SetCameraRoll(PlayState* this, s16 camId, s16 roll);

void Play_CopyCamera(PlayState* this, s16 destCamId, s16 srcCamId);

s32 func_800C0808(PlayState* this, s16 camId, Player* player, s16 setting);

s32 Play_CameraChangeSetting(PlayState* this, s16 camId, s16 setting);

void func_800C08AC(PlayState* this, s16 camId, s16 arg2);

s16 Play_CameraGetUID(PlayState* this, s16 camId);

s16 func_800C09D8(PlayState* this, s16 camId, s16 arg2);

void Play_SaveSceneFlags(PlayState* this);

void Play_SetRespawnData(PlayState* this, s32 respawnMode, s16 entranceIndex, s32 roomIndex, s32 playerParams,
                         Vec3f* pos, s16 yaw);

void Play_SetupRespawnPoint(PlayState* this, s32 respawnMode, s32 playerParams);

void Play_TriggerVoidOut(PlayState* this);

void Play_LoadToLastEntrance(PlayState* this);

void Play_TriggerRespawn(PlayState* this);

s32 Play_CamIsNotFixed(PlayState* this);

s32 FrameAdvance_IsEnabled(PlayState* this);

s32 func_800C0D34(PlayState* this, Actor* actor, s16* yaw);

s32 func_800C0DB4(PlayState* this, Vec3f* pos);

#endif
