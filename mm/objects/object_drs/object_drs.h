#ifndef OBJECT_DRS_H
#define OBJECT_DRS_H 1

typedef enum WeddingDressMannequinLimb {
    /* 0x00 */ WEDDING_DRESS_MANNEQUIN_LIMB_NONE,
    /* 0x01 */ WEDDING_DRESS_MANNEQUIN_LIMB,
    /* 0x02 */ WEDDING_DRESS_MANNEQUIN_LIMB_MASK,
    /* 0x03 */ WEDDING_DRESS_MANNEQUIN_LIMB_PATTERN,
    /* 0x04 */ WEDDING_DRESS_MANNEQUIN_LIMB_MAX
} WeddingDressMannequinLimb;

extern s16 sWeddingDressMannequinIdleAnimFrameData[];
extern JointIndex sWeddingDressMannequinIdleAnimJointIndices[];
extern AnimationHeader gWeddingDressMannequinIdleAnim;
extern Vtx object_drsVtx_000030[];
extern Gfx gWeddingDressMannequinDL[];
extern Gfx gWeddingDressMannequinPatternDL[];
extern Gfx gWeddingDressMannequinMaskDL[];
extern u64 gWeddingDressMannequinWoodTex[];
extern u64 gWeddingDressMannequinWoodCornerTex[];
extern u64 gWeddingDressMannequinShoulderGradientTex[];
extern u64 gWeddingDressMannequinPatternTex[];
extern u64 gWeddingDressMannequinVineTex[];
extern u64 gWeddingDressMannequinFlowerTex[];
extern u64 gWeddingDressMannequinFabricHighlightsTex[];
extern u64 gWeddingDressMannequinFabricSheerTex[];
extern StandardLimb gWeddingDressMannequinLimb;
extern StandardLimb gWeddingDressMannequinMaskLimb;
extern StandardLimb gWeddingDressMannequinPatternLimb;
extern void* gWeddingDressMannequinSkelLimbs[];
extern FlexSkeletonHeader gWeddingDressMannequinSkel;
#endif
