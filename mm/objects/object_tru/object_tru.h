#ifndef OBJECT_TRU_H
#define OBJECT_TRU_H 1

typedef enum KoumeLimb {
    /* 0x00 */ KOUME_LIMB_NONE,
    /* 0x01 */ KOUME_LIMB_PELVIS,
    /* 0x02 */ KOUME_LIMB_LEFT_THIGH,
    /* 0x03 */ KOUME_LIMB_LEFT_SHIN,
    /* 0x04 */ KOUME_LIMB_LEFT_FOOT,
    /* 0x05 */ KOUME_LIMB_RIGH_THIGH,
    /* 0x06 */ KOUME_LIMB_RIGHT_SHIN,
    /* 0x07 */ KOUME_LIMB_RIGHT_FOOT,
    /* 0x08 */ KOUME_LIMB_TORSO_LIMB,
    /* 0x09 */ KOUME_LIMB_LEFT_SLEEVE_START,
    /* 0x0A */ KOUME_LIMB_LEFT_SLEEVE_MID,
    /* 0x0B */ KOUME_LIMB_LEFT_SLEEVE_END,
    /* 0x0C */ KOUME_LIMB_LEFT_SLEEVE_FRONT,
    /* 0x0D */ KOUME_LIMB_LEFT_HAND,
    /* 0x0E */ KOUME_LIMB_BROOM,
    /* 0x0F */ KOUME_LIMB_RIGHT_SLEEVE_START,
    /* 0x10 */ KOUME_LIMB_RIGHT_SLEEVE_MID,
    /* 0x11 */ KOUME_LIMB_RIGHT_SLEEVE_END,
    /* 0x12 */ KOUME_LIMB_RIGHT_SLEEVE_FRONT,
    /* 0x13 */ KOUME_LIMB_RIGHT_HAND,
    /* 0x14 */ KOUME_LIMB_NECK,
    /* 0x15 */ KOUME_LIMB_HEAD,
    /* 0x16 */ KOUME_LIMB_RIGHT_BRAID_START,
    /* 0x17 */ KOUME_LIMB_RIGHT_BRAID_END,
    /* 0x18 */ KOUME_LIMB_TEETH,
    /* 0x19 */ KOUME_LIMB_LEFT_BRAID_START,
    /* 0x1A */ KOUME_LIMB_LEFT_BRAID_END,
    /* 0x1B */ KOUME_LIMB_MAX
} KoumeLimb;

extern Vtx object_truVtx_000000[];
extern Gfx gKoumeTargetDL[];
extern Gfx gKoumeChainDL[];
extern u64 gKoumeChainTex[];
extern u64 gKoumeTargetSideTex[];
extern u64 gKoumeTargetFaceTex[];
extern Vtx object_truVtx_001960[];
extern Gfx gKoumeBottleDL[];
extern Gfx gKoumePotionDL[];
extern Gfx gKoumeEmptyDL[];
extern u64 gKoumeBottleTex[];
extern s16 sKoumeFlyAnimFrameData[];
extern JointIndex sKoumeFlyAnimJointIndices[];
extern AnimationHeader gKoumeFlyAnim;
extern s16 sKoumeTakeOffAnimFrameData[];
extern JointIndex sKoumeTakeOffAnimJointIndices[];
extern AnimationHeader gKoumeTakeOffAnim;
extern s16 sKoumeHoverAnimFrameData[];
extern JointIndex sKoumeHoverAnimJointIndices[];
extern AnimationHeader gKoumeHoverAnim;
extern s16 sKoumeDrinkAnimFrameData[];
extern JointIndex sKoumeDrinkAnimJointIndices[];
extern AnimationHeader gKoumeDrinkAnim;
extern s16 sKoumeInjuredRaiseHeadAnimFrameData[];
extern JointIndex sKoumeInjuredRaiseHeadAnimJointIndices[];
extern AnimationHeader gKoumeInjuredRaiseHeadAnim;
extern Vtx object_truVtx_009360[];
extern Gfx gKoumePelvisDL[];
extern Gfx gKoumeTorsoDL[];
extern Gfx gKoumeNeckDL[];
extern Gfx gKoumeHeadDL[];
extern Gfx gKoumeLeftBraidStartDL[];
extern Gfx gKoumeLeftBraidEndDL[];
extern Gfx gKoumeTeethDL[];
extern Gfx gKoumeRightBraidStartDL[];
extern Gfx gKoumeRightBraidEndDL[];
extern Gfx gKoumeRightSleeveStartDL[];
extern Gfx gKoumeRightSleeveFrontDL[];
extern Gfx gKoumeRightHandDL[];
extern Gfx gKoumeRightSleeveMidDL[];
extern Gfx gKoumeRightSleeveEndDL[];
extern Gfx gKoumeLeftSleeveStartDL[];
extern Gfx gKoumeLeftSleeveFrontDL[];
extern Gfx gKoumeLeftHandDL[];
extern Gfx gKoumeBroomDL[];
extern Gfx gKoumeLeftSleeveMidDL[];
extern Gfx gKoumeLeftSleeveEndDL[];
extern Gfx gKoumeRightThighDL[];
extern Gfx gKoumeRightShinDL[];
extern Gfx gKoumeRightFootDL[];
extern Gfx gKoumeLeftThighDL[];
extern Gfx gKoumeLeftShinDL[];
extern Gfx gKoumeLeftFootDL[];
extern s16 sKoumeInjuredTalkAnimFrameData[];
extern JointIndex sKoumeInjuredTalkAnimJointIndices[];
extern AnimationHeader gKoumeInjuredTalkAnim;
extern s16 sKoumeInjuredLyingDownAnimFrameData[];
extern JointIndex sKoumeInjuredLyingDownAnimJointIndices[];
extern AnimationHeader gKoumeInjuredLyingDownAnim;
extern s16 sKoumeTryGetUpAnimFrameData[];
extern JointIndex sKoumeTryGetUpAnimJointIndices[];
extern AnimationHeader gKoumeTryGetUpAnim;
extern s16 sKoumeHealedAnimFrameData[];
extern JointIndex sKoumeHealedAnimJointIndices[];
extern AnimationHeader gKoumeHealedAnim;
extern s16 sKoumeTakeAnimFrameData[];
extern JointIndex sKoumeTakeAnimJointIndices[];
extern AnimationHeader gKoumeTakeAnim;
extern s16 sKoumeIdleAnimFrameData[];
extern JointIndex sKoumeIdleAnimJointIndices[];
extern AnimationHeader gKoumeIdleAnim;
extern s16 sKoumeInjuredHeadUpAnimFrameData[];
extern JointIndex sKoumeInjuredHeadUpAnimJointIndices[];
extern AnimationHeader gKoumeInjuredHeadUpAnim;
extern s16 sKoumeFinishedDrinkingAnimFrameData[];
extern JointIndex sKoumeFinishedDrinkingAnimJointIndices[];
extern AnimationHeader gKoumeFinishedDrinkingAnim;
extern u64 gKoumeSkinTLUT[];
extern u64 gKoumeMouthTLUT[];
extern u64 gKoumeEarTLUT[];
extern u64 gKoumeFingerTLUT[];
extern u64 gKoumeNeckTLUT[];
extern u64 gKoumeNostrilsTLUT[];
extern u64 gKoumeGerudoFabricTex[];
extern u64 gKoumeRobeTex[];
extern u64 gKoumeRobePatternTex[];
extern u64 gKoumeRobeTrimTex[];
extern u64 gKoumeSkinTex[];
extern u64 gKoumeMouthTex[];
extern u64 gKoumeHairTex[];
extern u64 gKoumeBraidEndTex[];
extern u64 gKoumeEarTex[];
extern u64 gKoumeCollarNeckTex[];
extern u64 gKoumeFingerTex[];
extern u64 gKoumeBroomHandleTex[];
extern u64 gKoumeBroomHeadTex[];
extern u64 gKoumeJewelHolderTex[];
extern u64 gKoumeNeckTex[];
extern u64 gKoumeNostrilsTex[];
extern u64 gKoumeEyeOpenTex[];
extern u64 gKoumeEyeHalfTex[];
extern u64 gKoumeEyeClosedTex[];
extern u64 gKoumeJewelTex[];
extern Gfx gKoumeDustMaterialDL[];
extern Gfx gKoumeDustModelDL[];
extern Vtx object_truVtx_01A880[];
extern StandardLimb gKoumePelvisLimb;
extern StandardLimb gKoumeLeftThighLimb;
extern StandardLimb gKoumeLeftShinLimb;
extern StandardLimb gKoumeLeftFootLimb;
extern StandardLimb gKoumeRightThighLimb;
extern StandardLimb gKoumeRightShinLimb;
extern StandardLimb gKoumeRightFootLimb;
extern StandardLimb gKoumeTorsoLimb;
extern StandardLimb gKoumeLeftSleeveStartLimb;
extern StandardLimb gKoumeLeftSleeveMidLimb;
extern StandardLimb gKoumeLeftSleeveEndLimb;
extern StandardLimb gKoumeLeftSleeveFrontLimb;
extern StandardLimb gKoumeLeftHandLimb;
extern StandardLimb gKoumeBroomLimb;
extern StandardLimb gKoumeRightSleeveStartLimb;
extern StandardLimb gKoumeRightSleeveMidLimb;
extern StandardLimb gKoumeRightSleeveEndLimb;
extern StandardLimb gKoumeRightSleeveFrontLimb;
extern StandardLimb gKoumeRightHandLimb;
extern StandardLimb gKoumeNeckLimb;
extern StandardLimb gKoumeHeadLimb;
extern StandardLimb gKoumeRightBraidStartLimb;
extern StandardLimb gKoumeRightBraidEndLimb;
extern StandardLimb gKoumeTeethLimb;
extern StandardLimb gKoumeLeftBraidStartLimb;
extern StandardLimb gKoumeLeftBraidEndLimb;
extern void* gKoumeSkelLimbs[];
extern FlexSkeletonHeader gKoumeSkel;
extern s16 sKoumeShakeAnimFrameData[];
extern JointIndex sKoumeShakeAnimJointIndices[];
extern AnimationHeader gKoumeShakeAnim;
#endif
