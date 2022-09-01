#ifndef DB_CAMERA_H
#define DB_CAMERA_H

#include "ultra64.h"
#include "global.h"

extern PlayState* sPlay;

// TODO: cleanup these arrays and UB access
extern char* D_8012CEE0[];
extern char* D_8012CEE4;
extern char* D_8012CEE8;
extern char* D_8012CEEC;
extern char* D_8012CEF0;

extern char* D_8012CEF4;
extern char* D_8012CEF8[];
extern char* D_8012CF04;
extern char* D_8012CF08;
extern char* D_8012CF0C;
extern char* D_8012CF10;
extern char* D_8012CF14;
extern char* D_8012CF18[];
extern char* D_8012CF24[];
extern char* D_8012CF30;
extern char* D_8012CF34;
extern char* D_8012CF38;
extern char* D_8012CF3C;
extern char* D_8012CF40;

extern char* D_8012CF44;
extern char* D_8012CF48;
extern char* D_8012CF4C;
extern char* D_8012CF50[];

extern char* D_8012CF60[]; // "Mempak"
extern char* D_8012CF64;          // "Save"
extern char* D_8012CF68;          // "Load"
extern char* D_8012CF6C;          // "Clear"
extern char* D_8012CF70;

extern char* D_8012CF74;
extern char* D_8012CF78;
extern char* D_8012CF7C;
extern char* D_8012CF80;
extern char* D_8012CF84;
extern char* D_8012CF88[];
extern char* D_8012CF94;
extern char* D_8012CF98;
extern char* D_8012CF9C[];
extern char* D_8012CFA4;
extern char* D_8012CFA8;
extern char* D_8012CFAC;

extern char* D_8012CFB0;
extern char D_8012CFB4[];
extern char D_8012CFC4[];
extern char D_8012CFD0[];
extern char D_8012CFE4[];
extern char D_8012CFF8[];
extern char D_8012D00C[];
extern char D_8012D020[];
extern char D_8012D034[];
extern char D_8012D048[];
extern char D_8012D05C[];
extern char D_8012D070[];
extern char D_8012D084[];
extern char D_8012D098[];
extern char D_8012D0AC[];

extern char D_8012D0C0[];
extern char D_8012D0D4[];
extern char D_8012D0E4[];
extern char D_8012D0F8[];

#define ACTION_E 0
#define ACTION_SAVE 1
#define ACTION_LOAD 2
#define ACTION_CLEAR 3

#define MENU_INFO 0
#define MENU_CALLBACK 1
#define MENU_SUCCESS 2
#define MENU_ERROR 9

#define DEMO_CTRL_MENU(actionIdx, menuIdx) (actionIdx * 100 + menuIdx)

s32 DbCamera_SaveCallback(char* c);
s32 DbCamera_LoadCallback(char* c);
s32 DbCamera_ClearCallback(char* c);
s32 DbCamera_UpdateDemoControl(DbCamera* dbCamera, Camera* cam);

extern DbCamera* sDbCamPtr;
extern s16 D_8016110C;
extern DbCameraAnim sDbCamAnim;

Vec3f* DbCamera_AddVecSph(Vec3f* out, Vec3f* in, VecSph* sph);

Vec3f* DbCamera_CalcUpFromPitchYawRoll(Vec3f* dest, s16 pitch, s16 yaw, s16 roll);

char* DbCamera_SetTextValue(s16 value, char* str, u8 endIdx);

void DbCamera_Vec3SToF(Vec3s* in, Vec3f* out);

void DbCamera_Vec3FToS(Vec3f* in, Vec3s* out);

void DbCamera_CopyVec3f(Vec3f* in, Vec3f* out);

void DbCamera_Vec3SToF2(Vec3s* in, Vec3f* out);

void func_800B3F94(PosRot* posRot, Vec3f* vec, Vec3s* out);

void func_800B3FF4(PosRot* posRot, Vec3f* vec, Vec3f* out);

void func_800B404C(PosRot* posRot, Vec3s* vec, Vec3f* out);

s32 func_800B4088(DbCamera* dbCamera, Camera* cam);

s16 func_800B41DC(DbCamera* dbCamera, s16 idx, Camera* cameraPtr);

s32 func_800B42C0(DbCamera* dbCamera, Camera* cameraPtr);

s32 func_800B4370(DbCamera* dbCamera, s16 idx, Camera* cam);

void func_800B44E0(DbCamera* dbCamera, Camera* cam);

void DbCamera_PrintPoints(const char* name, s16 count, CutsceneCameraPoint* points);

void DbCamera_PrintF32Bytes(f32 value);

void DbCamera_PrintU16Bytes(u16 value);

void DbCamera_PrintS16Bytes(s16 value);

void DbCamera_PrintCutBytes(DbCameraCut* cut);

void DbCamera_Init(DbCamera* dbCamera, Camera* cameraPtr);

void DbgCamera_Enable(DbCamera* dbCamera, Camera* cam);

void DbCamera_Update(DbCamera* dbCamera, Camera* cam);

extern s16 sCurFileIdx;
extern s16 sLastFileIdx; // holds the file index of the slot to move
// is the size correct? todo: add ALIGN32 for sizeof in Mempak functions, replace 0xF with sizeof()
extern DbCameraCut sDbCameraCuts[16];
extern char D_80161250[0x80];
extern char sLetters[26];
extern char D_801612EA;
extern s32 sAllocSize;

s32 DbCamera_GetFirstAvailableLetter(void);

char DbCamera_InitCut(s32 idx, DbCameraSub* sub);

void DbCamera_ResetCut(s32 idx, s32 shouldFree);

s32 DbCamera_CalcMempakAllocSize(void);

s32 DbCamera_GetMempakAllocSize(void);

s32 DbCamera_LoadCallback(char* c);

s32 DbCamera_SaveCallback(char* c);

s32 DbCamera_ClearCallback(char* c);

void DbCamera_DrawSlotLetters(char* str, s16 y, s16 x, s32 colorId);

void DbCamera_PrintAllCuts(Camera* cam);

extern char D_8012D114[];
extern char D_8012D128[];
extern char D_8012D13C[];

s32 func_800B91B0(Camera* cam, DbCamera* dbCamera);

void DbCamera_Reset(Camera* cam, DbCamera* dbCam);

s32 DbCamera_UpdateDemoControl(DbCamera* dbCamera, Camera* cam);

void func_800BB03C(Camera* cam);

void func_800BB060(void);

s32 func_800BB06C(void);

#endif
