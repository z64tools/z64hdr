#ifndef OBJECT_GIANT_H
#define OBJECT_GIANT_H 1

typedef enum EnGiantLimb {
    /* 0x00 */ GIANT_LIMB_NONE,
    /* 0x01 */ GIANT_LIMB_HEAD,
    /* 0x02 */ GIANT_LIMB_LEFT_THIGH,
    /* 0x03 */ GIANT_LIMB_LEFT_SHIN,
    /* 0x04 */ GIANT_LIMB_LEFT_FOOT,
    /* 0x05 */ GIANT_LIMB_RIGHT_THIGH,
    /* 0x06 */ GIANT_LIMB_RIGHT_SHIN,
    /* 0x07 */ GIANT_LIMB_RIGHT_FOOT,
    /* 0x08 */ GIANT_LIMB_LEFT_SHOULDER,
    /* 0x09 */ GIANT_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ GIANT_LIMB_LEFT_FOREARM,
    /* 0x0B */ GIANT_LIMB_LEFT_HAND,
    /* 0x0C */ GIANT_LIMB_RIGHT_SHOULDER,
    /* 0x0D */ GIANT_LIMB_RIGHT_UPPER_ARM,
    /* 0x0E */ GIANT_LIMB_RIGHT_FOREARM,
    /* 0x0F */ GIANT_LIMB_RIGHT_HAND,
    /* 0x10 */ GIANT_LIMB_MAX
} EnGiantLimb;

extern s16 sGiantLargeStrideAnimFrameData[];
extern JointIndex sGiantLargeStrideAnimJointIndices[];
extern AnimationHeader gGiantLargeStrideAnim;
extern Vtx gGiantBodyVtx[];
extern Vtx gGiantUnusedBeardVtx[];
extern Gfx gGiantHeadDL[];
extern Gfx gGiantRightThighDL[];
extern Gfx gGiantRightShinDL[];
extern Gfx gGiantRightFootDL[];
extern Gfx gGiantLeftThighDL[];
extern Gfx gGiantLeftShinDL[];
extern Gfx gGiantLeftFootDL[];
extern Gfx gGiantRightShoulderDL[];
extern Gfx gGiantRightUpperArmDL[];
extern Gfx gGiantRightForearmDL[];
extern Gfx gGiantRightHandDL[];
extern Gfx gGiantLeftShoulderDL[];
extern Gfx gGiantLeftUpperArmDL[];
extern Gfx gGiantLeftForearmDL[];
extern Gfx gGiantLeftHandDL[];
extern u64 gGiantTLUT[];
extern u64 gGiantFootTex[];
extern u64 gGiantShinTex[];
extern u64 gGiantForearmAndKneeTex[];
extern u64 gGiantUpperArmAndThighTex[];
extern u64 gGiantHandTex[];
extern u64 gGiantFaceEyeOpenTex[];
extern u64 gGiantFaceEyeHalfTex[];
extern u64 gGiantFaceEyeClosedTex[];
extern u64 gGiantGroinTex[];
extern u64 gGiantHairTex[];
extern Vtx gGiantBeardVtx[];
extern Gfx gGiantBeardDL[];
extern u64 gGiantBeardTex[];
extern StandardLimb gGiantHeadLimb;
extern StandardLimb gGiantLeftThighLimb;
extern StandardLimb gGiantLeftShinLimb;
extern StandardLimb gGiantLeftFootLimb;
extern StandardLimb gGiantRightThighLimb;
extern StandardLimb gGiantRightShinLimb;
extern StandardLimb gGiantRightFootLimb;
extern StandardLimb gGiantLeftShoulderLimb;
extern StandardLimb gGiantLeftUpperArmLimb;
extern StandardLimb gGiantLeftForearmLimb;
extern StandardLimb gGiantLeftHandLimb;
extern StandardLimb gGiantRightShoulderLimb;
extern StandardLimb gGiantRightUpperArmLimb;
extern StandardLimb gGiantRightForearmLimb;
extern StandardLimb gGiantRightHandLimb;
extern void* gGiantSkelLimbs[];
extern FlexSkeletonHeader gGiantSkel;
extern s16 sGiantLookUpStartAnimFrameData[];
extern JointIndex sGiantLookUpStartAnimJointIndices[];
extern AnimationHeader gGiantLookUpStartAnim;
extern s16 sGiantLookUpLoopAnimFrameData[];
extern JointIndex sGiantLookUpLoopAnimJointIndices[];
extern AnimationHeader gGiantLookUpLoopAnim;
extern s16 sGiantBigCallStartAnimFrameData[];
extern JointIndex sGiantBigCallStartAnimJointIndices[];
extern AnimationHeader gGiantBigCallStartAnim;
extern s16 sGiantSmallCallStartAnimFrameData[];
extern JointIndex sGiantSmallCallStartAnimJointIndices[];
extern AnimationHeader gGiantSmallCallStartAnim;
extern s16 sGiantSmallCallLoopAnimFrameData[];
extern JointIndex sGiantSmallCallLoopAnimJointIndices[];
extern AnimationHeader gGiantSmallCallLoopAnim;
extern s16 sGiantSmallCallEndAnimFrameData[];
extern JointIndex sGiantSmallCallEndAnimJointIndices[];
extern AnimationHeader gGiantSmallCallEndAnim;
extern s16 sGiantBigCallLoopAnimFrameData[];
extern JointIndex sGiantBigCallLoopAnimJointIndices[];
extern AnimationHeader gGiantBigCallLoopAnim;
extern s16 sGiantBigCallEndAnimFrameData[];
extern JointIndex sGiantBigCallEndAnimJointIndices[];
extern AnimationHeader gGiantBigCallEndAnim;
extern s16 sGiantFallingOverAnimFrameData[];
extern JointIndex sGiantFallingOverAnimJointIndices[];
extern AnimationHeader gGiantFallingOverAnim;
extern s16 sGiantRaisedArmsStartAnimFrameData[];
extern JointIndex sGiantRaisedArmsStartAnimJointIndices[];
extern AnimationHeader gGiantRaisedArmsStartAnim;
extern s16 sGiantRaisedArmsLoopAnimFrameData[];
extern JointIndex sGiantRaisedArmsLoopAnimJointIndices[];
extern AnimationHeader gGiantRaisedArmsLoopAnim;
extern s16 sGiantStruggleStartAnimFrameData[];
extern JointIndex sGiantStruggleStartAnimJointIndices[];
extern AnimationHeader gGiantStruggleStartAnim;
extern s16 sGiantStruggleLoopAnimFrameData[];
extern JointIndex sGiantStruggleLoopAnimJointIndices[];
extern AnimationHeader gGiantStruggleLoopAnim;
extern s16 sGiantIdleAnimFrameData[];
extern JointIndex sGiantIdleAnimJointIndices[];
extern AnimationHeader gGiantIdleAnim;
extern s16 sGiantWalkingAnimFrameData[];
extern JointIndex sGiantWalkingAnimJointIndices[];
extern AnimationHeader gGiantWalkingAnim;
#endif
