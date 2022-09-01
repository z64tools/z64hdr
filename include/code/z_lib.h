#ifndef Z_LIB_H
#define Z_LIB_H

#include "global.h"

/**
 * memset: sets `len` bytes to `val` starting at address `dest`.
 *
 * Unlike normal memset,
 * - `dest` is a `u8*` already,
 * - does not return `dest`,
 * - the arguments are in a different order,
 * - `val` is a `u8` instead of the standard `s32`.
 *
 * @see There are two other memsets in this codebase, __osMemset(), MemSet()
 *
 * @param dest address to start at
 * @param len number of bytes to write
 * @param val value to write
 */
void Lib_MemSet(u8* dest, size_t len, u8 val);

f32 Math_CosS(s16 angle);

f32 Math_SinS(s16 angle);

/**
 * Changes pValue by step (scaled by the update rate) towards target, setting it equal when the target is reached.
 * Returns true when target is reached, false otherwise.
 */
s32 Math_ScaledStepToS(s16* pValue, s16 target, s16 step);

/**
 * Changes pValue by step towards target, setting it equal when the target is reached.
 * Returns true when target is reached, false otherwise.
 */
s32 Math_StepToS(s16* pValue, s16 target, s16 step);

/**
 * Changes pValue by step towards target, setting it equal when the target is reached.
 * Returns true when target is reached, false otherwise.
 */
s32 Math_StepToF(f32* pValue, f32 target, f32 step);

/**
 *  Changes pValue by step. If pvalue reaches limit angle or its opposite, sets it equal to limit angle.
 * Returns true when limit angle or its opposite is reached, false otherwise.
 */
s32 Math_StepUntilAngleS(s16* pValue, s16 limit, s16 step);

/**
 * Changes pValue by step. If pvalue reaches limit, sets it equal to limit.
 * Returns true when limit is reached, false otherwise.
 */
s32 Math_StepUntilS(s16* pValue, s16 limit, s16 step);

/**
 * Changes pValue by step towards target angle, setting it equal when the target is reached.
 * Returns true when target is reached, false otherwise.
 */
s32 Math_StepToAngleS(s16* pValue, s16 target, s16 step);

/**
 * Changes pValue by step. If pvalue reaches limit, sets it equal to limit.
 * Returns true when limit is reached, false otherwise.
 */
s32 Math_StepUntilF(f32* pValue, f32 limit, f32 step);

/**
 * Changes pValue toward target by incrStep if pValue is smaller and by decrStep if it is greater, setting it equal when
 * target is reached. Returns true when target is reached, false otherwise.
 */
s32 Math_AsymStepToF(f32* pValue, f32 target, f32 incrStep, f32 decrStep);

void func_80077D10(f32* arg0, s16* arg1, Input* input);

s16 Rand_S16Offset(s16 base, s16 range);

s16 Rand_S16OffsetStride(s16 base, s16 stride, s16 range);

void Math_Vec3f_Copy(Vec3f* dest, Vec3f* src);

void Math_Vec3s_ToVec3f(Vec3f* dest, Vec3s* src);

void Math_Vec3f_Sum(Vec3f* a, Vec3f* b, Vec3f* dest);

void Math_Vec3f_Diff(Vec3f* a, Vec3f* b, Vec3f* dest);

void Math_Vec3s_DiffToVec3f(Vec3f* dest, Vec3s* a, Vec3s* b);

void Math_Vec3f_Scale(Vec3f* vec, f32 scaleF);

f32 Math_Vec3f_DistXYZ(Vec3f* a, Vec3f* b);

f32 Math_Vec3f_DistXYZAndStoreDiff(Vec3f* a, Vec3f* b, Vec3f* dest);

f32 Math_Vec3f_DistXZ(Vec3f* a, Vec3f* b);

f32 Math_Vec3f_DiffY(Vec3f* a, Vec3f* b);

s16 Math_Vec3f_Yaw(Vec3f* a, Vec3f* b);

s16 Math_Vec3f_Pitch(Vec3f* a, Vec3f* b);

void IChain_Apply_u8(u8* ptr, InitChainEntry* ichain);
void IChain_Apply_s8(u8* ptr, InitChainEntry* ichain);
void IChain_Apply_u16(u8* ptr, InitChainEntry* ichain);
void IChain_Apply_s16(u8* ptr, InitChainEntry* ichain);
void IChain_Apply_u32(u8* ptr, InitChainEntry* ichain);
void IChain_Apply_s32(u8* ptr, InitChainEntry* ichain);
void IChain_Apply_f32(u8* ptr, InitChainEntry* ichain);
void IChain_Apply_f32div1000(u8* ptr, InitChainEntry* ichain);
void IChain_Apply_Vec3f(u8* ptr, InitChainEntry* ichain);
void IChain_Apply_Vec3fdiv1000(u8* ptr, InitChainEntry* ichain);
void IChain_Apply_Vec3s(u8* ptr, InitChainEntry* ichain);

extern void (*sInitChainHandlers[])(u8* ptr, InitChainEntry* ichain);

void Actor_ProcessInitChain(Actor* actor, InitChainEntry* ichain);

void IChain_Apply_u8(u8* ptr, InitChainEntry* ichain);

void IChain_Apply_s8(u8* ptr, InitChainEntry* ichain);

void IChain_Apply_u16(u8* ptr, InitChainEntry* ichain);

void IChain_Apply_s16(u8* ptr, InitChainEntry* ichain);

void IChain_Apply_u32(u8* ptr, InitChainEntry* ichain);

void IChain_Apply_s32(u8* ptr, InitChainEntry* ichain);

void IChain_Apply_f32(u8* ptr, InitChainEntry* ichain);

void IChain_Apply_f32div1000(u8* ptr, InitChainEntry* ichain);

void IChain_Apply_Vec3f(u8* ptr, InitChainEntry* ichain);

void IChain_Apply_Vec3fdiv1000(u8* ptr, InitChainEntry* ichain);

void IChain_Apply_Vec3s(u8* ptr, InitChainEntry* ichain);

/**
 * Changes pValue by step towards target. If this step is more than fraction of the remaining distance, step by that
 * instead, with a minimum step of minStep. Returns remaining distance to target.
 */
f32 Math_SmoothStepToF(f32* pValue, f32 target, f32 fraction, f32 step, f32 minStep);

/**
 * Changes pValue by step towards target. If step is more than fraction of the remaining distance, step by that instead.
 */
void Math_ApproachF(f32* pValue, f32 target, f32 fraction, f32 step);

/**
 * Changes pValue by step towards zero. If step is more than fraction of the remaining distance, step by that instead.
 */
void Math_ApproachZeroF(f32* pValue, f32 fraction, f32 step);

/**
 * Changes pValue by step towards target angle in degrees. If this step is more than fraction of the remaining distance,
 * step by that instead, with a minimum step of minStep. Returns the value of the step taken.
 */
f32 Math_SmoothStepToDegF(f32* pValue, f32 target, f32 fraction, f32 step, f32 minStep);

/**
 * Changes pValue by step towards target. If this step is more than 1/scale of the remaining distance, step by that
 * instead, with a minimum step of minStep. Returns remaining distance to target.
 */
s16 Math_SmoothStepToS(s16* pValue, s16 target, s16 scale, s16 step, s16 minStep);

/**
 * Changes pValue by step towards target. If step is more than 1/scale of the remaining distance, step by that instead.
 */
void Math_ApproachS(s16* pValue, s16 target, s16 scale, s16 step);

void Color_RGBA8_Copy(Color_RGBA8* dst, Color_RGBA8* src);

void func_80078884(u16 sfxId);

void func_800788CC(u16 sfxId);

void func_80078914(Vec3f* arg0, u16 sfxId);

#endif
