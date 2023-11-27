#ifndef OBJECT_WALLMASTER_H
#define OBJECT_WALLMASTER_H 1

typedef enum WallmasterLimb {
    /* 0x00 */ WALLMASTER_LIMB_NONE,
    /* 0x01 */ WALLMASTER_LIMB_ROOT,
    /* 0x02 */ WALLMASTER_LIMB_HAND,
    /* 0x03 */ WALLMASTER_LIMB_INDEX_FINGER_ROOT,
    /* 0x04 */ WALLMASTER_LIMB_INDEX_FINGER_PROXIMAL,
    /* 0x05 */ WALLMASTER_LIMB_INDEX_FINGER_DISTAL_ROOT,
    /* 0x06 */ WALLMASTER_LIMB_INDEX_FINGER_MIDDLE,
    /* 0x07 */ WALLMASTER_LIMB_INDEX_FINGER_DISTAL,
    /* 0x08 */ WALLMASTER_LIMB_RING_FINGER_ROOT,
    /* 0x09 */ WALLMASTER_LIMB_RING_FINGER_PROXIMAL,
    /* 0x0A */ WALLMASTER_LIMB_RING_FINGER_DISTAL_ROOT,
    /* 0x0B */ WALLMASTER_LIMB_RING_FINGER_MIDDLE,
    /* 0x0C */ WALLMASTER_LIMB_RING_FINGER_DISTAL,
    /* 0x0D */ WALLMASTER_LIMB_MIDDLE_FINGER_ROOT,
    /* 0x0E */ WALLMASTER_LIMB_MIDDLE_FINGER_PROXIMAL,
    /* 0x0F */ WALLMASTER_LIMB_MIDDLE_FINGER_DISTAL_ROOT,
    /* 0x10 */ WALLMASTER_LIMB_MIDDLE_FINGER_MIDDLE,
    /* 0x11 */ WALLMASTER_LIMB_MIDDLE_FINGER_DISTAL,
    /* 0x12 */ WALLMASTER_LIMB_WRIST_ROOT,
    /* 0x13 */ WALLMASTER_LIMB_WRIST,
    /* 0x14 */ WALLMASTER_LIMB_THUMB_ROOT,
    /* 0x15 */ WALLMASTER_LIMB_THUMB_PROXIMAL,
    /* 0x16 */ WALLMASTER_LIMB_THUMB_DISTAL_ROOT,
    /* 0x17 */ WALLMASTER_LIMB_THUMB_MIDDLE,
    /* 0x18 */ WALLMASTER_LIMB_THUMB_DISTAL,
    /* 0x19 */ WALLMASTER_LIMB_MAX
} WallmasterLimb;

extern s16 sWallmasterDamageAnimFrameData[];
extern JointIndex sWallmasterDamageAnimJointIndices[];
extern AnimationHeader gWallmasterDamageAnim;
extern s16 sWallmasterRecoverFromDamageAnimFrameData[];
extern JointIndex sWallmasterRecoverFromDamageAnimJointIndices[];
extern AnimationHeader gWallmasterRecoverFromDamageAnim;
extern s16 sWallmasterJumpAnimFrameData[];
extern JointIndex sWallmasterJumpAnimJointIndices[];
extern AnimationHeader gWallmasterJumpAnim;
extern s16 sFloormasterTurnAnimFrameData[];
extern JointIndex sFloormasterTurnAnimJointIndices[];
extern AnimationHeader gFloormasterTurnAnim;
extern s16 sWallmasterLungeAnimFrameData[];
extern JointIndex sWallmasterLungeAnimJointIndices[];
extern AnimationHeader gWallmasterLungeAnim;
extern s16 sWallmasterMissAnimFrameData[];
extern JointIndex sWallmasterMissAnimJointIndices[];
extern AnimationHeader gWallmasterMissAnim;
extern s16 sFloormasterTapFingerAnimFrameData[];
extern JointIndex sFloormasterTapFingerAnimJointIndices[];
extern AnimationHeader gFloormasterTapFingerAnim;
extern s16 sWallmasterWalkAnimFrameData[];
extern JointIndex sWallmasterWalkAnimJointIndices[];
extern AnimationHeader gWallmasterWalkAnim;
extern Vtx object_wallmasterVtx_004210[];
extern Gfx gWallmasterThumbDistalDL[];
extern Gfx gWallmasterThumbMiddleDL[];
extern Gfx gWallmasterThumbProximalDL[];
extern Gfx gWallmasterWristDL[];
extern Gfx gWallmasterMiddleFingerDistalDL[];
extern Gfx gWallmasterMiddleFingerMiddleDL[];
extern Gfx gWallmasterMiddleFingerProximalDL[];
extern Gfx gWallmasterRingFingerDistalDL[];
extern Gfx gWallmasterRingFingerMiddleDL[];
extern Gfx gWallmasterRingFingerProximalDL[];
extern Gfx gWallmasterIndexFingerDistalDL[];
extern Gfx gWallmasterIndexFingerMiddleDL[];
extern Gfx gWallmasterIndexFingerProximalDL[];
extern Gfx gWallmasterHandDL[];
extern Vtx object_wallmasterVtx_0082E8[];
extern Gfx gWallmasterLittleFingerDL[];
extern u64 gWallmasterWristTopTex[];
extern u64 gWallmasterWristSidesTex[];
extern u64 gWallmasterHandBackTex[];
extern u64 gWallmasterFingerTipTex[];
extern u64 gWallmasterJointsAndSidesTex[];
extern u64 gWallmasterPalmAndFingerPadTex[];
extern u64 gWallmasterKnuckleAndFingerTopTex[];
extern StandardLimb gWallmasterRootLimb;
extern StandardLimb gWallmasterHandLimb;
extern StandardLimb gWallmasterIndexFingerRootLimb;
extern StandardLimb gWallmasterIndexFingerProximalLimb;
extern StandardLimb gWallmasterIndexFingerDistalRootLimb;
extern StandardLimb gWallmasterIndexFingerMiddleLimb;
extern StandardLimb gWallmasterIndexFingerDistalLimb;
extern StandardLimb gWallmasterRingFingerRootLimb;
extern StandardLimb gWallmasterRingFingerProximalLimb;
extern StandardLimb gWallmasterRingFingerDistalRootLimb;
extern StandardLimb gWallmasterRingFingerMiddleLimb;
extern StandardLimb gWallmasterRingFingerDistalLimb;
extern StandardLimb gWallmasterMiddleFingerRootLimb;
extern StandardLimb gWallmasterMiddleFingerProximalLimb;
extern StandardLimb gWallmasterMiddleFingerDistalRootLimb;
extern StandardLimb gWallmasterMiddleFingerMiddleLimb;
extern StandardLimb gWallmasterMiddleFingerDistalLimb;
extern StandardLimb gWallmasterWristRootLimb;
extern StandardLimb gWallmasterWristLimb;
extern StandardLimb gWallmasterThumbRootLimb;
extern StandardLimb gWallmasterThumbProximalLimb;
extern StandardLimb gWallmasterThumbDistalRootLimb;
extern StandardLimb gWallmasterThumbMiddleLimb;
extern StandardLimb gWallmasterThumbDistalLimb;
extern void* gWallmasterSkelLimbs[];
extern FlexSkeletonHeader gWallmasterSkel;
extern s16 sWallmasterStopWalkAnimFrameData[];
extern JointIndex sWallmasterStopWalkAnimJointIndices[];
extern AnimationHeader gWallmasterStopWalkAnim;
extern s16 sWallmasterHoverAnimFrameData[];
extern JointIndex sWallmasterHoverAnimJointIndices[];
extern AnimationHeader gWallmasterHoverAnim;
extern s16 sWallmasterIdleAnimFrameData[];
extern JointIndex sWallmasterIdleAnimJointIndices[];
extern AnimationHeader gWallmasterIdleAnim;
extern s16 sWallmasterStandUpAnimFrameData[];
extern JointIndex sWallmasterStandUpAnimJointIndices[];
extern AnimationHeader gWallmasterStandUpAnim;
#endif
