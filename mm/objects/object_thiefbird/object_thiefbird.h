#ifndef OBJECT_THIEFBIRD_H
#define OBJECT_THIEFBIRD_H 1

typedef enum TakkuriLimb {
    /* 0x00 */ TAKKURI_LIMB_NONE,
    /* 0x01 */ TAKKURI_LIMB_BODY,
    /* 0x02 */ TAKKURI_LIMB_LEFT_WING_BASE,
    /* 0x03 */ TAKKURI_LIMB_LEFT_WING_MIDDLE,
    /* 0x04 */ TAKKURI_LIMB_LEFT_WING_TIP,
    /* 0x05 */ TAKKURI_LIMB_RIGHT_WING_BASE,
    /* 0x06 */ TAKKURI_LIMB_RIGHT_WING_MIDDLE,
    /* 0x07 */ TAKKURI_LIMB_RIGHT_WING_TIP,
    /* 0x08 */ TAKKURI_LIMB_NECK,
    /* 0x09 */ TAKKURI_LIMB_HEAD,
    /* 0x0A */ TAKKURI_LIMB_RIGHT_EAR,
    /* 0x0B */ TAKKURI_LIMB_LEFT_EAR,
    /* 0x0C */ TAKKURI_LIMB_LOWER_BEAK,
    /* 0x0D */ TAKKURI_LIMB_EYES,
    /* 0x0E */ TAKKURI_LIMB_LEGS,
    /* 0x0F */ TAKKURI_LIMB_FEET,
    /* 0x10 */ TAKKURI_LIMB_STOLEN_ITEM,
    /* 0x11 */ TAKKURI_LIMB_MAX
} TakkuriLimb;

extern s16 sTakkuriDeathAnimFrameData[];
extern JointIndex sTakkuriDeathAnimJointIndices[];
extern AnimationHeader gTakkuriDeathAnim;
extern s16 sTakkuriFlyWithItemAnimFrameData[];
extern JointIndex sTakkuriFlyWithItemAnimJointIndices[];
extern AnimationHeader gTakkuriFlyWithItemAnim;
extern s16 sTakkuriFlyAnimFrameData[];
extern JointIndex sTakkuriFlyAnimJointIndices[];
extern AnimationHeader gTakkuriFlyAnim;
extern Vtx object_thiefbirdVtx_000620[];
extern Gfx gTakkuriBodyDL[];
extern Gfx gTakkuriLegsDL[];
extern Gfx gTakkuriFeetDL[];
extern Gfx gTakkuriStolenItemDL[];
extern Gfx gTakkuriHeadDL[];
extern Gfx gTakkuriEyesDL[];
extern Gfx gTakkuriLowerBeakDL[];
extern Gfx gTakkuriLeftEarDL[];
extern Gfx gTakkuriRightEarDL[];
extern Gfx gTakkuriNeckDL[];
extern Gfx gTakkuriRightWingTipDL[];
extern Gfx gTakkuriRightWingMiddleDL[];
extern Gfx gTakkuriRightWingBaseDL[];
extern Gfx gTakkuriLeftWingTipDL[];
extern Gfx gTakkuriLeftWingMiddleDL[];
extern Gfx gTakkuriLeftWingBaseDL[];
extern u64 gTakkuriFeathersTex[];
extern u64 gTakkuriWingTipTex[];
extern u64 gTakkuriEyeTex[];
extern u64 gTakkuriHeadAndNeckTex[];
extern u64 gTakkuriBeakAndLegsTex[];
extern u64 gTakkuriInnerBeakTex[];
extern u64 gTakkuriEarTex[];
extern Vtx object_thiefbirdVtx_003030[];
extern Gfx gTakkuriFeatherMaterialDL[];
extern Gfx gTakkuriFeatherModelDL[];
extern u64 gTakkuriFeatherTex[];
extern Vtx object_thiefbirdVtx_0031F0[];
extern Gfx gTakkuriStolenBottleDL[];
extern Vtx object_thiefbirdVtx_003518[];
extern Gfx gTakkuriStolenGreatFairysSwordDL[];
extern Vtx object_thiefbirdVtx_0040A8[];
extern Gfx gTakkuriStolenKokiriSwordDL[];
extern Vtx object_thiefbirdVtx_004578[];
extern Gfx gTakkuriStolenRazorSwordDL[];
extern Vtx object_thiefbirdVtx_004E40[];
extern Gfx gTakkuriStolenGildedSwordDL[];
extern u64 gTakkuriStolenGreatFairysSwordCenterAndHiltTex[];
extern u64 gTakkuriStolenKokiriSwordPommelTex[];
extern u64 gTakkuriStolenKokiriAndRazorSwordScabbardTex[];
extern u64 gTakkuriStolenKokiriSwordGuardTex[];
extern u64 gTakkuriStolenKokiriSwordGripTex[];
extern u64 gTakkuriStolenRazorSwordHiltAndScabbardTex[];
extern u64 gTakkuriStolenGildedSwordScabbardTex[];
extern u64 gTakkuriStolenGildedSwordGripAndScabbardTopTex[];
extern u64 gTakkuriStolenBottleAndGildedSwordGemTex[];
extern u64 gTakkuriStolenGreatFairysSwordBladeGildedSwordPommelGuardTex[];
extern StandardLimb gTakkuriBodyLimb;
extern StandardLimb gTakkuriLeftWingBaseLimb;
extern StandardLimb gTakkuriLeftWingMiddleLimb;
extern StandardLimb gTakkuriLeftWingTipLimb;
extern StandardLimb gTakkuriRightWingBaseLimb;
extern StandardLimb gTakkuriRightWingMiddleLimb;
extern StandardLimb gTakkuriRightWingTipLimb;
extern StandardLimb gTakkuriNeckLimb;
extern StandardLimb gTakkuriHeadLimb;
extern StandardLimb gTakkuriRightEarLimb;
extern StandardLimb gTakkuriLeftEarLimb;
extern StandardLimb gTakkuriLowerBeakLimb;
extern StandardLimb gTakkuriEyesLimb;
extern StandardLimb gTakkuriLegsLimb;
extern StandardLimb gTakkuriFeetLimb;
extern StandardLimb gTakkuriStolenItemLimb;
extern void* gTakkuriSkelLimbs[];
extern FlexSkeletonHeader gTakkuriSkel;
extern s16 sTakkuriAttackAnimFrameData[];
extern JointIndex sTakkuriAttackAnimJointIndices[];
extern AnimationHeader gTakkuriAttackAnim;
#endif
