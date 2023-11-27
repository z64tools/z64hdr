#ifndef OBJECT_FR_H
#define OBJECT_FR_H 1

typedef enum FrogLimb {
    /* 0x00 */ FROG_LIMB_NONE,
    /* 0x01 */ FROG_LIMB_LOWER_BODY,
    /* 0x02 */ FROG_LIMB_UPPER_BODY,
    /* 0x03 */ FROG_LIMB_HEAD_ROOT,
    /* 0x04 */ FROG_LIMB_HEAD,
    /* 0x05 */ FROG_LIMB_RIGHT_IRIS,
    /* 0x06 */ FROG_LIMB_JAW,
    /* 0x07 */ FROG_LIMB_RIGHT_EYE,
    /* 0x08 */ FROG_LIMB_LEFT_EYE,
    /* 0x09 */ FROG_LIMB_LEFT_IRIS,
    /* 0x0A */ FROG_LIMB_LEFT_UPPER_ARM,
    /* 0x0B */ FROG_LIMB_LEFT_FOREARM,
    /* 0x0C */ FROG_LIMB_LEFT_HAND,
    /* 0x0D */ FROG_LIMB_RIGHT_UPPER_ARM,
    /* 0x0E */ FROG_LIMB_RIGHT_FOREARM,
    /* 0x0F */ FROG_LIMB_RIGHT_HAND,
    /* 0x10 */ FROG_LIMB_RIGHT_THIGH,
    /* 0x11 */ FROG_LIMB_RIGHT_SHIN,
    /* 0x12 */ FROG_LIMB_RIGHT_HEEL,
    /* 0x13 */ FROG_LIMB_RIGHT_TOES,
    /* 0x14 */ FROG_LIMB_LEFT_THIGH,
    /* 0x15 */ FROG_LIMB_LEFT_SHIN,
    /* 0x16 */ FROG_LIMB_LEFT_HEEL,
    /* 0x17 */ FROG_LIMB_LEFT_TOES,
    /* 0x18 */ FROG_LIMB_MAX
} FrogLimb;

extern s16 sFrogJumpAnimFrameData[];
extern JointIndex sFrogJumpAnimJointIndices[];
extern AnimationHeader gFrogJumpAnim;
extern s16 sFrogDanceAnimFrameData[];
extern JointIndex sFrogDanceAnimJointIndices[];
extern AnimationHeader gFrogDanceAnim;
extern s16 sFrogIdleAnimFrameData[];
extern JointIndex sFrogIdleAnimJointIndices[];
extern AnimationHeader gFrogIdleAnim;
extern u64 gFrogLimbPatternTex[];
extern u64 gFrogQuestionMarkTex[];
extern u64 gFrogNostrilTex[];
extern u64 gFrogLowerInnerMouthTex[];
extern u64 gFrogUpperInnerMouthTex[];
extern u64 gFrogSkinTex[];
extern u64 gFrogUpperBodyPatternTex[];
extern u64 gFrogLowerBodyPatternTex[];
extern u64 gFrogIrisOpenTex[];
extern u64 gFrogIrisClosedTex[];
extern u64 gFrogEyeTex[];
extern u64 gFrogHandAndToeTex[];
extern Vtx object_frVtx_006DA0[];
extern Gfx gFrogRightEyeDL[];
extern Gfx gFrogLeftEyeDL[];
extern Gfx gFrogHeadDL[];
extern Gfx gFrogRightIrisDL[];
extern Gfx gFrogLeftIrisDL[];
extern Gfx gFrogJawDL[];
extern Gfx gFrogUpperBodyDL[];
extern Gfx gFrogLeftForearmDL[];
extern Gfx gFrogLeftHandDL[];
extern Gfx gFrogLeftUpperArmDL[];
extern Gfx gFrogRightForearmDL[];
extern Gfx gFrogRightHandDL[];
extern Gfx gFrogRightUpperArmDL[];
extern Gfx gFrogLowerBodyDL[];
extern Gfx gFrogRightHeelDL[];
extern Gfx gFrogRightToeDL[];
extern Gfx gFrogRightShinDL[];
extern Gfx gFrogRightThighDL[];
extern Gfx gFrogLeftHeelDL[];
extern Gfx gFrogLeftToeDL[];
extern Gfx gFrogLeftShinDL[];
extern Gfx gFrogLeftThighDL[];
extern Gfx gFrogDustMaterialDL[];
extern Gfx gFrogDustModelDL[];
extern Vtx object_frVtx_00B388[];
extern StandardLimb gFrogLowerBodyLimb;
extern StandardLimb gFrogUpperBodyLimb;
extern StandardLimb gFrogHeadRootLimb;
extern StandardLimb gFrogHeadLimb;
extern StandardLimb gFrogRightIrisLimb;
extern StandardLimb gFrogJawLimb;
extern StandardLimb gFrogRightEyeLimb;
extern StandardLimb gFrogLeftEyeLimb;
extern StandardLimb gFrogLeftIrisLimb;
extern StandardLimb gFrogLeftUpperArmLimb;
extern StandardLimb gFrogLeftForearmLimb;
extern StandardLimb gFrogLeftHandLimb;
extern StandardLimb gFrogRightUpperArmLimb;
extern StandardLimb gFrogRightForearmLimb;
extern StandardLimb gFrogRightHandLimb;
extern StandardLimb gFrogRightThighLimb;
extern StandardLimb gFrogRightShinLimb;
extern StandardLimb gFrogRightHeelLimb;
extern StandardLimb gFrogRightToesLimb;
extern StandardLimb gFrogLeftThighLimb;
extern StandardLimb gFrogLeftShinLimb;
extern StandardLimb gFrogLeftHeelLimb;
extern StandardLimb gFrogLeftToesLimb;
extern void* gFrogSkelLimbs[];
extern FlexSkeletonHeader gFrogSkel;
#endif
