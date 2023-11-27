#ifndef OBJECT_GELDB_H
#define OBJECT_GELDB_H 1

typedef enum GerudoRedLimb {
    /* 0x00 */ GERUDO_RED_LIMB_NONE,
    /* 0x01 */ GERUDO_RED_LIMB_ROOT,
    /* 0x02 */ GERUDO_RED_LIMB_TORSO,
    /* 0x03 */ GERUDO_RED_LIMB_NECK,
    /* 0x04 */ GERUDO_RED_LIMB_PONYTAIL,
    /* 0x05 */ GERUDO_RED_LIMB_VEIL,
    /* 0x06 */ GERUDO_RED_LIMB_HEAD,
    /* 0x07 */ GERUDO_RED_LIMB_RIGHT_UPPER_ARM,
    /* 0x08 */ GERUDO_RED_LIMB_RIGHT_FOREARM,
    /* 0x09 */ GERUDO_RED_LIMB_RIGHT_WRIST,
    /* 0x0A */ GERUDO_RED_LIMB_RIGHT_HAND,
    /* 0x0B */ GERUDO_RED_LIMB_RIGHT_SWORD,
    /* 0x0C */ GERUDO_RED_LIMB_LEFT_UPPER_ARM,
    /* 0x0D */ GERUDO_RED_LIMB_LEFT_FOREARM,
    /* 0x0E */ GERUDO_RED_LIMB_LEFT_WRIST,
    /* 0x0F */ GERUDO_RED_LIMB_LEFT_HAND,
    /* 0x10 */ GERUDO_RED_LIMB_LEFT_SWORD,
    /* 0x11 */ GERUDO_RED_LIMB_LEFT_THIGH,
    /* 0x12 */ GERUDO_RED_LIMB_LEFT_LOWER_LEG,
    /* 0x13 */ GERUDO_RED_LIMB_LEFT_FOOT,
    /* 0x14 */ GERUDO_RED_LIMB_RIGHT_THIGH,
    /* 0x15 */ GERUDO_RED_LIMB_RIGHT_LOWER_LEG,
    /* 0x16 */ GERUDO_RED_LIMB_RIGHT_FOOT,
    /* 0x17 */ GERUDO_RED_LIMB_PELVIS,
    /* 0x18 */ GERUDO_RED_LIMB_MAX
} GerudoRedLimb;

extern s16 sGerudoRedBegAnimFrameData[];
extern JointIndex sGerudoRedBegAnimJointIndices[];
extern AnimationHeader gGerudoRedBegAnim;
extern s16 sGerudoRedDismissAnimFrameData[];
extern JointIndex sGerudoRedDismissAnimJointIndices[];
extern AnimationHeader gGerudoRedDismissAnim;
extern s16 sGerudoRedTurnHeadAnimFrameData[];
extern JointIndex sGerudoRedTurnHeadAnimJointIndices[];
extern AnimationHeader gGerudoRedTurnHeadAnim;
extern s16 sGerudoRedWaitAnimFrameData[];
extern JointIndex sGerudoRedWaitAnimJointIndices[];
extern AnimationHeader gGerudoRedWaitAnim;
extern s16 sGerudoRedDemandAnimFrameData[];
extern JointIndex sGerudoRedDemandAnimJointIndices[];
extern AnimationHeader gGerudoRedDemandAnim;
extern s16 sGerudoRedRunAwayAnimFrameData[];
extern JointIndex sGerudoRedRunAwayAnimJointIndices[];
extern AnimationHeader gGerudoRedRunAwayAnim;
extern s16 sGerudoRedHandOnHipWaitAnimFrameData[];
extern JointIndex sGerudoRedHandOnHipWaitAnimJointIndices[];
extern AnimationHeader gGerudoRedHandOnHipWaitAnim;
extern s16 sGerudoRedWalkAnimFrameData[];
extern JointIndex sGerudoRedWalkAnimJointIndices[];
extern AnimationHeader gGerudoRedWalkAnim;
extern u64 gGerudoRed1TLUT[];
extern u64 gGerudoRedSkinShadowTex[];
extern u64 gGerudoRedDarkRedFabricTex[];
extern u64 gGerudoRedYellowJewel1Tex[];
extern u64 gGerudoRedGerudoPatternFabricTex[];
extern u64 gGerudoRedMidriffTex[];
extern u64 gGerudoTrousersTex[];
extern u64 gGerudoMail1Tex[];
extern Vtx object_geldbVtx_002FB0[];
extern Gfx gGerudoRedTorsoDL[];
extern Gfx gGerudoRedRightUpperArmDL[];
extern Gfx gGerudoRedRightForearmDL[];
extern Gfx gGerudoRedLeftUpperArmDL[];
extern Gfx gGerudoRedLeftForearmDL[];
extern Gfx gGerudoRedPelvisDL[];
extern Gfx gGerudoRedRightThighDL[];
extern Gfx gGerudoRedRightLowerLegDL[];
extern Gfx gGerudoRedLeftThighDL[];
extern Gfx gGerudoRedLeftLowerLegDL[];
extern u64 gGerudoRed2TLUT[];
extern u64 gGerudoRedSkinGradientTex[];
extern u64 gGerudoRedEarTex[];
extern u64 gGerudoRedEyeOpenTex[];
extern u64 gGerudoRedVeilFabricTex[];
extern u64 gGerudoRedShoeUpperTex[];
extern u64 gGerudoRedShoeSoleTex[];
extern u64 gGerudoRedEyeHalfTex[];
extern u64 gGerudoRedMail2Tex[];
extern u64 gGerudoRedHairTex[];
extern u64 gGerudoRedFingersTex[];
extern u64 gGerudoRedYellowJewel2Tex[];
extern u64 gGerudoRedEyeClosedTex[];
extern Vtx object_geldbVtx_0074D8[];
extern Gfx gGerudoRedLeftFootDL[];
extern Gfx gGerudoRedRightFootDL[];
extern Gfx gGerudoRedLeftHandDL[];
extern Gfx gGerudoRedLeftSwordDL[];
extern Gfx gGerudoRedRightHandDL[];
extern Gfx gGerudoRedRightSwordDL[];
extern Gfx gGerudoRedVeilDL[];
extern Gfx gGerudoRedPonytailDL[];
extern Gfx gGerudoRedHeadDL[];
extern StandardLimb gGerudoRedRootLimb;
extern StandardLimb gGerudoRedTorsoLimb;
extern StandardLimb gGerudoRedNeckLimb;
extern StandardLimb gGerudoRedPonytailLimb;
extern StandardLimb gGerudoRedVeilLimb;
extern StandardLimb gGerudoRedHeadLimb;
extern StandardLimb gGerudoRedRightUpperArmLimb;
extern StandardLimb gGerudoRedRightForearmLimb;
extern StandardLimb gGerudoRedRightWristLimb;
extern StandardLimb gGerudoRedRightHandLimb;
extern StandardLimb gGerudoRedRightSwordLimb;
extern StandardLimb gGerudoRedLeftUpperArmLimb;
extern StandardLimb gGerudoRedLeftForearmLimb;
extern StandardLimb gGerudoRedLeftWristLimb;
extern StandardLimb gGerudoRedLeftHandLimb;
extern StandardLimb gGerudoRedLeftSwordLimb;
extern StandardLimb gGerudoRedLeftThighLimb;
extern StandardLimb gGerudoRedLeftLowerLegLimb;
extern StandardLimb gGerudoRedLeftFootLimb;
extern StandardLimb gGerudoRedRightThighLimb;
extern StandardLimb gGerudoRedRightLowerLegLimb;
extern StandardLimb gGerudoRedRightFootLimb;
extern StandardLimb gGerudoRedPelvisLimb;
extern void* gGerudoRedSkelLimbs[];
extern FlexSkeletonHeader gGerudoRedSkel;
extern s16 sGerudoRedStandAnimFrameData[];
extern JointIndex sGerudoRedStandAnimJointIndices[];
extern AnimationHeader gGerudoRedStandAnim;
extern s16 sGerudoRedNeutralAnimFrameData[];
extern JointIndex sGerudoRedNeutralAnimJointIndices[];
extern AnimationHeader gGerudoRedNeutralAnim;
#endif
