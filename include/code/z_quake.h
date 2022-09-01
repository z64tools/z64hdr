#ifndef Z_QUAKE_H
#define Z_QUAKE_H

#include "global.h"
#include "vt.h"

extern QuakeRequest sQuakeRequest[4];
extern s16 D_80126250;
extern s16 sQuakeRequestCount;

extern s16 (*sQuakeCallbacks[])(QuakeRequest*, ShakeInfo*);

Vec3f* Quake_AddVec(Vec3f* dst, Vec3f* arg1, VecSph* arg2);

void Quake_UpdateShakeInfo(QuakeRequest* req, ShakeInfo* shake, f32 y, f32 x);

s16 Quake_Callback1(QuakeRequest* req, ShakeInfo* shake);

s16 Quake_Callback5(QuakeRequest* req, ShakeInfo* shake);

s16 Quake_Callback6(QuakeRequest* req, ShakeInfo* shake);

s16 Quake_Callback3(QuakeRequest* req, ShakeInfo* shake);

s16 Quake_Callback2(QuakeRequest* req, ShakeInfo* shake);

s16 Quake_Callback4(QuakeRequest* req, ShakeInfo* shake);

s16 Quake_GetFreeIndex(void);

QuakeRequest* Quake_AddImpl(Camera* camera, u32 callbackIdx);

void Quake_Remove(QuakeRequest* req);

QuakeRequest* Quake_GetRequest(s16 idx);

QuakeRequest* Quake_SetValue(s16 idx, s16 valueType, s16 value);

u32 Quake_SetSpeed(s16 idx, s16 value);

u32 Quake_SetCountdown(s16 idx, s16 value);

s16 Quake_GetCountdown(s16 idx);

u32 Quake_SetQuakeValues(s16 idx, s16 y, s16 x, s16 zoom, s16 rotZ);

u32 Quake_SetUnkValues(s16 idx, s16 arg1, SubQuakeRequest14 arg2);

void Quake_Init(void);

s16 Quake_Add(Camera* camera, u32 callbackIdx);

u32 Quake_RemoveFromIdx(s16 idx);

s16 Quake_Calc(Camera* camera, QuakeCamCalc* camData);

#endif
