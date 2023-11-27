#ifndef OBJECT_DNT_H
#define OBJECT_DNT_H 1

typedef enum BusinessScrubLimb {
    /* 0x00 */ BUSINESS_SCRUB_LIMB_NONE,
    /* 0x01 */ BUSINESS_SCRUB_LIMB_ROOT,
    /* 0x02 */ BUSINESS_SCRUB_LIMB_BODY,
    /* 0x03 */ BUSINESS_SCRUB_LIMB_RIGHT_THIGH,
    /* 0x04 */ BUSINESS_SCRUB_LIMB_RIGHT_SHIN,
    /* 0x05 */ BUSINESS_SCRUB_LIMB_RIGHT_FOOT,
    /* 0x06 */ BUSINESS_SCRUB_LIMB_LEFT_THIGH,
    /* 0x07 */ BUSINESS_SCRUB_LIMB_LEFT_SHIN,
    /* 0x08 */ BUSINESS_SCRUB_LIMB_LEFT_FOOT,
    /* 0x09 */ BUSINESS_SCRUB_LIMB_HEAD,
    /* 0x0A */ BUSINESS_SCRUB_LIMB_SNOUT,
    /* 0x0B */ BUSINESS_SCRUB_LIMB_RIGHT_LEAF,
    /* 0x0C */ BUSINESS_SCRUB_LIMB_RIGHT_MUSTACHE,
    /* 0x0D */ BUSINESS_SCRUB_LIMB_RIGHT_UPPER_ARM,
    /* 0x0E */ BUSINESS_SCRUB_LIMB_RIGHT_FOREARM,
    /* 0x0F */ BUSINESS_SCRUB_LIMB_RIGHT_HAND_HAT,
    /* 0x10 */ BUSINESS_SCRUB_LIMB_RIGHT_HAND_BAG,
    /* 0x11 */ BUSINESS_SCRUB_LIMB_RIGHT_HAND,
    /* 0x12 */ BUSINESS_SCRUB_LIMB_LEFT_UPPER_ARM,
    /* 0x13 */ BUSINESS_SCRUB_LIMB_LEFT_FOREARM,
    /* 0x14 */ BUSINESS_SCRUB_LIMB_LEFT_HAND,
    /* 0x15 */ BUSINESS_SCRUB_LIMB_LEFT_HAND_BAG,
    /* 0x16 */ BUSINESS_SCRUB_LIMB_LEFT_LEAF,
    /* 0x17 */ BUSINESS_SCRUB_LIMB_SCALP,
    /* 0x18 */ BUSINESS_SCRUB_LIMB_HAIR,
    /* 0x19 */ BUSINESS_SCRUB_LIMB_HAT,
    /* 0x1A */ BUSINESS_SCRUB_LIMB_EYES,
    /* 0x1B */ BUSINESS_SCRUB_LIMB_LEFT_ARM_BAG,
    /* 0x1C */ BUSINESS_SCRUB_LIMB_MAX
} BusinessScrubLimb;

extern s16 sBusinessScrubShockedPoundAnimFrameData[];
extern JointIndex sBusinessScrubShockedPoundAnimJointIndices[];
extern AnimationHeader gBusinessScrubShockedPoundAnim;
extern s16 sBusinessScrubTakeOffHatAnimFrameData[];
extern JointIndex sBusinessScrubTakeOffHatAnimJointIndices[];
extern AnimationHeader gBusinessScrubTakeOffHatAnim;
extern Vtx object_dntVtx_001310[];
extern Gfx gBusinessScrubEyesWideDL[];
extern Vtx object_dntVtx_0013E0[];
extern Gfx gBusinessScrubEyesSquintDL[];
extern s16 sBusinessScrubFlyLoopAnimFrameData[];
extern JointIndex sBusinessScrubFlyLoopAnimJointIndices[];
extern AnimationHeader gBusinessScrubFlyLoopAnim;
extern s16 sBusinessScrubShockedShakeHeadAnimFrameData[];
extern JointIndex sBusinessScrubShockedShakeHeadAnimJointIndices[];
extern AnimationHeader gBusinessScrubShockedShakeHeadAnim;
extern s16 sBusinessScrubShockedEndAnimFrameData[];
extern JointIndex sBusinessScrubShockedEndAnimJointIndices[];
extern AnimationHeader gBusinessScrubShockedEndAnim;
extern s16 sBusinessScrubFlyEndAnimFrameData[];
extern JointIndex sBusinessScrubFlyEndAnimJointIndices[];
extern AnimationHeader gBusinessScrubFlyEndAnim;
extern s16 sBusinessScrubBurrowAnimFrameData[];
extern JointIndex sBusinessScrubBurrowAnimJointIndices[];
extern AnimationHeader gBusinessScrubBurrowAnim;
extern s16 sBusinessScrubThinkAnimFrameData[];
extern JointIndex sBusinessScrubThinkAnimJointIndices[];
extern AnimationHeader gBusinessScrubThinkAnim;
extern s16 sBusinessScrubShockedStartAnimFrameData[];
extern JointIndex sBusinessScrubShockedStartAnimJointIndices[];
extern AnimationHeader gBusinessScrubShockedStartAnim;
extern s16 sBusinessScrubExcitedLoopAnimFrameData[];
extern JointIndex sBusinessScrubExcitedLoopAnimJointIndices[];
extern AnimationHeader gBusinessScrubExcitedLoopAnim;
extern s16 sBusinessScrubExcitedEndAnimFrameData[];
extern JointIndex sBusinessScrubExcitedEndAnimJointIndices[];
extern AnimationHeader gBusinessScrubExcitedEndAnim;
extern AnimatedMaterial gBusinessScrubEmptyTexAnim[];
extern s16 sBusinessScrubFlyStartAnimFrameData[];
extern JointIndex sBusinessScrubFlyStartAnimJointIndices[];
extern AnimationHeader gBusinessScrubFlyStartAnim;
extern s16 sBusinessScrubRiseUpAnimFrameData[];
extern JointIndex sBusinessScrubRiseUpAnimJointIndices[];
extern AnimationHeader gBusinessScrubRiseUpAnim;
extern s16 sBusinessScrubJumpAnimFrameData[];
extern JointIndex sBusinessScrubJumpAnimJointIndices[];
extern AnimationHeader gBusinessScrubJumpAnim;
extern s16 sBusinessScrubStandingAnimFrameData[];
extern JointIndex sBusinessScrubStandingAnimJointIndices[];
extern AnimationHeader gBusinessScrubStandingAnim;
extern s16 sBusinessScrubBobAnimFrameData[];
extern JointIndex sBusinessScrubBobAnimJointIndices[];
extern AnimationHeader gBusinessScrubBobAnim;
extern s16 sBusinessScrubExcitedStartAnimFrameData[];
extern JointIndex sBusinessScrubExcitedStartAnimJointIndices[];
extern AnimationHeader gBusinessScrubExcitedStartAnim;
extern Vtx object_dntVtx_005CC0[];
extern Gfx gBusinessScrubHeadDL[];
extern Gfx gBusinessScrubLeftArmBagDL[];
extern Gfx gBusinessScrubEyesDL[];
extern Gfx gBusinessScrubScalpDL[];
extern Gfx gBusinessScrubHatDL[];
extern Gfx gBusinessScrubHairDL[];
extern Gfx gBusinessScrubLeftEarDL[];
extern Gfx gBusinessScrubLeftHandDL[];
extern Gfx gBusinessScrubLeftHandBagDL[];
extern Gfx gBusinessScrubLeftForearmDL[];
extern Gfx gBusinessScrubLeftUpperArmDL[];
extern Gfx gBusinessScrubRightHandHatDL[];
extern Gfx gBusinessScrubRightHandDL[];
extern Gfx gBusinessScrubRightHandBagDL[];
extern Gfx gBusinessScrubRightForearmDL[];
extern Gfx gBusinessScrubRightUpperArmDL[];
extern Gfx gBusinessScrubRightMustacheDL[];
extern Gfx gBusinessScrubRightEarDL[];
extern Gfx gBusinessScrubSnoutDL[];
extern Gfx gBusinessScrubBodyDL[];
extern Gfx gBusinessScrubLeftFootDL[];
extern Gfx gBusinessScrubLeftShinDL[];
extern Gfx gBusinessScrubLeftThighDL[];
extern Gfx gBusinessScrubRightFootDL[];
extern Gfx gBusinessScrubRightShinDL[];
extern Gfx gBusinessScrubRightThighDL[];
extern u64 gBusinessScrubSkinTex[];
extern u64 gBusinessScrubLeafTex[];
extern u64 gBusinessScrubBagOpeningTex[];
extern u64 gBusinessScrubBagCordTex[];
extern u64 gBusinessScrubBagTex[];
extern u64 gBusinessScrubHatTex[];
extern u64 gBusinessScrubHatLeafTex[];
extern u64 gBusinessScrubHairTex[];
extern u64 gBusinessScrubScalpTex[];
extern u64 gBusinessScrubSnoutTex[];
extern u64 gBusinessScrubEyeTex[];
extern StandardLimb gBusinessScrubRootLimb;
extern StandardLimb gBusinessScrubBodyLimb;
extern StandardLimb gBusinessScrubRightThighLimb;
extern StandardLimb gBusinessScrubRightShinLimb;
extern StandardLimb gBusinessScrubRightFootLimb;
extern StandardLimb gBusinessScrubLeftThighLimb;
extern StandardLimb gBusinessScrubLeftShinLimb;
extern StandardLimb gBusinessScrubLeftFootLimb;
extern StandardLimb gBusinessScrubHeadLimb;
extern StandardLimb gBusinessScrubSnoutLimb;
extern StandardLimb gBusinessScrubRightLeafLimb;
extern StandardLimb gBusinessScrubRightMustacheLimb;
extern StandardLimb gBusinessScrubRightUpperArmLimb;
extern StandardLimb gBusinessScrubRightForearmLimb;
extern StandardLimb gBusinessScrubRightHandHatLimb;
extern StandardLimb gBusinessScrubRightHandBagLimb;
extern StandardLimb gBusinessScrubRightHandLimb;
extern StandardLimb gBusinessScrubLeftUpperArmLimb;
extern StandardLimb gBusinessScrubLeftForearmLimb;
extern StandardLimb gBusinessScrubLeftHandLimb;
extern StandardLimb gBusinessScrubLeftHandBagLimb;
extern StandardLimb gBusinessScrubLeftLeafLimb;
extern StandardLimb gBusinessScrubScalpLimb;
extern StandardLimb gBusinessScrubHairLimb;
extern StandardLimb gBusinessScrubHatLimb;
extern StandardLimb gBusinessScrubEyesLimb;
extern StandardLimb gBusinessScrubLeftArmBagLimb;
extern void* gBusinessScrubSkelLimbs[];
extern FlexSkeletonHeader gBusinessScrubSkel;
extern s16 sBusinessScrubWalkAnimFrameData[];
extern JointIndex sBusinessScrubWalkAnimJointIndices[];
extern AnimationHeader gBusinessScrubWalkAnim;
extern u64 gBusinessScrubEye2Tex[];
#endif
