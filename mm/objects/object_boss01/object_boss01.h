#ifndef OBJECT_BOSS01_H
#define OBJECT_BOSS01_H 1

typedef enum OdolwaLimb {
    /* 0x00 */ ODOLWA_LIMB_NONE,
    /* 0x01 */ ODOLWA_LIMB_ROOT,
    /* 0x02 */ ODOLWA_LIMB_PELVIS,
    /* 0x03 */ ODOLWA_LIMB_RIGHT_LEG_ROOT,
    /* 0x04 */ ODOLWA_LIMB_RIGHT_THIGH,
    /* 0x05 */ ODOLWA_LIMB_RIGHT_LOWER_LEG_ROOT,
    /* 0x06 */ ODOLWA_LIMB_RIGHT_SHIN,
    /* 0x07 */ ODOLWA_LIMB_RIGHT_FOOT,
    /* 0x08 */ ODOLWA_LIMB_LEFT_LEG_ROOT,
    /* 0x09 */ ODOLWA_LIMB_LEFT_THIGH,
    /* 0x0A */ ODOLWA_LIMB_LEFT_LOWER_LEG_ROOT,
    /* 0x0B */ ODOLWA_LIMB_LEFT_SHIN,
    /* 0x0C */ ODOLWA_LIMB_LEFT_FOOT,
    /* 0x0D */ ODOLWA_LIMB_UPPER_BODY_ROOT,
    /* 0x0E */ ODOLWA_LIMB_UPPER_BODY_WRAPPER,
    /* 0x0F */ ODOLWA_LIMB_TORSO,
    /* 0x10 */ ODOLWA_LIMB_LEFT_ARM_ROOT,
    /* 0x11 */ ODOLWA_LIMB_LEFT_UPPER_ARM,
    /* 0x12 */ ODOLWA_LIMB_LEFT_LOWER_ARM_ROOT,
    /* 0x13 */ ODOLWA_LIMB_LEFT_FOREARM,
    /* 0x14 */ ODOLWA_LIMB_LEFT_BANGLE,
    /* 0x15 */ ODOLWA_LIMB_LEFT_HAND_ROOT,
    /* 0x16 */ ODOLWA_LIMB_LEFT_HAND,
    /* 0x17 */ ODOLWA_LIMB_SHIELD,
    /* 0x18 */ ODOLWA_LIMB_RIGHT_ARM_ROOT,
    /* 0x19 */ ODOLWA_LIMB_RIGHT_UPPER_ARM,
    /* 0x1A */ ODOLWA_LIMB_RIGHT_LOWER_ARM_ROOT,
    /* 0x1B */ ODOLWA_LIMB_RIGHT_FOREARM,
    /* 0x1C */ ODOLWA_LIMB_RIGHT_BANGLE,
    /* 0x1D */ ODOLWA_LIMB_RIGHT_HAND_ROOT,
    /* 0x1E */ ODOLWA_LIMB_RIGHT_HAND,
    /* 0x1F */ ODOLWA_LIMB_SWORD,
    /* 0x20 */ ODOLWA_LIMB_HEAD,
    /* 0x21 */ ODOLWA_LIMB_RIGHT_EARRING_ROOT,
    /* 0x22 */ ODOLWA_LIMB_RIGHT_EARRING,
    /* 0x23 */ ODOLWA_LIMB_LEFT_EARRING_ROOT,
    /* 0x24 */ ODOLWA_LIMB_LEFT_EARRING,
    /* 0x25 */ ODOLWA_LIMB_RIGHT_PLUME_ROOT,
    /* 0x26 */ ODOLWA_LIMB_RIGHT_PLUME_BASE,
    /* 0x27 */ ODOLWA_LIMB_RIGHT_LOWER_PLUME_ROOT,
    /* 0x28 */ ODOLWA_LIMB_RIGHT_PLUME_MIDDLE,
    /* 0x29 */ ODOLWA_LIMB_RIGHT_PLUME_TIP,
    /* 0x2A */ ODOLWA_LIMB_LEFT_PLUME_ROOT,
    /* 0x2B */ ODOLWA_LIMB_LEFT_PLUME_BASE,
    /* 0x2C */ ODOLWA_LIMB_LEFT_LOWER_PLUME_ROOT,
    /* 0x2D */ ODOLWA_LIMB_LEFT_PLUME_MIDDLE,
    /* 0x2E */ ODOLWA_LIMB_LEFT_PLUME_TIP,
    /* 0x2F */ ODOLWA_LIMB_CENTER_PLUME_ROOT,
    /* 0x30 */ ODOLWA_LIMB_CENTER_PLUME_BASE,
    /* 0x31 */ ODOLWA_LIMB_CENTER_LOWER_PLUME_ROOT,
    /* 0x32 */ ODOLWA_LIMB_CENTER_PLUME_MIDDLE,
    /* 0x33 */ ODOLWA_LIMB_CENTER_PLUME_TIP,
    /* 0x34 */ ODOLWA_LIMB_MAX
} OdolwaLimb;

typedef enum OdolwaBugLimb {
    /* 0x00 */ ODOLWA_BUG_LIMB_NONE,
    /* 0x01 */ ODOLWA_BUG_LIMB_ROOT,
    /* 0x02 */ ODOLWA_BUG_LIMB_BODY,
    /* 0x03 */ ODOLWA_BUG_LIMB_FRONT_RIGHT_LEG_ROOT,
    /* 0x04 */ ODOLWA_BUG_LIMB_FRONT_RIGHT_UPPER_LEG,
    /* 0x05 */ ODOLWA_BUG_LIMB_FRONT_RIGHT_LOWER_LEG,
    /* 0x06 */ ODOLWA_BUG_LIMB_MIDDLE_LEFT_LEG_ROOT,
    /* 0x07 */ ODOLWA_BUG_LIMB_MIDDLE_LEFT_UPPER_LEG,
    /* 0x08 */ ODOLWA_BUG_LIMB_MIDDLE_LEFT_LOWER_LEG,
    /* 0x09 */ ODOLWA_BUG_LIMB_MIDDLE_RIGHT_LEG_ROOT,
    /* 0x0A */ ODOLWA_BUG_LIMB_MIDDLE_RIGHT_UPPER_LEG,
    /* 0x0B */ ODOLWA_BUG_LIMB_MIDDLE_RIGHT_LOWER_LEG,
    /* 0x0C */ ODOLWA_BUG_LIMB_BACK_LEFT_LEG_ROOT,
    /* 0x0D */ ODOLWA_BUG_LIMB_BACK_LEFT_UPPER_LEG,
    /* 0x0E */ ODOLWA_BUG_LIMB_BACK_LEFT_LOWER_LEG,
    /* 0x0F */ ODOLWA_BUG_LIMB_BACK_RIGHT_LEG_ROOT,
    /* 0x10 */ ODOLWA_BUG_LIMB_BACK_RIGHT_UPPER_LEG,
    /* 0x11 */ ODOLWA_BUG_LIMB_BACK_RIGHT_LOWER_LEG,
    /* 0x12 */ ODOLWA_BUG_LIMB_FRONT_LEFT_LEG_ROOT,
    /* 0x13 */ ODOLWA_BUG_LIMB_FRONT_LEFT_UPPER_LEG,
    /* 0x14 */ ODOLWA_BUG_LIMB_FRONT_LEFT_LOWER_LEG,
    /* 0x15 */ ODOLWA_BUG_LIMB_MAX
} OdolwaBugLimb;

extern s16 sOdolwaVerticalSlashAnimFrameData[];
extern JointIndex sOdolwaVerticalSlashAnimJointIndices[];
extern AnimationHeader gOdolwaVerticalSlashAnim;
extern s16 sOdolwaHorizontalSlashAnimFrameData[];
extern JointIndex sOdolwaHorizontalSlashAnimJointIndices[];
extern AnimationHeader gOdolwaHorizontalSlashAnim;
extern s16 sOdolwaAtAttentionAnimFrameData[];
extern JointIndex sOdolwaAtAttentionAnimJointIndices[];
extern AnimationHeader gOdolwaAtAttentionAnim;
extern Vtx object_boss01Vtx_001A30[];
extern Gfx gOdolwaPelvisDL[];
extern Gfx gOdolwaHeadDL[];
extern Gfx gOdolwaCenterPlumeTipDL[];
extern Gfx gOdolwaCenterPlumeMiddleDL[];
extern Gfx gOdolwaCenterPlumeBaseDL[];
extern Gfx gOdolwaLeftPlumeTipDL[];
extern Gfx gOdolwaLeftPlumeMiddleDL[];
extern Gfx gOdolwaLeftPlumeBaseDL[];
extern Gfx gOdolwaRightPlumeTipDL[];
extern Gfx gOdolwaRightPlumeMiddleDL[];
extern Gfx gOdolwaRightPlumeBaseDL[];
extern Gfx gOdolwaLeftEarringDL[];
extern Gfx gOdolwaRightEarringDL[];
extern Gfx gOdolwaSwordDL[];
extern Gfx gOdolwaRightHandDL[];
extern Gfx gOdolwaRightForearmDL[];
extern Gfx gOdolwaRightBangleDL[];
extern Gfx gOdolwaRightUpperArmDL[];
extern Gfx gOdolwaShieldDL[];
extern Gfx gOdolwaLeftHandDL[];
extern Gfx gOdolwaLeftForearmDL[];
extern Gfx gOdolwaLeftBangleDL[];
extern Gfx gOdolwaLeftUpperArmDL[];
extern Gfx gOdolwaTorsoDL[];
extern Gfx gOdolwaLeftFootDL[];
extern Gfx gOdolwaLeftShinDL[];
extern Gfx gOdolwaLeftThighDL[];
extern Gfx gOdolwaRightFootDL[];
extern Gfx gOdolwaRightShinDL[];
extern Gfx gOdolwaRightThighDL[];
extern u64 gOdolwaPantsAndSwordHiltTLUT[];
extern u64 gOdolwaFaceAndShoeTLUT[];
extern u64 gOdolwaSkinTLUT[];
extern u64 gOdolwaEarBangleAndShieldTLUT[];
extern u64 gOdolwaClothTLUT[];
extern u64 gOdolwaTorsoTLUT[];
extern u64 gOdolwaPantsAndSwordHiltTex[];
extern u64 gOdolwaFaceAndShoeTex[];
extern u64 gOdolwaSkinTex[];
extern u64 gOdolwaEarBangleAndShieldTex[];
extern u64 gOdolwaEarringTex[];
extern u64 gOdolwaPlumeTex[];
extern u64 gOdolwaClothTex[];
extern u64 gOdolwaTorsoTex[];
extern u64 gOdolwaSwordBladeTex[];
extern u64 gOdolwaSwordTrailTex[];
extern u64 gOdolwaSwordTrailMaskTex[];
extern Vtx gOdolwaSwordTrailVtx[];
extern Gfx gOdolwaSwordTrailDL[];
extern Vtx object_boss01Vtx_00C5B0[];
extern Gfx gOdolwaEyeDL[];
extern u64 gOdolwaEyeTex[];
extern Vtx object_boss01Vtx_00C768[];
extern Gfx gOdolwaShadowMaterialDL[];
extern Gfx gOdolwaShadowModelDL[];
extern u64 gOdolwaTitleCardTex[];
extern Vtx object_boss01Vtx_00DBF8[];
extern Gfx gOdolwaMothMaterialDL[];
extern Gfx gOdolwaMothModelDL[];
extern u64 gOdolwaMothTex[];
extern Vtx object_boss01Vtx_00E0E8[];
extern Gfx gOdolwaFallingBlockDL[];
extern u64 gOdolwaFallingBlockTLUT[];
extern u64 gOdolwaFallingBlockTex[];
extern StandardLimb gOdolwaRootLimb;
extern StandardLimb gOdolwaPelvisLimb;
extern StandardLimb gOdolwaRightLegRootLimb;
extern StandardLimb gOdolwaRightThighLimb;
extern StandardLimb gOdolwaRightLowerLegRootLimb;
extern StandardLimb gOdolwaRightShinLimb;
extern StandardLimb gOdolwaRightFootLimb;
extern StandardLimb gOdolwaLeftLegRootLimb;
extern StandardLimb gOdolwaLeftThighLimb;
extern StandardLimb gOdolwaLeftLowerLegRootLimb;
extern StandardLimb gOdolwaLeftShinLimb;
extern StandardLimb gOdolwaLeftFootLimb;
extern StandardLimb gOdolwaUpperBodyRootLimb;
extern StandardLimb gOdolwaUpperBodyWrapperLimb;
extern StandardLimb gOdolwaTorsoLimb;
extern StandardLimb gOdolwaLeftArmRootLimb;
extern StandardLimb gOdolwaLeftUpperArmLimb;
extern StandardLimb gOdolwaLeftLowerArmRootLimb;
extern StandardLimb gOdolwaLeftForearmLimb;
extern StandardLimb gOdolwaLeftBangleLimb;
extern StandardLimb gOdolwaLeftHandRootLimb;
extern StandardLimb gOdolwaLeftHandLimb;
extern StandardLimb gOdolwaShieldLimb;
extern StandardLimb gOdolwaRightArmRootLimb;
extern StandardLimb gOdolwaRightUpperArmLimb;
extern StandardLimb gOdolwaRightLowerArmRootLimb;
extern StandardLimb gOdolwaRightForearmLimb;
extern StandardLimb gOdolwaRightBangleLimb;
extern StandardLimb gOdolwaRightHandRootLimb;
extern StandardLimb gOdolwaRightHandLimb;
extern StandardLimb gOdolwaSwordLimb;
extern StandardLimb gOdolwaHeadLimb;
extern StandardLimb gOdolwaRightEarringRootLimb;
extern StandardLimb gOdolwaRightEarringLimb;
extern StandardLimb gOdolwaLeftEarringRootLimb;
extern StandardLimb gOdolwaLeftEarringLimb;
extern StandardLimb gOdolwaRightPlumeRootLimb;
extern StandardLimb gOdolwaRightPlumeBaseLimb;
extern StandardLimb gOdolwaRightLowerPlumeRootLimb;
extern StandardLimb gOdolwaRightPlumeMiddleLimb;
extern StandardLimb gOdolwaRightPlumeTipLimb;
extern StandardLimb gOdolwaLeftPlumeRootLimb;
extern StandardLimb gOdolwaLeftPlumeBaseLimb;
extern StandardLimb gOdolwaLeftLowerPlumeRootLimb;
extern StandardLimb gOdolwaLeftPlumeMiddleLimb;
extern StandardLimb gOdolwaLeftPlumeTipLimb;
extern StandardLimb gOdolwaCenterPlumeRootLimb;
extern StandardLimb gOdolwaCenterPlumeBaseLimb;
extern StandardLimb gOdolwaCenterLowerPlumeRootLimb;
extern StandardLimb gOdolwaCenterPlumeMiddleLimb;
extern StandardLimb gOdolwaCenterPlumeTipLimb;
extern void* gOdolwaSkelLimbs[];
extern FlexSkeletonHeader gOdolwaSkel;
extern s16 sOdolwaClimbAnimFrameData[];
extern JointIndex sOdolwaClimbAnimJointIndices[];
extern AnimationHeader gOdolwaClimbAnim;
extern s16 sOdolwaDamagedStartAnimFrameData[];
extern JointIndex sOdolwaDamagedStartAnimJointIndices[];
extern AnimationHeader gOdolwaDamagedStartAnim;
extern s16 sOdolwaShieldGuardAnimFrameData[];
extern JointIndex sOdolwaShieldGuardAnimJointIndices[];
extern AnimationHeader gOdolwaShieldGuardAnim;
extern s16 sOdolwaSwordGuardAnimFrameData[];
extern JointIndex sOdolwaSwordGuardAnimJointIndices[];
extern AnimationHeader gOdolwaSwordGuardAnim;
extern s16 sOdolwaDamagedLoopAnimFrameData[];
extern JointIndex sOdolwaDamagedLoopAnimJointIndices[];
extern AnimationHeader gOdolwaDamagedLoopAnim;
extern s16 sOdolwaDeathAnimFrameData[];
extern JointIndex sOdolwaDeathAnimJointIndices[];
extern AnimationHeader gOdolwaDeathAnim;
extern s16 sOdolwaMothSummonDanceAnimFrameData[];
extern JointIndex sOdolwaMothSummonDanceAnimJointIndices[];
extern AnimationHeader gOdolwaMothSummonDanceAnim;
extern s16 sOdolwaCrouchAnimFrameData[];
extern JointIndex sOdolwaCrouchAnimJointIndices[];
extern AnimationHeader gOdolwaCrouchAnim;
extern s16 sOdolwaJumpAnimFrameData[];
extern JointIndex sOdolwaJumpAnimJointIndices[];
extern AnimationHeader gOdolwaJumpAnim;
extern s16 sOdolwaFallingSlashAnimFrameData[];
extern JointIndex sOdolwaFallingSlashAnimJointIndices[];
extern AnimationHeader gOdolwaFallingSlashAnim;
extern s16 sOdolwaKickAnimFrameData[];
extern JointIndex sOdolwaKickAnimJointIndices[];
extern AnimationHeader gOdolwaKickAnim;
extern s16 sOdolwaStunAnimFrameData[];
extern JointIndex sOdolwaStunAnimJointIndices[];
extern AnimationHeader gOdolwaStunAnim;
extern s16 sOdolwaShieldBashAnimFrameData[];
extern JointIndex sOdolwaShieldBashAnimJointIndices[];
extern AnimationHeader gOdolwaShieldBashAnim;
extern s16 sOdolwaRunAnimFrameData[];
extern JointIndex sOdolwaRunAnimJointIndices[];
extern AnimationHeader gOdolwaRunAnim;
extern s16 sOdolwaSpinAttackAnimFrameData[];
extern JointIndex sOdolwaSpinAttackAnimJointIndices[];
extern AnimationHeader gOdolwaSpinAttackAnim;
extern s16 sOdolwaReadyAnimFrameData[];
extern JointIndex sOdolwaReadyAnimJointIndices[];
extern AnimationHeader gOdolwaReadyAnim;
extern s16 sOdolwaIntroSlashAnimFrameData[];
extern JointIndex sOdolwaIntroSlashAnimJointIndices[];
extern AnimationHeader gOdolwaIntroSlashAnim;
extern s16 sOdolwaSpinSwordAnimFrameData[];
extern JointIndex sOdolwaSpinSwordAnimJointIndices[];
extern AnimationHeader gOdolwaSpinSwordAnim;
extern s16 sOdolwaVerticalHopAnimFrameData[];
extern JointIndex sOdolwaVerticalHopAnimJointIndices[];
extern AnimationHeader gOdolwaVerticalHopAnim;
extern s16 sOdolwaHipShakeDanceAnimFrameData[];
extern JointIndex sOdolwaHipShakeDanceAnimJointIndices[];
extern AnimationHeader gOdolwaHipShakeDanceAnim;
extern s16 sOdolwaUpAndDownDanceAnimFrameData[];
extern JointIndex sOdolwaUpAndDownDanceAnimJointIndices[];
extern AnimationHeader gOdolwaUpAndDownDanceAnim;
extern s16 sOdolwaArmSwingDanceAnimFrameData[];
extern JointIndex sOdolwaArmSwingDanceAnimJointIndices[];
extern AnimationHeader gOdolwaArmSwingDanceAnim;
extern s16 sOdolwaThurstAttackAnimFrameData[];
extern JointIndex sOdolwaThurstAttackAnimJointIndices[];
extern AnimationHeader gOdolwaThurstAttackAnim;
extern s16 sOdolwaDoubleSlashAnimFrameData[];
extern JointIndex sOdolwaDoubleSlashAnimJointIndices[];
extern AnimationHeader gOdolwaDoubleSlashAnim;
extern s16 sOdolwaSideToSideHopAnimFrameData[];
extern JointIndex sOdolwaSideToSideHopAnimJointIndices[];
extern AnimationHeader gOdolwaSideToSideHopAnim;
extern s16 sOdolwaSideToSideDanceAnimFrameData[];
extern JointIndex sOdolwaSideToSideDanceAnimJointIndices[];
extern AnimationHeader gOdolwaSideToSideDanceAnim;
extern s16 sOdolwaSpinDanceAnimFrameData[];
extern JointIndex sOdolwaSpinDanceAnimJointIndices[];
extern AnimationHeader gOdolwaSpinDanceAnim;
extern s16 sOdolwaJumpDanceAnimFrameData[];
extern JointIndex sOdolwaJumpDanceAnimJointIndices[];
extern AnimationHeader gOdolwaJumpDanceAnim;
extern Vtx object_boss01Vtx_0204C0[];
extern Vtx gOdolwaUnusedVtx[];
extern Vtx object_boss01Vtx_0207F0[];
extern Gfx gOdolwaBugLightBodyDL[];
extern Gfx gOdolwaBugDarkBodyDL[];
extern Gfx gOdolwaBugFrontLeftUpperLegDL[];
extern Gfx gOdolwaBugFrontLeftLowerLegDL[];
extern Gfx gOdolwaBugBackRightUpperLegDL[];
extern Gfx gOdolwaBugBackRightLowerLegDL[];
extern Gfx gOdolwaBugBackLeftUpperLegDL[];
extern Gfx gOdolwaBugBackLeftLowerLegDL[];
extern Gfx gOdolwaBugMiddleRightUpperLegDL[];
extern Gfx gOdolwaBugMiddleRightLowerLegDL[];
extern Gfx gOdolwaBugMiddleLeftUpperLegDL[];
extern Gfx gOdolwaBugMiddleLeftLowerLegDL[];
extern Gfx gOdolwaBugFrontRightUpperLegDL[];
extern Gfx gOdolwaBugFrontRightLowerLegDL[];
extern u64 gOdolwaBugUndersideTLUT[];
extern u64 gOdolwaBugUndersideTex[];
extern u64 gOdolwaBugBodyTex[];
extern u64 gOdolwaBugLegTex[];
extern Gfx gOdolwaBugDullLegMaterialDL[];
extern Gfx gOdolwaBugBrightLegMaterialDL[];
extern StandardLimb gOdolwaBugRootLimb;
extern StandardLimb gOdolwaBugBodyLimb;
extern StandardLimb gOdolwaBugFrontRightLegRootLimb;
extern StandardLimb gOdolwaBugFrontRightUpperLegLimb;
extern StandardLimb gOdolwaBugFrontRightLowerLegLimb;
extern StandardLimb gOdolwaBugMiddleLeftLegRootLimb;
extern StandardLimb gOdolwaBugMiddleLeftUpperLegLimb;
extern StandardLimb gOdolwaBugMiddleLeftLowerLegLimb;
extern StandardLimb gOdolwaBugMiddleRightLegRootLimb;
extern StandardLimb gOdolwaBugMiddleRightUpperLegLimb;
extern StandardLimb gOdolwaBugMiddleRightLowerLegLimb;
extern StandardLimb gOdolwaBugBackLeftLegRootLimb;
extern StandardLimb gOdolwaBugBackLeftUpperLegLimb;
extern StandardLimb gOdolwaBugBackLeftLowerLegLimb;
extern StandardLimb gOdolwaBugBackRightLegRootLimb;
extern StandardLimb gOdolwaBugBackRightUpperLegLimb;
extern StandardLimb gOdolwaBugBackRightLowerLegLimb;
extern StandardLimb gOdolwaBugFrontLeftLegRootLimb;
extern StandardLimb gOdolwaBugFrontLeftUpperLegLimb;
extern StandardLimb gOdolwaBugFrontLeftLowerLegLimb;
extern void* gOdolwaBugSkelLimbs[];
extern FlexSkeletonHeader gOdolwaBugSkel;
extern s16 sOdolwaBugCrawlAnimFrameData[];
extern JointIndex sOdolwaBugCrawlAnimJointIndices[];
extern AnimationHeader gOdolwaBugCrawlAnim;
#endif
