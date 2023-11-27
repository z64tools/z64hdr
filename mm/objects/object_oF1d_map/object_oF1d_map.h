#ifndef OBJECT_OF1D_MAP_H
#define OBJECT_OF1D_MAP_H 1

typedef enum GoronLimb {
    /* 0x00 */ GORON_LIMB_NONE,
    /* 0x01 */ GORON_LIMB_ROOT,
    /* 0x02 */ GORON_LIMB_PELVIS,
    /* 0x03 */ GORON_LIMB_LEGS_ROOT,
    /* 0x04 */ GORON_LIMB_LEFT_THIGH,
    /* 0x05 */ GORON_LIMB_LEFT_SHIN,
    /* 0x06 */ GORON_LIMB_LEFT_FOOT,
    /* 0x07 */ GORON_LIMB_RIGHT_THIGH,
    /* 0x08 */ GORON_LIMB_RIGHT_SHIN,
    /* 0x09 */ GORON_LIMB_RIGHT_FOOT,
    /* 0x0A */ GORON_LIMB_BODY,
    /* 0x0B */ GORON_LIMB_LEFT_UPPER_ARM,
    /* 0x0C */ GORON_LIMB_LEFT_FOREARM,
    /* 0x0D */ GORON_LIMB_LEFT_HAND,
    /* 0x0E */ GORON_LIMB_RIGHT_UPPER_ARM,
    /* 0x0F */ GORON_LIMB_RIGHT_FOREARM,
    /* 0x10 */ GORON_LIMB_RIGHT_HAND,
    /* 0x11 */ GORON_LIMB_HEAD,
    /* 0x12 */ GORON_LIMB_MAX
} GoronLimb;

extern Vtx object_oF1d_mapVtx_000000[];
extern Gfx gGoronLargeSnowballFragmentMaterialDL[];
extern Gfx gGoronLargeSnowballFragmentModelDL[];
extern Vtx object_oF1d_mapVtx_000500[];
extern Gfx gGoronMediumSnowballFragmentMaterialDL[];
extern Gfx gGoronMediumSnowballFragmentModelDL[];
extern Vtx object_oF1d_mapVtx_0009E0[];
extern Gfx gGoronSmallSnowballFragmentMaterialDL[];
extern Gfx gGoronSmallSnowballFragmentModelDL[];
extern Vtx object_oF1d_mapVtx_000E60[];
extern Gfx gGoronSnowballDL[];
extern u8 object_oF1d_map_Blob_001750[];
extern u64 gGoronSnowBallTex[];
extern u8 object_oF1d_map_Blob_002770[];
extern u64 gGoronSteamTex[];
extern Vtx object_oF1d_mapVtx_003170[];
extern Gfx gGoronSteamMaterialDL[];
extern Gfx gGoronSteamModelDL[];
extern Gfx object_oF1d_map_DL_003280[];
extern Gfx object_oF1d_map_DL_003298[];
extern Vtx object_oF1d_mapVtx_0032E8[];
extern Gfx object_oF1d_map_DL_003330[];
extern Gfx object_oF1d_map_DL_003340[];
extern Vtx object_oF1d_mapVtx_003390[];
extern s16 sGoronCoverEarsAnimFrameData[];
extern JointIndex sGoronCoverEarsAnimJointIndices[];
extern AnimationHeader gGoronCoverEarsAnim;
extern s16 sGoronDropKegAnimFrameData[];
extern JointIndex sGoronDropKegAnimJointIndices[];
extern AnimationHeader gGoronDropKegAnim;
extern s16 sGoronShiverAnimFrameData[];
extern JointIndex sGoronShiverAnimJointIndices[];
extern AnimationHeader gGoronShiverAnim;
extern Vtx object_oF1d_mapVtx_003E40[];
extern Gfx gGoronDonGeroMaskDL[];
extern u64 gGoronDonGeroMaskTLUT[];
extern u64 gGoronDonGeroMaskBottomTex[];
extern u64 gGoronDonGeroMaskToesTex[];
extern u64 gGoronDonGeroMaskTopTex[];
extern u64 gGoronDonGeroMaskNostrilTex[];
extern u64 gGoronDonGeroMaskMouthTex[];
extern u64 gGoronDonGeroMaskFrillsTex[];
extern u64 gGoronDonGeroMaskEyeTex[];
extern Vtx object_oF1d_mapVtx_006E40[];
extern Gfx gGoronEmptyDL[];
extern Gfx gGoronScaredDL[];
extern u64 gGoronScaredTLUT[];
extern u64 gGoronScaredSkinTex[];
extern u64 gGoronScaredBellyButtonTex[];
extern u64 gGoronScaredBottomTex[];
extern u64 gGoronScaredRocksTex[];
extern u64 gGoronScaredHairTex[];
extern Vtx object_oF1d_mapVtx_008BB0[];
extern Gfx gGoronEmpty2DL[];
extern Gfx gGoronRolledUpDL[];
extern u64 gGoronRolledUpTLUT[];
extern u64 gGoronRolledUpSkinTex[];
extern u64 gGoronRolledUpBellyButtonTex[];
extern u64 gGoronRolledUpBottomTex[];
extern u64 gGoronRolledUpRocksTex[];
extern s16 sGoronTPoseAnimFrameData[];
extern JointIndex sGoronTPoseAnimJointIndices[];
extern AnimationHeader gGoronTPoseAnim;
extern Vtx object_oF1d_mapVtx_00A130[];
extern Gfx gGoronBodyDL[];
extern Gfx gGoronHeadDL[];
extern Gfx gGoronRightUpperArmDL[];
extern Gfx gGoronRightForearmDL[];
extern Gfx gGoronRightHandDL[];
extern Gfx gGoronLeftUpperArmDL[];
extern Gfx gGoronLeftForearmDL[];
extern Gfx gGoronLeftHandDL[];
extern Gfx gGoronPelvisDL[];
extern Gfx gGoronRightThighDL[];
extern Gfx gGoronRightShinDL[];
extern Gfx gGoronRightFootDL[];
extern Gfx gGoronLeftThighDL[];
extern Gfx gGoronLeftShinDL[];
extern Gfx gGoronLeftFootDL[];
extern u64 gGoronTLUT[];
extern u64 gGoronEyeTLUT[];
extern u64 gGoronSkinTex[];
extern u64 gGoronFingersTex[];
extern u64 gGoronTatooTex[];
extern u64 gGoronToesTex[];
extern u64 gGoronFootTex[];
extern u64 gGoronNostrilTex[];
extern u64 gGoronBottomTex[];
extern u64 gGoronsRocksTex[];
extern u64 gGoronHairTex[];
extern u64 gGoronEyeOpenTex[];
extern u64 gGoronEyeClosed2Tex[];
extern u64 gGoronEyeHalfTex[];
extern u64 gGoronEyeClosedTex[];
extern u64 gGoronLipsTex[];
extern u64 gGoronDimpleTex[];
extern u64 gGoronBeardTex[];
extern StandardLimb gGoronRootLimb;
extern StandardLimb gGoronPelvisLimb;
extern StandardLimb gGoronLegsRootLimb;
extern StandardLimb gGoronLeftThighLimb;
extern StandardLimb gGoronLeftShinLimb;
extern StandardLimb gGoronLeftFootLimb;
extern StandardLimb gGoronRightThighLimb;
extern StandardLimb gGoronRightShinLimb;
extern StandardLimb gGoronRightFootLimb;
extern StandardLimb gGoronBodyLimb;
extern StandardLimb gGoronLeftUpperArmLimb;
extern StandardLimb gGoronLeftForearmLimb;
extern StandardLimb gGoronLeftHandLimb;
extern StandardLimb gGoronRightUpperArmLimb;
extern StandardLimb gGoronRightForearmLimb;
extern StandardLimb gGoronRightHandLimb;
extern StandardLimb gGoronHeadLimb;
extern void* gGoronSkelLimbs[];
extern FlexSkeletonHeader gGoronSkel;
extern s16 sGoronLyingDownIdleAnimFrameData[];
extern JointIndex sGoronLyingDownIdleAnimJointIndices[];
extern AnimationHeader gGoronLyingDownIdleAnim;
extern s16 sGoronUnrollAnimFrameData[];
extern JointIndex sGoronUnrollAnimJointIndices[];
extern AnimationHeader gGoronUnrollAnim;
extern s16 sGoronShiveringSurprisedAnimFrameData[];
extern JointIndex sGoronShiveringSurprisedAnimJointIndices[];
extern AnimationHeader gGoronShiveringSurprisedAnim;
extern s16 sGoronStandingHandTappingAnimFrameData[];
extern JointIndex sGoronStandingHandTappingAnimJointIndices[];
extern AnimationHeader gGoronStandingHandTappingAnim;
extern s16 sGoronSleepyAnimFrameData[];
extern JointIndex sGoronSleepyAnimJointIndices[];
extern AnimationHeader gGoronSleepyAnim;
extern s16 sGoronStandingIdleAnimFrameData[];
extern JointIndex sGoronStandingIdleAnimJointIndices[];
extern AnimationHeader gGoronStandingIdleAnim;
extern Gfx gGoronDustMaterialDL[];
extern Gfx gGoronDustModelDL[];
extern Vtx object_oF1d_mapVtx_014D50[];
#endif
