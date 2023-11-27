#ifndef OBJECT_SKB_H
#define OBJECT_SKB_H 1

typedef enum StalchildLimb {
    /* 0x00 */ STALCHILD_LIMB_NONE,
    /* 0x01 */ STALCHILD_LIMB_ROOT,
    /* 0x02 */ STALCHILD_LIMB_PELVIS,
    /* 0x03 */ STALCHILD_LIMB_ROOT_LEGS,
    /* 0x04 */ STALCHILD_LIMB_RIGHT_THIGH,
    /* 0x05 */ STALCHILD_LIMB_RIGHT_SHIN,
    /* 0x06 */ STALCHILD_LIMB_RIGHT_FOOT,
    /* 0x07 */ STALCHILD_LIMB_LEFT_THIGH,
    /* 0x08 */ STALCHILD_LIMB_LEFT_SHIN,
    /* 0x09 */ STALCHILD_LIMB_LEFT_FOOT,
    /* 0x0A */ STALCHILD_LIMB_RIBCAGE,
    /* 0x0B */ STALCHILD_LIMB_HEAD,
    /* 0x0C */ STALCHILD_LIMB_LOWER_JAW,
    /* 0x0D */ STALCHILD_LIMB_RIGHT_UPPER_ARM,
    /* 0x0E */ STALCHILD_LIMB_RIGHT_LOWER_ARM,
    /* 0x0F */ STALCHILD_LIMB_RIGHT_HAND,
    /* 0x10 */ STALCHILD_LIMB_LEFT_UPPER_ARM,
    /* 0x11 */ STALCHILD_LIMB_LEFT_LOWER_ARM,
    /* 0x12 */ STALCHILD_LIMB_LEFT_HAND,
    /* 0x13 */ STALCHILD_LIMB_SPINE,
    /* 0x14 */ STALCHILD_LIMB_MAX
} StalchildLimb;

extern s16 sStalchildIdleAnimFrameData[];
extern JointIndex sStalchildIdleAnimJointIndices[];
extern AnimationHeader gStalchildIdleAnim;
extern s16 sStalchildSaluteAnimFrameData[];
extern JointIndex sStalchildSaluteAnimJointIndices[];
extern AnimationHeader gStalchildSaluteAnim;
extern s16 sStalchildSwingOnBranchAnimFrameData[];
extern JointIndex sStalchildSwingOnBranchAnimJointIndices[];
extern AnimationHeader gStalchildSwingOnBranchAnim;
extern s16 sStalchildAttackAnimFrameData[];
extern JointIndex sStalchildAttackAnimJointIndices[];
extern AnimationHeader gStalchildAttackAnim;
extern s16 sStalchildCollapseAnimFrameData[];
extern JointIndex sStalchildCollapseAnimJointIndices[];
extern AnimationHeader gStalchildCollapseAnim;
extern s16 sStalchildStaggerAnimFrameData[];
extern JointIndex sStalchildStaggerAnimJointIndices[];
extern AnimationHeader gStalchildStaggerAnim;
extern s16 sStalchildStandUpAnimFrameData[];
extern JointIndex sStalchildStandUpAnimJointIndices[];
extern AnimationHeader gStalchildStandUpAnim;
extern u64 gStalchildPelvisTex[];
extern u64 gStalchildRibcageTex[];
extern u64 gStalchildSkullTex[];
extern u64 gStalchildNoseTex[];
extern u64 gStalchildBoneTex[];
extern u64 gStalchildHandAndFeetTex[];
extern u64 gStalchildTeethTex[];
extern u64 gStalchildEyeSocketTex[];
extern u64 gStalchildEyeTex[];
extern Vtx object_skbVtx_003EA0[];
extern Gfx gStalchildHeadDL[];
extern Gfx gStalchildLowerJawDL[];
extern Gfx gStalchildRibcageDL[];
extern Gfx gStalchildSpineDL[];
extern Gfx gStalchildPelvisDL[];
extern Gfx gStalchildLeftUpperArmDL[];
extern Gfx gStalchildLeftLowerArmDL[];
extern Gfx gStalchildLeftHandDL[];
extern Gfx gStalchildRightUpperArmDL[];
extern Gfx gStalchildRightLowerArmDL[];
extern Gfx gStalchildRightHandDL[];
extern Gfx gStalchildLeftThighDL[];
extern Gfx gStalchildLeftShinDL[];
extern Gfx gStalchildLeftFootDL[];
extern Gfx gStalchildRightThighDL[];
extern Gfx gStalchildRightShinDL[];
extern Gfx gStalchildRightFootDL[];
extern StandardLimb gStalchildRootLimb;
extern StandardLimb gStalchildPelvisLimb;
extern StandardLimb gStalchildRootLegsLimb;
extern StandardLimb gStalchildRightThighLimb;
extern StandardLimb gStalchildRightShinLimb;
extern StandardLimb gStalchildRightFootLimb;
extern StandardLimb gStalchildLeftThighLimb;
extern StandardLimb gStalchildLeftShinLimb;
extern StandardLimb gStalchildLeftFootLimb;
extern StandardLimb gStalchildRibcageLimb;
extern StandardLimb gStalchildHeadLimb;
extern StandardLimb gStalchildLowerJawLimb;
extern StandardLimb gStalchildRightUpperArmLimb;
extern StandardLimb gStalchildRightLowerArmLimb;
extern StandardLimb gStalchildRightHandLimb;
extern StandardLimb gStalchildLeftUpperArmLimb;
extern StandardLimb gStalchildLeftLowerArmLimb;
extern StandardLimb gStalchildLeftHandLimb;
extern StandardLimb gStalchildSpineLimb;
extern void* gStalchildSkelLimbs[];
extern SkeletonHeader gStalchildSkel;
extern s16 sStalchildWalkAnimFrameData[];
extern JointIndex sStalchildWalkAnimJointIndices[];
extern AnimationHeader gStalchildWalkAnim;
extern s16 sStalchildSitLaughAnimFrameData[];
extern JointIndex sStalchildSitLaughAnimJointIndices[];
extern AnimationHeader gStalchildSitLaughAnim;
extern s16 sStalchildSitTapToesAnimFrameData[];
extern JointIndex sStalchildSitTapToesAnimJointIndices[];
extern AnimationHeader gStalchildSitTapToesAnim;
#endif
