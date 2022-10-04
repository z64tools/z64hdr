#ifndef Z64_COLLISION_CHECK_H
#define Z64_COLLISION_CHECK_H

#include "global.h"
#include "vt.h"
#include "overlays/effects/ovl_Effect_Ss_HitMark/z_eff_ss_hitmark.h"

typedef s32 (*ColChkResetFunc)(PlayState*, Collider*);
typedef void (*ColChkBloodFunc)(PlayState*, Collider*, Vec3f*);
typedef void (*ColChkApplyFunc)(PlayState*, CollisionCheckContext*, Collider*);
typedef void (*ColChkVsFunc)(PlayState*, CollisionCheckContext*, Collider*, Collider*);
typedef s32 (*ColChkLineFunc)(PlayState*, CollisionCheckContext*, Collider*, Vec3f*, Vec3f*);

typedef struct {
    /* 0 */ u8 blood;
    /* 1 */ u8 effect;
} HitInfo; // size = 0x2

typedef enum {
    /* 0 */ BLOOD_NONE,
    /* 1 */ BLOOD_BLUE,
    /* 2 */ BLOOD_GREEN,
    /* 3 */ BLOOD_WATER,
    /* 4 */ BLOOD_RED,
    /* 5 */ BLOOD_RED2
} ColChkBloodType;

typedef enum {
    /* 0 */ HIT_WHITE,
    /* 1 */ HIT_DUST,
    /* 2 */ HIT_RED,
    /* 3 */ HIT_SOLID,
    /* 4 */ HIT_WOOD,
    /* 5 */ HIT_NONE
} ColChkHitType;

typedef enum {
    /* 0 */ MASSTYPE_IMMOVABLE,
    /* 1 */ MASSTYPE_HEAVY,
    /* 2 */ MASSTYPE_NORMAL
} ColChkMassType;

/**
 * Draws a red triangle with vertices vA, vB, and vC.
 */
void Collider_DrawRedPoly(GraphicsContext* gfxCtx, Vec3f* vA, Vec3f* vB, Vec3f* vC);

/**
 * Draws the triangle with vertices vA, vB, and vC and with the specified color.
 */
void Collider_DrawPoly(GraphicsContext* gfxCtx, Vec3f* vA, Vec3f* vB, Vec3f* vC, u8 r, u8 g, u8 b);

s32 Collider_InitBase(PlayState* play, Collider* collider);

s32 Collider_DestroyBase(PlayState* play, Collider* collider);

/**
 * Uses default OC2_TYPE_1 and COLTYPE_HIT0
 */
s32 Collider_SetBaseToActor(PlayState* play, Collider* collider, ColliderInitToActor* src);

/**
 * Uses default OC2_TYPE_1
 */
s32 Collider_SetBaseType1(PlayState* play, Collider* collider, Actor* actor, ColliderInitType1* src);

s32 Collider_SetBase(PlayState* play, Collider* collider, Actor* actor, ColliderInit* src);

void Collider_ResetATBase(PlayState* play, Collider* collider);

void Collider_ResetACBase(PlayState* play, Collider* collider);

void Collider_ResetOCBase(PlayState* play, Collider* collider);

s32 Collider_InitTouch(PlayState* play, ColliderTouch* touch);

s32 Collider_DestroyTouch(PlayState* play, ColliderTouch* touch);

s32 Collider_SetTouch(PlayState* play, ColliderTouch* dest, ColliderTouch* src);

void Collider_ResetATInfo_Unk(PlayState* play, ColliderInfo* info);

s32 Collider_InitBump(PlayState* play, ColliderBump* bump);

s32 Collider_DestroyBump(PlayState* play, ColliderBump* bump);

s32 Collider_SetBump(PlayState* play, ColliderBump* bump, ColliderBumpInit* init);

s32 Collider_InitInfo(PlayState* play, ColliderInfo* info);

s32 Collider_DestroyInfo(PlayState* play, ColliderInfo* info);

s32 Collider_SetInfo(PlayState* play, ColliderInfo* info, ColliderInfoInit* infoInit);

void Collider_ResetATInfo(PlayState* play, ColliderInfo* info);

void Collider_ResetACInfo(PlayState* play, ColliderInfo* info);

void Collider_ResetOCInfo(PlayState* play, ColliderInfo* info);

s32 Collider_InitJntSphElementDim(PlayState* play, ColliderJntSphElementDim* dim);

s32 Collider_DestroyJntSphElementDim(PlayState* play, ColliderJntSphElementDim* element);

s32 Collider_SetJntSphElementDim(PlayState* play, ColliderJntSphElementDim* dest, ColliderJntSphElementDimInit* src);

s32 Collider_InitJntSphElement(PlayState* play, ColliderJntSphElement* element);

s32 Collider_DestroyJntSphElement(PlayState* play, ColliderJntSphElement* element);

s32 Collider_SetJntSphElement(PlayState* play, ColliderJntSphElement* dest, ColliderJntSphElementInit* src);

s32 Collider_ResetJntSphElementAT(PlayState* play, ColliderJntSphElement* collider);

s32 Collider_ResetJntSphElementAC(PlayState* play, ColliderJntSphElement* collider);

s32 Collider_ResetJntSphElementOC(PlayState* play, ColliderJntSphElement* collider);

/**
 * Initializes a ColliderJntSph to default values
 */
s32 Collider_InitJntSph(PlayState* play, ColliderJntSph* collider);

/**
 * Destroys a dynamically allocated ColliderJntSph
 */
s32 Collider_FreeJntSph(PlayState* play, ColliderJntSph* collider);

/**
 * Destroys a preallocated ColliderJntSph
 */
s32 Collider_DestroyJntSph(PlayState* play, ColliderJntSph* collider);

/**
 * Sets up the ColliderJntSph using the values in src, sets it to the actor specified in src, and dynamically allocates
 * the element array. Uses default OC2_TYPE_1 and COLTYPE_HIT0. Unused.
 */
s32 Collider_SetJntSphToActor(PlayState* play, ColliderJntSph* dest, ColliderJntSphInitToActor* src);

/**
 * Sets up the ColliderJntSph using the values in src and dynamically allocates the element array. Uses default
 * OC2_TYPE_1. Only used by En_Nwc, an unused and unfinished actor.
 */
s32 Collider_SetJntSphAllocType1(PlayState* play, ColliderJntSph* dest, Actor* actor, ColliderJntSphInitType1* src);

/**
 * Sets up the ColliderJntSph using the values in src and dynamically allocates the element array.
 * Unused.
 */
s32 Collider_SetJntSphAlloc(PlayState* play, ColliderJntSph* dest, Actor* actor, ColliderJntSphInit* src);

/**
 * Sets up the ColliderJntSph using the values in src, placing the element array in elements.
 */
s32 Collider_SetJntSph(PlayState* play, ColliderJntSph* dest, Actor* actor, ColliderJntSphInit* src,
                       ColliderJntSphElement* elements);

/**
 * Resets the collider's AT collision flags.
 */
s32 Collider_ResetJntSphAT(PlayState* play, Collider* collider);

/**
 * Resets the collider's AC collision flags.
 */
s32 Collider_ResetJntSphAC(PlayState* play, Collider* collider);

/**
 * Resets the collider's OC collision flags.
 */
s32 Collider_ResetJntSphOC(PlayState* play, Collider* collider);

s32 Collider_InitCylinderDim(PlayState* play, Cylinder16* dim);

s32 Collider_DestroyCylinderDim(PlayState* play, Cylinder16* dim);

s32 Collider_SetCylinderDim(PlayState* play, Cylinder16* dest, Cylinder16* src);

/**
 * Initializes a ColliderCylinder to default values
 */
s32 Collider_InitCylinder(PlayState* play, ColliderCylinder* collider);

/**
 * Destroys a ColliderCylinder
 */
s32 Collider_DestroyCylinder(PlayState* play, ColliderCylinder* collider);

/**
 * Sets up the ColliderCylinder using the values in src and sets it to the actor specified in src. Uses default
 * OC2_TYPE_1 and COLTYPE_0. Used only by DekuJr, who sets it to himself anyways.
 */
s32 Collider_SetCylinderToActor(PlayState* play, ColliderCylinder* collider, ColliderCylinderInitToActor* src);

/**
 * Sets up the ColliderCylinder using the values in src. Uses default OC2_TYPE_1
 */
s32 Collider_SetCylinderType1(PlayState* play, ColliderCylinder* collider, Actor* actor,
                              ColliderCylinderInitType1* src);

/**
 * Sets up the ColliderCylinder using the values in src.
 */
s32 Collider_SetCylinder(PlayState* play, ColliderCylinder* collider, Actor* actor, ColliderCylinderInit* src);

/**
 * Resets the collider's AT collision flags.
 */
s32 Collider_ResetCylinderAT(PlayState* play, Collider* collider);

/**
 * Resets the collider's AC collision flags.
 */
s32 Collider_ResetCylinderAC(PlayState* play, Collider* collider);

/**
 * Resets the collider's OC collision flags.
 */
s32 Collider_ResetCylinderOC(PlayState* play, Collider* collider);

s32 Collider_InitTrisElementDim(PlayState* play, TriNorm* dim);

s32 Collider_DestroyTrisElementDim(PlayState* play, TriNorm* dim);

s32 Collider_SetTrisElementDim(PlayState* play, TriNorm* dest, ColliderTrisElementDimInit* src);

s32 Collider_InitTrisElement(PlayState* play, ColliderTrisElement* collider);

s32 Collider_DestroyTrisElement(PlayState* play, ColliderTrisElement* collider);

s32 Collider_SetTrisElement(PlayState* play, ColliderTrisElement* dest, ColliderTrisElementInit* src);

s32 Collider_ResetTrisElementAT(PlayState* play, ColliderTrisElement* element);

s32 Collider_ResetTrisElementAC(PlayState* play, ColliderTrisElement* element);

s32 Collider_ResetTrisElementOC(PlayState* play, ColliderTrisElement* element);

/**
 * Initializes a ColliderTris to default values
 */
s32 Collider_InitTris(PlayState* play, ColliderTris* tris);

/**
 * Destroys a dynamically allocated ColliderTris
 * Unused
 */
s32 Collider_FreeTris(PlayState* play, ColliderTris* tris);

/**
 * Destroys a preallocated ColliderTris
 */
s32 Collider_DestroyTris(PlayState* play, ColliderTris* tris);

/**
 * Sets up the ColliderTris using the values in src and dynamically allocates the element array. Uses default OC2_TYPE_1
 * Unused.
 */
s32 Collider_SetTrisAllocType1(PlayState* play, ColliderTris* dest, Actor* actor, ColliderTrisInitType1* src);

/**
 * Sets up the ColliderTris using the values in src and dynamically allocates the element array.
 * Unused
 */
s32 Collider_SetTrisAlloc(PlayState* play, ColliderTris* dest, Actor* actor, ColliderTrisInit* src);

/**
 * Sets up the ColliderTris using the values in src, placing the element array in elements.
 */
s32 Collider_SetTris(PlayState* play, ColliderTris* dest, Actor* actor, ColliderTrisInit* src,
                     ColliderTrisElement* elements);

/**
 * Resets the collider's AT collision flags.
 */
s32 Collider_ResetTrisAT(PlayState* play, Collider* collider);

/**
 * Resets the collider's AC collision flags.
 */
s32 Collider_ResetTrisAC(PlayState* play, Collider* collider);

/**
 * Resets the collider's OC collision flags.
 */
s32 Collider_ResetTrisOC(PlayState* play, Collider* collider);

s32 Collider_InitQuadDim(PlayState* play, ColliderQuadDim* dim);

s32 Collider_DestroyQuadDim(PlayState* play, ColliderQuadDim* dim);

s32 Collider_ResetQuadACDist(PlayState* play, ColliderQuadDim* dim);

void Collider_SetQuadMidpoints(ColliderQuadDim* dim);

s32 Collider_SetQuadDim(PlayState* play, ColliderQuadDim* dest, ColliderQuadDimInit* src);

/**
 * Initializes a ColliderQuad to default values.
 */
s32 Collider_InitQuad(PlayState* play, ColliderQuad* collider);

/**
 * Destroys a ColliderQuad.
 */
s32 Collider_DestroyQuad(PlayState* play, ColliderQuad* collider);

/**
 * Sets up the ColliderQuad using the values in src. Uses the default OC2_TYPE_1
 */
s32 Collider_SetQuadType1(PlayState* play, ColliderQuad* collider, Actor* actor, ColliderQuadInitType1* src);

/**
 * Sets up the ColliderQuad using the values in src.
 */
s32 Collider_SetQuad(PlayState* play, ColliderQuad* collider, Actor* actor, ColliderQuadInit* src);

/**
 * Resets the collider's AT collision flags.
 */
s32 Collider_ResetQuadAT(PlayState* play, Collider* collider);

/**
 * Resets the collider's AC collision flags.
 */
s32 Collider_ResetQuadAC(PlayState* play, Collider* collider);

/**
 * Resets the collider's OC collision flags.
 */
s32 Collider_ResetQuadOC(PlayState* play, Collider* collider);

/**
 * For quad colliders with AT_NEAREST, resets the previous AC collider it hit if the current element is closer,
 * otherwise returns false. Used on player AT colliders to prevent multiple collisions from registering.
 */
s32 Collider_QuadSetNearestAC(PlayState* play, ColliderQuad* quad, Vec3f* hitPos);

/**
 * Initializes an OcLine to default values
 * OcLines are entirely unused.
 */
s32 Collider_InitLine(PlayState* play, OcLine* line);

/**
 * Destroys an OcLine
 * OcLines are entirely unused.
 */
s32 Collider_DestroyLine(PlayState* play, OcLine* line);

/**
 * Sets up an OcLine with endpoints a and b.
 * OcLines are entirely unused.
 */
s32 Collider_SetLinePoints(PlayState* play, OcLine* ocLine, Vec3f* a, Vec3f* b);

/**
 * Sets up an OcLine using the values in src.
 * OcLines are entirely unused.
 */
s32 Collider_SetLine(PlayState* play, OcLine* dest, OcLine* src);

/**
 * Resets the OcLine's collision flags.
 * OcLines are entirely unused.
 */
s32 Collider_ResetLineOC(PlayState* play, OcLine* line);

/**
 * Initializes CollisionCheckContext. Clears all collider arrays, disables SAC, and sets flags for drawing colliders.
 */
void CollisionCheck_InitContext(PlayState* play, CollisionCheckContext* colChkCtx);

void CollisionCheck_DestroyContext(PlayState* play, CollisionCheckContext* colChkCtx);

/**
 * Clears all collider lists in CollisionCheckContext when not in SAC mode.
 */
void CollisionCheck_ClearContext(PlayState* play, CollisionCheckContext* colChkCtx);

/**
 * Enables SAC, an alternate collision check mode that allows direct management of collider lists. Unused.
 */
void CollisionCheck_EnableSAC(PlayState* play, CollisionCheckContext* colChkCtx);

/**
 * Disables SAC, an alternate collision check mode that allows direct management of collider lists. Unused.
 */
void CollisionCheck_DisableSAC(PlayState* play, CollisionCheckContext* colChkCtx);

/**
 * Draws a collider of any shape.
 * Math3D_DrawSphere and Math3D_DrawCylinder are noops, so JntSph and Cylinder are not drawn.
 */
void Collider_Draw(PlayState* play, Collider* collider);

/**
 * Draws collision if AREG(15) and other AREGs are set. AREG(21) draws AT colliders, AREG(22) draws AC colliders,
 * AREG(23) draws OC colliders, AREG(24) draws dynapolys, and AREG(25) draws bg polys
 */
void CollisionCheck_DrawCollision(PlayState* play, CollisionCheckContext* colChkCtx);

extern ColChkResetFunc sATResetFuncs[];

/**
 * Sets collider as an AT (attack) for the current frame, which will be checked against ACs (attack colliders)
 * The last argument takes a Collider, so pass collider.base rather than the raw collider.
 */
s32 CollisionCheck_SetAT(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

/**
 * Unused. Sets collider as an AT (attack) for the current frame, which will be checked against ACs (attack colliders).
 * If CollisionCheck_SAC is enabled, the collider will be inserted into the list at the specified index, otherwise it
 * will be inserted into the next slot
 */
s32 CollisionCheck_SetAT_SAC(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider, s32 index);

extern ColChkResetFunc sACResetFuncs[];

/**
 * Sets collider as an AC (attack collider) for the current frame, allowing it to detect ATs (attacks)
 * The last argument takes a Collider, so pass collider.base rather than the raw collider.
 */
s32 CollisionCheck_SetAC(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

/**
 * Unused. Sets collider as an AC (attack collider) for the current frame, allowing it to detect ATs (attacks).
 * If CollisionCheck_SAC is enabled, the collider will be inserted into the list at the specified index, otherwise it
 * will be inserted into the next slot
 */
s32 CollisionCheck_SetAC_SAC(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider, s32 index);

extern ColChkResetFunc sOCResetFuncs[];

/**
 * Sets collider as an OC (object collider) for the current frame, allowing it to detect other OCs
 * The last argument takes a Collider, so pass collider.base rather than the raw collider.
 */
s32 CollisionCheck_SetOC(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

/**
 * Unused. Sets collider as an OC (object collider) for the current frame, allowing it to detect other OCs
 * If CollisionCheck_SAC is enabled, the collider will be inserted into the list at the specified index, otherwise it
 * will be inserted into the next slot
 */
s32 CollisionCheck_SetOC_SAC(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider, s32 index);

/**
 * Sets a line as an OC collider for this frame.
 * OC lines are entirely unused, and do not even have collision check functions.
 */
s32 CollisionCheck_SetOCLine(PlayState* play, CollisionCheckContext* colChkCtx, OcLine* collider);

/**
 * Skips AT elements that are off.
 */
s32 CollisionCheck_SkipTouch(ColliderInfo* info);

/**
 * Skips AC elements that are off.
 */
s32 CollisionCheck_SkipBump(ColliderInfo* info);

/**
 * If the AT element has no dmgFlags in common with the AC element, no collision happens.
 */
s32 CollisionCheck_NoSharedFlags(ColliderInfo* atInfo, ColliderInfo* acInfo);

/**
 * Spawns no blood drops.
 * Used by collider types HIT1, HIT3, HIT5, METAL, NONE, WOOD, HARD, and TREE
 */
void CollisionCheck_NoBlood(PlayState* play, Collider* collider, Vec3f* v);

/**
 * Spawns blue blood drops.
 * Used by collider types HIT0 and HIT8.
 */
void CollisionCheck_BlueBlood(PlayState* play, Collider* collider, Vec3f* v);

/**
 * Spawns green blood drops.
 * Used by collider types HIT2 and HIT6. No actor has type HIT2.
 */
void CollisionCheck_GreenBlood(PlayState* play, Collider* collider, Vec3f* v);

/**
 * Spawns a burst of water.
 * Used by collider type HIT4, which no actor has.
 */
void CollisionCheck_WaterBurst(PlayState* play, Collider* collider, Vec3f* pos);

/**
 * Spawns red blood drops.
 * Used by collider type HIT7, which no actor has.
 */
void CollisionCheck_RedBlood(PlayState* play, Collider* collider, Vec3f* v);

/**
 * Spawns red blood drops.
 * Unused.
 */
void CollisionCheck_RedBloodUnused(PlayState* play, Collider* collider, Vec3f* v);

/**
 * Plays sound effects and displays hitmarks for solid-type AC colliders (METAL, WOOD, HARD, and TREE)
 */
void CollisionCheck_HitSolid(PlayState* play, ColliderInfo* info, Collider* collider, Vec3f* hitPos);

/**
 * Plays a hit sound effect for AT colliders attached to Player based on the AC element's elemType.
 */
s32 CollisionCheck_SwordHitAudio(Collider* at, ColliderInfo* acInfo);

extern ColChkBloodFunc sBloodFuncs[];
extern HitInfo sHitInfo[];

/**
 * Handles hitmarks, blood, and sound effects for each AC collision, determined by the AC collider's colType
 */
void CollisionCheck_HitEffects(PlayState* play, Collider* at, ColliderInfo* atInfo, Collider* ac, ColliderInfo* acInfo,
                               Vec3f* hitPos);

/**
 * Sets the flags to indicate an attack bounced off an AC_HARD collider.
 */
void CollisionCheck_SetBounce(Collider* at, Collider* ac);

/**
 * Performs the AC collision between the AT element and AC element that collided.
 */
s32 CollisionCheck_SetATvsAC(PlayState* play, Collider* at, ColliderInfo* atInfo, Vec3f* atPos, Collider* ac,
                             ColliderInfo* acInfo, Vec3f* acPos, Vec3f* hitPos);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_JntSphVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT,
                                      Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_JntSphVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT,
                                   Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_CylVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT,
                                   Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_JntSphVsTris(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT,
                                    Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_TrisVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT,
                                    Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_JntSphVsQuad(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT,
                                    Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_QuadVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT,
                                    Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_CylVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_CylVsTris(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_TrisVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_CylVsQuad(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);

extern s8 sBssDummy0;
extern s8 sBssDummy1;

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_QuadVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);

extern s8 sBssDummy3;
extern s8 sBssDummy4;
extern s8 sBssDummy5;
extern s8 sBssDummy6;

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_TrisVsTris(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);

extern s8 sBssDummy7;
extern s8 sBssDummy8;
extern s8 sBssDummy9;
extern s8 sBssDummy10;

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_TrisVsQuad(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_QuadVsTris(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);

/**
 * AC overlap check. Calculates the center of each collider element and the point of contact.
 */
void CollisionCheck_AC_QuadVsQuad(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);

/**
 * Sets a ColliderJntSph's hit effects
 */
void CollisionCheck_SetJntSphHitFX(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

/**
 * Sets a ColliderCylinder's hit effects
 */
void CollisionCheck_SetCylHitFX(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

/**
 * Sets a ColliderTris's hit effects
 */
void CollisionCheck_SetTrisHitFX(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

/**
 * Sets a ColliderQuad's hit effects
 */
void CollisionCheck_SetQuadHitFX(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

extern ColChkApplyFunc sColChkApplyFuncs[];

/**
 * Handles hit effects for each AC collider that had an AC collision. Spawns hitmarks and plays sound effects.
 */
void CollisionCheck_SetHitEffects(PlayState* play, CollisionCheckContext* colChkCtx);

extern ColChkVsFunc sACVsFuncs[COLSHAPE_MAX][COLSHAPE_MAX];

/**
 * Iterates through all AC colliders, performing AC collisions with the AT collider.
 */
void CollisionCheck_AC(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT);

/**
 * Iterates through all AT colliders, testing them for AC collisions with each AC collider, setting the info regarding
 * the collision for each AC and AT collider that collided. Then spawns hitmarks and plays sound effects for each
 * successful collision. To collide, an AT collider must share a type (AC_TYPE_PLAYER, AC_TYPE_ENEMY, or AC_TYPE_OTHER)
 * with the AC collider and the toucher and bumper elements that overlapped must share a dmgFlag.
 */
void CollisionCheck_AT(PlayState* play, CollisionCheckContext* colChkCtx);

/**
 * Get mass type. Immobile colliders cannot be pushed, while heavy colliders can only be pushed by heavy and immobile
 * colliders.
 */
s32 CollisionCheck_GetMassType(u8 mass);

/**
 * Sets OC collision flags for OC collider overlaps. If both colliders are attached to actors and can push,
 * also performs an elastic collision where both colliders are moved apart in proportion to their masses.
 */
void CollisionCheck_SetOCvsOC(Collider* left, ColliderInfo* leftInfo, Vec3f* leftPos, Collider* right,
                              ColliderInfo* rightInfo, Vec3f* rightPos, f32 overlap);

/**
 * OC overlap check for two JntSphs
 */
void CollisionCheck_OC_JntSphVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* l, Collider* r);

/**
 * OC overlap check for a JntSph and Cylinder
 */
void CollisionCheck_OC_JntSphVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* l, Collider* r);

/**
 * OC overlap check for a Cylinder and JntSph
 */
void CollisionCheck_OC_CylVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* l, Collider* r);

/**
 * OC overlap check for two Cylinders
 */
void CollisionCheck_OC_CylVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* l, Collider* r);

/**
 *  Skip any OC colliders that are off
 */
s32 CollisionCheck_SkipOC(Collider* collider);

/**
 * Checks for OC compatibility. There are three conditions:
 * First, each collider must have an OC flag corresponding to the other's OC type.
 * Second, OC2_UNK1 and OC2_UNK2 can't collide with each other (has something to do with horses?)
 * Third, the colliders can't collide if they belong to the same actor
 */
s32 CollisionCheck_Incompatible(Collider* left, Collider* right);

extern ColChkVsFunc sOCVsFuncs[COLSHAPE_MAX][COLSHAPE_MAX];

/**
 * Iterates through all OC colliders and collides them with all subsequent OC colliders on the list. During an OC
 * collision, colliders with overlapping elements move away from each other so that their elements no longer overlap.
 * The relative amount each collider is pushed is determined by the collider's mass. Only JntSph and Cylinder colliders
 * can collide, and each collider must have the OC flag corresponding to the other's OC type. Additionally, OC2_UNK1
 * cannot collide with OC2_UNK2, nor can two colliders that share an actor.
 */
void CollisionCheck_OC(PlayState* play, CollisionCheckContext* colChkCtx);

/**
 * Initializes CollisionCheckInfo to default values
 */
void CollisionCheck_InitInfo(CollisionCheckInfo* info);

/**
 * Resets ColisionCheckInfo fields other than DamageTable, mass, and dim.
 */
void CollisionCheck_ResetDamage(CollisionCheckInfo* info);

/**
 * Sets up CollisionCheckInfo using the values in init. Does not set a damage table or the unused unk_14.
 * Unused, as all actors that don't set a damage table set their CollisionCheckInfo manually
 */
void CollisionCheck_SetInfoNoDamageTable(CollisionCheckInfo* info, CollisionCheckInfoInit* init);

/**
 * Sets up CollisionCheckInfo using the values in init. Does not set the unused unk_14
 */
void CollisionCheck_SetInfo(CollisionCheckInfo* info, DamageTable* damageTable, CollisionCheckInfoInit* init);

/**
 * Sets up CollisionCheckInfo using the values in init. Sets the unused unk_14
 */
void CollisionCheck_SetInfo2(CollisionCheckInfo* info, DamageTable* damageTable, CollisionCheckInfoInit2* init);

/**
 * Sets up CollisionCheckInfo using the values in Init and a preset damage table. Sets the unused unk_14.
 * Unused, as all actors that use a preset damage table set their CollisionCheckInfo manually.
 */
void CollisionCheck_SetInfoGetDamageTable(CollisionCheckInfo* info, s32 index, CollisionCheckInfoInit2* init);

/**
 * Apply AC damage effect
 */
void CollisionCheck_ApplyDamage(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider,
                                ColliderInfo* info);

/**
 * Apply ColliderJntSph AC damage effect
 */
void CollisionCheck_ApplyDamageJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

/**
 * Apply ColliderCylinder AC damage effect
 */
void CollisionCheck_ApplyDamageCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

/**
 * Apply ColliderTris AC damage effect
 */
void CollisionCheck_ApplyDamageTris(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

/**
 *  Apply ColliderQuad AC damage effect
 */
void CollisionCheck_ApplyDamageQuad(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);

extern ColChkApplyFunc sApplyDamageFuncs[COLSHAPE_MAX];

/**
 * For all AC colliders, sets any damage effects from collisions with AT colliders to their corresponding actor's
 * CollisionCheckInfo.
 */
void CollisionCheck_Damage(PlayState* play, CollisionCheckContext* colChkCtx);

/**
 * Checks if the line ab intersects any of the ColliderJntSph's elements
 */
s32 CollisionCheck_LineOC_JntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider, Vec3f* a,
                                 Vec3f* b);

/**
 * Checks if the line segment ab intersects the ColliderCylinder
 */
s32 CollisionCheck_LineOC_Cyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider, Vec3f* a,
                              Vec3f* b);

extern ColChkLineFunc sOCLineCheckFuncs[COLSHAPE_MAX];

/**
 * Checks if the line segment ab intersects any OC colliders, excluding those attached to actors
 * on the exclusion list. Returns true if there are any intersections and false otherwise.
 */
s32 CollisionCheck_LineOC(PlayState* play, CollisionCheckContext* colChkCtx, Vec3f* a, Vec3f* b, Actor** exclusions,
                          s32 numExclusions);

/**
 * Checks if the line segment ab intersects any OC colliders. Returns true if there are any intersections and false
 * otherwise. Unused.
 */
s32 CollisionCheck_LineOCCheckAll(PlayState* play, CollisionCheckContext* colChkCtx, Vec3f* a, Vec3f* b);

/**
 * Checks if the line segment ab intersects any OC colliders, excluding those attached to actors on the exclusion list.
 * Returns true if there are any intersections and false otherwise.
 */
s32 CollisionCheck_LineOCCheck(PlayState* play, CollisionCheckContext* colChkCtx, Vec3f* a, Vec3f* b,
                               Actor** exclusions, s32 numExclusions);

/**
 * Moves the ColliderCylinder's position to the actor's position
 */
void Collider_UpdateCylinder(Actor* actor, ColliderCylinder* collider);

/**
 * Sets the ColliderCylinder's position
 */
void Collider_SetCylinderPosition(ColliderCylinder* collider, Vec3s* pos);

/**
 * Sets the ColliderQuad's vertices
 */
void Collider_SetQuadVertices(ColliderQuad* collider, Vec3f* a, Vec3f* b, Vec3f* c, Vec3f* d);

/**
 * Sets the specified ColliderTrisElement's vertices
 */
void Collider_SetTrisVertices(ColliderTris* collider, s32 index, Vec3f* a, Vec3f* b, Vec3f* c);

/**
 * Sets the specified ColliderTrisElement's dim using the values in src
 */
void Collider_SetTrisDim(PlayState* play, ColliderTris* collider, s32 index, ColliderTrisElementDimInit* src);

// Due to an unknown reason, bss ordering changed between the 2 static Vec3f variables in the function below.
// In order to reproduce this behavior, we need a specific number of bss variables in the file before that point.
// For this, we introduce a certain amount of dummy variables throughout the file, which we fit inside padding added
// by the compiler between structs like TriNorm and/or Vec3f, so they don't take space in bss.
extern s8 sBssDummy11;
extern s8 sBssDummy12;
extern s8 sBssDummy13;
extern s8 sBssDummy14;

/**
 * Updates the world spheres for all of the collider's JntSph elements attached to the specified limb
 */
void Collider_UpdateSpheres(s32 limb, ColliderJntSph* collider);

/**
 * Spawns red blood droplets.
 * No actor has a collision type that spawns red blood.
 */
void CollisionCheck_SpawnRedBlood(PlayState* play, Vec3f* v);

/**
 * Spawns water droplets.
 * No actor has a collision type that spawns water droplets.
 */
void CollisionCheck_SpawnWaterDroplets(PlayState* play, Vec3f* v);

/**
 * Spawns streaks of light from hits against solid objects
 */
void CollisionCheck_SpawnShieldParticles(PlayState* play, Vec3f* v);

/**
 * Spawns streaks of light and makes a metallic sound
 */
void CollisionCheck_SpawnShieldParticlesMetal(PlayState* play, Vec3f* v);

/**
 * Spawns streaks of light and makes a metallic sound at the specified position
 */
void CollisionCheck_SpawnShieldParticlesMetalSound(PlayState* play, Vec3f* v, Vec3f* pos);

/**
 * Spawns streaks of light and makes a metallic sound
 */
void CollisionCheck_SpawnShieldParticlesMetal2(PlayState* play, Vec3f* v);

/**
 * Spawns streaks of light and makes a wooden sound
 */
void CollisionCheck_SpawnShieldParticlesWood(PlayState* play, Vec3f* v, Vec3f* actorPos);

/**
 * Determines if the line segment connecting itemPos and itemProjPos intersects the side of a cylinder with the given
 * radius, height, and offset at actorPos. Returns 3 if either endpoint is inside the cylinder, otherwise returns the
 * number of points of intersection with the side of the cylinder. The locations of those points are put in out1 and
 * out2, with out1 being closer to itemPos. Line segments that pass through both bases of the cylinder are not detected.
 */
s32 CollisionCheck_CylSideVsLineSeg(f32 radius, f32 height, f32 offset, Vec3f* actorPos, Vec3f* itemPos,
                                    Vec3f* itemProjPos, Vec3f* out1, Vec3f* out2);

/**
 * Gets damage from a sword strike using generic values, and returns 0 if the attack is
 * not sword-type. Used by bosses to require that a sword attack deal the killing blow.
 */
u8 CollisionCheck_GetSwordDamage(s32 dmgFlags);

#endif
