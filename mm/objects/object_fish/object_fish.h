#ifndef OBJECT_FISH_H
#define OBJECT_FISH_H 1

typedef enum FishingBassLimb {
    /* 0x00 */ FISHING_BASS_LIMB_NONE,
    /* 0x01 */ FISHING_BASS_LIMB_HEAD,
    /* 0x02 */ FISHING_BASS_LIMB_MIDDLE_SEGMENT_ROOT,
    /* 0x03 */ FISHING_BASS_LIMB_BACK_SEGMENT_ROOT,
    /* 0x04 */ FISHING_BASS_LIMB_END_ROOT,
    /* 0x05 */ FISHING_BASS_LIMB_TAIL_FIN,
    /* 0x06 */ FISHING_BASS_LIMB_BACK_SEGMENT_END,
    /* 0x07 */ FISHING_BASS_LIMB_BACK_SEGMENT,
    /* 0x08 */ FISHING_BASS_LIMB_TOP_REAR_FIN,
    /* 0x09 */ FISHING_BASS_LIMB_BOTTOM_REAR_FIN,
    /* 0x0A */ FISHING_BASS_LIMB_MIDDLE_SEGMENT,
    /* 0x0B */ FISHING_BASS_LIMB_TOP_FRONT_FIN,
    /* 0x0C */ FISHING_BASS_LIMB_BOTTOM_FRONT_FIN,
    /* 0x0D */ FISHING_BASS_LIMB_JAW,
    /* 0x0E */ FISHING_BASS_LIMB_RIGHT_PECTORAL_FIN,
    /* 0x0F */ FISHING_BASS_LIMB_LEFT_PECTORAL_FIN,
    /* 0x10 */ FISHING_BASS_LIMB_MAX
} FishingBassLimb;

typedef enum FishingOwnerLimb {
    /* 0x00 */ FISHING_OWNER_LIMB_NONE,
    /* 0x01 */ FISHING_OWNER_LIMB_TORSO,
    /* 0x02 */ FISHING_OWNER_LIMB_LEFT_UPPER_ARM,
    /* 0x03 */ FISHING_OWNER_LIMB_LEFT_FOREARM,
    /* 0x04 */ FISHING_OWNER_LIMB_LEFT_HAND,
    /* 0x05 */ FISHING_OWNER_LIMB_RIGHT_UPPER_ARM,
    /* 0x06 */ FISHING_OWNER_LIMB_RIGHT_FOREARM,
    /* 0x07 */ FISHING_OWNER_LIMB_RIGHT_HAND,
    /* 0x08 */ FISHING_OWNER_LIMB_HEAD,
    /* 0x09 */ FISHING_OWNER_LIMB_MAX
} FishingOwnerLimb;

typedef enum FishingLoachLimb {
    /* 0x00 */ FISHING_LOACH_LIMB_NONE,
    /* 0x01 */ FISHING_LOACH_LIMB_HEAD,
    /* 0x02 */ FISHING_LOACH_LIMB_LOWER_FRONT_FIN,
    /* 0x03 */ FISHING_LOACH_LIMB_MIDDLE_SEGMENT,
    /* 0x04 */ FISHING_LOACH_LIMB_LOWER_BACK_FIN,
    /* 0x05 */ FISHING_LOACH_LIMB_TAIL_FIN,
    /* 0x06 */ FISHING_LOACH_LIMB_TAIL_SEGMENT,
    /* 0x07 */ FISHING_LOACH_LIMB_BACK_SEGMENT,
    /* 0x08 */ FISHING_LOACH_LIMB_FRONT_SEGMENT,
    /* 0x09 */ FISHING_LOACH_LIMB_LEFT_PECTORAL_FIN,
    /* 0x0A */ FISHING_LOACH_LIMB_RIGHT_PECTORAL_FIN,
    /* 0x0B */ FISHING_LOACH_LIMB_JAW,
    /* 0x0C */ FISHING_LOACH_LIMB_MAX
} FishingLoachLimb;

extern s16 sFishingBassAnimFrameData[];
extern JointIndex sFishingBassAnimJointIndices[];
extern AnimationHeader gFishingBassAnim;
extern Vtx object_fishVtx_000090[];
extern Gfx gFishingBassTailFinDL[];
extern Gfx gFishingBassBackSegmentEndDL[];
extern Gfx gFishingBassTopRearFinDL[];
extern Gfx gFishingBassBottomRearFinDL[];
extern Gfx gFishingBassBackSegmentDL[];
extern Gfx gFishingBassTopFrontFinDL[];
extern Gfx gFishingBassBottomFrontFinDL[];
extern Gfx gFishingBassMiddleSegmentDL[];
extern Gfx gFishingBassHeadDL[];
extern Gfx gFishingBassLeftPectoralFinDL[];
extern Gfx gFishingBassRightPectoralFinDL[];
extern Gfx gFishingBassJawDL[];
extern u64 gFishingBassTailFinTex[];
extern u64 gFishingBassTopScalesTex[];
extern u64 gFishingBassBottomScalesTex[];
extern u64 gFishingBassHeadTex[];
extern u64 gFishingBassFinTex[];
extern u64 gFishingBassUnusedFinTex[];
extern u64 gFishingBassSpinyFinTex[];
extern StandardLimb gFishingBassHeadLimb;
extern StandardLimb gFishingBassMiddleSegmentRootLimb;
extern StandardLimb gFishingBassBackSegmentRootLimb;
extern StandardLimb gFishingBassEndRootLimb;
extern StandardLimb gFishingBassTailFinLimb;
extern StandardLimb gFishingBassBackSegmentEndLimb;
extern StandardLimb gFishingBassBackSegmentLimb;
extern StandardLimb gFishingBassTopRearFinLimb;
extern StandardLimb gFishingBassBottomRearFinLimb;
extern StandardLimb gFishingBassMiddleSegmentLimb;
extern StandardLimb gFishingBassTopFrontFinLimb;
extern StandardLimb gFishingBassBottomFrontFinLimb;
extern StandardLimb gFishingBassJawLimb;
extern StandardLimb gFishingBassRightPectoralFinLimb;
extern StandardLimb gFishingBassLeftPectoralFinLimb;
extern void* gFishingBassSkelLimbs[];
extern FlexSkeletonHeader gFishingBassSkel;
extern u64 gFishingOldLureHookTex[];
extern u64 gFishingOldLureFloatTex[];
extern Vtx object_fishVtx_002B50[];
extern Gfx gFishingOldLureDL[];
extern u64 gFishingStreamSplashTile1Tex[];
extern u64 gFishingStreamSplashTile2Tex[];
extern Vtx object_fishVtx_003160[];
extern Gfx gFishingStreamSplashDL[];
extern u64 gFishingBubbleTex[];
extern Vtx object_fishVtx_003420[];
extern Gfx gFishingBubbleMaterialDL[];
extern Gfx gFishingBubbleModelDL[];
extern u64 gFishingDustSplashTex[];
extern Vtx object_fishVtx_0035E0[];
extern Gfx gFishingDustSplashMaterialDL[];
extern Gfx gFishingDustSplashModelDL[];
extern Vtx object_fishVtx_0036A0[];
extern Gfx gFishingUnusedMaterialDL[];
extern Gfx gFishingLineModelDL[];
extern Vtx object_fishVtx_003730[];
extern Gfx gFishingRainDropModelDL[];
extern u64 gFishingRainSplashTex[];
extern Vtx object_fishVtx_003978[];
extern Gfx gFishingRainSplashMaterialDL[];
extern Gfx gFishingRainSplashModelDL[];
extern s16 sFishingOwnerAnimFrameData[];
extern JointIndex sFishingOwnerAnimJointIndices[];
extern AnimationHeader gFishingOwnerAnim;
extern Vtx object_fishVtx_004550[];
extern Gfx gFishingOwnerTorsoDL[];
extern Gfx gFishingOwnerHairDL[];
extern Gfx gFishingOwnerHatDL[];
extern Gfx gFishingOwnerHeadDL[];
extern Gfx gFishingOwnerRightUpperArmDL[];
extern Gfx gFishingOwnerRightForearmDL[];
extern Gfx gFishingOwnerRightHandDL[];
extern Gfx gFishingOwnerLeftUpperArmDL[];
extern Gfx gFishingOwnerLeftForearmDL[];
extern Gfx gFishingOwnerLeftHandDL[];
extern StandardLimb gFishingOwnerTorsoLimb;
extern StandardLimb gFishingOwnerLeftUpperArmLimb;
extern StandardLimb gFishingOwnerLeftForearmLimb;
extern StandardLimb gFishingOwnerLeftHandLimb;
extern StandardLimb gFishingOwnerRightUpperArmLimb;
extern StandardLimb gFishingOwnerRightForearmLimb;
extern StandardLimb gFishingOwnerRightHandLimb;
extern StandardLimb gFishingOwnerHeadLimb;
extern void* gFishingOwnerSkelLimbs[];
extern FlexSkeletonHeader gFishingOwnerSkel;
extern Gfx gFishingRippleMaterialDL[];
extern Gfx gFishingRippleModelDL[];
extern u64 gFishingWaterDustTex[];
extern Vtx object_fishVtx_008890[];
extern Gfx gFishingWaterDustMaterialDL[];
extern Gfx gFishingWaterDustModelDL[];
extern u64 gFishingOwnerTLUT[];
extern u64 gFishingOwnerSkinTex[];
extern u64 gFishingOwnerHairFullTex[];
extern u64 gFishingOwnerHairPartialTex[];
extern u64 gFishingOwnerEarTex[];
extern u64 gFishingOwnerMouthTex[];
extern u64 gFishingOwnerNostrilTex[];
extern u64 gFishingOwnerEyeOpenTex[];
extern u64 gFishingOwnerEyeHalfTex[];
extern u64 gFishingOwnerEyeClosedTex[];
extern u64 gFishingOwnerHatTex[];
extern u64 gFishingOwnerShirtTex[];
extern u64 gFishingOwnerFingersTex[];
extern u64 gFishingOwnerCollarTex[];
extern u64 gFishingOwnerVestTex[];
extern u64 gFishingSinkingLureSegmentTex[];
extern Vtx object_fishVtx_00B910[];
extern Gfx gFishingSinkingLureSegmentMaterialDL[];
extern Gfx gFishingSinkingLureSegmentModelDL[];
extern u64 gFishingGroupFishTex[];
extern Vtx object_fishVtx_00C1E0[];
extern Gfx gFishingGroupFishMaterialDL[];
extern Gfx gFishingGroupFishModelDL[];
extern Vtx object_fishVtx_00C2B0[];
extern Gfx gFishingUnusedRockDL[];
extern u64 gFishingUnusedRockTex[];
extern s16 sFishingLoachAnimFrameData[];
extern JointIndex sFishingLoachAnimJointIndices[];
extern AnimationHeader gFishingLoachAnim;
extern Vtx object_fishVtx_00CFF0[];
extern Gfx gFishingLoachHeadDL[];
extern Gfx gFishingLoachLowerFrontFinDL[];
extern Gfx gFishingLoachFrontSegmentDL[];
extern Gfx gFishingLoachMiddleSegmentDL[];
extern Gfx gFishingLoachLowerBackFinDL[];
extern Gfx gFishingLoachBackSegmentDL[];
extern Gfx gFishingLoachTailFinDL[];
extern Gfx gFishingLoachTailSegmentDL[];
extern Gfx gFishingLoachRightPectoralFinDL[];
extern Gfx gFishingLoachLeftPectoralFinDL[];
extern Gfx gFishingLoachJawDL[];
extern u64 gFishingLoachTopScalesTex[];
extern u64 gFishingLoachBottomScalesTex[];
extern u64 gFishingLoachGillTex[];
extern u64 gFishingLoachHeadTex[];
extern u64 gFishingLoachTopFinTex[];
extern u64 gFishingLoachFinTex[];
extern StandardLimb gFishingLoachHeadLimb;
extern StandardLimb gFishingLoachLowerFrontFinLimb;
extern StandardLimb gFishingLoachMiddleSegmentLimb;
extern StandardLimb gFishingLoachLowerBackFinLimb;
extern StandardLimb gFishingLoachTailFinLimb;
extern StandardLimb gFishingLoachTailSegmentLimb;
extern StandardLimb gFishingLoachBackSegmentLimb;
extern StandardLimb gFishingLoachFrontSegmentLimb;
extern StandardLimb gFishingLoachLeftPectoralFinLimb;
extern StandardLimb gFishingLoachRightPectoralFinLimb;
extern StandardLimb gFishingLoachJawLimb;
extern void* gFishingLoachSkelLimbs[];
extern FlexSkeletonHeader gFishingLoachSkel;
extern u64 gFishingRodSegmentStripTex[];
extern u64 gFishingRodSegmentBlackTex[];
extern u64 gFishingRodSegmentWhiteTex[];
extern Vtx object_fishVtx_011370[];
extern Gfx gFishingRodSetupDL[];
extern Gfx gFishingRodSegmentDL[];
extern u64 gFishingLureHookTex[];
extern u64 gFishingLureFloatTex[];
extern Vtx object_fishVtx_012040[];
extern Gfx gFishingLureHookDL[];
extern Gfx gFishingLureFloatDL[];
extern u64 gFishingLilyPadTex[];
extern u64 gFishingRockTex[];
extern Vtx object_fishVtx_0132E0[];
extern Gfx gFishingLilyPadMaterialDL[];
extern Gfx gFishingLilyPadModelDL[];
extern Vtx object_fishVtx_0133D0[];
extern Gfx gFishingRockMaterialDL[];
extern Gfx gFishingRockModelDL[];
extern u64 gFishingWoodPostTex[];
extern Vtx object_fishVtx_013E60[];
extern Gfx gFishingWoodPostMaterialDL[];
extern Gfx gFishingWoodPostModelDL[];
extern Vtx object_fishVtx_014000[];
extern Gfx gFishingReedMaterialDL[];
extern Gfx gFishingReedModelDL[];
extern u64 gFishingAquariumBottomTex[];
extern u64 gFishingAquariumWaterTex[];
extern u64 gFishingAquariumGlassTex[];
extern Vtx object_fishVtx_014ED0[];
extern Gfx gFishingAquariumBottomDL[];
extern Gfx gFishingAquariumContainerDL[];
#endif
