#ifndef Z_ONEPOINTDEMO_H
#define Z_ONEPOINTDEMO_H

#include "global.h"
#include "vt.h"
#include "overlays/actors/ovl_En_Sw/z_en_sw.h"

extern s16 sDisableAttention;
extern s16 sUnused;
extern s32 sPrevFrameCs1100;

#include "z_onepointdemo_data.h"

void OnePointCutscene_AddVecSphToVec3f(Vec3f* dst, Vec3f* src, VecSph* vecSph);

s16 OnePointCutscene_Vec3fYaw(Vec3f* vec1, Vec3f* vec2);

void OnePointCutscene_Vec3sToVec3f(Vec3f* src, Vec3s* dst);

s32 OnePointCutscene_BgCheckLineTest(CollisionContext* colCtx, Vec3f* vec1, Vec3f* vec2);

f32 OnePointCutscene_RaycastFloor(CollisionContext* colCtx, Vec3f* pos);

void OnePointCutscene_SetCsCamPoints(Camera* camera, s16 actionParameters, s16 initTimer, CutsceneCameraPoint* atPoints,
                                     CutsceneCameraPoint* eyePoints);

s32 OnePointCutscene_SetInfo(PlayState* play, s16 subCamId, s16 csId, Actor* actor, s16 timer);

s16 OnePointCutscene_SetAsChild(PlayState* play, s16 newCamId, s16 parentCamId);

/**
 * Removes a cutscene camera from the list. Returns the parent cam if the removed camera is active, otherwise returns
 * CAM_ID_NONE
 */
s32 OnePointCutscene_RemoveCamera(PlayState* play, s16 subCamId);

#define vChildCamId temp2
#define vSubCamStatus temp1
#define vCurCamId temp2
#define vNextCamId temp1

/**
 * Creates a cutscene subcamera with the specified ID, duration, and targeted actor. The camera is placed into the
 * cutscene queue in front of the specified camera, then all lower priority demos in front of it are removed from the
 * queue.
 */
s16 OnePointCutscene_Init(PlayState* play, s16 csId, s16 timer, Actor* actor, s16 parentCamId);

/**
 *  Ends the cutscene in subCamId by setting its timer to 0. For attention cutscenes, it is set to 5 instead.
 */
s16 OnePointCutscene_EndCutscene(PlayState* play, s16 subCamId);

#define vTargetCat temp1
#define vParentCamId temp1
#define vLastHigherCat temp2
#define vSubCamId temp2

/**
 *  Adds an attention cutscene to the cutscene queue.
 */
s32 OnePointCutscene_Attention(PlayState* play, Actor* actor);

/**
 *  Adds an attention cutscene to the cutscene queue with the specified sound effect
 */
s32 OnePointCutscene_AttentionSetSfx(PlayState* play, Actor* actor, s32 sfxId);

// unused
void OnePointCutscene_EnableAttention(void);

// unused
void OnePointCutscene_DisableAttention(void);

s32 OnePointCutscene_CheckForCategory(PlayState* play, s32 actorCategory);

// unused, also empty.
void OnePointCutscene_Noop(PlayState* play, s32 arg1);

#endif
