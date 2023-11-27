#ifndef OBJECT_AND_H
#define OBJECT_AND_H 1

typedef enum ObjectAndLimb {
    /* 0x00 */ OBJECT_AND_LIMB_NONE,
    /* 0x01 */ OBJECT_AND_LIMB_ROOT,
    /* 0x02 */ OBJECT_AND_LIMB_TORSO,
    /* 0x03 */ OBJECT_AND_LIMB_SYMBOL,
    /* 0x04 */ OBJECT_AND_LIMB_LEFT_UPPER_ARM,
    /* 0x05 */ OBJECT_AND_LIMB_LEFT_FOREARM,
    /* 0x06 */ OBJECT_AND_LIMB_LEFT_HAND,
    /* 0x07 */ OBJECT_AND_LIMB_RIGHT_UPPER_ARM,
    /* 0x08 */ OBJECT_AND_LIMB_RIGHT_FOREARM,
    /* 0x09 */ OBJECT_AND_LIMB_RIGHT_HAND,
    /* 0x0A */ OBJECT_AND_LIMB_BOUQUET,
    /* 0x0B */ OBJECT_AND_LIMB_LEFT_LEAVES,
    /* 0x0C */ OBJECT_AND_LIMB_LEFT_LEAVES_TIP,
    /* 0x0D */ OBJECT_AND_LIMB_RIGHT_LEAVES,
    /* 0x0E */ OBJECT_AND_LIMB_RIGHT_LEAVES_TIP,
    /* 0x0F */ OBJECT_AND_LIMB_CENTER_LEAVES,
    /* 0x10 */ OBJECT_AND_LIMB_CENTER_LEAVES_TIP,
    /* 0x11 */ OBJECT_AND_LIMB_VEIL_BASE,
    /* 0x12 */ OBJECT_AND_LIMB_HEAD,
    /* 0x13 */ OBJECT_AND_LIMB_UPPER_VEIL,
    /* 0x14 */ OBJECT_AND_LIMB_LOWER_VEIL,
    /* 0x15 */ OBJECT_AND_LIMB_PELVIS,
    /* 0x16 */ OBJECT_AND_LIMB_THIGHS,
    /* 0x17 */ OBJECT_AND_LIMB_SHINS,
    /* 0x18 */ OBJECT_AND_LIMB_CALVES,
    /* 0x19 */ OBJECT_AND_LIMB_TRAIN,
    /* 0x1A */ OBJECT_AND_LIMB_MAX
} ObjectAndLimb;

extern s16 sAndStaticAnimFrameData[];
extern JointIndex sAndStaticAnimJointIndices[];
extern AnimationHeader gAndStaticAnim;
extern Vtx object_andVtx_0000E0[];
extern Gfx gAndTrainDL[];
extern Gfx gAndCalvesDL[];
extern Gfx gAndShinsDL[];
extern Gfx gAndThighsDL[];
extern Gfx gAndPelvisDL[];
extern Gfx gAndLowerVeilDL[];
extern Gfx gAndUpperVeilDL[];
extern Gfx gAndVeilBaseDL[];
extern Gfx gAndHeadDL[];
extern Gfx gAndBouquetDL[];
extern Gfx gAndCenterLeavesTipDL[];
extern Gfx gAndCenterLeavesDL[];
extern Gfx gAndRightLeavesTipDL[];
extern Gfx gAndRightLeavesDL[];
extern Gfx gAndLeftLeavesTipDL[];
extern Gfx gAndLeftLeavesDL[];
extern Gfx gAndRightHandDL[];
extern Gfx gAndRightForearmDL[];
extern Gfx gAndRightUpperArmDL[];
extern Gfx gAndLeftHandDL[];
extern Gfx gAndLeftForearmDL[];
extern Gfx gAndLeftUpperArmDL[];
extern Gfx gAndSymbolDL[];
extern Gfx gAndTorsoDL[];
extern u64 gAndSkinShadowTex[];
extern u64 gAndHairTex[];
extern u64 gAndEarTex[];
extern u64 gAndFingersTex[];
extern u64 gAndDressGradientTex[];
extern u64 gAndDressSymbolTex[];
extern u64 gAndPearlTex[];
extern u64 gAndLeavesTex[];
extern u64 gAndFlowerTex[];
extern u64 gAndEyeOpenTex[];
extern u64 gAndEyeClosingTex[];
extern u64 gAndEyeClosedTex[];
extern u64 gAndEyeOpeningTex[];
extern u64 gAndMouthNeutralTex[];
extern u64 gAndMouthSmileTex[];
extern u64 gAndDressSpotsTex[];
extern u64 gAndDressCircleTex[];
extern StandardLimb gAndRootLimb;
extern StandardLimb gAndTorsoLimb;
extern StandardLimb gAndSymbolLimb;
extern StandardLimb gAndLeftUpperArmLimb;
extern StandardLimb gAndLeftForearmLimb;
extern StandardLimb gAndLeftHandLimb;
extern StandardLimb gAndRightUpperArmLimb;
extern StandardLimb gAndRightForearmLimb;
extern StandardLimb gAndRightHandLimb;
extern StandardLimb gAndBouquetLimb;
extern StandardLimb gAndLeftLeavesLimb;
extern StandardLimb gAndLeftLeavesTipLimb;
extern StandardLimb gAndRightLeavesLimb;
extern StandardLimb gAndRightLeavesTipLimb;
extern StandardLimb gAndCenterLeavesLimb;
extern StandardLimb gAndCenterLeavesTipLimb;
extern StandardLimb gAndVeilBaseLimb;
extern StandardLimb gAndHeadLimb;
extern StandardLimb gAndUpperVeilLimb;
extern StandardLimb gAndLowerVeilLimb;
extern StandardLimb gAndPelvisLimb;
extern StandardLimb gAndThighsLimb;
extern StandardLimb gAndShinsLimb;
extern StandardLimb gAndCalvesLimb;
extern StandardLimb gAndTrainLimb;
extern void* gAndSkelLimbs[];
extern FlexSkeletonHeader gAndSkel;
extern s16 sAndWalkAnimFrameData[];
extern JointIndex sAndWalkAnimJointIndices[];
extern AnimationHeader gAndWalkAnim;
extern s16 sAndRaiseHandAnimFrameData[];
extern JointIndex sAndRaiseHandAnimJointIndices[];
extern AnimationHeader gAndRaiseHandAnim;
extern s16 sAndRaisedHandLoopAnimFrameData[];
extern JointIndex sAndRaisedHandLoopAnimJointIndices[];
extern AnimationHeader gAndRaisedHandLoopAnim;
extern s16 sAndRaiseHeadAnimFrameData[];
extern JointIndex sAndRaiseHeadAnimJointIndices[];
extern AnimationHeader gAndRaiseHeadAnim;
extern s16 sAndRaisedHeadLoopAnimFrameData[];
extern JointIndex sAndRaisedHeadLoopAnimJointIndices[];
extern AnimationHeader gAndRaisedHeadLoopAnim;
extern s16 sAndRaisedHandWalkAnimFrameData[];
extern JointIndex sAndRaisedHandWalkAnimJointIndices[];
extern AnimationHeader gAndRaisedHandWalkAnim;
extern s16 sAndIdleAnimFrameData[];
extern JointIndex sAndIdleAnimJointIndices[];
extern AnimationHeader gAndIdleAnim;
#endif
