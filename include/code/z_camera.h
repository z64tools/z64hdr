#ifndef Z64_CAMERA_H
#define Z64_CAMERA_H

#include "ultra64.h"
#include "global.h"
#include "vt.h"
#include "overlays/actors/ovl_En_Horse/z_en_horse.h"

s16 Camera_ChangeSettingFlags(Camera* camera, s16 setting, s16 flags);
s32 Camera_ChangeModeFlags(Camera* camera, s16 mode, u8 flags);
s32 Camera_QRegInit(void);
s32 Camera_UpdateWater(Camera* camera);

// Camera will reload its paramData. Usually that means setting the read-only data from what is stored in
// CameraModeValue arrays. Although sometimes some read-write data is reset as well
#define RELOAD_PARAMS(camera) (camera->animState == 0 || camera->animState == 10 || camera->animState == 20)

/**
 * Camera data is stored in both read-only data and OREG as s16, and then converted to the appropriate type during
 * runtime. If a small f32 is being stored as an s16, it is common to store that value 100 times larger than the
 * original value. This is then scaled back down during runtime with the CAM_DATA_SCALED macro.
 */
#define CAM_DATA_SCALED(x) ((x)*0.01f)

// Load the next value from camera read-only data stored in CameraModeValue
#define GET_NEXT_RO_DATA(values) ((values++)->val)
// Load the next value and scale down from camera read-only data stored in CameraModeValue
#define GET_NEXT_SCALED_RO_DATA(values) CAM_DATA_SCALED(GET_NEXT_RO_DATA(values))

#define FLG_ADJSLOPE (1 << 0)
#define FLG_OFFGROUND (1 << 7)

#define DISTORTION_HOT_ROOM (1 << 0)
#define DISTORTION_UNDERWATER_WEAK (1 << 1)
#define DISTORTION_UNDERWATER_MEDIUM (1 << 2)
#define DISTORTION_UNDERWATER_STRONG (1 << 3)
#define DISTORTION_UNDERWATER_FISHING (1 << 4)

#include "z_camera_data.h"

/*===============================================================*/

/**
 * Interpolates along a curve between 0 and 1 with a period of
 * -a <= p <= a at time `b`
 */
f32 Camera_InterpolateCurve(f32 a, f32 b);

/*
 * Performs linear interpolation between `cur` and `target`.  If `cur` is within
 * `minDiff` units, the result is rounded up to `target`
 */
f32 Camera_LERPCeilF(f32 target, f32 cur, f32 stepScale, f32 minDiff);

/*
 * Performs linear interpolation between `cur` and `target`.  If `cur` is within
 * `minDiff` units, the result is rounded down to `cur`
 */
f32 Camera_LERPFloorF(f32 target, f32 cur, f32 stepScale, f32 minDiff);

/*
 * Performs linear interpolation between `cur` and `target`.  If `cur` is within
 * `minDiff` units, the result is rounded up to `target`
 */
s16 Camera_LERPCeilS(s16 target, s16 cur, f32 stepScale, s16 minDiff);

/*
 * Performs linear interpolation between `cur` and `target`.  If `cur` is within
 * `minDiff` units, the result is rounded down to `cur`
 */
s16 Camera_LERPFloorS(s16 target, s16 cur, f32 stepScale, s16 minDiff);

/*
 * Performs linear interpolation between `cur` and `target`.  If `cur` is within
 * `minDiff` units, the result is rounded up to `target`
 */
void Camera_LERPCeilVec3f(Vec3f* target, Vec3f* cur, f32 yStepScale, f32 xzStepScale, f32 minDiff);

void func_80043ABC(Camera* camera);

void func_80043B60(Camera* camera);

Vec3f* Camera_Vec3sToVec3f(Vec3f* dest, Vec3s* src);

Vec3f* Camera_Vec3fVecSphGeoAdd(Vec3f* dest, Vec3f* a, VecSph* b);

Vec3f* Camera_Vec3fTranslateByUnitVector(Vec3f* dest, Vec3f* src, Vec3f* unitVector, f32 uvScale);

/**
 * Detects the collision poly between `from` and `to`, places collision info in `to`
 */
s32 Camera_BGCheckInfo(Camera* camera, Vec3f* from, CamColChk* to);

/**
 * Detects if there is collision between `from` and `to`
 */
s32 Camera_BGCheck(Camera* camera, Vec3f* from, Vec3f* to);

s32 func_80043F94(Camera* camera, Vec3f* from, CamColChk* to);

void func_80044340(Camera* camera, Vec3f* arg1, Vec3f* arg2);

/**
 * Checks if `from` to `to` is looking from the outside of a poly towards the front
 */
s32 Camera_CheckOOB(Camera* camera, Vec3f* from, Vec3f* to);

/**
 * Gets the floor position underneath `chkPos`, and returns the normal of the floor to `floorNorm`,
 * and bgId to `bgId`.  If no floor is found, then the normal is a flat surface pointing upwards.
 */
f32 Camera_GetFloorYNorm(Camera* camera, Vec3f* floorNorm, Vec3f* chkPos, s32* bgId);

/**
 * Gets the position of the floor from `pos`
 */
f32 Camera_GetFloorY(Camera* camera, Vec3f* pos);

/**
 * Gets the position of the floor from `pos`, and if the floor is considered not solid,
 * it checks the next floor below that up to 3 times.  Returns the normal of the floor into `norm`
 */
f32 Camera_GetFloorYLayer(Camera* camera, Vec3f* norm, Vec3f* pos, s32* bgId);

/**
 * Returns the CameraSettingType of the camera at index `bgCamIndex`
 */
s16 Camera_GetBgCamSetting(Camera* camera, s32 bgCamIndex);

/**
 * Returns the bgCamFuncData using the current bgCam index
 */
Vec3s* Camera_GetBgCamFuncData(Camera* camera);

/**
 * Gets the bgCam index for the poly `poly`, returns -1 if
 * there is no camera data for that poly.
 */
s32 Camera_GetBgCamIndex(Camera* camera, s32* bgId, CollisionPoly* poly);

/**
 * Returns the bgCamFuncData for the floor under the player.
 * Also returns the number of pieces of data there are in `bgCamCount`.
 * If there is no floor, then return NULL
 */
Vec3s* Camera_GetBgCamFuncDataUnderPlayer(Camera* camera, u16* bgCamCount);

/**
 * Gets the Camera information for the water box the player is in.
 * Returns -1 if the player is not in a water box, or does not have a swimming state.
 * Returns -2 if there is no camera index for the water box.
 * Returns the camera data index otherwise.
 */
s32 Camera_GetWaterBoxBgCamIndex(Camera* camera, f32* waterY);

/**
 * Checks if `chkPos` is inside a waterbox.
 * If there is no water box below `chkPos` or if `chkPos` is above the water surface, return BGCHECK_Y_MIN.
 * If `chkPos` is inside the waterbox, output light index to `lightIndex`.
 */
f32 Camera_GetWaterSurface(Camera* camera, Vec3f* chkPos, s32* lightIndex);

/**
 * Calculates the angle between points `from` and `to`
 */
s16 Camera_XZAngle(Vec3f* to, Vec3f* from);

s16 Camera_GetPitchAdjFromFloorHeightDiffs(Camera* camera, s16 viewYaw, s16 initAndReturnZero);

/**
 * Calculates a new Up vector from the pitch, yaw, roll
 */
Vec3f* Camera_CalcUpFromPitchYawRoll(Vec3f* viewUp, s16 pitch, s16 yaw, s16 roll);

f32 Camera_ClampLERPScale(Camera* camera, f32 maxLERPScale);

void Camera_CopyDataToRegs(Camera* camera, s16 mode);

s32 Camera_CopyPREGToModeValues(Camera* camera);

#define LETTERBOX_MASK (0xF000)
#define LETTERBOX_SIZE_MASK (0x7000)
#define LETTERBOX_INSTANT (0x8000)
#define IFACE_ALPHA_MASK (0x0F00)

void Camera_UpdateInterface(s16 flags);

Vec3f* Camera_BGCheckCorner(Vec3f* dst, Vec3f* linePointA, Vec3f* linePointB, CamColChk* pointAColChk,
                            CamColChk* pointBColChk);

/**
 * Checks collision between at and eyeNext, if `checkEye` is set, if there is no collsion between
 * eyeNext->at, then eye->at is also checked.
 * Returns:
 * 0 if no collsion is found between at->eyeNext
 * 2 if the angle between the polys is between 60 degrees and 120 degrees
 * 3 ?
 * 6 if the angle between the polys is greater than 120 degrees
 */
s32 func_80045508(Camera* camera, VecSph* diffSph, CamColChk* eyeChk, CamColChk* atChk, s16 checkEye);

/**
 * Calculates how much to adjust the camera at's y value when on a slope.
 */
f32 Camera_CalcSlopeYAdj(Vec3f* floorNorm, s16 playerYRot, s16 eyeAtYaw, f32 adjAmt);

/**
 * Calculates new at vector for the camera pointing in `eyeAtDir`
 */
s32 Camera_CalcAtDefault(Camera* camera, VecSph* eyeAtDir, f32 extraYOffset, s16 calcSlope);

s32 func_800458D4(Camera* camera, VecSph* eyeAtDir, f32 arg2, f32* arg3, s16 arg4);

s32 func_80045B08(Camera* camera, VecSph* eyeAtDir, f32 yExtra, s16 arg3);

/**
 * Adjusts the camera's at position for Camera_Parallel1
 */
s32 Camera_CalcAtForParallel(Camera* camera, VecSph* arg1, f32 yOffset, f32* arg3, s16 arg4);

/**
 * Adjusts at position for Camera_Battle1 and Camera_KeepOn1
 */
s32 Camera_CalcAtForLockOn(Camera* camera, VecSph* eyeAtDir, Vec3f* targetPos, f32 yOffset, f32 distance,
                           f32* yPosOffset, VecSph* outPlayerToTargetDir, s16 flags);

s32 Camera_CalcAtForHorse(Camera* camera, VecSph* eyeAtDir, f32 yOffset, f32* yPosOffset, s16 calcSlope);

f32 Camera_LERPClampDist(Camera* camera, f32 dist, f32 min, f32 max);

f32 Camera_ClampDist(Camera* camera, f32 dist, f32 minDist, f32 maxDist, s16 timer);

s16 Camera_CalcDefaultPitch(Camera* camera, s16 arg1, s16 arg2, s16 arg3);

s16 Camera_CalcDefaultYaw(Camera* camera, s16 cur, s16 target, f32 arg3, f32 accel);

void func_80046E20(Camera* camera, VecSph* eyeAdjustment, f32 minDist, f32 arg3, f32* arg4, SwingAnimation* anim);

s32 Camera_Noop(Camera* camera);

s32 Camera_Normal1(Camera* camera);

s32 Camera_Normal2(Camera* camera);

// riding epona
s32 Camera_Normal3(Camera* camera);

s32 Camera_Normal4(Camera* camera);

s32 Camera_Normal0(Camera* camera);

s32 Camera_Parallel1(Camera* camera);

s32 Camera_Parallel2(Camera* camera);

s32 Camera_Parallel3(Camera* camera);

s32 Camera_Parallel4(Camera* camera);

s32 Camera_Parallel0(Camera* camera);

/**
 * Generic jump, jumping off ledges
 */
s32 Camera_Jump1(Camera* camera);

// Climbing ladders/vines
s32 Camera_Jump2(Camera* camera);

// swimming
s32 Camera_Jump3(Camera* camera);

s32 Camera_Jump4(Camera* camera);

s32 Camera_Jump0(Camera* camera);

s32 Camera_Battle1(Camera* camera);

s32 Camera_Battle2(Camera* camera);

s32 Camera_Battle3(Camera* camera);

/**
 * Charging spin attack
 * Camera zooms out slowly for 50 frames, then tilts up to a specified
 * setting value.
 */
s32 Camera_Battle4(Camera* camera);

s32 Camera_Battle0(Camera* camera);

// Targeting non-enemy
s32 Camera_KeepOn1(Camera* camera);

s32 Camera_KeepOn2(Camera* camera);

/**
 * Talking to an NPC
 */
s32 Camera_KeepOn3(Camera* camera);

s32 Camera_KeepOn4(Camera* camera);

/**
 * Talking in a pre-rendered room
 */
s32 Camera_KeepOn0(Camera* camera);

s32 Camera_Fixed1(Camera* camera);

s32 Camera_Fixed2(Camera* camera);

/**
 * Camera's position is fixed, does not move, or rotate
 */
s32 Camera_Fixed3(Camera* camera);

/**
 * camera follow player, eye is in a fixed offset of the previous eye, and a value
 * specified in the scene.
 */
s32 Camera_Fixed4(Camera* camera);

s32 Camera_Fixed0(Camera* camera);

s32 Camera_Subj1(Camera* camera);

s32 Camera_Subj2(Camera* camera);

/**
 * First person view
 */
s32 Camera_Subj3(Camera* camera);

/**
 * Crawlspaces
 * Moves the camera from third person to first person when entering a crawlspace
 * While in the crawlspace, link remains fixed in a single direction
 * The camera is what swings up and down while crawling forward or backwards
 *
 * Note:
 * Subject 4 uses bgCamFuncData.data differently than other functions:
 * All Vec3s data are points along the crawlspace
 * The second point represents the entrance, and the second to last point represents the exit
 * All other points are unused
 * All instances of crawlspaces have 6 points, except for the Testroom scene which has 9 points
 */
s32 Camera_Subj4(Camera* camera);

s32 Camera_Subj0(Camera* camera);

s32 Camera_Data0(Camera* camera);

s32 Camera_Data1(Camera* camera);

s32 Camera_Data2(Camera* camera);

s32 Camera_Data3(Camera* camera);

s32 Camera_Data4(Camera* camera);

/**
 * Hanging off of a ledge
 */
s32 Camera_Unique1(Camera* camera);

s32 Camera_Unique2(Camera* camera);

s32 Camera_Unique3(Camera* camera);

/**
 * Camera's eye is specified by scene camera data, at point is generated at the intersection
 * of the eye to the player
 */
s32 Camera_Unique0(Camera* camera);

s32 Camera_Unique4(Camera* camera);

/**
 * Was setup to be used by the camera setting "FOREST_UNUSED"
 */
s32 Camera_Unique5(Camera* camera);

/**
 * This function doesn't really update much.
 * Eye/at positions are updated via Camera_SetParam
 */
s32 Camera_Unique6(Camera* camera);

/**
 * Camera is at a fixed point specified by the scene's camera data,
 * camera rotates to follow player
 */
s32 Camera_Unique7(Camera* camera);

s32 Camera_Unique8(Camera* camera);

s32 Camera_Unique9(Camera* camera);

void Camera_DebugPrintSplineArray(char* name, s16 length, CutsceneCameraPoint cameraPoints[]);

/**
 * Copies `src` to `dst`, used in Camera_Demo1
 * Name from AC map: Camera2_SetPos_Demo
 */
void Camera_Vec3fCopy(Vec3f* src, Vec3f* dst);

/**
 * Calculates new position from `at` to `pos`, outputs to `dst
 * Name from AC map: Camera2_CalcPos_Demo
 */
void Camera_RotateAroundPoint(PosRot* at, Vec3f* pos, Vec3f* dst);

/**
 * Camera follows points specified at pointers to CutsceneCameraPoints,
 * camera->data0 for camera at positions, and camera->data1 for camera eye positions
 * until all keyFrames have been exhausted.
 */
s32 Camera_Demo1(Camera* camera);

s32 Camera_Demo2(Camera* camera);

/**
 * Opening large chests.
 * The camera position will be at a fixed point, and rotate around at different intervals.
 * The direction, and initial position is dependent on when the camera was started.
 */
s32 Camera_Demo3(Camera* camera);

s32 Camera_Demo4(Camera* camera);

/**
 * Sets up a cutscene for Camera_Uniq9
 */
s32 Camera_Demo5(Camera* camera);

/**
 * Used in Forest Temple when poes are defeated, follows the flames to the torches.
 * Fixed position, rotates to follow the target
 */
s32 Camera_Demo6(Camera* camera);

s32 Camera_Demo7(Camera* camera);

s32 Camera_Demo8(Camera* camera);

/**
 * Camera follows points specified by demo9.atPoints and demo9.eyePoints, allows finer control
 * over the final eye and at points than Camera_Demo1, by allowing the interpolated at and eye points
 * to be relative to the main camera's player, the current camera's player, or the main camera's target
 */
s32 Camera_Demo9(Camera* camera);

s32 Camera_Demo0(Camera* camera);

s32 Camera_Special0(Camera* camera);

s32 Camera_Special1(Camera* camera);

s32 Camera_Special2(Camera* camera);

s32 Camera_Special3(Camera* camera);

s32 Camera_Special4(Camera* camera);

/**
 * Flying with hookshot
 */
s32 Camera_Special5(Camera* camera);

/**
 * Camera's eye is fixed at points specified at D_8011DA6C / D_8011DA9C
 * depending on the player's position
 */
s32 Camera_Special7(Camera* camera);

/**
 * Courtyard.
 * Camera's eye is fixed on the z plane, slides on the xy plane with link
 * When the camera's scene data changes the animation to the next "screen"
 * happens for 12 frames.  The camera's eyeNext is the scene's camera data's position
 */
s32 Camera_Special6(Camera* camera);

s32 Camera_Special8(Camera* camera);

s32 Camera_Special9(Camera* camera);

Camera* Camera_Create(View* view, CollisionContext* colCtx, PlayState* play);

void Camera_Destroy(Camera* camera);

void Camera_Init(Camera* camera, View* view, CollisionContext* colCtx, PlayState* play);

void func_80057FC4(Camera* camera);

void Camera_Stub80058140(Camera* camera);

void Camera_InitPlayerSettings(Camera* camera, Player* player);

s16 Camera_ChangeStatus(Camera* camera, s16 status);

void Camera_PrintSettings(Camera* camera);

s32 Camera_UpdateWater(Camera* camera);

s32 Camera_UpdateHotRoom(Camera* camera);

s32 Camera_DbgChangeMode(Camera* camera);

void Camera_UpdateDistortion(Camera* camera);

Vec3s Camera_Update(Camera* camera);

/**
 * When the camera's timer is 0, change the camera to its parent
 */
void Camera_Finish(Camera* camera);

s32 func_8005A02C(Camera* camera);

s32 Camera_ChangeModeFlags(Camera* camera, s16 mode, u8 flags);

s32 Camera_ChangeMode(Camera* camera, s16 mode);

s32 Camera_CheckValidMode(Camera* camera, s16 mode);

s16 Camera_ChangeSettingFlags(Camera* camera, s16 setting, s16 flags);

s32 Camera_ChangeSetting(Camera* camera, s16 setting);

s32 Camera_ChangeBgCamIndex(Camera* camera, s32 bgCamIndex);

Vec3s* Camera_GetInputDir(Vec3s* dst, Camera* camera);

s16 Camera_GetInputDirPitch(Camera* camera);

s16 Camera_GetInputDirYaw(Camera* camera);

Vec3s* Camera_GetCamDir(Vec3s* dst, Camera* camera);

s16 Camera_GetCamDirPitch(Camera* camera);

s16 Camera_GetCamDirYaw(Camera* camera);

s32 Camera_AddQuake(Camera* camera, s32 arg1, s16 y, s32 countdown);

s32 Camera_SetParam(Camera* camera, s32 param, void* value);

s32 Camera_UnsetParam(Camera* camera, s16 param);

s32 func_8005AC48(Camera* camera, s16 arg1);

s32 Camera_ResetAnim(Camera* camera);

s32 Camera_SetCSParams(Camera* camera, CutsceneCameraPoint* atPoints, CutsceneCameraPoint* eyePoints, Player* player,
                       s16 relativeToPlayer);

s16 func_8005ACFC(Camera* camera, s16 arg1);

s16 func_8005AD1C(Camera* camera, s16 arg1);

/**
 * A bgCamIndex of -99 will save the door params without changing the camera setting
 * A bgCamIndex of -1 uses the default door camera setting (CAM_SET_DOORC)
 * Otherwise, change the door camera setting by reading the bgCam indexed at bgCamIndex
 */
s32 Camera_ChangeDoorCam(Camera* camera, Actor* doorActor, s16 bgCamIndex, f32 arg3, s16 timer1, s16 timer2,
                         s16 timer3);

s32 Camera_Copy(Camera* dstCamera, Camera* srcCamera);

s32 Camera_GetDbgCamEnabled(void);

Vec3f* Camera_GetSkyboxOffset(Vec3f* dst, Camera* camera);

void Camera_SetCameraData(Camera* camera, s16 setDataFlags, void* data0, void* data1, s16 data2, s16 data3,
                          UNK_TYPE arg6);

s32 Camera_QRegInit(void);

s32 func_8005B198(void);

s16 func_8005B1A4(Camera* camera);

#endif
