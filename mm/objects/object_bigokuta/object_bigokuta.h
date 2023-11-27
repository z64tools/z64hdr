#ifndef OBJECT_BIGOKUTA_H
#define OBJECT_BIGOKUTA_H 1

typedef enum BigokutaLimb {
    /* 0x00 */ BIGOKUTA_LIMB_NONE,
    /* 0x01 */ BIGOKUTA_LIMB_BODY,
    /* 0x02 */ BIGOKUTA_LIMB_RIGHT_FRONT_ARM_BASE,
    /* 0x03 */ BIGOKUTA_LIMB_RIGHT_FRONT_ARM_END,
    /* 0x04 */ BIGOKUTA_LIMB_LEFT_FRONT_ARM_BASE,
    /* 0x05 */ BIGOKUTA_LIMB_LEFT_FRONT_ARM_END,
    /* 0x06 */ BIGOKUTA_LIMB_RIGHT_BACK_ARM_BASE,
    /* 0x07 */ BIGOKUTA_LIMB_RIGHT_BACK_ARM_END,
    /* 0x08 */ BIGOKUTA_LIMB_LEFT_BACK_ARM_BASE,
    /* 0x09 */ BIGOKUTA_LIMB_LEFT_BACK_ARM_END,
    /* 0x0A */ BIGOKUTA_LIMB_HEAD,
    /* 0x0B */ BIGOKUTA_LIMB_LEFT_TENTACLE_BASE,
    /* 0x0C */ BIGOKUTA_LIMB_LEFT_TENTACLE_TIP,
    /* 0x0D */ BIGOKUTA_LIMB_RIGHT_TENTACLE_BASE,
    /* 0x0E */ BIGOKUTA_LIMB_RIGHT_TENTACLE_TIP,
    /* 0x0F */ BIGOKUTA_LIMB_LEFT_WEAK_POINT,
    /* 0x10 */ BIGOKUTA_LIMB_RIGHT_WEAK_POINT,
    /* 0x11 */ BIGOKUTA_LIMB_CENTER_SNOUT,
    /* 0x12 */ BIGOKUTA_LIMB_RIGHT_SNOUT,
    /* 0x13 */ BIGOKUTA_LIMB_LEFT_SNOUT,
    /* 0x14 */ BIGOKUTA_LIMB_MAX
} BigokutaLimb;

extern s16 sBigOctoRiseOutOfWaterAnimFrameData[];
extern JointIndex sBigOctoRiseOutOfWaterAnimJointIndices[];
extern AnimationHeader gBigOctoRiseOutOfWaterAnim;
extern s16 sBigOctoDeathAnimFrameData[];
extern JointIndex sBigOctoDeathAnimJointIndices[];
extern AnimationHeader gBigOctoDeathAnim;
extern s16 sBigOctoHitAnimFrameData[];
extern JointIndex sBigOctoHitAnimJointIndices[];
extern AnimationHeader gBigOctoHitAnim;
extern s16 sBigOctoIdleAnimFrameData[];
extern JointIndex sBigOctoIdleAnimJointIndices[];
extern AnimationHeader gBigOctoIdleAnim;
extern s16 sBigOctoWalkAnimFrameData[];
extern JointIndex sBigOctoWalkAnimJointIndices[];
extern AnimationHeader gBigOctoWalkAnim;
extern Vtx object_bigokutaVtx_001CC0[];
extern Gfx gBigOctoBodyDL[];
extern Gfx gBigOctoCenterSnoutDL[];
extern Gfx gBigOctoLeftSnoutDL[];
extern Gfx gBigOctoRightSnoutDL[];
extern Gfx gBigOctoHeadShellDL[];
extern Gfx gBigOctoRightWeakPointDL[];
extern Gfx gBigOctoLeftWeakPointDL[];
extern Gfx gBigOctoRightTentacleBaseDL[];
extern Gfx gBigOctoRightTentacleTipDL[];
extern Gfx gBigOctoLeftTentacleBaseDL[];
extern Gfx gBigOctoLeftTentacleTipDL[];
extern Gfx gBigOctoBackRightArmBaseDL[];
extern Gfx gBigOctoBackRightArmEndDL[];
extern Gfx gBigOctoBackLeftArmBaseDL[];
extern Gfx gBigOctoBackLeftArmEndDL[];
extern Gfx gBigOctoFrontLeftArmBaseDL[];
extern Gfx gBigOctoFrontLeftArmEndDL[];
extern Gfx gBigOctoFrontRightArmBaseDL[];
extern Gfx gBigOctoFrontRightArmEndDL[];
extern u64 gBigOctoArmTopTex[];
extern u64 gBigOctoWeakPointCoverTex[];
extern u64 gBigOctoEyeTex[];
extern u64 gBigOctoShellTex[];
extern u64 gBigOctoHeadBaseTex[];
extern u64 gBigOctoBetweenEyesTex[];
extern u64 gBigOctoHeadUndersideTex[];
extern u64 gBigOctoEyeShellTex[];
extern u64 gBigOctoSnoutEdgeTex[];
extern u64 gBigOctoArmBottomTex[];
extern StandardLimb gBigOctoBodyLimb;
extern StandardLimb gBigOctoFrontRightArmBaseLimb;
extern StandardLimb gBigOctoFrontRightArmEndLimb;
extern StandardLimb gBigOctoFrontLeftArmBaseLimb;
extern StandardLimb gBigOctoFrontLeftArmEndLimb;
extern StandardLimb gBigOctoBackLeftArmBaseLimb;
extern StandardLimb gBigOctoBackLeftArmEndLimb;
extern StandardLimb gBigOctoBackRightArmBaseLimb;
extern StandardLimb gBigOctoBackRightArmEndLimb;
extern StandardLimb gBigOctoHeadShellLimb;
extern StandardLimb gBigOctoLeftTentacleBaseLimb;
extern StandardLimb gBigOctoLeftTentacleTipLimb;
extern StandardLimb gBigOctoRightTentacleBaseLimb;
extern StandardLimb gBigOctoRightTentacleTipLimb;
extern StandardLimb gBigOctoLeftWeakPointLimb;
extern StandardLimb gBigOctoRightWeakPointLimb;
extern StandardLimb gBigOctoCenterSnoutLimb;
extern StandardLimb gBigOctoRightSnoutLimb;
extern StandardLimb gBigOctoLeftSnoutLimb;
extern void* gBigOctoSkelLimbs[];
extern FlexSkeletonHeader gBigOctoSkel;
#endif
