#ifndef OBJECT_COW_H
#define OBJECT_COW_H 1

typedef enum CowLimb {
    /* 0x00 */ COW_LIMB_NONE,
    /* 0x01 */ COW_LIMB_BODY,
    /* 0x02 */ COW_LIMB_HEAD,
    /* 0x03 */ COW_LIMB_JAW,
    /* 0x04 */ COW_LIMB_NOSE,
    /* 0x05 */ COW_LIMB_NOSE_RING,
    /* 0x06 */ COW_LIMB_MAX
} CowLimb;

typedef enum CowTailLimb {
    /* 0x00 */ COW_TAIL_LIMB_NONE,
    /* 0x01 */ COW_TAIL_LIMB_BASE,
    /* 0x02 */ COW_TAIL_LIMB_UPPER,
    /* 0x03 */ COW_TAIL_LIMB_MIDDLE,
    /* 0x04 */ COW_TAIL_LIMB_LOWER,
    /* 0x05 */ COW_TAIL_LIMB_END,
    /* 0x06 */ COW_TAIL_LIMB_MAX
} CowTailLimb;

extern s16 sCowChewAnimFrameData[];
extern JointIndex sCowChewAnimJointIndices[];
extern AnimationHeader gCowChewAnim;
extern Vtx object_cowVtx_0001E0[];
extern Gfx gCowBodyDL[];
extern Gfx gCowHeadDL[];
extern Gfx gCowNoseDL[];
extern Gfx gCowNoseRingDL[];
extern Gfx gCowJawDL[];
extern u64 gCowTLUT[];
extern u64 gCowUdderTex[];
extern u64 gCowNoseRingTex[];
extern u64 gCowNoseTex[];
extern u64 gCowSpotsTex[];
extern u64 gCowEarTex[];
extern u64 gCowEyelidTex[];
extern u64 gCowLegAndTailTex[];
extern StandardLimb gCowBodyLimb;
extern StandardLimb gCowHeadLimb;
extern StandardLimb gCowJawLimb;
extern StandardLimb gCowNoseLimb;
extern StandardLimb gCowNoseRingLimb;
extern void* gCowSkelLimbs[];
extern FlexSkeletonHeader gCowSkel;
extern s16 sCowMooAnimFrameData[];
extern JointIndex sCowMooAnimJointIndices[];
extern AnimationHeader gCowMooAnim;
extern s16 sCowTailIdleAnimFrameData[];
extern JointIndex sCowTailIdleAnimJointIndices[];
extern AnimationHeader gCowTailIdleAnim;
extern Vtx object_cowVtx_004360[];
extern Gfx gCowTailBaseDL[];
extern Gfx gCowTailUpperDL[];
extern Gfx gCowTailMiddleDL[];
extern Gfx gCowTailLowerDL[];
extern Gfx gCowTailEndDL[];
extern StandardLimb gCowTailBaseLimb;
extern StandardLimb gCowTailUpperLimb;
extern StandardLimb gCowTailMiddleLimb;
extern StandardLimb gCowTailLowerLimb;
extern StandardLimb gCowTailEndLimb;
extern void* gCowTailSkelLimbs[];
extern FlexSkeletonHeader gCowTailSkel;
extern s16 sCowTailSwishAnimFrameData[];
extern JointIndex sCowTailSwishAnimJointIndices[];
extern AnimationHeader gCowTailSwishAnim;
#endif
