#ifndef OBJECT_PP_H
#define OBJECT_PP_H 1

typedef enum UnusedHiploopLimb {
    /* 0x00 */ UNUSED_HIPLOOP_LIMB_NONE,
    /* 0x01 */ UNUSED_HIPLOOP_LIMB_BODY,
    /* 0x02 */ UNUSED_HIPLOOP_LIMB_FRONT_LEFT_UPPER_LEG,
    /* 0x03 */ UNUSED_HIPLOOP_LIMB_FRONT_LEFT_LOWER_LEG,
    /* 0x04 */ UNUSED_HIPLOOP_LIMB_FRONT_LEFT_FOOT,
    /* 0x05 */ UNUSED_HIPLOOP_LIMB_FRONT_RIGHT_UPPER_LEG,
    /* 0x06 */ UNUSED_HIPLOOP_LIMB_FRONT_RIGHT_LOWER_LEG,
    /* 0x07 */ UNUSED_HIPLOOP_LIMB_FRONT_RIGHT_FOOT,
    /* 0x08 */ UNUSED_HIPLOOP_LIMB_MASK,
    /* 0x09 */ UNUSED_HIPLOOP_LIMB_LEFT_WING_BASE,
    /* 0x0A */ UNUSED_HIPLOOP_LIMB_LEFT_WING_MIDDLE,
    /* 0x0B */ UNUSED_HIPLOOP_LIMB_LEFT_WING_TIP,
    /* 0x0C */ UNUSED_HIPLOOP_LIMB_BACK_RIGHT_UPPER_LEG,
    /* 0x0D */ UNUSED_HIPLOOP_LIMB_BACK_RIGHT_LOWER_LEG,
    /* 0x0E */ UNUSED_HIPLOOP_LIMB_BACK_RIGHT_FOOT,
    /* 0x0F */ UNUSED_HIPLOOP_LIMB_RIGHT_WING_BASE,
    /* 0x10 */ UNUSED_HIPLOOP_LIMB_RIGHT_WING_MIDDLE,
    /* 0x11 */ UNUSED_HIPLOOP_LIMB_RIGHT_WING_TIP,
    /* 0x12 */ UNUSED_HIPLOOP_LIMB_CENTER_WING_BASE,
    /* 0x13 */ UNUSED_HIPLOOP_LIMB_CENTER_WING_MIDDLE,
    /* 0x14 */ UNUSED_HIPLOOP_LIMB_CENTER_WING_TIP,
    /* 0x15 */ UNUSED_HIPLOOP_LIMB_BACK_LEFT_UPPER_LEG,
    /* 0x16 */ UNUSED_HIPLOOP_LIMB_BACK_LEFT_LOWER_LEG,
    /* 0x17 */ UNUSED_HIPLOOP_LIMB_BACK_LEFT_FOOT,
    /* 0x18 */ UNUSED_HIPLOOP_LIMB_RIGHT_EYE,
    /* 0x19 */ UNUSED_HIPLOOP_LIMB_LEFT_EYE,
    /* 0x1A */ UNUSED_HIPLOOP_LIMB_MAX
} UnusedHiploopLimb;

typedef enum HiploopLimb {
    /* 0x00 */ HIPLOOP_LIMB_NONE,
    /* 0x01 */ HIPLOOP_LIMB_BODY,
    /* 0x02 */ HIPLOOP_LIMB_FRONT_LEFT_UPPER_LEG,
    /* 0x03 */ HIPLOOP_LIMB_FRONT_LEFT_LOWER_LEG,
    /* 0x04 */ HIPLOOP_LIMB_FRONT_LEFT_FOOT,
    /* 0x05 */ HIPLOOP_LIMB_FRONT_RIGHT_UPPER_LEG,
    /* 0x06 */ HIPLOOP_LIMB_FRONT_RIGHT_LOWER_LEG,
    /* 0x07 */ HIPLOOP_LIMB_FRONT_RIGHT_FOOT,
    /* 0x08 */ HIPLOOP_LIMB_MASK,
    /* 0x09 */ HIPLOOP_LIMB_LEFT_WING_BASE,
    /* 0x0A */ HIPLOOP_LIMB_LEFT_WING_MIDDLE,
    /* 0x0B */ HIPLOOP_LIMB_LEFT_WING_TIP,
    /* 0x0C */ HIPLOOP_LIMB_BACK_RIGHT_UPPER_LEG,
    /* 0x0D */ HIPLOOP_LIMB_BACK_RIGHT_LOWER_LEG,
    /* 0x0E */ HIPLOOP_LIMB_BACK_RIGHT_FOOT,
    /* 0x0F */ HIPLOOP_LIMB_RIGHT_WING_BASE,
    /* 0x10 */ HIPLOOP_LIMB_RIGHT_WING_MIDDLE,
    /* 0x11 */ HIPLOOP_LIMB_RIGHT_WING_TIP,
    /* 0x12 */ HIPLOOP_LIMB_CENTER_WING_BASE,
    /* 0x13 */ HIPLOOP_LIMB_CENTER_WING_MIDDLE,
    /* 0x14 */ HIPLOOP_LIMB_CENTER_WING_TIP,
    /* 0x15 */ HIPLOOP_LIMB_BACK_LEFT_UPPER_LEG,
    /* 0x16 */ HIPLOOP_LIMB_BACK_LEFT_LOWER_LEG,
    /* 0x17 */ HIPLOOP_LIMB_BACK_LEFT_FOOT,
    /* 0x18 */ HIPLOOP_LIMB_RIGHT_EYE,
    /* 0x19 */ HIPLOOP_LIMB_LEFT_EYE,
    /* 0x1A */ HIPLOOP_LIMB_MAX
} HiploopLimb;

extern s16 sHiploopAttackAnimFrameData[];
extern JointIndex sHiploopAttackAnimJointIndices[];
extern AnimationHeader gHiploopAttackAnim;
extern s16 sHiploopChargeAnimFrameData[];
extern JointIndex sHiploopChargeAnimJointIndices[];
extern AnimationHeader gHiploopChargeAnim;
extern s16 sHiploopDamageAnimFrameData[];
extern JointIndex sHiploopDamageAnimJointIndices[];
extern AnimationHeader gHiploopDamageAnim;
extern Vtx object_ppVtx_0017A0[];
extern Gfx gUnusedHiploopBodyDL[];
extern Gfx gUnusedHiploopLeftEyeDL[];
extern Gfx gUnusedHiploopRightEyeDL[];
extern Gfx gUnusedHiploopBackLeftUpperLegDL[];
extern Gfx gUnusedHiploopBackLeftLowerLegDL[];
extern Gfx gUnusedHiploopBackLeftFootDL[];
extern Gfx gUnusedHiploopCenterWingBaseDL[];
extern Gfx gUnusedHiploopCenterWingMiddleDL[];
extern Gfx gUnusedHiploopCenterWingTipDL[];
extern Gfx gUnusedHiploopRightWingBaseDL[];
extern Gfx gUnusedHiploopRightWingMiddleDL[];
extern Gfx gUnusedHiploopRightWingTipDL[];
extern Gfx gUnusedHiploopMaskDL[];
extern Gfx gUnusedHiploopBackRightUpperLegDL[];
extern Gfx gUnusedHiploopBackRightLowerLegDL[];
extern Gfx gUnusedHiploopBackRightFootDL[];
extern Gfx gUnusedHiploopLeftWingBaseDL[];
extern Gfx gUnusedHiploopLeftWingMiddleDL[];
extern Gfx gUnusedHiploopLeftWingTipDL[];
extern Gfx gUnusedHiploopFrontRightUpperLegDL[];
extern Gfx gUnusedHiploopFrontRightLowerLegDL[];
extern Gfx gUnusedHiploopFrontRightFootDL[];
extern Gfx gUnusedHiploopFrontLeftUpperLegDL[];
extern Gfx gUnusedHiploopFrontLeftLowerLegDL[];
extern Gfx gUnusedHiploopFrontLeftFootDL[];
extern u64 gUnusedHiploopEyeTex[];
extern u64 gUnusedHiploopUndersideTex[];
extern u64 gUnusedHiploopFaceTex[];
extern u64 gUnusedHiploopBackTex[];
extern u64 gUnusedHiploopCenterWingTex[];
extern u64 gUnusedHiploopSideWingsTex[];
extern u64 gUnusedHiploopBackCenterTex[];
extern u64 gUnusedHiploopLegTex[];
extern u64 gUnusedHiploopMaskTex[];
extern StandardLimb gUnusedHiploopBodyLimb;
extern StandardLimb gUnusedHiploopFrontLeftUpperLegLimb;
extern StandardLimb gUnusedHiploopFrontLeftLowerLegLimb;
extern StandardLimb gUnusedHiploopFrontLeftFootLimb;
extern StandardLimb gUnusedHiploopFrontRightUpperLegLimb;
extern StandardLimb gUnusedHiploopFrontRightLowerLegLimb;
extern StandardLimb gUnusedHiploopFrontRightFootLimb;
extern StandardLimb gUnusedHiploopMaskLimb;
extern StandardLimb gUnusedHiploopLeftWingBaseLimb;
extern StandardLimb gUnusedHiploopLeftWingMiddleLimb;
extern StandardLimb gUnusedHiploopLeftWingTipLimb;
extern StandardLimb gUnusedHiploopBackRightUpperLegLimb;
extern StandardLimb gUnusedHiploopBackRightLowerLegLimb;
extern StandardLimb gUnusedHiploopBackRightFootLimb;
extern StandardLimb gUnusedHiploopRightWingBaseLimb;
extern StandardLimb gUnusedHiploopRightWingMiddleLimb;
extern StandardLimb gUnusedHiploopRightWingTipLimb;
extern StandardLimb gUnusedHiploopCenterWingBaseLimb;
extern StandardLimb gUnusedHiploopCenterWingMiddleLimb;
extern StandardLimb gUnusedHiploopCenterWingTipLimb;
extern StandardLimb gUnusedHiploopBackLeftUpperLegLimb;
extern StandardLimb gUnusedHiploopBackLeftLowerLegLimb;
extern StandardLimb gUnusedHiploopBackLeftFootLimb;
extern StandardLimb gUnusedHiploopRightEyeLimb;
extern StandardLimb gUnusedHiploopLeftEyeLimb;
extern void* gUnusedHiploopSkelLimbs[];
extern FlexSkeletonHeader gUnusedHiploopSkel;
extern s16 sHiploopRoarAnimFrameData[];
extern JointIndex sHiploopRoarAnimJointIndices[];
extern AnimationHeader gHiploopRoarAnim;
extern s16 sHiploopWindUpAnimFrameData[];
extern JointIndex sHiploopWindUpAnimJointIndices[];
extern AnimationHeader gHiploopWindUpAnim;
extern s16 sHiploopIdleAnimFrameData[];
extern JointIndex sHiploopIdleAnimJointIndices[];
extern AnimationHeader gHiploopIdleAnim;
extern Vtx object_ppVtx_00A860[];
extern Gfx gHiploopBodyDL[];
extern Gfx gHiploopLeftEyeDL[];
extern Gfx gHiploopRightEyeDL[];
extern Gfx gHiploopBackLeftUpperLegDL[];
extern Gfx gHiploopBackLeftLowerLegDL[];
extern Gfx gHiploopBackLeftFootDL[];
extern Gfx gHiploopCenterWingBaseDL[];
extern Gfx gHiploopCenterWingMiddleDL[];
extern Gfx gHiploopCenterWingTipDL[];
extern Gfx gHiploopRightWingBaseDL[];
extern Gfx gHiploopRightWingMiddleDL[];
extern Gfx gHiploopRightWingTipDL[];
extern Gfx gHiploopMaskDL[];
extern Gfx gHiploopBackRightUpperLegDL[];
extern Gfx gHiploopBackRightLowerLegDL[];
extern Gfx gHiploopBackRightFootDL[];
extern Gfx gHiploopLeftWingBaseDL[];
extern Gfx gHiploopLeftWingMiddleDL[];
extern Gfx gHiploopLeftWingTipDL[];
extern Gfx gHiploopFrontRightUpperLegDL[];
extern Gfx gHiploopFrontRightLowerLegDL[];
extern Gfx gHiploopFrontRightFootDL[];
extern Gfx gHiploopFrontLeftUpperLegDL[];
extern Gfx gHiploopFrontLeftLowerLegDL[];
extern Gfx gHiploopFrontLeftFootDL[];
extern u64 gHiploopEyeTex[];
extern u64 gHiploopUndersideTex[];
extern u64 gHiploopFaceTex[];
extern u64 gHiploopBackTex[];
extern u64 gHiploopCenterWingTex[];
extern u64 gHiploopSideWingsTex[];
extern u64 gHiploopBackCenterTex[];
extern u64 gHiploopLegTex[];
extern u64 gHiploopMaskTex[];
extern StandardLimb gHiploopBodyLimb;
extern StandardLimb gHiploopFrontLeftUpperLegLimb;
extern StandardLimb gHiploopFrontLeftLowerLegLimb;
extern StandardLimb gHiploopFrontLeftFootLimb;
extern StandardLimb gHiploopFrontRightUpperLegLimb;
extern StandardLimb gHiploopFrontRightLowerLegLimb;
extern StandardLimb gHiploopFrontRightFootLimb;
extern StandardLimb gHiploopMaskLimb;
extern StandardLimb gHiploopLeftWingBaseLimb;
extern StandardLimb gHiploopLeftWingMiddleLimb;
extern StandardLimb gHiploopLeftWingTipLimb;
extern StandardLimb gHiploopBackRightUpperLegLimb;
extern StandardLimb gHiploopBackRightLowerLegLimb;
extern StandardLimb gHiploopBackRightFootLimb;
extern StandardLimb gHiploopRightWingBaseLimb;
extern StandardLimb gHiploopRightWingMiddleLimb;
extern StandardLimb gHiploopRightWingTipLimb;
extern StandardLimb gHiploopCenterWingBaseLimb;
extern StandardLimb gHiploopCenterWingMiddleLimb;
extern StandardLimb gHiploopCenterWingTipLimb;
extern StandardLimb gHiploopBackLeftUpperLegLimb;
extern StandardLimb gHiploopBackLeftLowerLegLimb;
extern StandardLimb gHiploopBackLeftFootLimb;
extern StandardLimb gHiploopRightEyeLimb;
extern StandardLimb gHiploopLeftEyeLimb;
extern void* gHiploopSkelLimbs[];
extern FlexSkeletonHeader gHiploopSkel;
extern s16 sHiploopWalkAnimFrameData[];
extern JointIndex sHiploopWalkAnimJointIndices[];
extern AnimationHeader gHiploopWalkAnim;
#endif
