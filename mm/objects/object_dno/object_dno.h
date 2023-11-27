#ifndef OBJECT_DNO_H
#define OBJECT_DNO_H 1

typedef enum DekuKingLimb {
    /* 0x00 */ DEKU_KING_LIMB_NONE,
    /* 0x01 */ DEKU_KING_LIMB_ROOT,
    /* 0x02 */ DEKU_KING_LIMB_PELVIS,
    /* 0x03 */ DEKU_KING_LIMB_LEFT_THIGH,
    /* 0x04 */ DEKU_KING_LIMB_LEFT_SHIN,
    /* 0x05 */ DEKU_KING_LIMB_LEFT_FOOT,
    /* 0x06 */ DEKU_KING_LIMB_RIGHT_THIGH,
    /* 0x07 */ DEKU_KING_LIMB_RIGHT_SHIN,
    /* 0x08 */ DEKU_KING_LIMB_RIGHT_FOOT,
    /* 0x09 */ DEKU_KING_LIMB_UPPER_BODY,
    /* 0x0A */ DEKU_KING_LIMB_RIGHT_UPPER_ARM,
    /* 0x0B */ DEKU_KING_LIMB_RIGHT_UPPER_ARM_UPPER_LEAVES,
    /* 0x0C */ DEKU_KING_LIMB_RIGHT_UPPER_ARM_LOWER_LEAVES,
    /* 0x0D */ DEKU_KING_LIMB_RIGHT_FOREARM,
    /* 0x0E */ DEKU_KING_LIMB_RIGHT_FOREARM_UPPER_LEAVES,
    /* 0x0F */ DEKU_KING_LIMB_RIGHT_FOREARM_LOWER_LEAVES,
    /* 0x10 */ DEKU_KING_LIMB_RIGHT_HAND,
    /* 0x11 */ DEKU_KING_LIMB_SCEPTER,
    /* 0x12 */ DEKU_KING_LIMB_SNOUT,
    /* 0x13 */ DEKU_KING_LIMB_LEFT_UPPER_MUSTACHE,
    /* 0x14 */ DEKU_KING_LIMB_LEFT_LOWER_MUSTACHE,
    /* 0x15 */ DEKU_KING_LIMB_RIGHT_UPPER_MUSTACHE,
    /* 0x16 */ DEKU_KING_LIMB_RIGHT_LOWER_MUSTACHE,
    /* 0x17 */ DEKU_KING_LIMB_LEFT_UPPER_ARM,
    /* 0x18 */ DEKU_KING_LIMB_LEFT_UPPER_ARM_UPPER_LEAVES,
    /* 0x19 */ DEKU_KING_LIMB_LEFT_UPPER_ARM_LOWER_LEAVES,
    /* 0x1A */ DEKU_KING_LIMB_LEFT_FOREARM,
    /* 0x1B */ DEKU_KING_LIMB_LEFT_FOREARM_UPPER_LEAVES,
    /* 0x1C */ DEKU_KING_LIMB_LEFT_FOREARM_LOWER_LEAVES,
    /* 0x1D */ DEKU_KING_LIMB_LEFT_HAND,
    /* 0x1E */ DEKU_KING_LIMB_EYES,
    /* 0x1F */ DEKU_KING_LIMB_CROWN,
    /* 0x20 */ DEKU_KING_LIMB_CROWN_LEAVES,
    /* 0x21 */ DEKU_KING_LIMB_MAX
} DekuKingLimb;

extern s16 sDekuKingJumpedOnStartAnimFrameData[];
extern JointIndex sDekuKingJumpedOnStartAnimJointIndices[];
extern AnimationHeader gDekuKingJumpedOnStartAnim;
extern s16 sDekuKingJumpedOnLoopAnimFrameData[];
extern JointIndex sDekuKingJumpedOnLoopAnimJointIndices[];
extern AnimationHeader gDekuKingJumpedOnLoopAnim;
extern s16 sDekuKingSpinScepterAnimFrameData[];
extern JointIndex sDekuKingSpinScepterAnimJointIndices[];
extern AnimationHeader gDekuKingSpinScepterAnim;
extern s16 sDekuKingMarchAnimFrameData[];
extern JointIndex sDekuKingMarchAnimJointIndices[];
extern AnimationHeader gDekuKingMarchAnim;
extern s16 sDekuKingJumpedOnEndAnimFrameData[];
extern JointIndex sDekuKingJumpedOnEndAnimJointIndices[];
extern AnimationHeader gDekuKingJumpedOnEndAnim;
extern s16 sDekuKingLyingDownTwitchAnimFrameData[];
extern JointIndex sDekuKingLyingDownTwitchAnimJointIndices[];
extern AnimationHeader gDekuKingLyingDownTwitchAnim;
extern s16 sDekuKingLaughAnimFrameData[];
extern JointIndex sDekuKingLaughAnimJointIndices[];
extern AnimationHeader gDekuKingLaughAnim;
extern s16 sDekuKingJumpAnimFrameData[];
extern JointIndex sDekuKingJumpAnimJointIndices[];
extern AnimationHeader gDekuKingJumpAnim;
extern s16 sDekuKingIntimidateAnimFrameData[];
extern JointIndex sDekuKingIntimidateAnimJointIndices[];
extern AnimationHeader gDekuKingIntimidateAnim;
extern s16 sDekuKingWailStartAnimFrameData[];
extern JointIndex sDekuKingWailStartAnimJointIndices[];
extern AnimationHeader gDekuKingWailStartAnim;
extern s16 sDekuKingFootStampLoopAnimFrameData[];
extern JointIndex sDekuKingFootStampLoopAnimJointIndices[];
extern AnimationHeader gDekuKingFootStampLoopAnim;
extern s16 sDekuKingFootStampStartAnimFrameData[];
extern JointIndex sDekuKingFootStampStartAnimJointIndices[];
extern AnimationHeader gDekuKingFootStampStartAnim;
extern s16 sDekuKingWailLoopAnimFrameData[];
extern JointIndex sDekuKingWailLoopAnimJointIndices[];
extern AnimationHeader gDekuKingWailLoopAnim;
extern s16 sDekuKingSurpriseAnimFrameData[];
extern JointIndex sDekuKingSurpriseAnimJointIndices[];
extern AnimationHeader gDekuKingSurpriseAnim;
extern s16 sDekuKingIdleAnimFrameData[];
extern JointIndex sDekuKingIdleAnimJointIndices[];
extern AnimationHeader gDekuKingIdleAnim;
extern u64 gDekuKingBodyTex[];
extern u64 gDekuKingMustacheAndLoinclothLeafTex[];
extern u64 gDekuKingCrownTex[];
extern u64 gDekuKingLeavesTex[];
extern u64 gDekuKingBeardLeavesTex[];
extern u64 gDekuKingEyeTex[];
extern u64 gDekuKingScepterTipTex[];
extern u64 gDekuKingScepterPetalTex[];
extern u64 gDekuKingSnoutTex[];
extern u64 gDekuKingMouthTex[];
extern Vtx object_dnoVtx_00ACC0[];
extern Gfx gDekuKingCrownDL[];
extern Gfx gDekuKingCrownLeavesDL[];
extern Gfx gDekuKingUpperBodyDL[];
extern Gfx gDekuKingEyesDL[];
extern Gfx gDekuKingLeftHandDL[];
extern Gfx gDekuKingLeftForearmDL[];
extern Gfx gDekuKingLeftForearmLowerLeavesDL[];
extern Gfx gDekuKingLeftForearmUpperLeavesDL[];
extern Gfx gDekuKingLeftUpperArmDL[];
extern Gfx gDekuKingLeftUpperArmLowerLeavesDL[];
extern Gfx gDekuKingLeftUpperArmUpperLeavesDL[];
extern Gfx gDekuKingSnoutDL[];
extern Gfx gDekuKingRightLowerMustacheDL[];
extern Gfx gDekuKingRightUpperMustacheDL[];
extern Gfx gDekuKingLeftLowerMustacheDL[];
extern Gfx gDekuKingLeftUpperMustacheDL[];
extern Gfx gDekuKingRightHandDL[];
extern Gfx gDekuKingScepterDL[];
extern Gfx gDekuKingRightForearmDL[];
extern Gfx gDekuKingRightForearmLowerLeavesDL[];
extern Gfx gDekuKingRightForearmUpperLeavesDL[];
extern Gfx gDekuKingRightUpperArmDL[];
extern Gfx gDekuKingRightUpperArmLowerLeavesDL[];
extern Gfx gDekuKingRightUpperArmUpperLeavesDL[];
extern Gfx gDekuKingPelvisDL[];
extern Gfx gDekuKingRightFootDL[];
extern Gfx gDekuKingRightShinDL[];
extern Gfx gDekuKingRightThighDL[];
extern Gfx gDekuKingLeftFootDL[];
extern Gfx gDekuKingLeftShinDL[];
extern Gfx gDekuKingLeftThighDL[];
extern StandardLimb gDekuKingRootLimb;
extern StandardLimb gDekuKingPelvisLimb;
extern StandardLimb gDekuKingLeftThighLimb;
extern StandardLimb gDekuKingLeftShinLimb;
extern StandardLimb gDekuKingLeftFootLimb;
extern StandardLimb gDekuKingRightThighLimb;
extern StandardLimb gDekuKingRightShinLimb;
extern StandardLimb gDekuKingRightFootLimb;
extern StandardLimb gDekuKingUpperBodyLimb;
extern StandardLimb gDekuKingRightUpperArmLimb;
extern StandardLimb gDekuKingRightUpperArmUpperLeavesLimb;
extern StandardLimb gDekuKingRightUpperArmLowerLeavesLimb;
extern StandardLimb gDekuKingRightForearmLimb;
extern StandardLimb gDekuKingRightForearmUpperLeavesLimb;
extern StandardLimb gDekuKingRightForearmLowerLeavesLimb;
extern StandardLimb gDekuKingRightHandLimb;
extern StandardLimb gDekuKingScepterLimb;
extern StandardLimb gDekuKingSnoutLimb;
extern StandardLimb gDekuKingLeftUpperMustacheLimb;
extern StandardLimb gDekuKingLeftLowerMustacheLimb;
extern StandardLimb gDekuKingRightUpperMustacheLimb;
extern StandardLimb gDekuKingRightLowerMustacheLimb;
extern StandardLimb gDekuKingLeftUpperArmLimb;
extern StandardLimb gDekuKingLeftUpperArmUpperLeavesLimb;
extern StandardLimb gDekuKingLeftUpperArmLowerLeavesLimb;
extern StandardLimb gDekuKingLeftForearmLimb;
extern StandardLimb gDekuKingLeftForearmUpperLeavesLimb;
extern StandardLimb gDekuKingLeftForearmLowerLeavesLimb;
extern StandardLimb gDekuKingLeftHandLimb;
extern StandardLimb gDekuKingEyesLimb;
extern StandardLimb gDekuKingCrownLimb;
extern StandardLimb gDekuKingCrownLeavesLimb;
extern void* gDekuKingSkelLimbs[];
extern FlexSkeletonHeader gDekuKingSkel;
extern s16 sDekuKingPointScepterAnimFrameData[];
extern JointIndex sDekuKingPointScepterAnimJointIndices[];
extern AnimationHeader gDekuKingPointScepterAnim;
#endif
