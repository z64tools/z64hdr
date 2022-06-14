#ifndef __Z_PLAYER_LIB__
#define __Z_PLAYER_LIB__

#include "global.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/objects/object_link_boy/object_link_boy.h"
#include "assets/objects/object_link_child/object_link_child.h"

typedef struct {
    /* 0x00 */ u8 flag;
    /* 0x02 */ u16 textId;
} TextTriggerEntry;

typedef struct {
    /* 0x00 */ Gfx* dList;
    /* 0x04 */ Vec3f pos;
} BowSlingshotStringData;

extern s16 sBootData[6][17];
extern u8 sActionModelGroups[68];
extern TextTriggerEntry sTextTriggers[4];
extern Gfx* sPlayerRightHandShieldDLs[16];
extern Gfx* D_80125D28[26];
extern Gfx* D_80125D88[26];
extern Gfx* sPlayerLeftHandSwordDLs2[4];
extern Gfx* sPlayerLeftHandSwordDLs[4];
extern Gfx* sPlayerRightHandOpenDLs[4];
extern Gfx* sPlayerRightHandClosedDLs[4];
extern Gfx* sPlayerRightHandBowSlingshotDLs[4];
extern Gfx* D_80125E78[4];
extern Gfx* D_80125E88[4];
extern Gfx* sPlayerWaistDLs[4];
extern Gfx* sPlayerRightHandBowSlingshotDLs2[4];
extern Gfx* sPlayerRightHandOcarinaDLs[4];
extern Gfx* sPlayerRightHandOotDLs[4];
extern Gfx* sPlayerRightHandHookshotDLs[4];
extern Gfx* sPlayerLeftHandHammerDLs[4];
extern Gfx* sPlayerLeftHandBottleDLs[4];
extern Gfx* sFirstPersonLeftForearmDLs[2];
extern Gfx* sFirstPersonLeftHandDLs[2];
extern Gfx* sFirstPersonRightShoulderDLs[2];
extern Gfx* sFirstPersonForearmDLs[2];
extern Gfx* sFirstPersonRightHandHoldingWeaponDLs[2];
extern Gfx** sPlayerDListGroups[22];
extern Vec3f* sCurBodyPartPos;
extern s32 sDListsLodOffset;
extern Vec3f sGetItemRefPos;
extern s32 sLeftHandType;
extern s32 sRightHandType;

s32 func_8008EF30(PlayState* play);

extern u8 sEyeMouthIndices[16][2];

#ifndef AVOID_UB

extern void* sEyeTextures[8];
extern void* sMouthTextures[4];

#else

extern void* sEyeTextures[2][8];
extern void* sMouthTextures[2][4];

#endif

extern Gfx* sBootDListGroups[3][2];

#ifndef AVOID_UB
#else
#endif
#ifndef AVOID_UB
#else
#endif

extern Vec3f sZeroVec;
extern Vec3f D_80126038[2];
extern f32 D_80126050[2];
extern f32 D_80126058[2];
extern f32 D_80126060[2];
extern f32 D_80126068[2];
extern Vec3f D_80126070;

void func_8008F87C(PlayState* play, Player* this, SkelAnime* skelAnime, Vec3f* pos, Vec3s* rot, s32 thighLimbIndex, s32 shinLimbIndex, s32 footLimbIndex);
void Player_UpdateShieldCollider(PlayState* play, Player* this, ColliderQuad* collider, Vec3f* quadSrc);

extern Vec3f D_80126080;
extern Vec3f D_8012608C;
extern Vec3f D_80126098;
extern Vec3f D_801260A4[3];

void func_800906D4(PlayState* play, Player* this, Vec3f* newTipPos);
void Player_DrawGetItemImpl(PlayState* play, Player* this, Vec3f* refPos, s32 drawIdPlusOne);
void func_80090A28(Player* this, Vec3f* vecs);
void Player_DrawHookshotReticle(PlayState* play, Player* this, f32 arg2);

extern Vec3f sPlayerFocusHeadLimbModelPos;
extern f32 sMeleeWeaponLengths[7];
extern Gfx* sBottleDLists[2];
extern Vec3f D_80126128;
extern BowSlingshotStringData sBowSlingshotStringData[3];
extern Vec3f sRightHandLimbModelShieldQuadVertices[4];
extern Vec3f D_80126184;
extern Vec3f D_80126190;
extern Vec3f sSheathLimbModelShieldQuadVertices[4];
extern Vec3f sSheathLimbModelShieldOnBackPos;
extern Vec3s sSheathLimbModelShieldOnBackZyxRot;
extern Vec3f sLeftRightFootLimbModelFootPos[2];
extern u8 sPauseModelGroupBySword[4];

s32 Player_OverrideLimbDrawPause(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* arg);
void Player_DrawPauseImpl(PlayState* play, void* gameplayKeep, void* linkObject, SkelAnime* skelAnime, Vec3f* pos, Vec3s* rot, f32 scale, s32 sword, s32 tunic, s32 shield, s32 boots, s32 width, s32 height, Vec3f* eye, Vec3f* at, f32 fovy, void* colorFrameBuffer, void* depthFrameBuffer);

#endif // __Z_PLAYER_LIB__
