#ifndef OBJECT_ZOV_H
#define OBJECT_ZOV_H 1

typedef enum LuluLimb {
    /* 0x00 */ LULU_LIMB_NONE,
    /* 0x01 */ LULU_LIMB_ROOT,
    /* 0x02 */ LULU_LIMB_PELVIS,
    /* 0x03 */ LULU_LIMB_LEFT_THIGH,
    /* 0x04 */ LULU_LIMB_LEFT_SHIN,
    /* 0x05 */ LULU_LIMB_LEFT_FOOT,
    /* 0x06 */ LULU_LIMB_LEFT_LEG_FIN,
    /* 0x07 */ LULU_LIMB_RIGHT_THIGH,
    /* 0x08 */ LULU_LIMB_RIGHT_SHIN,
    /* 0x09 */ LULU_LIMB_RIGHT_FOOT,
    /* 0x0A */ LULU_LIMB_RIGHT_LEG_FIN,
    /* 0x0B */ LULU_LIMB_TORSO,
    /* 0x0C */ LULU_LIMB_HEAD,
    /* 0x0D */ LULU_LIMB_LEFT_UPPER_ARM,
    /* 0x0E */ LULU_LIMB_LEFT_ARM_UPPER_FIN,
    /* 0x0F */ LULU_LIMB_LEFT_ARM_LOWER_FIN,
    /* 0x10 */ LULU_LIMB_LEFT_FOREARM,
    /* 0x11 */ LULU_LIMB_LEFT_HAND,
    /* 0x12 */ LULU_LIMB_RIGHT_UPPER_ARM,
    /* 0x13 */ LULU_LIMB_RIGHT_ARM_UPPER_FIN,
    /* 0x14 */ LULU_LIMB_RIGHT_ARM_LOWER_FIN,
    /* 0x15 */ LULU_LIMB_RIGHT_FOREARM,
    /* 0x16 */ LULU_LIMB_RIGHT_HAND,
    /* 0x17 */ LULU_LIMB_MAX
} LuluLimb;

extern s16 sLuluTurnAndWalkAnimFrameData[];
extern JointIndex sLuluTurnAndWalkAnimJointIndices[];
extern AnimationHeader gLuluTurnAndWalkAnim;
extern s16 sLuluWalkLoopAnimFrameData[];
extern JointIndex sLuluWalkLoopAnimJointIndices[];
extern AnimationHeader gLuluWalkLoopAnim;
extern s16 sLuluSingStartAnimFrameData[];
extern JointIndex sLuluSingStartAnimJointIndices[];
extern AnimationHeader gLuluSingStartAnim;
extern s16 sLuluSingLoopAnimFrameData[];
extern JointIndex sLuluSingLoopAnimJointIndices[];
extern AnimationHeader gLuluSingLoopAnim;
extern s16 sLuluLookForwardAndLeftAnimFrameData[];
extern JointIndex sLuluLookForwardAndLeftAnimJointIndices[];
extern AnimationHeader gLuluLookForwardAndLeftAnim;
extern s16 sLuluLookLeftLoopAnimFrameData[];
extern JointIndex sLuluLookLeftLoopAnimJointIndices[];
extern AnimationHeader gLuluLookLeftLoopAnim;
extern s16 sLuluPutHandsDownAnimFrameData[];
extern JointIndex sLuluPutHandsDownAnimJointIndices[];
extern AnimationHeader gLuluPutHandsDownAnim;
extern s16 sLuluLookAroundAnimFrameData[];
extern JointIndex sLuluLookAroundAnimJointIndices[];
extern AnimationHeader gLuluLookAroundAnim;
extern s16 sLuluLookForwardAndDownAnimFrameData[];
extern JointIndex sLuluLookForwardAndDownAnimJointIndices[];
extern AnimationHeader gLuluLookForwardAndDownAnim;
extern s16 sLuluAngleHeadAnimFrameData[];
extern JointIndex sLuluAngleHeadAnimJointIndices[];
extern AnimationHeader gLuluAngleHeadAnim;
extern s16 sLuluNodAnimFrameData[];
extern JointIndex sLuluNodAnimJointIndices[];
extern AnimationHeader gLuluNodAnim;
extern s16 sLuluLookDownAnimFrameData[];
extern JointIndex sLuluLookDownAnimJointIndices[];
extern AnimationHeader gLuluLookDownAnim;
extern Vtx object_zovVtx_00D400[];
extern Gfx gLuluTorsoDL[];
extern Gfx gLuluRightUpperArmDL[];
extern Gfx gLuluRightForearmDL[];
extern Gfx gLuluRightHandDL[];
extern Gfx gLuluRightArmUpperFinDL[];
extern Gfx gLuluRightArmLowerFinDL[];
extern Gfx gLuluLeftUpperArmDL[];
extern Gfx gLuluLeftForearmDL[];
extern Gfx gLuluLeftHandDL[];
extern Gfx gLuluLeftArmUpperFinDL[];
extern Gfx gLuluLeftArmLowerFinDL[];
extern Gfx gLuluHeadDL[];
extern Gfx gLuluPelvisDL[];
extern Gfx gLuluRightThighDL[];
extern Gfx gLuluRightShinDL[];
extern Gfx gLuluRightLegFinDL[];
extern Gfx gLuluRightFootDL[];
extern Gfx gLuluLeftThighDL[];
extern Gfx gLuluLeftShinDL[];
extern Gfx gLuluLeftLegFinDL[];
extern Gfx gLuluLeftFootDL[];
extern u64 gLuluTLUT[];
extern u64 gLuluEarringTex[];
extern u64 gLuluSkinTex[];
extern u64 gLuluNostrilTex[];
extern u64 gLuluMouthClosedTex[];
extern u64 gLuluHeadSkinTex[];
extern u64 gLuluEarCavityTex[];
extern u64 gLuluHeadHoleTex[];
extern u64 gLuluEyeOpenTex[];
extern u64 gLuluEarTex[];
extern u64 gLuluEyeClosedTex[];
extern u64 gLuluMouthOpenTex[];
extern u64 gLuluSpottedSkinTex[];
extern u64 gLuluMouthOpenFullTex[];
extern u64 gLuluEyeHalfTex[];
extern u64 gLuluSkinShadowTex[];
extern u64 gLuluKneeAndElbowTex[];
extern u64 gLuluFingersTex[];
extern u64 gLuluDressPatternTex[];
extern u64 gLuluDressStringTex[];
extern u64 gLuluDressLoopTex[];
extern StandardLimb gLuluRootLimb;
extern StandardLimb gLuluPelvisLimb;
extern StandardLimb gLuluLeftThighLimb;
extern StandardLimb gLuluLeftShinLimb;
extern StandardLimb gLuluLeftFootLimb;
extern StandardLimb gLuluLeftLegFinLimb;
extern StandardLimb gLuluRightThighLimb;
extern StandardLimb gLuluRightShinLimb;
extern StandardLimb gLuluRightFootLimb;
extern StandardLimb gLuluRightLegFinLimb;
extern StandardLimb gLuluTorsoLimb;
extern StandardLimb gLuluHeadLimb;
extern StandardLimb gLuluLeftUpperArmLimb;
extern StandardLimb gLuluLeftArmUpperFinLimb;
extern StandardLimb gLuluLeftArmLowerFinLimb;
extern StandardLimb gLuluLeftForearmLimb;
extern StandardLimb gLuluLeftHandLimb;
extern StandardLimb gLuluRightUpperArmLimb;
extern StandardLimb gLuluRightArmUpperFinLimb;
extern StandardLimb gLuluRightArmLowerFinLimb;
extern StandardLimb gLuluRightForearmLimb;
extern StandardLimb gLuluRightHandLimb;
extern void* gLuluSkelLimbs[];
extern FlexSkeletonHeader gLuluSkel;
#endif
