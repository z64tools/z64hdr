#ifndef Z_PLAYER_LIB_H
#define Z_PLAYER_LIB_H

#include "global.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/objects/object_link_boy/object_link_boy.h"
#include "assets/objects/object_link_child/object_link_child.h"

typedef struct {
    /* 0x00 */ u8 flag;
    /* 0x02 */ u16 textId;
} TextTriggerEntry; // size = 0x04

typedef struct {
    /* 0x00 */ Gfx* dList;
    /* 0x04 */ Vec3f pos;
} BowSlingshotStringData; // size = 0x10

extern FlexSkeletonHeader* gPlayerSkelHeaders[];

extern s16 sBootData[PLAYER_BOOTS_MAX][17];

// Used to map action params to model groups
extern u8 sActionModelGroups[PLAYER_AP_MAX];

extern TextTriggerEntry sTextTriggers[];

// Used to map model groups to model types for [animation, left hand, right hand, sheath, waist]
extern u8 gPlayerModelTypes[PLAYER_MODELGROUP_MAX][PLAYER_MODELGROUPENTRY_MAX];

extern Gfx* sPlayerRightHandShieldDLs[PLAYER_SHIELD_MAX * 4];

extern Gfx* D_80125D28[(PLAYER_SHIELD_MAX + 2) * 4];

extern Gfx* D_80125D88[(PLAYER_SHIELD_MAX + 2) * 4];

extern Gfx* gPlayerLeftHandBgsDLs[];

extern Gfx* gPlayerLeftHandOpenDLs[];

extern Gfx* gPlayerLeftHandClosedDLs[];

// Identical to `sPlayerLeftHandSwordDLs` and unused
extern Gfx* sPlayerLeftHandSwordDLs2[];

extern Gfx* sPlayerLeftHandSwordDLs[];

extern Gfx* sPlayerRightHandOpenDLs[];

extern Gfx* sPlayerRightHandClosedDLs[];

extern Gfx* sPlayerRightHandBowSlingshotDLs[];

extern Gfx* D_80125E78[];

extern Gfx* D_80125E88[];

extern Gfx* sPlayerWaistDLs[];

// Identical to `sPlayerRightHandBowSlingshotDLs` and unused
extern Gfx* sPlayerRightHandBowSlingshotDLs2[];

extern Gfx* sPlayerRightHandOcarinaDLs[];

extern Gfx* sPlayerRightHandOotDLs[];

extern Gfx* sPlayerRightHandHookshotDLs[];

extern Gfx* sPlayerLeftHandHammerDLs[];

extern Gfx* gPlayerLeftHandBoomerangDLs[];

extern Gfx* sPlayerLeftHandBottleDLs[];

extern Gfx* sFirstPersonLeftForearmDLs[];

extern Gfx* sFirstPersonLeftHandDLs[];

extern Gfx* sFirstPersonRightShoulderDLs[];

extern Gfx* sFirstPersonForearmDLs[];

extern Gfx* sFirstPersonRightHandHoldingWeaponDLs[];

// Indexed by model types (left hand, right hand, sheath or waist)
extern Gfx** sPlayerDListGroups[PLAYER_MODELTYPE_MAX];

extern Gfx gCullBackDList[];

extern Gfx gCullFrontDList[];

extern Vec3f* sCurBodyPartPos;
extern s32 sDListsLodOffset;
extern Vec3f sGetItemRefPos;
extern s32 sLeftHandType;
extern s32 sRightHandType;

void Player_SetBootData(PlayState* play, Player* this);

s32 Player_InBlockingCsMode(PlayState* play, Player* this);

s32 Player_InCsMode(PlayState* play);

s32 func_8008E9C4(Player* this);

s32 Player_IsChildWithHylianShield(Player* this);

s32 Player_ActionToModelGroup(Player* this, s32 actionParam);

void Player_SetModelsForHoldingShield(Player* this);

void Player_SetModels(Player* this, s32 modelGroup);

void Player_SetModelGroup(Player* this, s32 modelGroup);

void func_8008EC70(Player* this);

void Player_SetEquipmentData(PlayState* play, Player* this);

void Player_UpdateBottleHeld(PlayState* play, Player* this, s32 item, s32 actionParam);

void func_8008EDF0(Player* this);

void func_8008EE08(Player* this);

void func_8008EEAC(PlayState* play, Actor* actor);

s32 func_8008EF30(PlayState* play);

s32 func_8008EF44(PlayState* play, s32 ammo);

s32 Player_IsBurningStickInRange(PlayState* play, Vec3f* pos, f32 xzRange, f32 yRange);

s32 Player_GetStrength(void);

u8 Player_GetMask(PlayState* play);

Player* Player_UnsetMask(PlayState* play);

s32 Player_HasMirrorShieldEquipped(PlayState* play);

s32 Player_HasMirrorShieldSetToDraw(PlayState* play);

s32 Player_ActionToMagicSpell(Player* this, s32 actionParam);

s32 Player_HoldsHookshot(Player* this);

s32 func_8008F128(Player* this);

s32 Player_ActionToMeleeWeapon(s32 actionParam);

s32 Player_GetMeleeWeaponHeld(Player* this);

s32 Player_HoldsTwoHandedWeapon(Player* this);

s32 Player_HoldsBrokenKnife(Player* this);

s32 Player_ActionToBottle(Player* this, s32 actionParam);

s32 Player_GetBottleHeld(Player* this);

s32 Player_ActionToExplosive(Player* this, s32 actionParam);

s32 Player_GetExplosiveHeld(Player* this);

s32 func_8008F2BC(Player* this, s32 actionParam);

s32 func_8008F2F8(PlayState* play);

extern u8 sEyeMouthIndices[][2];

/**
 * Link's eye and mouth textures are placed at the exact same place in adult and child Link's respective object files.
 * This allows the array to only contain the symbols for one file and have it apply to both. This is a problem for
 * shiftability, and changes will need to be made in the code to account for this in a modding scenario. The symbols
 * from adult Link's object are used here.
 */
#ifndef AVOID_UB
extern void* sEyeTextures[];

extern void* sMouthTextures[];
#else
// Defining `AVOID_UB` will use a 2D array instead and properly use the child link pointers to allow for shifting.
extern void* sEyeTextures[][8];

extern void* sMouthTextures[][4];
#endif

extern Color_RGB8 sTunicColors[PLAYER_TUNIC_MAX];

extern Color_RGB8 sGauntletColors[];

extern Gfx* sBootDListGroups[][2];

void Player_DrawImpl(PlayState* play, void** skeleton, Vec3s* jointTable, s32 dListCount, s32 lod, s32 tunic, s32 boots,
                     s32 face, OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* data);

extern Vec3f sZeroVec;

extern Vec3f D_80126038[];

extern f32 D_80126050[];
extern f32 D_80126058[];
extern f32 D_80126060[];
extern f32 D_80126068[];

extern Vec3f D_80126070;

void func_8008F87C(PlayState* play, Player* this, SkelAnime* skelAnime, Vec3f* pos, Vec3s* rot, s32 thighLimbIndex,
                   s32 shinLimbIndex, s32 footLimbIndex);

s32 Player_OverrideLimbDrawGameplayCommon(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot,
                                          void* thisx);

s32 Player_OverrideLimbDrawGameplayDefault(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot,
                                           void* thisx);

s32 Player_OverrideLimbDrawGameplayFirstPerson(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot,
                                               void* thisx);

s32 Player_OverrideLimbDrawGameplay_80090440(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot,
                                             void* thisx);

u8 func_80090480(PlayState* play, ColliderQuad* collider, WeaponInfo* weaponInfo, Vec3f* newTip, Vec3f* newBase);

void Player_UpdateShieldCollider(PlayState* play, Player* this, ColliderQuad* collider, Vec3f* quadSrc);

extern Vec3f D_80126080;
extern Vec3f D_8012608C;
extern Vec3f D_80126098;

extern Vec3f D_801260A4[3];

void func_800906D4(PlayState* play, Player* this, Vec3f* newTipPos);

void Player_DrawGetItemImpl(PlayState* play, Player* this, Vec3f* refPos, s32 drawIdPlusOne);

void Player_DrawGetItem(PlayState* play, Player* this);

void func_80090A28(Player* this, Vec3f* vecs);

void Player_DrawHookshotReticle(PlayState* play, Player* this, f32 arg2);

// Coordinates of the player focus position, in the head limb's own model space.
extern Vec3f sPlayerFocusHeadLimbModelPos;

extern f32 sMeleeWeaponLengths[];

extern Gfx* sBottleDLists[];

extern Color_RGB8 sBottleColors[];

extern Vec3f D_80126128;

extern BowSlingshotStringData sBowSlingshotStringData[];

// Coordinates of the shield quad collider vertices, in the right hand limb's own model space.
extern Vec3f sRightHandLimbModelShieldQuadVertices[];

extern Vec3f D_80126184;
extern Vec3f D_80126190;

// Coordinates of the shield quad collider vertices, in the sheath limb's own model space.
extern Vec3f sSheathLimbModelShieldQuadVertices[];

// Position and rotation of the shield on Link's back, in the sheath limb's own model space.
extern Vec3f sSheathLimbModelShieldOnBackPos;
extern Vec3s sSheathLimbModelShieldOnBackZyxRot;

// Position of Link's foot, in the foot limb's own model space.
extern Vec3f sLeftRightFootLimbModelFootPos[];

void Player_PostLimbDrawGameplay(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx);

u32 func_80091738(PlayState* play, u8* segment, SkelAnime* skelAnime);

extern u8 sPauseModelGroupBySword[];

s32 Player_OverrideLimbDrawPause(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* arg);

void Player_DrawPauseImpl(PlayState* play, void* gameplayKeep, void* linkObject, SkelAnime* skelAnime, Vec3f* pos,
                          Vec3s* rot, f32 scale, s32 sword, s32 tunic, s32 shield, s32 boots, s32 width, s32 height,
                          Vec3f* eye, Vec3f* at, f32 fovy, void* colorFrameBuffer, void* depthFrameBuffer);

void Player_DrawPause(PlayState* play, u8* segment, SkelAnime* skelAnime, Vec3f* pos, Vec3s* rot, f32 scale, s32 sword,
                      s32 tunic, s32 shield, s32 boots);

#endif
