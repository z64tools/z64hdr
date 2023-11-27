#ifndef OBJECT_BB_H
#define OBJECT_BB_H 1

typedef enum BubbleLimb {
    /* 0x00 */ BUBBLE_LIMB_NONE,
    /* 0x01 */ BUBBLE_LIMB_ROOT,
    /* 0x02 */ BUBBLE_LIMB_CRANIUM_ROOT,
    /* 0x03 */ BUBBLE_LIMB_JAW_ROOT,
    /* 0x04 */ BUBBLE_LIMB_JAW,
    /* 0x05 */ BUBBLE_LIMB_LEFT_WING_ROOT,
    /* 0x06 */ BUBBLE_LIMB_LEFT_WING_WRAPPER,
    /* 0x07 */ BUBBLE_LIMB_LEFT_WING_WEBBING_ROOT,
    /* 0x08 */ BUBBLE_LIMB_LEFT_WING_WEBBING,
    /* 0x09 */ BUBBLE_LIMB_LEFT_WING_BONE,
    /* 0x0A */ BUBBLE_LIMB_RIGHT_WING_ROOT,
    /* 0x0B */ BUBBLE_LIMB_RIGHT_WING_WRAPPER,
    /* 0x0C */ BUBBLE_LIMB_RIGHT_WING_WEBBING_ROOT,
    /* 0x0D */ BUBBLE_LIMB_RIGHT_WING_WEBBING,
    /* 0x0E */ BUBBLE_LIMB_RIGHT_WING_BONE,
    /* 0x0F */ BUBBLE_LIMB_CRANIUM,
    /* 0x10 */ BUBBLE_LIMB_MAX
} BubbleLimb;

extern s16 sBubbleAttackAnimFrameData[];
extern JointIndex sBubbleAttackAnimJointIndices[];
extern AnimationHeader gBubbleAttackAnim;
extern s16 sBubblePainAnimFrameData[];
extern JointIndex sBubblePainAnimJointIndices[];
extern AnimationHeader gBubblePainAnim;
extern s16 sBubbleFlyingAnimFrameData[];
extern JointIndex sBubbleFlyingAnimJointIndices[];
extern AnimationHeader gBubbleFlyingAnim;
extern Vtx object_bbVtx_000460[];
extern Gfx gBubbleLeftWingWebbingDL[];
extern Gfx gBubbleLeftWingBoneDL[];
extern Gfx gBubbleJawDL[];
extern Gfx gBubbleCraniumDL[];
extern Gfx gBubbleRightWingBoneDL[];
extern Gfx gBubbleRightWingWebbingDL[];
extern u64 gBubbleEyeSocketBottomTex[];
extern u64 gBubbleNostrilTex[];
extern u64 gBubbleEyeSocketTopAndJawTex[];
extern u64 gBubbleCraniumTopTex[];
extern u64 gBubbleCraniumSidesAndBackTex[];
extern u64 gBubbleEyeGlowTex[];
extern u64 gBubbleWingBoneTex[];
extern u64 gBubbleWingWebbingTex[];
extern StandardLimb gBubbleRootLimb;
extern StandardLimb gBubbleCraniumRootLimb;
extern StandardLimb gBubbleJawRootLimb;
extern StandardLimb gBubbleJawLimb;
extern StandardLimb gBubbleLeftWingRootLimb;
extern StandardLimb gBubbleLeftWingWrapperLimb;
extern StandardLimb gBubbleLeftWingWebbingRootLimb;
extern StandardLimb gBubbleLeftWingWebbingLimb;
extern StandardLimb gBubbleLeftWingBoneLimb;
extern StandardLimb gBubbleRightWingRootLimb;
extern StandardLimb gBubbleRightWingWrapperLimb;
extern StandardLimb gBubbleRightWingWebbingRootLimb;
extern StandardLimb gBubbleRightWingWebbingLimb;
extern StandardLimb gBubbleRightWingBoneLimb;
extern StandardLimb gBubbleCraniumLimb;
extern void* gBubbleSkelLimbs[];
extern SkeletonHeader gBubbleSkel;
#endif
