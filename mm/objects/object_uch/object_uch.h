#ifndef OBJECT_UCH_H
#define OBJECT_UCH_H 1

typedef enum AlienLimb {
    /* 0x00 */ ALIEN_LIMB_NONE,
    /* 0x01 */ ALIEN_LIMB_ROOT,
    /* 0x02 */ ALIEN_LIMB_TORSO,
    /* 0x03 */ ALIEN_LIMB_RIGHT_SHOULDER,
    /* 0x04 */ ALIEN_LIMB_RIGHT_UPPER_ARM,
    /* 0x05 */ ALIEN_LIMB_RIGHT_FOREARM,
    /* 0x06 */ ALIEN_LIMB_RIGHT_HAND,
    /* 0x07 */ ALIEN_LIMB_LEFT_SHOULDER,
    /* 0x08 */ ALIEN_LIMB_LEFT_UPPER_ARM,
    /* 0x09 */ ALIEN_LIMB_LEFT_FOREARM,
    /* 0x0A */ ALIEN_LIMB_LEFT_HAND,
    /* 0x0B */ ALIEN_LIMB_HEAD,
    /* 0x0C */ ALIEN_LIMB_LEFT_EYE,
    /* 0x0D */ ALIEN_LIMB_RIGHT_EYE,
    /* 0x0E */ ALIEN_LIMB_MAX
} AlienLimb;

extern Vtx object_uchVtx_000000[];
extern Gfx gAlienEyeBeamDL[];
extern u64 gAlienEyeBeamMaskTex[];
extern TexturePtr object_uchTexCycleTexPtrs_000530[];
extern u8 object_uchTexCycleTexIndices_000534[];
extern AnimatedMatTexCycleParams gAlienEyeBeamTexAnimTexCycleParams_000538;
extern AnimatedMatTexScrollParams gAlienEyeBeamTexAnimTexScrollParams_000548[];
extern AnimatedMaterial gAlienEyeBeamTexAnim[];
extern AnimatedMaterial gAlienEmptyTexAnim[];
extern s16 sAlienDeathAnimFrameData[];
extern JointIndex sAlienDeathAnimJointIndices[];
extern AnimationHeader gAlienDeathAnim;
extern s16 sAlienJerkingAnimFrameData[];
extern JointIndex sAlienJerkingAnimJointIndices[];
extern AnimationHeader gAlienJerkingAnim;
extern Vtx object_uchVtx_0006E0[];
extern Gfx gAlienDeathFlashDL[];
extern u64 gAlienDeathFlashMaskTex[];
extern s16 sAlienHoldingCowAnimFrameData[];
extern JointIndex sAlienHoldingCowAnimJointIndices[];
extern AnimationHeader gAlienHoldingCowAnim;
extern s16 sAlienFloatAnimFrameData[];
extern JointIndex sAlienFloatAnimJointIndices[];
extern AnimationHeader gAlienFloatAnim;
extern Vtx object_uchVtx_001D90[];
extern Gfx gAlienHeadDL[];
extern Gfx gAlienRightEyeDL[];
extern Gfx gAlienLeftEyeDL[];
extern Gfx gAlienLeftShoulderDL[];
extern Gfx gAlienLeftUpperArmDL[];
extern Gfx gAlienLeftForearmDL[];
extern Gfx gAlienLeftHandDL[];
extern Gfx gAlienTorsoDL[];
extern Gfx gAlienRightShoulderDL[];
extern Gfx gAlienRightUpperArmDL[];
extern Gfx gAlienRightForearmDL[];
extern Gfx gAlienRightHandDL[];
extern u64 gAlienTLUT[];
extern u64 gAlienTorsoTex[];
extern u64 gAlienHandsAndTorsoUndersideTex[];
extern u64 gAlienHeadFrontAndArmsTex[];
extern u64 gAlienHeadBackTex[];
extern u64 gAlienEyeTex[];
extern StandardLimb gAlienRootLimb;
extern StandardLimb gAlienTorsoLimb;
extern StandardLimb gAlienRightShoulderLimb;
extern StandardLimb gAlienRightUpperArmLimb;
extern StandardLimb gAlienRightForearmLimb;
extern StandardLimb gAlienRightHandLimb;
extern StandardLimb gAlienLeftShoulderLimb;
extern StandardLimb gAlienLeftUpperArmLimb;
extern StandardLimb gAlienLeftForearmLimb;
extern StandardLimb gAlienLeftHandLimb;
extern StandardLimb gAlienHeadLimb;
extern StandardLimb gAlienLeftEyeLimb;
extern StandardLimb gAlienRightEyeLimb;
extern void* gAlienSkelLimbs[];
extern FlexSkeletonHeader gAlienSkel;
#endif
