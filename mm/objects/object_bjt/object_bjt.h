#ifndef OBJECT_BJT_H
#define OBJECT_BJT_H 1

typedef enum ToiletHandLimb {
    /* 0x00 */ TOILET_HAND_LIMB_NONE,
    /* 0x01 */ TOILET_HAND_LIMB_ROOT,
    /* 0x02 */ TOILET_HAND_LIMB_ARM,
    /* 0x03 */ TOILET_HAND_LIMB_PALM,
    /* 0x04 */ TOILET_HAND_LIMB_OTHER_FINGERS,
    /* 0x05 */ TOILET_HAND_LIMB_THUMB,
    /* 0x06 */ TOILET_HAND_LIMB_INDEX_FINGER,
    /* 0x07 */ TOILET_HAND_LIMB_MAX
} ToiletHandLimb;

extern s16 sToiletHandWaggingFingerAnimFrameData[];
extern JointIndex sToiletHandWaggingFingerAnimJointIndices[];
extern AnimationHeader gToiletHandWaggingFingerAnim;
extern s16 sToiletHandFistAnimFrameData[];
extern JointIndex sToiletHandFistAnimJointIndices[];
extern AnimationHeader gToiletHandFistAnim;
extern s16 sToiletHandThumbsUpAnimFrameData[];
extern JointIndex sToiletHandThumbsUpAnimJointIndices[];
extern AnimationHeader gToiletHandThumbsUpAnim;
extern s16 sToiletHandOpenHandAnimFrameData[];
extern JointIndex sToiletHandOpenHandAnimJointIndices[];
extern AnimationHeader gToiletHandOpenHandAnim;
extern s16 sToiletHandWaitingAnimFrameData[];
extern JointIndex sToiletHandWaitingAnimJointIndices[];
extern AnimationHeader gToiletHandWaitingAnim;
extern Vtx object_bjtVtx_0007D0[];
extern Gfx gToiletHandIndexFingerDL[];
extern Gfx gToiletHandThumbDL[];
extern Gfx gToiletHandOtherFingersDL[];
extern Gfx gToiletHandPalmDL[];
extern Gfx gToiletHandArmDL[];
extern u64 gToiletHandFingersTex[];
extern u64 gToiletHandArmSkinTex[];
extern StandardLimb gToiletHandRootLimb;
extern StandardLimb gToiletHandArmLimb;
extern StandardLimb gToiletHandPalmLimb;
extern StandardLimb gToiletHandOtherFingersLimb;
extern StandardLimb gToiletHandThumbLimb;
extern StandardLimb gToiletHandIndexFingerLimb;
extern void* gToiletHandSkelLimbs[];
extern FlexSkeletonHeader gToiletHandSkel;
#endif
