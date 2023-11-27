#ifndef OBJECT_GLA_H
#define OBJECT_GLA_H 1

typedef enum GerudoPurpleLimb {
    /* 0x00 */ GERUDO_PURPLE_LIMB_NONE,
    /* 0x01 */ GERUDO_PURPLE_ROOT_LIMB,
    /* 0x02 */ GERUDO_PURPLE_TORSO_LIMB,
    /* 0x03 */ GERUDO_PURPLE_NECK_LIMB,
    /* 0x04 */ GERUDO_PURPLE_PONYTAIL_LIMB,
    /* 0x05 */ GERUDO_PURPLE_VEIL_LIMB,
    /* 0x06 */ GERUDO_PURPLE_HEAD_LIMB,
    /* 0x07 */ GERUDO_PURPLE_RIGHT_UPPER_ARM_LIMB,
    /* 0x08 */ GERUDO_PURPLE_RIGHT_FOREARM_LIMB,
    /* 0x09 */ GERUDO_PURPLE_RIGHT_WRIST_LIMB,
    /* 0x0A */ GERUDO_PURPLE_RIGHT_HAND_LIMB,
    /* 0x0B */ GERUDO_PURPLE_GLAIVE_LIMB,
    /* 0x0C */ GERUDO_PURPLE_LEFT_UPPER_ARM_LIMB,
    /* 0x0D */ GERUDO_PURPLE_LEFT_FOREARM_LIMB,
    /* 0x0E */ GERUDO_PURPLE_LEFT_HAND_LIMB,
    /* 0x0F */ GERUDO_PURPLE_LEFT_THIGH_LIMB,
    /* 0x10 */ GERUDO_PURPLE_LEFT_SHIN_LIMB,
    /* 0x11 */ GERUDO_PURPLE_LEFT_FOOT_LIMB,
    /* 0x12 */ GERUDO_PURPLE_RIGHT_THIGH_LIMB,
    /* 0x13 */ GERUDO_PURPLE_RIGHT_SHIN_LIMB,
    /* 0x14 */ GERUDO_PURPLE_RIGHT_FOOT_LIMB,
    /* 0x15 */ GERUDO_PURPLE_WAIST_LIMB,
    /* 0x16 */ GERUDO_PURPLE_LIMB_MAX
} GerudoPurpleLimb;

extern s16 sGerudoPurpleRunningAwayCutsceneAnimFrameData[];
extern JointIndex sGerudoPurpleRunningAwayCutsceneAnimJointIndices[];
extern AnimationHeader gGerudoPurpleRunningAwayCutsceneAnim;
extern s16 sGerudoPurpleGreatBayCutsceneAnimFrameData[];
extern JointIndex sGerudoPurpleGreatBayCutsceneAnimJointIndices[];
extern AnimationHeader gGerudoPurpleGreatBayCutsceneAnim;
extern s16 sGerudoPurpleHorizontalSlashAnimFrameData[];
extern JointIndex sGerudoPurpleHorizontalSlashAnimJointIndices[];
extern AnimationHeader gGerudoPurpleHorizontalSlashAnim;
extern s16 sGerudoPurpleSlashToStandingAnimFrameData[];
extern JointIndex sGerudoPurpleSlashToStandingAnimJointIndices[];
extern AnimationHeader gGerudoPurpleSlashToStandingAnim;
extern s16 sGerudoPurpleFallingToGroundAnimFrameData[];
extern JointIndex sGerudoPurpleFallingToGroundAnimJointIndices[];
extern AnimationHeader gGerudoPurpleFallingToGroundAnim;
extern s16 sGerudoPurpleStandingToCrouchAnimFrameData[];
extern JointIndex sGerudoPurpleStandingToCrouchAnimJointIndices[];
extern AnimationHeader gGerudoPurpleStandingToCrouchAnim;
extern s16 sGerudoPurpleCrouchingLookAroundAnimFrameData[];
extern JointIndex sGerudoPurpleCrouchingLookAroundAnimJointIndices[];
extern AnimationHeader gGerudoPurpleCrouchingLookAroundAnim;
extern Vtx object_glaVtx_001FC0[];
extern Gfx gGerudoPurpleTorsoDL[];
extern Gfx gGerudoPurpleLeftUpperArmDL[];
extern Gfx gGerudoPurpleLeftForearmDL[];
extern Gfx gGerudoPurpleRightUpperArmDL[];
extern Gfx gGerudoPurpleRightForearmDL[];
extern Gfx gGerudoPurpleWaistDL[];
extern Gfx gGerudoPurpleRightThighDL[];
extern Gfx gGerudoPurpleRightShinDL[];
extern Gfx gGerudoPurpleLeftThighDL[];
extern Gfx gGerudoPurpleLeftShinDL[];
extern u64 gGerudoPurple1TLUT[];
extern u64 gGerudoPurpleSkinShadowTex[];
extern u64 gGerudoPurpleDarkFabricTex[];
extern u64 gGerudoPurpleNavelTex[];
extern u64 gGerudoPurpleChestJewelTex[];
extern u64 gGerudoPurpleFabricFoldTex[];
extern u64 gGerudoPurple2TLUT[];
extern u64 gGerudoPurpleSkinEdgeTex[];
extern u64 gGerudoPurpleEarTex[];
extern u64 gGerudoPurpleEyeOpenTex[];
extern u64 gGerudoPurpleGlaiveGuardTex[];
extern u64 gGerudoPurpleGlaiveBladeFabricPatternTex[];
extern u64 gGerudoPurpleShoeUpperTex[];
extern u64 gGerudoPurpleGlaiveHaftShoeSoleTex[];
extern u64 gGerudoPurpleEyeHalfTex[];
extern u64 gGerudoPurpleMetalTex[];
extern u64 gGerudoPurpleHairTex[];
extern u64 gGerudoPurpleLipsFingersTex[];
extern u64 gGerudoPurpleEyeClosedTex[];
extern Vtx object_glaVtx_006468[];
extern Gfx gGerudoPurpleRightHandDL[];
extern Gfx gGerudoPurpleGlaiveDL[];
extern Gfx gGerudoPurpleLeftHandDL[];
extern Gfx gGerudoPurpleLeftFootDL[];
extern Gfx gGerudoPurpleRightFootDL[];
extern Gfx gGerudoPurpleVeilDL[];
extern Gfx gGerudoPurplePonytailDL[];
extern Gfx gGerudoPurpleHeadDL[];
extern StandardLimb gGerudoPurpleRootLimb;
extern StandardLimb gGerudoPurpleTorsoLimb;
extern StandardLimb gGerudoPurpleNeckLimb;
extern StandardLimb gGerudoPurplePonytailLimb;
extern StandardLimb gGerudoPurpleVeilLimb;
extern StandardLimb gGerudoPurpleHeadLimb;
extern StandardLimb gGerudoPurpleRightUpperArmLimb;
extern StandardLimb gGerudoPurpleRightForearmLimb;
extern StandardLimb gGerudoPurpleRightWristLimb;
extern StandardLimb gGerudoPurpleRightHandLimb;
extern StandardLimb gGerudoPurpleGlaiveLimb;
extern StandardLimb gGerudoPurpleLeftUpperArmLimb;
extern StandardLimb gGerudoPurpleLeftForearmLimb;
extern StandardLimb gGerudoPurpleLeftHandLimb;
extern StandardLimb gGerudoPurpleLeftThighLimb;
extern StandardLimb gGerudoPurpleLeftShinLimb;
extern StandardLimb gGerudoPurpleLeftFootLimb;
extern StandardLimb gGerudoPurpleRightThighLimb;
extern StandardLimb gGerudoPurpleRightShinLimb;
extern StandardLimb gGerudoPurpleRightFootLimb;
extern StandardLimb gGerudoPurpleWaistLimb;
extern void* gGerudoPurpleSkelLimbs[];
extern FlexSkeletonHeader gGerudoPurpleSkel;
extern s16 sGerudoPurpleChargingAnimFrameData[];
extern JointIndex sGerudoPurpleChargingAnimJointIndices[];
extern AnimationHeader gGerudoPurpleChargingAnim;
extern s16 sGerudoPurpleLookingAboutAnimFrameData[];
extern JointIndex sGerudoPurpleLookingAboutAnimJointIndices[];
extern AnimationHeader gGerudoPurpleLookingAboutAnim;
extern s16 sGerudoPurpleWalkingAnimFrameData[];
extern JointIndex sGerudoPurpleWalkingAnimJointIndices[];
extern AnimationHeader gGerudoPurpleWalkingAnim;
#endif
