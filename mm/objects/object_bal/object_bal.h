#ifndef OBJECT_BAL_H
#define OBJECT_BAL_H 1

typedef enum TingleLimb {
    /* 0x00 */ TINGLE_LIMB_NONE,
    /* 0x01 */ TINGLE_LIMB_ROOT,
    /* 0x02 */ TINGLE_LIMB_PELVIS,
    /* 0x03 */ TINGLE_LIMB_UPPER_BODY_ROOT,
    /* 0x04 */ TINGLE_LIMB_UPPER_BODY_WRAPPER,
    /* 0x05 */ TINGLE_LIMB_BALLOON_ROOT,
    /* 0x06 */ TINGLE_LIMB_BALLOON,
    /* 0x07 */ TINGLE_LIMB_RIGHT_ARM_ROOT,
    /* 0x08 */ TINGLE_LIMB_RIGHT_ARM_WRAPPER,
    /* 0x09 */ TINGLE_LIMB_RIGHT_UPPER_ARM,
    /* 0x0A */ TINGLE_LIMB_RIGHT_FOREARM,
    /* 0x0B */ TINGLE_LIMB_RIGHT_HAND_ROOT,
    /* 0x0C */ TINGLE_LIMB_RIGHT_HAND,
    /* 0x0D */ TINGLE_LIMB_HELD_PEN,
    /* 0x0E */ TINGLE_LIMB_LEFT_ARM_ROOT,
    /* 0x0F */ TINGLE_LIMB_LEFT_ARM_WRAPPER,
    /* 0x10 */ TINGLE_LIMB_LEFT_UPPER_ARM,
    /* 0x11 */ TINGLE_LIMB_LEFT_FOREARM,
    /* 0x12 */ TINGLE_LIMB_LEFT_HAND_ROOT,
    /* 0x13 */ TINGLE_LIMB_LEFT_HAND,
    /* 0x14 */ TINGLE_LIMB_HELD_MAP,
    /* 0x15 */ TINGLE_LIMB_TORSO,
    /* 0x16 */ TINGLE_LIMB_HEAD,
    /* 0x17 */ TINGLE_LIMB_RIGHT_LEG_ROOT,
    /* 0x18 */ TINGLE_LIMB_RIGHT_THIGH,
    /* 0x19 */ TINGLE_LIMB_RIGHT_LOWER_LEG_ROOT,
    /* 0x1A */ TINGLE_LIMB_RIGHT_SHIN,
    /* 0x1B */ TINGLE_LIMB_RIGHT_FOOT,
    /* 0x1C */ TINGLE_LIMB_LEFT_LEG_ROOT,
    /* 0x1D */ TINGLE_LIMB_LEFT_THIGH,
    /* 0x1E */ TINGLE_LIMB_LEFT_LOWER_LEG_ROOT,
    /* 0x1F */ TINGLE_LIMB_LEFT_SHIN,
    /* 0x20 */ TINGLE_LIMB_LEFT_FOOT,
    /* 0x21 */ TINGLE_LIMB_MAX
} TingleLimb;

extern s16 sTingleFloatIdleAnimFrameData[];
extern JointIndex sTingleFloatIdleAnimJointIndices[];
extern AnimationHeader gTingleFloatIdleAnim;
extern s16 sTingleFallAnimFrameData[];
extern JointIndex sTingleFallAnimJointIndices[];
extern AnimationHeader gTingleFallAnim;
extern s16 sTingleSpinAnimFrameData[];
extern JointIndex sTingleSpinAnimJointIndices[];
extern AnimationHeader gTingleSpinAnim;
extern s16 sTingleFloatThrowConfettiAnimFrameData[];
extern JointIndex sTingleFloatThrowConfettiAnimJointIndices[];
extern AnimationHeader gTingleFloatThrowConfettiAnim;
extern Vtx object_balVtx_001820[];
extern Gfx gTinglePelvisDL[];
extern Gfx gTingleLeftFootDL[];
extern Gfx gTingleLeftShinDL[];
extern Gfx gTingleLeftThighDL[];
extern Gfx gTingleRightFootDL[];
extern Gfx gTingleRightShinDL[];
extern Gfx gTingleRightThighDL[];
extern Gfx gTingleHeadDL[];
extern Gfx gTingleTorsoDL[];
extern Gfx gTingleLeftHandDL[];
extern Gfx gTingleMapDL[];
extern Gfx gTingleLeftForearmDL[];
extern Gfx gTingleLeftUpperArmDL[];
extern Gfx gTingleRightHandDL[];
extern Gfx gTinglePenDL[];
extern Gfx gTingleRightForearmDL[];
extern Gfx gTingleRightUpperArmDL[];
extern Gfx gTingleBalloonDL[];
extern u64 gTingleMapTLUT[];
extern u64 gTingleBriefsTex[];
extern u64 gTingleTopFrontTex[];
extern u64 gTingleBalloonTex[];
extern u64 gTingleBackpackTex[];
extern u64 gTingleEyeOpenTex[];
extern u64 gTingleBodysuitTex[];
extern u64 gTingleNostrilTex[];
extern u64 gTingleMouthTex[];
extern u64 gTingleNoseSideTex[];
extern u64 gTingleHandTex[];
extern u64 gTinglePenTopTex[];
extern u64 gTingleMapTex[];
extern u64 gTingleEyeClosedTex[];
extern StandardLimb gTingleRootLimb;
extern StandardLimb gTinglePelvisLimb;
extern StandardLimb gTingleUpperBodyRootLimb;
extern StandardLimb gTingleUpperBodyWrapperLimb;
extern StandardLimb gTingleBalloonRootLimb;
extern StandardLimb gTingleBalloonLimb;
extern StandardLimb gTingleRightArmRootLimb;
extern StandardLimb gTingleRightArmWrapperLimb;
extern StandardLimb gTingleRightUpperArmLimb;
extern StandardLimb gTingleRightForearmLimb;
extern StandardLimb gTingleRightHandRootLimb;
extern StandardLimb gTingleRightHandLimb;
extern StandardLimb gTingleHeldPenLimb;
extern StandardLimb gTingleLeftArmRootLimb;
extern StandardLimb gTingleLeftArmWrapperLimb;
extern StandardLimb gTingleLeftUpperArmLimb;
extern StandardLimb gTingleLeftForearmLimb;
extern StandardLimb gTingleLeftHandRootLimb;
extern StandardLimb gTingleLeftHandLimb;
extern StandardLimb gTingleHeldMapLimb;
extern StandardLimb gTingleTorsoLimb;
extern StandardLimb gTingleHeadLimb;
extern StandardLimb gTingleRightLegRootLimb;
extern StandardLimb gTingleRightThighLimb;
extern StandardLimb gTingleRightLowerLegRootLimb;
extern StandardLimb gTingleRightShinLimb;
extern StandardLimb gTingleRightFootLimb;
extern StandardLimb gTingleLeftLegRootLimb;
extern StandardLimb gTingleLeftThighLimb;
extern StandardLimb gTingleLeftLowerLegRootLimb;
extern StandardLimb gTingleLeftShinLimb;
extern StandardLimb gTingleLeftFootLimb;
extern void* gTingleSkelLimbs[];
extern FlexSkeletonHeader gTingleSkel;
extern s16 sTingleLandAnimFrameData[];
extern JointIndex sTingleLandAnimJointIndices[];
extern AnimationHeader gTingleLandAnim;
extern s16 sTingleTwistAnimFrameData[];
extern JointIndex sTingleTwistAnimJointIndices[];
extern AnimationHeader gTingleTwistAnim;
extern s16 sTingleTalkAnimFrameData[];
extern JointIndex sTingleTalkAnimJointIndices[];
extern AnimationHeader gTingleTalkAnim;
extern s16 sTingleThrowConfettiAnimFrameData[];
extern JointIndex sTingleThrowConfettiAnimJointIndices[];
extern AnimationHeader gTingleThrowConfettiAnim;
extern s16 sTingleHappyDanceAnimFrameData[];
extern JointIndex sTingleHappyDanceAnimJointIndices[];
extern AnimationHeader gTingleHappyDanceAnim;
extern s16 sTingleFloatHideFaceAnimFrameData[];
extern JointIndex sTingleFloatHideFaceAnimJointIndices[];
extern AnimationHeader gTingleFloatHideFaceAnim;
extern s16 sTingleIdleAnimFrameData[];
extern JointIndex sTingleIdleAnimJointIndices[];
extern AnimationHeader gTingleIdleAnim;
extern Vtx object_balVtx_00D540[];
extern Gfx gTingleConfettiDL[];
#endif
