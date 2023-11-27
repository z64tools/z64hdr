#ifndef OBJECT_TRT_H
#define OBJECT_TRT_H 1

typedef enum KotakeLimb {
    /* 0x00 */ KOTAKE_LIMB_NONE,
    /* 0x01 */ KOTAKE_LIMB_PELVIS,
    /* 0x02 */ KOTAKE_LIMB_LEFT_THIGH,
    /* 0x03 */ KOTAKE_LIMB_LEFT_SHIN,
    /* 0x04 */ KOTAKE_LIMB_LEFT_FOOT,
    /* 0x05 */ KOTAKE_LIMB_RIGH_THIGH,
    /* 0x06 */ KOTAKE_LIMB_RIGHT_SHIN,
    /* 0x07 */ KOTAKE_LIMB_RIGHT_FOOT,
    /* 0x08 */ KOTAKE_LIMB_TORSO_LIMB,
    /* 0x09 */ KOTAKE_LIMB_LEFT_SLEEVE_START,
    /* 0x0A */ KOTAKE_LIMB_LEFT_SLEEVE_MID,
    /* 0x0B */ KOTAKE_LIMB_LEFT_SLEEVE_END,
    /* 0x0C */ KOTAKE_LIMB_LEFT_SLEEVE_FRONT,
    /* 0x0D */ KOTAKE_LIMB_LEFT_HAND,
    /* 0x0E */ KOTAKE_LIMB_BROOM,
    /* 0x0F */ KOTAKE_LIMB_RIGHT_SLEEVE_START,
    /* 0x10 */ KOTAKE_LIMB_RIGHT_SLEEVE_MID,
    /* 0x11 */ KOTAKE_LIMB_RIGHT_SLEEVE_END,
    /* 0x12 */ KOTAKE_LIMB_RIGHT_SLEEVE_FRONT,
    /* 0x13 */ KOTAKE_LIMB_RIGHT_HAND,
    /* 0x14 */ KOTAKE_LIMB_NECK,
    /* 0x15 */ KOTAKE_LIMB_HEAD,
    /* 0x16 */ KOTAKE_LIMB_RIGHT_BRAID_START,
    /* 0x17 */ KOTAKE_LIMB_RIGHT_BRAID_END,
    /* 0x18 */ KOTAKE_LIMB_TEETH,
    /* 0x19 */ KOTAKE_LIMB_LEFT_BRAID_START,
    /* 0x1A */ KOTAKE_LIMB_LEFT_BRAID_END,
    /* 0x1B */ KOTAKE_LIMB_MAX
} KotakeLimb;

extern s16 sKotakeHoverAnimFrameData[];
extern JointIndex sKotakeHoverAnimJointIndices[];
extern AnimationHeader gKotakeHoverAnim;
extern s16 sKotakeFlyLookAroundAnimFrameData[];
extern JointIndex sKotakeFlyLookAroundAnimJointIndices[];
extern AnimationHeader gKotakeFlyLookAroundAnim;
extern s16 sKotakeFlyDownAnimFrameData[];
extern JointIndex sKotakeFlyDownAnimJointIndices[];
extern AnimationHeader gKotakeFlyDownAnim;
extern s16 sKotakeFlyAnimFrameData[];
extern JointIndex sKotakeFlyAnimJointIndices[];
extern AnimationHeader gKotakeFlyAnim;
extern s16 sKotakeWakeUpAnimFrameData[];
extern JointIndex sKotakeWakeUpAnimJointIndices[];
extern AnimationHeader gKotakeWakeUpAnim;
extern s16 sKotakeSurprisedAnimFrameData[];
extern JointIndex sKotakeSurprisedAnimJointIndices[];
extern AnimationHeader gKotakeSurprisedAnim;
extern Vtx object_trtVtx_003D90[];
extern Gfx gKotakePelvisDL[];
extern Gfx gKotakeTorsoDL[];
extern Gfx gKotakeNeckDL[];
extern Gfx gKotakeHeadDL[];
extern Gfx gKotakeLeftBraidStartDL[];
extern Gfx gKotakeLeftBraidEndDL[];
extern Gfx gKotakeTeethDL[];
extern Gfx gKotakeRightBraidStartDL[];
extern Gfx gKotakeRightBraidEndDL[];
extern Gfx gKotakeRightSleeveStartDL[];
extern Gfx gKotakeRightSleeveFrontDL[];
extern Gfx gKotakeRightHandDL[];
extern Gfx gKotakeRightSleeveMidDL[];
extern Gfx gKotakeRightSleeveEndDL[];
extern Gfx gKotakeLeftSleeveStartDL[];
extern Gfx gKotakeLeftSleeveFrontDL[];
extern Gfx gKotakeLeftHandDL[];
extern Gfx gKotakeBroomDL[];
extern Gfx gKotakeLeftSleeveMidDL[];
extern Gfx gKotakeLeftSleeveEndDL[];
extern Gfx gKotakeRightThighDL[];
extern Gfx gKotakeRightShinDL[];
extern Gfx gKotakeRightFootDL[];
extern Gfx gKotakeLeftThighDL[];
extern Gfx gKotakeLeftShinDL[];
extern Gfx gKotakeLeftFootDL[];
extern u64 gKotakeSkinTLUT[];
extern u64 gKotakeMouthTLUT[];
extern u64 gKotakeEarTLUT[];
extern u64 gKotakeFingerTLUT[];
extern u64 gKotakeNeckTLUT[];
extern u64 gKotakeNostrilsTLUT[];
extern u64 gKotakeGerudoFabricTex[];
extern u64 gKotakeRobeTex[];
extern u64 gKotakeRobePatternTex[];
extern u64 gKotakeRobeTrimTex[];
extern u64 gKotakeSkinTex[];
extern u64 gKotakeMouthTex[];
extern u64 gKotakeHairTex[];
extern u64 gKotakeBraidEndTex[];
extern u64 gKotakeEarTex[];
extern u64 gKotakeCollarNeckTex[];
extern u64 gKotakeFingerTex[];
extern u64 gKotakeBroomHandleTex[];
extern u64 gKotakeBroomHeadTex[];
extern u64 gKotakeJewelHolderTex[];
extern u64 gKotakeNeckTex[];
extern u64 gKotakeNostrilsTex[];
extern u64 gKotakeEyeOpenTex[];
extern u64 gKotakeEyeHalfTex[];
extern u64 gKotakeEyeClosedTex[];
extern u64 gKotakeJewelTex[];
extern TexturePtr object_trtTexCycleTexPtrs_00C940[];
extern u8 object_trtTexCycleTexIndices_00C94C[];
extern AnimatedMatTexCycleParams gKotakeEyesTexAnimTexCycleParams_00C954;
extern TexturePtr object_trtTexCycleTexPtrs_00C964[];
extern u8 object_trtTexCycleTexIndices_00C970[];
extern AnimatedMatTexCycleParams gKotakeEyesTexAnimTexCycleParams_00C978;
extern AnimatedMaterial gKotakeEyesTexAnim[];
extern s16 sKotakeHandsOnCounterAnimFrameData[];
extern JointIndex sKotakeHandsOnCounterAnimJointIndices[];
extern AnimationHeader gKotakeHandsOnCounterAnim;
extern s16 sKotakeIdleAnimFrameData[];
extern JointIndex sKotakeIdleAnimJointIndices[];
extern AnimationHeader gKotakeIdleAnim;
extern s16 sKotakeHalfAwakeAnimFrameData[];
extern JointIndex sKotakeHalfAwakeAnimJointIndices[];
extern AnimationHeader gKotakeHalfAwakeAnim;
extern s16 sKotakeSleepingAnimFrameData[];
extern JointIndex sKotakeSleepingAnimJointIndices[];
extern AnimationHeader gKotakeSleepingAnim;
extern StandardLimb gKotakePelvisLimb;
extern StandardLimb gKotakeLeftThighLimb;
extern StandardLimb gKotakeLeftShinLimb;
extern StandardLimb gKotakeLeftFootLimb;
extern StandardLimb gKotakeRightThighLimb;
extern StandardLimb gKotakeRightShinLimb;
extern StandardLimb gKotakeRightFootLimb;
extern StandardLimb gKotakeTorsoLimb;
extern StandardLimb gKotakeLeftSleeveStartLimb;
extern StandardLimb gKotakeLeftSleeveMidLimb;
extern StandardLimb gKotakeLeftSleeveEndLimb;
extern StandardLimb gKotakeLeftSleeveFrontLimb;
extern StandardLimb gKotakeLeftHandLimb;
extern StandardLimb gKotakeBroomLimb;
extern StandardLimb gKotakeRightSleeveStartLimb;
extern StandardLimb gKotakeRightSleeveMidLimb;
extern StandardLimb gKotakeRightSleeveEndLimb;
extern StandardLimb gKotakeRightSleeveFrontLimb;
extern StandardLimb gKotakeRightHandLimb;
extern StandardLimb gKotakeNeckLimb;
extern StandardLimb gKotakeHeadLimb;
extern StandardLimb gKotakeRightBraidStartLimb;
extern StandardLimb gKotakeRightBraidEndLimb;
extern StandardLimb gKotakeTeethLimb;
extern StandardLimb gKotakeLeftBraidStartLimb;
extern StandardLimb gKotakeLeftBraidEndLimb;
extern void* gKotakeSkelLimbs[];
extern FlexSkeletonHeader gKotakeSkel;
#endif
