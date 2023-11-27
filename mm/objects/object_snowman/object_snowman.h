#ifndef OBJECT_SNOWMAN_H
#define OBJECT_SNOWMAN_H 1

typedef enum EenoLimb {
    /* 0x00 */ EENO_LIMB_NONE,
    /* 0x01 */ EENO_LIMB_ROOT,
    /* 0x02 */ EENO_LIMB_BODY_TOP,
    /* 0x03 */ EENO_LIMB_LEFT_EYE,
    /* 0x04 */ EENO_LIMB_RIGHT_EYE,
    /* 0x05 */ EENO_LIMB_LEFT_UPPER_ARM,
    /* 0x06 */ EENO_LIMB_LEFT_FOREARM,
    /* 0x07 */ EENO_LIMB_LEFT_HAND,
    /* 0x08 */ EENO_LIMB_RIGHT_UPPER_ARM,
    /* 0x09 */ EENO_LIMB_RIGHT_FOREARM,
    /* 0x0A */ EENO_LIMB_RIGHT_HAND,
    /* 0x0B */ EENO_LIMB_BODY_BOTTOM,
    /* 0x0C */ EENO_LIMB_MAX
} EenoLimb;

typedef enum EenoSnowPileLimb {
    /* 0x00 */ EENO_SNOW_PILE_LIMB_NONE,
    /* 0x01 */ EENO_SNOW_PILE_LIMB_BOTTOM,
    /* 0x02 */ EENO_SNOW_PILE_LIMB_TOP,
    /* 0x03 */ EENO_SNOW_PILE_LIMB_MAX
} EenoSnowPileLimb;

extern s16 sEenoLargeSnowballCreateAnimFrameData[];
extern JointIndex sEenoLargeSnowballCreateAnimJointIndices[];
extern AnimationHeader gEenoLargeSnowballCreateAnim;
extern s16 sEenoSmallSnowballCreateAnimFrameData[];
extern JointIndex sEenoSmallSnowballCreateAnimJointIndices[];
extern AnimationHeader gEenoSmallSnowballCreateAnim;
extern Vtx object_snowmanVtx_0007D0[];
extern Gfx gEenoLargeSnowballDL[];
extern Vtx object_snowmanVtx_001258[];
extern Gfx gEenoBodyBottomDL[];
extern Gfx gEenoBodyTopDL[];
extern Gfx gEenoRightUpperArmDL[];
extern Gfx gEenoRightForearmDL[];
extern Gfx gEenoRightHandDL[];
extern Gfx gEenoLeftUpperArmDL[];
extern Gfx gEenoLeftForearmDL[];
extern Gfx gEenoLeftHandDL[];
extern Gfx gEenoRightEyeDL[];
extern Gfx gEenoLeftEyeDL[];
extern u64 gEenoFaceTex[];
extern u64 gEenoUpperCheekTex[];
extern u64 gEenoBodyTex[];
extern u64 gEenoEyeTex[];
extern Vtx object_snowmanVtx_004280[];
extern Gfx gEenoSmallSnowballDL[];
extern StandardLimb gEenoRootLimb;
extern StandardLimb gEenoBodyTopLimb;
extern StandardLimb gEenoLeftEyeLimb;
extern StandardLimb gEenoRightEyeLimb;
extern StandardLimb gEenoLeftUpperArmLimb;
extern StandardLimb gEenoLeftForearmLimb;
extern StandardLimb gEenoLeftHandLimb;
extern StandardLimb gEenoRightUpperArmLimb;
extern StandardLimb gEenoRightForearmLimb;
extern StandardLimb gEenoRightHandLimb;
extern StandardLimb gEenoBodyBottomLimb;
extern void* gEenoSkelLimbs[];
extern FlexSkeletonHeader gEenoSkel;
extern s16 sEenoDamageAnimFrameData[];
extern JointIndex sEenoDamageAnimJointIndices[];
extern AnimationHeader gEenoDamageAnim;
extern s16 sEenoSnowPileMoveAnimFrameData[];
extern JointIndex sEenoSnowPileMoveAnimJointIndices[];
extern AnimationHeader gEenoSnowPileMoveAnim;
extern Vtx object_snowmanVtx_0046F0[];
extern Gfx gEenoSnowPileBottomDL[];
extern Gfx gEenoSnowPileTopDL[];
extern StandardLimb gEenoSnowPileBottomLimb;
extern StandardLimb gEenoSnowPileTopLimb;
extern void* gEenoSnowPileSkelLimbs[];
extern FlexSkeletonHeader gEenoSnowPileSkel;
extern s16 sEenoLargeSnowballThrowAnimFrameData[];
extern JointIndex sEenoLargeSnowballThrowAnimJointIndices[];
extern AnimationHeader gEenoLargeSnowballThrowAnim;
extern s16 sEenoSmallSnowballThrowAnimFrameData[];
extern JointIndex sEenoSmallSnowballThrowAnimJointIndices[];
extern AnimationHeader gEenoSmallSnowballThrowAnim;
extern s16 sEenoEmergeAnimFrameData[];
extern JointIndex sEenoEmergeAnimJointIndices[];
extern AnimationHeader gEenoEmergeAnim;
extern s16 sEenoIdleAnimFrameData[];
extern JointIndex sEenoIdleAnimJointIndices[];
extern AnimationHeader gEenoIdleAnim;
extern Vtx object_snowmanVtx_0058E0[];
extern Gfx gEenoSnowballFragment1DL[];
extern Vtx object_snowmanVtx_005DD0[];
extern Gfx gEenoSnowballFragment2DL[];
extern Vtx object_snowmanVtx_0062B0[];
extern Gfx gEenoSnowballFragment3DL[];
extern u64 gEenoSnowballFragmentTex[];
#endif
