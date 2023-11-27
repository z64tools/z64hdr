#ifndef OBJECT_OB_H
#define OBJECT_OB_H 1

typedef enum MoonchildLimb {
    /* 0x00 */ MOONCHILD_LIMB_NONE,
    /* 0x01 */ MOONCHILD_LIMB_ROOT,
    /* 0x02 */ MOONCHILD_LIMB_WAIST,
    /* 0x03 */ MOONCHILD_LIMB_TORSO,
    /* 0x04 */ MOONCHILD_LIMB_LEFT_UPPER_ARM,
    /* 0x05 */ MOONCHILD_LIMB_LEFT_FOREARM,
    /* 0x06 */ MOONCHILD_LIMB_LEFT_HAND,
    /* 0x07 */ MOONCHILD_LIMB_RIGHT_UPPER_ARM,
    /* 0x08 */ MOONCHILD_LIMB_RIGHT_FOREARM,
    /* 0x09 */ MOONCHILD_LIMB_RIGHT_HAND,
    /* 0x0A */ MOONCHILD_LIMB_HEAD,
    /* 0x0B */ MOONCHILD_LIMB_PELVIS,
    /* 0x0C */ MOONCHILD_LIMB_LEFT_THIGH,
    /* 0x0D */ MOONCHILD_LIMB_LEFT_SHIN,
    /* 0x0E */ MOONCHILD_LIMB_LEFT_FOOT,
    /* 0x0F */ MOONCHILD_LIMB_RIGHT_THIGH,
    /* 0x10 */ MOONCHILD_LIMB_RIGHT_SHIN,
    /* 0x11 */ MOONCHILD_LIMB_RIGHT_FOOT,
    /* 0x12 */ MOONCHILD_LIMB_MAX
} MoonchildLimb;

extern Vtx object_obVtx_000000[];
extern Gfx gMoonChildOdolwasMaskDL[];
extern Vtx object_obVtx_0009E0[];
extern Gfx gMoonChildGyorgsMaskDL[];
extern Vtx object_obVtx_002680[];
extern Gfx gMoonChildGohtsMaskDL[];
extern Vtx object_obVtx_004270[];
extern Gfx gMoonChildTwinmoldsMaskDL[];
extern Vtx object_obVtx_005830[];
extern Gfx gMoonChildMajorasMaskDL[];
extern Gfx gMoonChildMajorasMaskEyesDL[];
extern u64 gMoonChildMajorasMaskTex[];
extern u64 gMoonChildMajorasMaskSpike1Tex[];
extern u64 gMoonChildMajorasMaskSpike2Tex[];
extern u64 gMoonChildMajorasMaskSpike3Tex[];
extern u64 gMoonChildMajorasMaskSpike4Tex[];
extern u64 gMoonChildMajorasMaskBackTex[];
extern u64 gMoonChildMajorasMaskEyesTex[];
extern u64 gMoonChildOdolwasMaskFaceTLUT[];
extern u64 gMoonChildOdolwasMaskEarTLUT[];
extern u64 gMoonChildGyorgsMaskSkinTLUT[];
extern u64 gMoonChildGyorgsMaskMouthTLUT[];
extern u64 gMoonChildGyorgsMaskToothHornTLUT[];
extern u64 gMoonChildTwinmoldsMaskSkinTLUT[];
extern u64 gMoonChildTwinmoldsMaskSnoutTLUT[];
extern u64 gMoonChildOdolwasMaskPlumeTex[];
extern u64 gMoonChildOdolwasMaskFaceTex[];
extern u64 gMoonChildOdolwasMaskEarTex[];
extern u64 gMoonChildGyorgsTwinmoldsMaskEyeTex[];
extern u64 gMoonChildGyorgsMaskSkinTex[];
extern u64 gMoonChildGyorgsMaskMouthTex[];
extern u64 gMoonChildGyorgsMaskToothHornTex[];
extern u64 gMoonChildGohtsMaskEyeTex[];
extern u64 gMoonChildGohtsMaskTopPatternTex[];
extern u64 gMoonChildGohtsTwinmoldsMaskPatternTex[];
extern u64 gMoonChildGohtsMaskSpikeTwinmoldsMaskMandibleTex[];
extern u64 gMoonChildTwinmoldsMaskSkinTex[];
extern u64 gMoonChildTwinmoldsMaskSnoutTex[];
extern s16 sMoonChildWalkingAnimFrameData[];
extern JointIndex sMoonChildWalkingAnimJointIndices[];
extern AnimationHeader gMoonChildWalkingAnim;
extern s16 sMoonChildRunningAnimFrameData[];
extern JointIndex sMoonChildRunningAnimJointIndices[];
extern AnimationHeader gMoonChildRunningAnim;
extern Vtx object_obVtx_010CF0[];
extern Gfx gMoonChildPelvisDL[];
extern Gfx gMoonChildLeftThighDL[];
extern Gfx gMoonChildLeftLegDL[];
extern Gfx gMoonChildLeftFootDL[];
extern Gfx gMoonChildRightThighDL[];
extern Gfx gMoonChildRightLegDL[];
extern Gfx gMoonChildRightFootDL[];
extern Gfx gMoonChildChestBottomDL[];
extern Gfx gMoonChildChestDL[];
extern Gfx gMoonChildHeadDL[];
extern Gfx gMoonChildLeftArmDL[];
extern Gfx gMoonChildLeftForearmDL[];
extern Gfx gMoonChildLeftHandDL[];
extern Gfx gMoonChildRightArmDL[];
extern Gfx gMoonChildRightForearmDL[];
extern Gfx gMoonChildRightHandDL[];
extern u64 gMoonChildTLUT[];
extern u64 gMoonChildFingersTex[];
extern u64 gMoonChildThighSkinTex[];
extern u64 gMoonChildTshirtDetailTex[];
extern u64 gMoonChildHairTex[];
extern u64 gMoonChildEarTex[];
extern u64 gMoonChildBackHairTex[];
extern u64 gMoonChildTshirtNecklineTex[];
extern StandardLimb gMoonChildRootLimb;
extern StandardLimb gMoonChildWaistLimb;
extern StandardLimb gMoonChildTorsoLimb;
extern StandardLimb gMoonChildLeftUpperArmLimb;
extern StandardLimb gMoonChildLeftForearmLimb;
extern StandardLimb gMoonChildLeftHandLimb;
extern StandardLimb gMoonChildRightUpperArmLimb;
extern StandardLimb gMoonChildRightForearmLimb;
extern StandardLimb gMoonChildRightHandLimb;
extern StandardLimb gMoonChildHeadLimb;
extern StandardLimb gMoonChildPelvisLimb;
extern StandardLimb gMoonChildLeftThighLimb;
extern StandardLimb gMoonChildLeftShinLimb;
extern StandardLimb gMoonChildLeftFootLimb;
extern StandardLimb gMoonChildRightThighLimb;
extern StandardLimb gMoonChildRightShinLimb;
extern StandardLimb gMoonChildRightFootLimb;
extern void* gMoonChildSkelLimbs[];
extern FlexSkeletonHeader gMoonChildSkel;
extern s16 sMoonChildGettingUpAnimFrameData[];
extern JointIndex sMoonChildGettingUpAnimJointIndices[];
extern AnimationHeader gMoonChildGettingUpAnim;
extern s16 sMoonChildSittingAnimFrameData[];
extern JointIndex sMoonChildSittingAnimJointIndices[];
extern AnimationHeader gMoonChildSittingAnim;
extern s16 sMoonChildStandingAnimFrameData[];
extern JointIndex sMoonChildStandingAnimJointIndices[];
extern AnimationHeader gMoonChildStandingAnim;
#endif
