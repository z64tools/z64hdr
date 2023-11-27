#ifndef OBJECT_ZO_H
#define OBJECT_ZO_H 1

typedef enum ZoraLimb {
    /* 0x00 */ ZORA_LIMB_NONE,
    /* 0x01 */ ZORA_LIMB_PELVIS,
    /* 0x02 */ ZORA_LIMB_LEFT_THIGH,
    /* 0x03 */ ZORA_LIMB_LEFT_SHIN,
    /* 0x04 */ ZORA_LIMB_LEFT_FOOT,
    /* 0x05 */ ZORA_LIMB_RIGHT_THIGH,
    /* 0x06 */ ZORA_LIMB_RIGHT_SHIN,
    /* 0x07 */ ZORA_LIMB_RIGHT_FOOT,
    /* 0x08 */ ZORA_LIMB_TORSO,
    /* 0x09 */ ZORA_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ ZORA_LIMB_LEFT_FOREARM,
    /* 0x0B */ ZORA_LIMB_LEFT_HAND,
    /* 0x0C */ ZORA_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ ZORA_LIMB_RIGHT_FOREARM,
    /* 0x0E */ ZORA_LIMB_RIGHT_HAND,
    /* 0x0F */ ZORA_LIMB_HEAD,
    /* 0x10 */ ZORA_LIMB_HEAD_TAIL_1,
    /* 0x11 */ ZORA_LIMB_HEAD_TAIL_2,
    /* 0x12 */ ZORA_LIMB_HEAD_TAIL_3,
    /* 0x13 */ ZORA_LIMB_HEAD_TAIL_FIN,
    /* 0x14 */ ZORA_LIMB_MAX
} ZoraLimb;

extern s16 sZoraHandsOnHipsTappingFootAnimFrameData[];
extern JointIndex sZoraHandsOnHipsTappingFootAnimJointIndices[];
extern AnimationHeader gZoraHandsOnHipsTappingFootAnim;
extern s16 sZoraArmsOpenAnimFrameData[];
extern JointIndex sZoraArmsOpenAnimJointIndices[];
extern AnimationHeader gZoraArmsOpenAnim;
extern s16 sZoraThrowRupeeAnimFrameData[];
extern JointIndex sZoraThrowRupeeAnimJointIndices[];
extern AnimationHeader gZoraThrowRupeeAnim;
extern s16 sZoraWalkAnimFrameData[];
extern JointIndex sZoraWalkAnimJointIndices[];
extern AnimationHeader gZoraWalkAnim;
extern u64 gZoraBubbleTex[];
extern Vtx object_zoVtx_0029B0[];
extern Gfx gZoraBubbleMaterialDL[];
extern Gfx gZoraBubbleModelDL[];
extern u64 gZoraSplashTex[];
extern Vtx object_zoVtx_002B70[];
extern Gfx gZoraSplashMaterialDL[];
extern Gfx gZoraSplashModelDL[];
extern s16 sZoraSurfacingAnimFrameData[];
extern JointIndex sZoraSurfacingAnimJointIndices[];
extern AnimationHeader gZoraSurfacingAnim;
extern s16 sZoraTreadingWaterAnimFrameData[];
extern JointIndex sZoraTreadingWaterAnimJointIndices[];
extern AnimationHeader gZoraTreadingWaterAnim;
extern s16 sZoraIdleAnimFrameData[];
extern JointIndex sZoraIdleAnimJointIndices[];
extern AnimationHeader gZoraIdleAnim;
extern u64 gZoraTLUT[];
extern u64 gZoraFinTex[];
extern u64 gZoraBackAndHeadTailTex[];
extern u64 gZoraSkinTex[];
extern u64 gZoraEyeOpenTex[];
extern u64 gZoraEyeHalfTex[];
extern u64 gZoraEyeClosedTex[];
extern u64 gZoraMouthTex[];
extern u64 gZoraHandTex[];
extern u64 gZoraKneeTex[];
extern Vtx object_zoVtx_0071E0[];
extern Gfx gZoraPelvisDL[];
extern Gfx gZoraTorsoDL[];
extern Gfx gZoraHeadDL[];
extern Gfx gZoraHeadTail1DL[];
extern Gfx gZoraHeadTail2DL[];
extern Gfx gZoraHeadTail3DL[];
extern Gfx gZoraHeadTailFinDL[];
extern Gfx gZoraRightUpperArmDL[];
extern Gfx gZoraRightForearmDL[];
extern Gfx gZoraRightHandDL[];
extern Gfx gZoraLeftUpperArmDL[];
extern Gfx gZoraLeftForearmDL[];
extern Gfx gZoraLeftHandDL[];
extern Gfx gZoraRightThighDL[];
extern Gfx gZoraRightShinDL[];
extern Gfx gZoraRightFootDL[];
extern Gfx gZoraLeftThighDL[];
extern Gfx gZoraLeftShinDL[];
extern Gfx gZoraLeftFootDL[];
extern StandardLimb gZoraPelvisLimb;
extern StandardLimb gZoraLeftThighLimb;
extern StandardLimb gZoraLeftShinLimb;
extern StandardLimb gZoraLeftFootLimb;
extern StandardLimb gZoraRightThighLimb;
extern StandardLimb gZoraRightShinLimb;
extern StandardLimb gZoraRightFootLimb;
extern StandardLimb gZoraTorsoLimb;
extern StandardLimb gZoraLeftUpperArmLimb;
extern StandardLimb gZoraLeftForearmLimb;
extern StandardLimb gZoraLeftHandLimb;
extern StandardLimb gZoraRightUpperArmLimb;
extern StandardLimb gZoraRightForearmLimb;
extern StandardLimb gZoraRightHandLimb;
extern StandardLimb gZoraHeadLimb;
extern StandardLimb gZoraHeadTail1Limb;
extern StandardLimb gZoraHeadTail2Limb;
extern StandardLimb gZoraHeadTail3Limb;
extern StandardLimb gZoraHeadTailFinLimb;
extern void* gZoraSkelLimbs[];
extern FlexSkeletonHeader gZoraSkel;
extern Gfx gZoraRippleMaterialDL[];
extern Gfx gZoraRippleModelDL[];
extern Gfx object_zo_DL_00D2A0[];
extern Gfx object_zo_DL_00D2B8[];
extern Vtx object_zoVtx_00D308[];
extern s16 sZoraStandAnimFrameData[];
extern JointIndex sZoraStandAnimJointIndices[];
extern AnimationHeader gZoraStandAnim;
extern s16 sZoraListenAnimFrameData[];
extern JointIndex sZoraListenAnimJointIndices[];
extern AnimationHeader gZoraListenAnim;
extern s16 sZoraRunAnimFrameData[];
extern JointIndex sZoraRunAnimJointIndices[];
extern AnimationHeader gZoraRunAnim;
extern s16 sZoraBobHandAnimFrameData[];
extern JointIndex sZoraBobHandAnimJointIndices[];
extern AnimationHeader gZoraBobHandAnim;
extern s16 sZoraSitAnimFrameData[];
extern JointIndex sZoraSitAnimJointIndices[];
extern AnimationHeader gZoraSitAnim;
extern s16 sZoraFixSpeakerStartAnimFrameData[];
extern JointIndex sZoraFixSpeakerStartAnimJointIndices[];
extern AnimationHeader gZoraFixSpeakerStartAnim;
extern s16 sZoraFixSpeakerLoopAnimFrameData[];
extern JointIndex sZoraFixSpeakerLoopAnimJointIndices[];
extern AnimationHeader gZoraFixSpeakerLoopAnim;
extern s16 sZoraFixSpeakerEndAnimFrameData[];
extern JointIndex sZoraFixSpeakerEndAnimJointIndices[];
extern AnimationHeader gZoraFixSpeakerEndAnim;
#endif
