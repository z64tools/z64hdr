#ifndef OBJECT_PO_H
#define OBJECT_PO_H 1

typedef enum PoeLimb {
    /* 0x00 */ POE_LIMB_NONE,
    /* 0x01 */ POE_LIMB_ROOT,
    /* 0x02 */ POE_LIMB_ROOT_WRAPPER,
    /* 0x03 */ POE_LIMB_BOTTOM_CLOAK_ROOT,
    /* 0x04 */ POE_LIMB_BOTTOM_CLOAK,
    /* 0x05 */ POE_LIMB_TOP_CLOAK,
    /* 0x06 */ POE_LIMB_LEFT_ARM_ROOT,
    /* 0x07 */ POE_LIMB_LEFT_ARM_WRAPPER,
    /* 0x08 */ POE_LIMB_LEFT_FOREARM_ROOT,
    /* 0x09 */ POE_LIMB_LEFT_FOREARM,
    /* 0x0A */ POE_LIMB_LEFT_UPPER_ARM,
    /* 0x0B */ POE_LIMB_FACE,
    /* 0x0C */ POE_LIMB_RIGHT_ARM_ROOT,
    /* 0x0D */ POE_LIMB_RIGHT_ARM_WRAPPER,
    /* 0x0E */ POE_LIMB_RIGHT_FOREARM_ROOT,
    /* 0x0F */ POE_LIMB_RIGHT_ARM_HAND_ROOT,
    /* 0x10 */ POE_LIMB_RIGHT_ARM_HAND,
    /* 0x11 */ POE_LIMB_LANTERN_ROOT,
    /* 0x12 */ POE_LIMB_LANTERN,
    /* 0x13 */ POE_LIMB_RIGHT_FOREARM,
    /* 0x14 */ POE_LIMB_RIGHT_UPPER_ARM,
    /* 0x15 */ POE_LIMB_MAX
} PoeLimb;

extern s16 sPoeAttackAnimFrameData[];
extern JointIndex sPoeAttackAnimJointIndices[];
extern AnimationHeader gPoeAttackAnim;
extern s16 sPoeDamagedAnimFrameData[];
extern JointIndex sPoeDamagedAnimJointIndices[];
extern AnimationHeader gPoeDamagedAnim;
extern s16 sPoeFleeAnimFrameData[];
extern JointIndex sPoeFleeAnimJointIndices[];
extern AnimationHeader gPoeFleeAnim;
extern s16 sPoeFloatAnimFrameData[];
extern JointIndex sPoeFloatAnimJointIndices[];
extern AnimationHeader gPoeFloatAnim;
extern s16 sPoeAppearAnimFrameData[];
extern JointIndex sPoeAppearAnimJointIndices[];
extern AnimationHeader gPoeAppearAnim;
extern s16 sPoeDisappearAnimFrameData[];
extern JointIndex sPoeDisappearAnimJointIndices[];
extern AnimationHeader gPoeDisappearAnim;
extern Vtx object_poVtx_0015C0[];
extern Gfx gPoeRightUpperArmDL[];
extern Vtx object_poVtx_0016B8[];
extern Gfx gPoeLeftForearmDL[];
extern Vtx object_poVtx_001A18[];
extern Gfx gPoeLeftUpperArmDL[];
extern Vtx object_poVtx_001B10[];
extern Gfx gPoeRightForearmDL[];
extern Vtx object_poVtx_001C08[];
extern Gfx gPoeRightHandDL[];
extern Vtx object_poVtx_001CE0[];
extern Gfx gPoeCloak1DL[];
extern Vtx object_poVtx_002158[];
extern Gfx gPoeBurnDL[];
extern Vtx object_poVtx_0027C0[];
extern Gfx gPoeFaceDL[];
extern Vtx object_poVtx_0029D8[];
extern Gfx gPoeLanternDL[];
extern Vtx object_poVtx_002EB8[];
extern Gfx gPoeCloak2DL[];
extern u64 gPoeSoulTex[];
extern Vtx object_poVtx_003810[];
extern Gfx gPoeSoulDL[];
extern u64 gPoeArmTex[];
extern u64 gPoeCloak1Tex[];
extern u64 gPoeCloak2Tex[];
extern u64 gPoeCloak3Tex[];
extern u64 gPoeEyeTex[];
extern u64 gPoeLanternTopTex[];
extern u64 gPoeLanternBottomTex[];
extern u64 gPoeLanternMiddleTex[];
extern u64 gPoeBurnTex[];
extern u64 gPoeBurnEyeTex[];
extern StandardLimb gPoeRootLimb;
extern StandardLimb gPoeRootWrapperLimb;
extern StandardLimb gPoeBottomCloakRootLimb;
extern StandardLimb gPoeBottomCloakLimb;
extern StandardLimb gPoeTopCloakLimb;
extern StandardLimb gPoeLeftArmRootLimb;
extern StandardLimb gPoeLeftArmWrapperLimb;
extern StandardLimb gPoeLeftForearmRootLimb;
extern StandardLimb gPoeLeftForearmLimb;
extern StandardLimb gPoeLeftUpperArmLimb;
extern StandardLimb gPoeFaceLimb;
extern StandardLimb gPoeRightArmRootLimb;
extern StandardLimb gPoeRightArmWrapperLimb;
extern StandardLimb gPoeRightForearmRootLimb;
extern StandardLimb gPoeRightArmHandRootLimb;
extern StandardLimb gPoeRightArmHandLimb;
extern StandardLimb gPoeLanternRootLimb;
extern StandardLimb gPoeLanternLimb;
extern StandardLimb gPoeRightForearmLimb;
extern StandardLimb gPoeRightUpperArmLimb;
extern void* gPoeSkelLimbs[];
extern SkeletonHeader gPoeSkel;
#endif
