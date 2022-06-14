#ifndef __Z_CAMERA__
#define __Z_CAMERA__

#include "ultra64.h"
#include "global.h"
#include "vt.h"
#include "overlays/actors/ovl_En_Horse/z_en_horse.h"

s16 Camera_ChangeSettingFlags(Camera* camera, s16 setting, s16 flags);
s32 Camera_ChangeModeFlags(Camera* camera, s16 mode, u8 flags);
s32 Camera_QRegInit(void);
s32 Camera_UpdateWater(Camera* camera);

#define RELOAD_PARAMS(camera) (camera->animState == 0 || camera->animState == 10 || camera->animState == 20)
#define CAM_DATA_SCALED(x) ((x)*0.01f)
#define GET_NEXT_RO_DATA(values) ((values++)->val)
#define GET_NEXT_SCALED_RO_DATA(values) CAM_DATA_SCALED(GET_NEXT_RO_DATA(values))
#define BGCAM_POS(v) ((v)[0])
#define BGCAM_ROT(v) ((v)[1])
#define BGCAM_FOV(v) ((v)[2].x)
#define BGCAM_JFIFID(v) ((v)[2].y)
#define FLG_ADJSLOPE (1 << 0)
#define FLG_OFFGROUND (1 << 7)
#define DISTORTION_HOT_ROOM (1 << 0)
#define DISTORTION_UNDERWATER_WEAK (1 << 1)
#define DISTORTION_UNDERWATER_MEDIUM (1 << 2)
#define DISTORTION_UNDERWATER_STRONG (1 << 3)
#define DISTORTION_UNDERWATER_FISHING (1 << 4)

f32 Camera_InterpolateCurve(f32 a, f32 b);
f32 Camera_LERPCeilF(f32 target, f32 cur, f32 stepScale, f32 minDiff);
f32 Camera_LERPFloorF(f32 target, f32 cur, f32 stepScale, f32 minDiff);
s16 Camera_LERPCeilS(s16 target, s16 cur, f32 stepScale, s16 minDiff);
s16 Camera_LERPFloorS(s16 target, s16 cur, f32 stepScale, s16 minDiff);
void Camera_LERPCeilVec3f(Vec3f* target, Vec3f* cur, f32 yStepScale, f32 xzStepScale, f32 minDiff);
void func_80043ABC(Camera* camera);
void func_80043B60(Camera* camera);
Vec3f* Camera_Vec3sToVec3f(Vec3f* dest, Vec3s* src);
Vec3f* Camera_Vec3fVecSphGeoAdd(Vec3f* dest, Vec3f* a, VecSph* b);
Vec3f* Camera_Vec3fTranslateByUnitVector(Vec3f* dest, Vec3f* src, Vec3f* unitVector, f32 uvScale);
s32 Camera_BGCheckInfo(Camera* camera, Vec3f* from, CamColChk* to);
s32 Camera_BGCheck(Camera* camera, Vec3f* from, Vec3f* to);
s32 func_80043F94(Camera* camera, Vec3f* from, CamColChk* to);
void func_80044340(Camera* camera, Vec3f* arg1, Vec3f* arg2);
s32 Camera_CheckOOB(Camera* camera, Vec3f* from, Vec3f* to);
f32 Camera_GetFloorYNorm(Camera* camera, Vec3f* floorNorm, Vec3f* chkPos, s32* bgId);
f32 Camera_GetFloorY(Camera* camera, Vec3f* pos);
f32 Camera_GetFloorYLayer(Camera* camera, Vec3f* norm, Vec3f* pos, s32* bgId);
s16 Camera_GetCamDataSetting(Camera* camera, s32 camDataIdx);
Vec3s* Camera_GetCamBGData(Camera* camera);
s32 Camera_GetDataIdxForPoly(Camera* camera, s32* bgId, CollisionPoly* poly);
Vec3s* Camera_GetCamBgDataUnderPlayer(Camera* camera, u16* dataCnt);
s32 Camera_GetWaterBoxDataIdx(Camera* camera, f32* waterY);
f32 Camera_GetWaterSurface(Camera* camera, Vec3f* chkPos, s32* envProp);
s16 Camera_XZAngle(Vec3f* to, Vec3f* from);
s16 func_80044ADC(Camera* camera, s16 yaw, s16 arg2);
f32 Camera_ClampLERPScale(Camera* camera, f32 maxLERPScale);
void Camera_CopyDataToRegs(Camera* camera, s16 mode);
s32 Camera_CopyPREGToModeValues(Camera* camera);

#define SHRINKWIN_MASK (0xF000)
#define SHRINKWINVAL_MASK (0x7000)
#define SHRINKWIN_CURVAL (0x8000)
#define IFACE_ALPHA_MASK (0x0F00)

void Camera_UpdateInterface(s16 flags);
Vec3f* Camera_BGCheckCorner(Vec3f* dst, Vec3f* linePointA, Vec3f* linePointB, CamColChk* pointAColChk, CamColChk* pointBColChk);
s32 func_80045508(Camera* camera, VecSph* diffSph, CamColChk* eyeChk, CamColChk* atChk, s16 checkEye);
f32 Camera_CalcSlopeYAdj(Vec3f* floorNorm, s16 playerYRot, s16 eyeAtYaw, f32 adjAmt);
s32 Camera_CalcAtDefault(Camera* camera, VecSph* eyeAtDir, f32 extraYOffset, s16 calcSlope);
s32 func_800458D4(Camera* camera, VecSph* eyeAtDir, f32 arg2, f32* arg3, s16 arg4);
s32 func_80045B08(Camera* camera, VecSph* eyeAtDir, f32 yExtra, s16 arg3);
s32 Camera_CalcAtForParallel(Camera* camera, VecSph* arg1, f32 yOffset, f32* arg3, s16 arg4);
s32 Camera_CalcAtForLockOn(Camera* camera, VecSph* eyeAtDir, Vec3f* targetPos, f32 yOffset, f32 distance, f32* yPosOffset, VecSph* outPlayerToTargetDir, s16 flags);
s32 Camera_CalcAtForHorse(Camera* camera, VecSph* eyeAtDir, f32 yOffset, f32* yPosOffset, s16 calcSlope);
f32 Camera_LERPClampDist(Camera* camera, f32 dist, f32 min, f32 max);
f32 Camera_ClampDist(Camera* camera, f32 dist, f32 minDist, f32 maxDist, s16 timer);
s16 Camera_CalcDefaultPitch(Camera* camera, s16 arg1, s16 arg2, s16 arg3);
s16 Camera_CalcDefaultYaw(Camera* camera, s16 cur, s16 target, f32 arg3, f32 accel);
void func_80046E20(Camera* camera, VecSph* eyeAdjustment, f32 minDist, f32 arg3, f32* arg4, SwingAnimation* anim);
s32 Camera_Noop(Camera* camera);
s32 Camera_Normal1(Camera* camera);
s32 Camera_Normal2(Camera* camera);
s32 Camera_Normal3(Camera* camera);
s32 Camera_Normal4(Camera* camera);
s32 Camera_Normal0(Camera* camera);
s32 Camera_Parallel1(Camera* camera);
s32 Camera_Parallel2(Camera* camera);
s32 Camera_Parallel3(Camera* camera);
s32 Camera_Parallel4(Camera* camera);
s32 Camera_Parallel0(Camera* camera);
s32 Camera_Jump1(Camera* camera);
s32 Camera_Jump2(Camera* camera);
s32 Camera_Jump3(Camera* camera);
s32 Camera_Jump4(Camera* camera);
s32 Camera_Jump0(Camera* camera);
s32 Camera_Battle1(Camera* camera);
s32 Camera_Battle2(Camera* camera);
s32 Camera_Battle3(Camera* camera);
s32 Camera_Battle4(Camera* camera);
s32 Camera_Battle0(Camera* camera);
s32 Camera_KeepOn1(Camera* camera);
s32 Camera_KeepOn2(Camera* camera);
s32 Camera_KeepOn3(Camera* camera);
s32 Camera_KeepOn4(Camera* camera);
s32 Camera_KeepOn0(Camera* camera);
s32 Camera_Fixed1(Camera* camera);
s32 Camera_Fixed2(Camera* camera);
s32 Camera_Fixed3(Camera* camera);
s32 Camera_Fixed4(Camera* camera);
s32 Camera_Fixed0(Camera* camera);
s32 Camera_Subj1(Camera* camera);
s32 Camera_Subj2(Camera* camera);
s32 Camera_Subj3(Camera* camera);
s32 Camera_Subj4(Camera* camera);
s32 Camera_Subj0(Camera* camera);
s32 Camera_Data0(Camera* camera);
s32 Camera_Data1(Camera* camera);
s32 Camera_Data2(Camera* camera);
s32 Camera_Data3(Camera* camera);
s32 Camera_Data4(Camera* camera);
s32 Camera_Unique1(Camera* camera);
s32 Camera_Unique2(Camera* camera);
s32 Camera_Unique3(Camera* camera);
s32 Camera_Unique0(Camera* camera);
s32 Camera_Unique4(Camera* camera);
s32 Camera_Unique5(Camera* camera);
s32 Camera_Unique6(Camera* camera);
s32 Camera_Unique7(Camera* camera);
s32 Camera_Unique8(Camera* camera);
s32 Camera_Unique9(Camera* camera);
void Camera_DebugPrintSplineArray(char* name, s16 length, CutsceneCameraPoint cameraPoints[]);
void Camera_Vec3fCopy(Vec3f* src, Vec3f* dst);
void Camera_RotateAroundPoint(PosRot* at, Vec3f* pos, Vec3f* dst);
s32 Camera_Demo1(Camera* camera);
s32 Camera_Demo2(Camera* camera);
s32 Camera_Demo3(Camera* camera);
s32 Camera_Demo4(Camera* camera);
s32 Camera_Demo5(Camera* camera);
s32 Camera_Demo6(Camera* camera);
s32 Camera_Demo7(Camera* camera);
s32 Camera_Demo8(Camera* camera);
s32 Camera_Demo9(Camera* camera);
s32 Camera_Demo0(Camera* camera);
s32 Camera_Special0(Camera* camera);
s32 Camera_Special1(Camera* camera);
s32 Camera_Special2(Camera* camera);
s32 Camera_Special3(Camera* camera);
s32 Camera_Special4(Camera* camera);
s32 Camera_Special5(Camera* camera);
s32 Camera_Special7(Camera* camera);
s32 Camera_Special6(Camera* camera);
s32 Camera_Special8(Camera* camera);
s32 Camera_Special9(Camera* camera);
Camera* Camera_Create(View* view, CollisionContext* colCtx, PlayState* play);
void Camera_Destroy(Camera* camera);
void func_80057FC4(Camera* camera);
void Camera_Stub80058140(Camera* camera);
void Camera_PrintSettings(Camera* camera);
s32 Camera_UpdateWater(Camera* camera);
s32 Camera_UpdateHotRoom(Camera* camera);
s32 Camera_DbgChangeMode(Camera* camera);
void Camera_UpdateDistortion(Camera* camera);
s32 func_8005A02C(Camera* camera);
s32 Camera_ChangeModeFlags(Camera* camera, s16 mode, u8 flags);
s16 Camera_ChangeSettingFlags(Camera* camera, s16 setting, s16 flags);
s16 Camera_GetInputDirPitch(Camera* camera);
s32 Camera_UnsetParam(Camera* camera, s16 param);
s32 Camera_GetDbgCamEnabled();
s32 Camera_QRegInit(void);

#endif // __Z_CAMERA__
