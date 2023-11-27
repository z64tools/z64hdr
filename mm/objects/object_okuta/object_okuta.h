#ifndef OBJECT_OKUTA_H
#define OBJECT_OKUTA_H 1

typedef enum OctorokLimb {
    /* 0x00 */ OCTOROK_LIMB_NONE,
    /* 0x01 */ OCTOROK_LIMB_BODY,
    /* 0x02 */ OCTOROK_LIMB_FRONT_LEFT_ARM_BASE,
    /* 0x03 */ OCTOROK_LIMB_FRONT_LEFT_ARM_MIDDLE,
    /* 0x04 */ OCTOROK_LIMB_FRONT_LEFT_ARM_END,
    /* 0x05 */ OCTOROK_LIMB_FRONT_RIGHT_ARM_BASE,
    /* 0x06 */ OCTOROK_LIMB_FRONT_RIGHT_ARM_MIDDLE,
    /* 0x07 */ OCTOROK_LIMB_FRONT_RIGHT_ARM_END,
    /* 0x08 */ OCTOROK_LIMB_BACK_LEFT_ARM_BASE,
    /* 0x09 */ OCTOROK_LIMB_BACK_LEFT_ARM_MIDDLE,
    /* 0x0A */ OCTOROK_LIMB_BACK_LEFT_ARM_END,
    /* 0x0B */ OCTOROK_LIMB_BACK_RIGHT_ARM_BASE,
    /* 0x0C */ OCTOROK_LIMB_BACK_RIGHT_ARM_MIDDLE,
    /* 0x0D */ OCTOROK_LIMB_BACK_RIGHT_ARM_END,
    /* 0x0E */ OCTOROK_LIMB_HEAD,
    /* 0x0F */ OCTOROK_LIMB_SNOUT,
    /* 0x10 */ OCTOROK_LIMB_MAX
} OctorokLimb;

extern s16 sOctorokShootAnimFrameData[];
extern JointIndex sOctorokShootAnimJointIndices[];
extern AnimationHeader gOctorokShootAnim;
extern Vtx object_okutaVtx_000460[];
extern Gfx gFrontRightArmBaseDL[];
extern Gfx gFrontRightArmMiddleDL[];
extern Gfx gFrontRightArmEndDL[];
extern Gfx gBackRightArmBaseDL[];
extern Gfx gBackRightArmMiddleDL[];
extern Gfx gBackRightArmEndDL[];
extern Gfx gBackLeftArmBaseDL[];
extern Gfx gBackLeftArmMiddleDL[];
extern Gfx gBackLeftArmEndDL[];
extern Gfx gFrontLeftArmBaseDL[];
extern Gfx gFrontLeftArmMiddleDL[];
extern Gfx gFrontLeftArmEndDL[];
extern Gfx gOctorokSnoutDL[];
extern Gfx gOctorokUnderEyeTrianglesDL[];
extern Gfx gOctorokHeadBottomDL[];
extern Gfx gOctorokHeadFrontDL[];
extern Gfx gOctorokHeadTopDL[];
extern Gfx gOctorokHeadBackDL[];
extern Gfx gOctorokEyesDL[];
extern Gfx gOctorokHeadDL[];
extern Gfx gOctorokBodyDL[];
extern u64 gOctorokRoughSkinTex[];
extern u64 gOctorokMouthTex[];
extern u64 gOctorokArmTex[];
extern u64 gOctorokFinTex[];
extern u64 gOctorokEyeTex[];
extern u64 gOctorokStripesTex[];
extern u64 gOctorokScalesTex[];
extern u64 gOctorokScalesOoTTex[];
extern u64 gOctorokHeadBottomTex[];
extern u64 gOctorokShadedSkinTex[];
extern u64 gOctorokProjectileTex[];
extern Vtx object_okutaVtx_003220[];
extern Gfx gOctorokProjectileDL[];
extern StandardLimb gOctorokBodyLimb;
extern StandardLimb gFrontLeftArmBaseLimb;
extern StandardLimb gFrontLeftArmMiddleLimb;
extern StandardLimb gFrontLeftArmEndLimb;
extern StandardLimb gFrontRightArmBaseLimb;
extern StandardLimb gFrontRightArmMiddleLimb;
extern StandardLimb gFrontRightArmEndLimb;
extern StandardLimb gBackLeftArmBaseLimb;
extern StandardLimb gBackLeftArmMiddleLimb;
extern StandardLimb gBackLeftArmEndLimb;
extern StandardLimb gBackRightArmBaseLimb;
extern StandardLimb gBackRightArmMiddleLimb;
extern StandardLimb gBackRightArmEndLimb;
extern StandardLimb gOctorokHeadLimb;
extern StandardLimb gOctorokSnoutLimb;
extern void* gOctorokSkelLimbs[];
extern SkeletonHeader gOctorokSkel;
extern s16 sOctorokDieAnimFrameData[];
extern JointIndex sOctorokDieAnimJointIndices[];
extern AnimationHeader gOctorokDieAnim;
extern s16 sOctorokHideAnimFrameData[];
extern JointIndex sOctorokHideAnimJointIndices[];
extern AnimationHeader gOctorokHideAnim;
extern s16 sOctorokFloatAnimFrameData[];
extern JointIndex sOctorokFloatAnimJointIndices[];
extern AnimationHeader gOctorokFloatAnim;
extern s16 sOctorokHitAnimFrameData[];
extern JointIndex sOctorokHitAnimJointIndices[];
extern AnimationHeader gOctorokHitAnim;
extern s16 sOctorokAppearAnimFrameData[];
extern JointIndex sOctorokAppearAnimJointIndices[];
extern AnimationHeader gOctorokAppearAnim;
#endif
