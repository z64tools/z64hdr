#ifndef OBJECT_JG_H
#define OBJECT_JG_H 1

typedef enum GoronElderLimb {
    /* 0x00 */ GORON_ELDER_LIMB_NONE,
    /* 0x01 */ GORON_ELDER_LIMB_ROOT,
    /* 0x02 */ GORON_ELDER_LIMB_UPPER_BODY_ROOT,
    /* 0x03 */ GORON_ELDER_LIMB_LOWER_TORSO,
    /* 0x04 */ GORON_ELDER_LIMB_UPPER_TORSO,
    /* 0x05 */ GORON_ELDER_LIMB_LEFT_ARM_ROOT,
    /* 0x06 */ GORON_ELDER_LIMB_LEFT_SHOULDER_AND_UPPER_ARM,
    /* 0x07 */ GORON_ELDER_LIMB_LEFT_FOREARM,
    /* 0x08 */ GORON_ELDER_LIMB_LEFT_WRIST,
    /* 0x09 */ GORON_ELDER_LIMB_LEFT_HAND_AND_THUMB,
    /* 0x0A */ GORON_ELDER_LIMB_LEFT_FINGERS,
    /* 0x0B */ GORON_ELDER_LIMB_RIGHT_ARM_ROOT,
    /* 0x0C */ GORON_ELDER_LIMB_RIGHT_SHOULDER_AND_UPPER_ARM,
    /* 0x0D */ GORON_ELDER_LIMB_RIGHT_FOREARM,
    /* 0x0E */ GORON_ELDER_LIMB_RIGHT_WRIST,
    /* 0x0F */ GORON_ELDER_LIMB_RIGHT_HAND_AND_THUMB,
    /* 0x10 */ GORON_ELDER_LIMB_RIGHT_FINGERS,
    /* 0x11 */ GORON_ELDER_LIMB_NECK,
    /* 0x12 */ GORON_ELDER_LIMB_LEFT_HAIR_END,
    /* 0x13 */ GORON_ELDER_LIMB_RIGHT_HAIR_END,
    /* 0x14 */ GORON_ELDER_LIMB_HAIR_BACK,
    /* 0x15 */ GORON_ELDER_LIMB_HEAD,
    /* 0x16 */ GORON_ELDER_LIMB_LOWER_LIP,
    /* 0x17 */ GORON_ELDER_LIMB_BEARD_ROOT,
    /* 0x18 */ GORON_ELDER_LIMB_UPPER_BEARD,
    /* 0x19 */ GORON_ELDER_LIMB_LOWER_BEARD,
    /* 0x1A */ GORON_ELDER_LIMB_PELVIS,
    /* 0x1B */ GORON_ELDER_LIMB_LEFT_LEG_ROOT,
    /* 0x1C */ GORON_ELDER_LIMB_LEFT_THIGH,
    /* 0x1D */ GORON_ELDER_LIMB_LEFT_SHIN,
    /* 0x1E */ GORON_ELDER_LIMB_LEFT_FOOT,
    /* 0x1F */ GORON_ELDER_LIMB_RIGHT_LEG_ROOT,
    /* 0x20 */ GORON_ELDER_LIMB_RIGHT_THIGH,
    /* 0x21 */ GORON_ELDER_LIMB_RIGHT_SHIN,
    /* 0x22 */ GORON_ELDER_LIMB_RIGHT_FOOT,
    /* 0x23 */ GORON_ELDER_LIMB_MAX
} GoronElderLimb;

typedef enum GoronElderDrumLimb {
    /* 0x00 */ GORON_ELDER_DRUM_LIMB_NONE,
    /* 0x01 */ GORON_ELDER_DRUM_LIMB_ROOT,
    /* 0x02 */ GORON_ELDER_DRUM_LIMB_MAX
} GoronElderDrumLimb;

extern Vtx object_jgVtx_000000[];
extern Gfx gGoronElderPelvisDL[];
extern Gfx gGoronElderRightShinDL[];
extern Gfx gGoronElderRightFootDL[];
extern Gfx gGoronElderRightThighDL[];
extern Gfx gGoronElderLeftShinDL[];
extern Gfx gGoronElderLeftFootDL[];
extern Gfx gGoronElderLeftThighDL[];
extern Gfx gGoronElderHeadDL[];
extern Gfx gGoronElderLowerBeardDL[];
extern Gfx gGoronElderUpperBeardDL[];
extern Gfx gGoronElderLowerLipDL[];
extern Gfx gGoronElderHairBackDL[];
extern Gfx gGoronElderRightHairEndDL[];
extern Gfx gGoronElderLeftHairEndDL[];
extern Gfx gGoronElderUpperTorsoDL[];
extern Gfx gGoronElderRightForearmDL[];
extern Gfx gGoronElderRightFingersDL[];
extern Gfx gGoronElderRightHandAndThumbDL[];
extern Gfx gGoronElderRightShoulderAndUpperArmDL[];
extern Gfx gGoronElderLeftForearmDL[];
extern Gfx gGoronElderLeftFingersDL[];
extern Gfx gGoronElderLeftHandAndThumbDL[];
extern Gfx gGoronElderLeftShoulderAndUpperArmDL[];
extern Gfx gGoronElderLowerTorsoDL[];
extern s16 sGoronElderThinkingAnimFrameData[];
extern JointIndex sGoronElderThinkingAnimJointIndices[];
extern AnimationHeader gGoronElderThinkingAnim;
extern s16 sGoronElderWalkAnimFrameData[];
extern JointIndex sGoronElderWalkAnimJointIndices[];
extern AnimationHeader gGoronElderWalkAnim;
extern s16 sGoronElderCradleAnimFrameData[];
extern JointIndex sGoronElderCradleAnimJointIndices[];
extern AnimationHeader gGoronElderCradleAnim;
extern Vtx object_jgVtx_00A090[];
extern Gfx gGoronElderDrumDL[];
extern u64 gGoronElderDrumSidesTex[];
extern u64 gGoronElderDrumTopTex[];
extern s16 sGoronElderWavingAnimFrameData[];
extern JointIndex sGoronElderWavingAnimJointIndices[];
extern AnimationHeader gGoronElderWavingAnim;
extern s16 sGoronElderHeadShakeAnimFrameData[];
extern JointIndex sGoronElderHeadShakeAnimJointIndices[];
extern AnimationHeader gGoronElderHeadShakeAnim;
extern s16 sGoronElderRememberingAnimFrameData[];
extern JointIndex sGoronElderRememberingAnimJointIndices[];
extern AnimationHeader gGoronElderRememberingAnim;
extern s16 sGoronElderSurpriseStartAnimFrameData[];
extern JointIndex sGoronElderSurpriseStartAnimJointIndices[];
extern AnimationHeader gGoronElderSurpriseStartAnim;
extern s16 sGoronElderSurpriseLoopAnimFrameData[];
extern JointIndex sGoronElderSurpriseLoopAnimJointIndices[];
extern AnimationHeader gGoronElderSurpriseLoopAnim;
extern s16 sGoronElderStrongRememberingAnimFrameData[];
extern JointIndex sGoronElderStrongRememberingAnimJointIndices[];
extern AnimationHeader gGoronElderStrongRememberingAnim;
extern s16 sGoronElderTakeOutDrumAnimFrameData[];
extern JointIndex sGoronElderTakeOutDrumAnimJointIndices[];
extern AnimationHeader gGoronElderTakeOutDrumAnim;
extern s16 sGoronElderDrumIdleAnimFrameData[];
extern JointIndex sGoronElderDrumIdleAnimJointIndices[];
extern AnimationHeader gGoronElderDrumIdleAnim;
extern s16 sGoronElderPlayingDrumAnimFrameData[];
extern JointIndex sGoronElderPlayingDrumAnimJointIndices[];
extern AnimationHeader gGoronElderPlayingDrumAnim;
extern s16 sGoronElderAngryAnimFrameData[];
extern JointIndex sGoronElderAngryAnimJointIndices[];
extern AnimationHeader gGoronElderAngryAnim;
extern u64 gGoronElderTLUT[];
extern u64 gGoronElderSkinTex[];
extern u64 gGoronElderToesTex[];
extern u64 gGoronElderFootBottomTex[];
extern u64 gGoronElderVeinsTex[];
extern u64 gGoronElderSpotsTex[];
extern u64 gGoronElderLowerLipTex[];
extern u64 gGoronElderLipTex[];
extern u64 gGoronElderHairTex[];
extern u64 gGoronElderNostrilAndBellyButtonTex[];
extern u64 gGoronElderCheekTex[];
extern u64 gGoronElderBrowTex[];
extern u64 gGoronElderHairEndTex[];
extern u64 gGoronElderFingersTex[];
extern u64 gGoronElderGoronRubyTattooTex[];
extern u64 gGoronElderChestTex[];
extern u64 gGoronElderBackTex[];
extern s16 sGoronElderDepressedAnimFrameData[];
extern JointIndex sGoronElderDepressedAnimJointIndices[];
extern AnimationHeader gGoronElderDepressedAnim;
extern s16 sGoronElderIdleAnimFrameData[];
extern JointIndex sGoronElderIdleAnimJointIndices[];
extern AnimationHeader gGoronElderIdleAnim;
extern StandardLimb gGoronElderRootLimb;
extern StandardLimb gGoronElderUpperBodyRootLimb;
extern StandardLimb gGoronElderLowerTorsoLimb;
extern StandardLimb gGoronElderUpperTorsoLimb;
extern StandardLimb gGoronElderLeftArmRootLimb;
extern StandardLimb gGoronElderLeftShoulderAndUpperArmLimb;
extern StandardLimb gGoronElderLeftForearmLimb;
extern StandardLimb gGoronElderLeftWristLimb;
extern StandardLimb gGoronElderLeftHandAndThumbLimb;
extern StandardLimb gGoronElderLeftFingersLimb;
extern StandardLimb gGoronElderRightArmRootLimb;
extern StandardLimb gGoronElderRightShoulderAndUpperArmLimb;
extern StandardLimb gGoronElderRightForearmLimb;
extern StandardLimb gGoronElderRightWristLimb;
extern StandardLimb gGoronElderRightHandAndThumbLimb;
extern StandardLimb gGoronElderRightFingersLimb;
extern StandardLimb gGoronElderNeckLimb;
extern StandardLimb gGoronElderLeftHairEndLimb;
extern StandardLimb gGoronElderRightHairEndLimb;
extern StandardLimb gGoronElderHairBackLimb;
extern StandardLimb gGoronElderHeadLimb;
extern StandardLimb gGoronElderLowerLipLimb;
extern StandardLimb gGoronElderBeardRootLimb;
extern StandardLimb gGoronElderUpperBeardLimb;
extern StandardLimb gGoronElderLowerBeardLimb;
extern StandardLimb gGoronElderPelvisLimb;
extern StandardLimb gGoronElderLeftLegRootLimb;
extern StandardLimb gGoronElderLeftThighLimb;
extern StandardLimb gGoronElderLeftShinLimb;
extern StandardLimb gGoronElderLeftFootLimb;
extern StandardLimb gGoronElderRightLegRootLimb;
extern StandardLimb gGoronElderRightThighLimb;
extern StandardLimb gGoronElderRightShinLimb;
extern StandardLimb gGoronElderRightFootLimb;
extern void* gGoronElderSkelLimbs[];
extern FlexSkeletonHeader gGoronElderSkel;
extern s16 sGoronElderDrumTakeOutAnimFrameData[];
extern JointIndex sGoronElderDrumTakeOutAnimJointIndices[];
extern AnimationHeader gGoronElderDrumTakeOutAnim;
extern StandardLimb gGoronElderDrumLimb;
extern void* gGoronElderDrumSkelLimbs[];
extern SkeletonHeader gGoronElderDrumSkel;
#endif
