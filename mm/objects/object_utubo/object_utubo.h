#ifndef OBJECT_UTUBO_H
#define OBJECT_UTUBO_H 1

typedef enum DeepPythonLimb {
    /* 0x00 */ DEEP_PYTHON_LIMB_NONE,
    /* 0x01 */ DEEP_PYTHON_LIMB_ROOT,
    /* 0x02 */ DEEP_PYTHON_LIMB_MIDDLE_BODY_ROOT,
    /* 0x03 */ DEEP_PYTHON_LIMB_BODY_SEGMENT_4,
    /* 0x04 */ DEEP_PYTHON_LIMB_BODY_SEGMENT_5,
    /* 0x05 */ DEEP_PYTHON_LIMB_BODY_SEGMENT_6,
    /* 0x06 */ DEEP_PYTHON_LIMB_BODY_SEGMENT_7,
    /* 0x07 */ DEEP_PYTHON_LIMB_BODY_SEGMENT_3,
    /* 0x08 */ DEEP_PYTHON_LIMB_UPPER_BODY_ROOT,
    /* 0x09 */ DEEP_PYTHON_LIMB_BODY_SEGMENT_2,
    /* 0x0A */ DEEP_PYTHON_LIMB_BODY_SEGMENT_1,
    /* 0x0B */ DEEP_PYTHON_LIMB_HEAD_AND_COLLAR_ROOT,
    /* 0x0C */ DEEP_PYTHON_LIMB_COLLAR,
    /* 0x0D */ DEEP_PYTHON_LIMB_HEAD,
    /* 0x0E */ DEEP_PYTHON_LIMB_JAW_ROOT,
    /* 0x0F */ DEEP_PYTHON_LIMB_JAW,
    /* 0x10 */ DEEP_PYTHON_LIMB_MAX
} DeepPythonLimb;

extern s16 sDeepPythonMultiDirectionalSwayAnimFrameData[];
extern JointIndex sDeepPythonMultiDirectionalSwayAnimJointIndices[];
extern AnimationHeader gDeepPythonMultiDirectionalSwayAnim;
extern Vtx object_utuboVtx_000840[];
extern Gfx gDeepPythonHeadDL[];
extern Gfx gDeepPythonJawDL[];
extern Gfx gDeepPythonCollarDL[];
extern Gfx gDeepPythonBodySegment1DL[];
extern Gfx gDeepPythonBodySegment2DL[];
extern Gfx gDeepPythonBodySegment3DL[];
extern Gfx gDeepPythonBodySegment4DL[];
extern Gfx gDeepPythonBodySegment7DL[];
extern Gfx gDeepPythonBodySegment6DL[];
extern Gfx gDeepPythonBodySegment5DL[];
extern u64 gDeepPythonHeadAndCollarTLUT[];
extern u64 gDeepPythonBodySegment1FrontTLUT[];
extern u64 gDeepPythonBodyTLUT[];
extern u64 gDeepPythonHeadAndCollarTex[];
extern u64 gDeepPythonEyeTex[];
extern u64 gDeepPythonBodySegment1FrontTex[];
extern u64 gDeepPythonBodyTex[];
extern StandardLimb gDeepPythonRootLimb;
extern StandardLimb gDeepPythonMiddleBodyRootLimb;
extern StandardLimb gDeepPythonBodySegment4Limb;
extern StandardLimb gDeepPythonBodySegment5Limb;
extern StandardLimb gDeepPythonBodySegment6Limb;
extern StandardLimb gDeepPythonBodySegment7Limb;
extern StandardLimb gDeepPythonBodySegment3Limb;
extern StandardLimb gDeepPythonUpperBodyRootLimb;
extern StandardLimb gDeepPythonBodySegment2Limb;
extern StandardLimb gDeepPythonBodySegment1Limb;
extern StandardLimb gDeepPythonHeadAndCollarRootLimb;
extern StandardLimb gDeepPythonCollarLimb;
extern StandardLimb gDeepPythonHeadLimb;
extern StandardLimb gDeepPythonJawRootLimb;
extern StandardLimb gDeepPythonJawLimb;
extern void* gDeepPythonSkelLimbs[];
extern FlexSkeletonHeader gDeepPythonSkel;
extern s16 sDeepPythonUnusedSideSwayAnimFrameData[];
extern JointIndex sDeepPythonUnusedSideSwayAnimJointIndices[];
extern AnimationHeader gDeepPythonUnusedSideSwayAnim;
extern s16 sDeepPythonVerticalSwayAnimFrameData[];
extern JointIndex sDeepPythonVerticalSwayAnimJointIndices[];
extern AnimationHeader gDeepPythonVerticalSwayAnim;
extern s16 sDeepPythonSmallSideSwayAnimFrameData[];
extern JointIndex sDeepPythonSmallSideSwayAnimJointIndices[];
extern AnimationHeader gDeepPythonSmallSideSwayAnim;
extern s16 sDeepPythonLargeSideSwayAnimFrameData[];
extern JointIndex sDeepPythonLargeSideSwayAnimJointIndices[];
extern AnimationHeader gDeepPythonLargeSideSwayAnim;
#endif
