#ifndef OBJECT_BBA_H
#define OBJECT_BBA_H 1

typedef enum BbaLimb {
    /* 0x00 */ BBA_LIMB_NONE,
    /* 0x01 */ BBA_LIMB_UPPER_LEGS,
    /* 0x02 */ BBA_LIMB_MIDDLE_LEGS,
    /* 0x03 */ BBA_LIMB_LOWER_LEGS,
    /* 0x04 */ BBA_LIMB_FEET,
    /* 0x05 */ BBA_LIMB_UPPER_ROOT,
    /* 0x06 */ BBA_LIMB_NECK,
    /* 0x07 */ BBA_LIMB_HEAD,
    /* 0x08 */ BBA_LIMB_BAG,
    /* 0x09 */ BBA_LIMB_TORSO,
    /* 0x0A */ BBA_LIMB_LEFT_UPPER_ARM,
    /* 0x0B */ BBA_LIMB_LEFT_LOWER_ARM_ROOT,
    /* 0x0C */ BBA_LIMB_LEFT_FOREARM,
    /* 0x0D */ BBA_LIMB_LEFT_HAND,
    /* 0x0E */ BBA_LIMB_RIGHT_UPPER_ARM,
    /* 0x0F */ BBA_LIMB_RIGHT_LOWER_ARM_ROOT,
    /* 0x10 */ BBA_LIMB_RIGHT_FOREARM,
    /* 0x11 */ BBA_LIMB_RIGHT_HAND,
    /* 0x12 */ BBA_LIMB_MAX
} BbaLimb;

extern Vtx object_bbaVtx_000000[];
extern Gfx gBbaUpperLegsDL[];
extern Gfx gBbaRightHandDL[];
extern Gfx gBbaRightForearmDL[];
extern Gfx gBbaRightUpperArmDL[];
extern Gfx gBbaLeftHandDL[];
extern Gfx gBbaLeftForearmDL[];
extern Gfx gBbaLeftUpperArmDL[];
extern Gfx gBbaTorsoDL[];
extern Gfx gBbaBagDL[];
extern Gfx gBbaNeckDL[];
extern Gfx gBbaHeadDL[];
extern Gfx gBbaMiddleLegsDL[];
extern Gfx gBbaLowerLegsDL[];
extern Gfx gBbaFeetDL[];
extern s16 sBbaSwayAnimFrameData[];
extern JointIndex sBbaSwayAnimJointIndices[];
extern AnimationHeader gBbaSwayAnim;
extern s16 sBbaKnockedOverAnimFrameData[];
extern JointIndex sBbaKnockedOverAnimJointIndices[];
extern AnimationHeader gBbaKnockedOverAnim;
extern s16 sBbaLyingDownAnimFrameData[];
extern JointIndex sBbaLyingDownAnimJointIndices[];
extern AnimationHeader gBbaLyingDownAnim;
extern s16 sBbaIdleHoldingBagAnimFrameData[];
extern JointIndex sBbaIdleHoldingBagAnimJointIndices[];
extern AnimationHeader gBbaIdleHoldingBagAnim;
extern StandardLimb gBbaUpperLegsLimb;
extern StandardLimb gBbaMiddleLegsLimb;
extern StandardLimb gBbaLowerLegsLimb;
extern StandardLimb gBbaFeetLimb;
extern StandardLimb gBbaUpperRootLimb;
extern StandardLimb gBbaNeckLimb;
extern StandardLimb gBbaHeadLimb;
extern StandardLimb gBbaBagLimb;
extern StandardLimb gBbaTorsoLimb;
extern StandardLimb gBbaLeftUpperArmLimb;
extern StandardLimb gBbaLeftLowerArmRootLimb;
extern StandardLimb gBbaLeftForearmLimb;
extern StandardLimb gBbaLeftHandLimb;
extern StandardLimb gBbaRightUpperArmLimb;
extern StandardLimb gBbaRightLowerArmRootLimb;
extern StandardLimb gBbaRightForearmLimb;
extern StandardLimb gBbaRightHandLimb;
extern void* gBbaSkelLimbs[];
extern FlexSkeletonHeader gBbaSkel;
extern s16 sBbaIdleAnimFrameData[];
extern JointIndex sBbaIdleAnimJointIndices[];
extern AnimationHeader gBbaIdleAnim;
extern s16 sBbaWalkingHoldingBagAnimFrameData[];
extern JointIndex sBbaWalkingHoldingBagAnimJointIndices[];
extern AnimationHeader gBbaWalkingHoldingBagAnim;
extern u64 gBbaTLUT[];
extern u64 gBbaHairSkin2Tex[];
extern u64 gBbaEar2Tex[];
extern u64 gBbaNostril2Tex[];
extern u64 gBbaEye2Tex[];
extern u64 gBbaWrinkles2Tex[];
extern u64 gBbaCheek2Tex[];
extern u64 gBbaSkin2Tex[];
extern u64 gBbaForehead2Tex[];
extern u64 gBbaFingers2Tex[];
extern u64 gBbaShirt2Tex[];
extern u64 gBbaBag2Tex[];
extern u64 gBbaSkirt2Tex[];
extern u64 gBbaSkinTex[];
extern u64 gBbaWrinklesTex[];
extern u64 gBbaHairSkinTex[];
extern u64 gBbaNostrilTex[];
extern u64 gBbaEarTex[];
extern u64 gBbaFingersTex[];
extern u64 gBbaBagTex[];
extern u64 gBbaSkirtTex[];
extern u64 gBbaEyeTex[];
extern u64 gBbaCheekTex[];
extern u64 gBbaForeheadTex[];
extern u64 gBbaShirtTex[];
#endif
