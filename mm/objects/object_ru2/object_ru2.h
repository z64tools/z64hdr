#ifndef OBJECT_RU2_H
#define OBJECT_RU2_H 1

typedef enum Ru2Limb {
    /* 0x00 */ RU2_LIMB_NONE,
    /* 0x01 */ RU2_LIMB_ROOT,
    /* 0x02 */ RU2_LIMB_LEFT_THIGH,
    /* 0x03 */ RU2_LIMB_LEFT_LEG,
    /* 0x04 */ RU2_LIMB_LEFT_FOOT,
    /* 0x05 */ RU2_LIMB_LEFT_TAIL,
    /* 0x06 */ RU2_LIMB_RIGHT_THIGH,
    /* 0x07 */ RU2_LIMB_RIGHT_LEG,
    /* 0x08 */ RU2_LIMB_RIGHT_FOOT,
    /* 0x09 */ RU2_LIMB_RIGHT_TAIL,
    /* 0x0A */ RU2_LIMB_TORSO,
    /* 0x0B */ RU2_LIMB_LEFT_UPPER_ARM,
    /* 0x0C */ RU2_LIMB_LEFT_UPPER_WING,
    /* 0x0D */ RU2_LIMB_LEFT_LOWER_WING,
    /* 0x0E */ RU2_LIMB_LEFT_FOREARM,
    /* 0x0F */ RU2_LIMB_LEFT_HAND,
    /* 0x10 */ RU2_LIMB_RIGHT_UPPER_ARM,
    /* 0x11 */ RU2_LIMB_RIGHT_UPPER_WING,
    /* 0x12 */ RU2_LIMB_RIGHT_LOWER_WING,
    /* 0x13 */ RU2_LIMB_RIGHT_FOREARM,
    /* 0x14 */ RU2_LIMB_RIGHT_HAND,
    /* 0x15 */ RU2_LIMB_HEAD,
    /* 0x16 */ RU2_LIMB_WAIST,
    /* 0x17 */ RU2_LIMB_MAX
} Ru2Limb;

extern s16 sAdultRutoCrossingArmsAnimFrameData[];
extern JointIndex sAdultRutoCrossingArmsAnimJointIndices[];
extern AnimationHeader gAdultRutoCrossingArmsAnim;
extern s16 sAdultRutoIdleAnimFrameData[];
extern JointIndex sAdultRutoIdleAnimJointIndices[];
extern AnimationHeader gAdultRutoIdleAnim;
extern u64 gAdultRutoTLUT1[];
extern u64 gAdultRutoEyeOpenTex[];
extern u64 gAdultRutoSkinGradientTex[];
extern u64 gAdultRutoEar1Tex[];
extern u64 gAdultRutoHeadGradientTex[];
extern u64 gAdultRutoHeadHoleTex[];
extern u64 gAdultRutoMouthTex[];
extern u64 gAdultRutoTex_21A0[];
extern u64 gAdultRutoEar2Tex[];
extern u64 gAdultRutoEyeHalfTex[];
extern u64 gAdultRutoEyeClosedTex[];
extern u64 gAdultRutoEarringTex[];
extern Vtx object_ru2Vtx_0033E0[];
extern Gfx gAdultRutoHeadDL[];
extern u64 gAdultRutoTLUT2[];
extern u64 gAdultRutoTailGradientTex[];
extern u64 gAdultRutoTex_4600[];
extern u64 gAdultRutoBackOfHandTex[];
extern u64 gAdultRutoTex_4740[];
extern u64 gAdultRutoSkinPattern1Tex[];
extern u64 gAdultRutoSkinPattern2Tex[];
extern u64 gAdultRutoTex_5440[];
extern u64 gAdultRutoTex_5480[];
extern u64 gAdultRutoTex_5580[];
extern u64 object_ru2Tex_0055C0[];
extern u64 object_ru2Tex_0056C0[];
extern Vtx object_ru2Vtx_005EC0[];
extern Gfx gAdultRutoWaistDL[];
extern Gfx gAdultRutoTorsoDL[];
extern Gfx gAdultRutoRightUpperArmDL[];
extern Gfx gAdultRutoRightForearmDL[];
extern Gfx gAdultRutoRightHandDL[];
extern Gfx gAdultRutoRightUpperWingDL[];
extern Gfx gAdultRutoRightLowerWingDL[];
extern Gfx gAdultRutoLeftUpperArmDL[];
extern Gfx gAdultRutoLeftForearmDL[];
extern Gfx gAdultRutoLeftHandDL[];
extern Gfx gAdultRutoLeftUpperWingDL[];
extern Gfx gAdultRutoLeftLowerWingDL[];
extern Gfx gAdultRutoRightThighDL[];
extern Gfx gAdultRutoRightTailDL[];
extern Gfx gAdultRutoRightLegDL[];
extern Gfx gAdultRutoRightFootDL[];
extern Gfx gAdultRutoLeftThighDL[];
extern Gfx gAdultRutoLeftTailDL[];
extern Gfx gAdultRutoLeftLegDL[];
extern Gfx gAdultRutoLeftFootDL[];
extern StandardLimb gAdultRutoRootLimb;
extern StandardLimb gAdultRutoLeftThighLimb;
extern StandardLimb gAdultRutoLeftLegLimb;
extern StandardLimb gAdultRutoLeftFootLimb;
extern StandardLimb gAdultRutoLeftTailLimb;
extern StandardLimb gAdultRutoRightThighLimb;
extern StandardLimb gAdultRutoRightLegLimb;
extern StandardLimb gAdultRutoRightFootLimb;
extern StandardLimb gAdultRutoRightTailLimb;
extern StandardLimb gAdultRutoTorsoLimb;
extern StandardLimb gAdultRutoLeftUpperArmLimb;
extern StandardLimb gAdultRutoLeftUpperWingLimb;
extern StandardLimb gAdultRutoLeftLowerWingLimb;
extern StandardLimb gAdultRutoLeftForearmLimb;
extern StandardLimb gAdultRutoLeftHandLimb;
extern StandardLimb gAdultRutoRightUpperArmLimb;
extern StandardLimb gAdultRutoRightUpperWingLimb;
extern StandardLimb gAdultRutoRightLowerWingLimb;
extern StandardLimb gAdultRutoRightForearmLimb;
extern StandardLimb gAdultRutoRightHandLimb;
extern StandardLimb gAdultRutoHeadLimb;
extern StandardLimb gAdultRutoWaistLimb;
extern void* gAdultRutoSkelLimbs[];
extern FlexSkeletonHeader gAdultRutoSkel;
extern s16 sAdultRutoRaisingArmsUpAnimFrameData[];
extern JointIndex sAdultRutoRaisingArmsUpAnimJointIndices[];
extern AnimationHeader gAdultRutoRaisingArmsUpAnim;
extern s16 sAdultRutoHeadTurnDownLeftAnimFrameData[];
extern JointIndex sAdultRutoHeadTurnDownLeftAnimJointIndices[];
extern AnimationHeader gAdultRutoHeadTurnDownLeftAnim;
extern s16 sAdultRutoIdleHandsOnHipsAnimFrameData[];
extern JointIndex sAdultRutoIdleHandsOnHipsAnimJointIndices[];
extern AnimationHeader gAdultRutoIdleHandsOnHipsAnim;
extern s16 sAdultRutoLookingDownLeftAnimFrameData[];
extern JointIndex sAdultRutoLookingDownLeftAnimJointIndices[];
extern AnimationHeader gAdultRutoLookingDownLeftAnim;
extern s16 sAdultRutoSwimmingUpAnimFrameData[];
extern JointIndex sAdultRutoSwimmingUpAnimJointIndices[];
extern AnimationHeader gAdultRutoSwimmingUpAnim;
#endif
