#ifndef OBJECT_PO_SISTERS_H
#define OBJECT_PO_SISTERS_H 1

typedef enum PoeSistersLimb {
    /* 0x00 */ POE_SISTERS_LIMB_NONE,
    /* 0x01 */ POE_SISTERS_LIMB_ROOT,
    /* 0x02 */ POE_SISTERS_LIMB_LEFT_ARM,
    /* 0x03 */ POE_SISTERS_LIMB_LEFT_HAND,
    /* 0x04 */ POE_SISTERS_LIMB_RIGHT_UPPER_ARM,
    /* 0x05 */ POE_SISTERS_LIMB_RIGHT_FOREARM,
    /* 0x06 */ POE_SISTERS_LIMB_TORCH_ROOT,
    /* 0x07 */ POE_SISTERS_LIMB_RIGHT_HAND,
    /* 0x08 */ POE_SISTERS_LIMB_TORCH,
    /* 0x09 */ POE_SISTERS_LIMB_MAIN_BODY,
    /* 0x0A */ POE_SISTERS_LIMB_FACE,
    /* 0x0B */ POE_SISTERS_LIMB_LOWER_BODY,
    /* 0x0C */ POE_SISTERS_LIMB_MAX
} PoeSistersLimb;

extern s16 sPoeSistersAttackAnimFrameData[];
extern JointIndex sPoeSistersAttackAnimJointIndices[];
extern AnimationHeader gPoeSistersAttackAnim;
extern s16 sPoeSistersMegCryAnimFrameData[];
extern JointIndex sPoeSistersMegCryAnimJointIndices[];
extern AnimationHeader gPoeSistersMegCryAnim;
extern s16 sPoeSistersDamagedAnimFrameData[];
extern JointIndex sPoeSistersDamagedAnimJointIndices[];
extern AnimationHeader gPoeSistersDamagedAnim;
extern s16 sPoeSistersFleeAnimFrameData[];
extern JointIndex sPoeSistersFleeAnimJointIndices[];
extern AnimationHeader gPoeSistersFleeAnim;
extern s16 sPoeSistersFloatAnimFrameData[];
extern JointIndex sPoeSistersFloatAnimJointIndices[];
extern AnimationHeader gPoeSistersFloatAnim;
extern s16 sPoeSistersAppearDisappearAnimFrameData[];
extern JointIndex sPoeSistersAppearDisappearAnimJointIndices[];
extern AnimationHeader gPoeSistersAppearDisappearAnim;
extern s16 sPoeSistersSwayAnimFrameData[];
extern JointIndex sPoeSistersSwayAnimJointIndices[];
extern AnimationHeader gPoeSistersSwayAnim;
extern Vtx object_po_sistersVtx_0014E0[];
extern Gfx gPoeSistersMegFaceDL[];
extern Gfx gPoeSistersMegBodyDL[];
extern Vtx object_po_sistersVtx_0020A8[];
extern Gfx gPoeSistersLowerBodyDL[];
extern Gfx gPoeSistersRightHandDL[];
extern Gfx gPoeSistersArmShortDL[];
extern Gfx gPoeSistersArmMedDL[];
extern Gfx gPoeSistersArmLongDL[];
extern Gfx gPoeSistersTorchDL[];
extern Gfx gPoeSistersLeftHandDL[];
extern Vtx object_po_sistersVtx_002908[];
extern Gfx gPoeSistersJoelleFaceDL[];
extern Gfx gPoeSistersJoelleBodyDL[];
extern Vtx object_po_sistersVtx_003208[];
extern Gfx gPoeSistersBethBodyDL[];
extern Gfx gPoeSistersBethFaceDL[];
extern Vtx object_po_sistersVtx_003948[];
extern Gfx gPoeSistersAmyBodyDL[];
extern Gfx gPoeSistersAmyFaceDL[];
extern Vtx object_po_sistersVtx_0040F0[];
extern Gfx gPoeSistersBurnBodyDL[];
extern u64 gPoeSistersTorchTex[];
extern u64 gPoeSistersTatteredRobeTex[];
extern u64 gPoeSistersArmTex[];
extern u64 gPoeSistersMegJoelleEyeTex[];
extern u64 gPoeSistersMainRobeGradientTex[];
extern u64 gPoeSistersMegTiaraTex[];
extern u64 gPoeSistersMegHairTex[];
extern u64 gPoeSistersJoelleHairBandtex[];
extern u64 gPoeSistersJoelleAmyHairTex[];
extern u64 gPoeSistersBethAmyEyesTex[];
extern u64 gPoeSistersBethHatAndHairTex[];
extern u64 gPoeSistersBethHatEdgeTex[];
extern u64 gPoeSistersAmyHairTieTex[];
extern u64 gPoeSistersCrispBodyTex[];
extern StandardLimb gPoeSistersMainRootLimb;
extern StandardLimb gPoeSistersLeftArmLimb;
extern StandardLimb gPoeSistersLeftHandLimb;
extern StandardLimb gPoeSistersRightUpperArmLimb;
extern StandardLimb gPoeSistersRightForearmLimb;
extern StandardLimb gPoeSistersTorchRootLimb;
extern StandardLimb gPoeSistersRightHandLimb;
extern StandardLimb gPoeSistersTorchLimb;
extern StandardLimb gPoeSistersMainBodyLimb;
extern StandardLimb gPoeSistersFaceLimb;
extern StandardLimb gPoeSistersLowerBodyLimb;
extern void* gPoeSistersSkelLimbs[];
extern SkeletonHeader gPoeSistersSkel;
#endif
