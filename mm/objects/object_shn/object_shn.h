#ifndef OBJECT_SHN_H
#define OBJECT_SHN_H 1

typedef enum BurlyGuyLimb {
    /* 0x00 */ BURLY_GUY_LIMB_NONE,
    /* 0x01 */ BURLY_GUY_LIMB_WAIST,
    /* 0x02 */ BURLY_GUY_LIMB_LEFT_THIGH,
    /* 0x03 */ BURLY_GUY_LIMB_LEFT_SHIN,
    /* 0x04 */ BURLY_GUY_LIMB_LEFT_FOOT,
    /* 0x05 */ BURLY_GUY_LIMB_RIGHT_THIGH,
    /* 0x06 */ BURLY_GUY_LIMB_RIGHT_SHIN,
    /* 0x07 */ BURLY_GUY_LIMB_RIGHT_FOOT,
    /* 0x08 */ BURLY_GUY_LIMB_TORSO,
    /* 0x09 */ BURLY_GUY_LIMB_LEFT_SHOULDER,
    /* 0x0A */ BURLY_GUY_LIMB_LEFT_FOREARM,
    /* 0x0B */ BURLY_GUY_LIMB_LEFT_HAND,
    /* 0x0C */ BURLY_GUY_LIMB_RIGHT_SHOULDER,
    /* 0x0D */ BURLY_GUY_LIMB_RIGHT_FOREARM,
    /* 0x0E */ BURLY_GUY_LIMB_RIGHT_HAND,
    /* 0x0F */ BURLY_GUY_LIMB_HEAD,
    /* 0x10 */ BURLY_GUY_LIMB_MAX
} BurlyGuyLimb;

extern Vtx object_shnVtx_000000[];
extern Gfx gBurlyGuyWaistDL[];
extern Gfx gBurlyGuyTorsoDL[];
extern Gfx gSwampShootingGalleryManHeadDL[];
extern Gfx gBurlyGuyRightShoulderDL[];
extern Gfx gBurlyGuyRightForearmDL[];
extern Gfx gBurlyGuyRightHandDL[];
extern Gfx gBurlyGuyLeftShoulderDL[];
extern Gfx gBurlyGuyLeftForearmDL[];
extern Gfx gBurlyGuyLeftHandDL[];
extern Gfx gBurlyGuyRightThighDL[];
extern Gfx gBurlyGuyRightShinDL[];
extern Gfx gBurlyGuyRightFootDL[];
extern Gfx gBurlyGuyLeftThighDL[];
extern Gfx gBurlyGuyLeftShinDL[];
extern Gfx gBurlyGuyLeftFootDL[];
extern u64 gSwampShootingGalleryManNoseTLUT[];
extern u64 gBurlyGuyTLUT[];
extern u64 gBurlyGuySkinTex[];
extern u64 gSwampShootingGalleryManEyeOpenTex[];
extern u64 gSwampShootingGalleryManEyeHalfTex[];
extern u64 gSwampShootingGalleryManEyeClosedTex[];
extern u64 gSwampShootingGalleryManEarTex[];
extern u64 gSwampShootingGalleryManNoseTex[];
extern u64 gSwampShootingGalleryManBeardAndLipsTex[];
extern u64 gSwampShootingGalleryManHairTex[];
extern u64 gBurlyGuyHandTex[];
extern u64 gBurlyGuyBodyHairTex[];
extern u64 gBurlyGuyVestTex[];
extern u64 gBurlyGuyPantsTex[];
extern u64 gBurlyGuyShoesTex[];
extern AnimatedMaterial gBurlyGuyUnused8050TexAnim[];
extern Vtx object_shnVtx_008060[];
extern Gfx gUnusedTownShootingGalleryManEyesDL[];
extern Gfx gUnusedTownShootingGalleryManLipsDL[];
extern Gfx gUnusedTownShootingGalleryManNoseDL[];
extern Gfx gUnusedTownShootingGalleryManEarsDL[];
extern Gfx gUnusedTownShootingGalleryManHairAndSideburnsDL[];
extern Gfx gUnusedTownShootingGalleryManFaceAndChinDL[];
extern u64 gUnusedTownShootingGalleryManBeardAndLipsTLUT[];
extern u64 gUnusedTownShootingGalleryManHairTLUT[];
extern u64 gUnusedTownShootingGalleryManEarTLUT[];
extern u64 gUnusedTownShootingGalleryManNoseTLUT[];
extern u64 gUnusedTownShootingGalleryManEyeTLUT[];
extern u64 gUnusedTownShootingGalleryManSkinTLUT[];
extern u64 gUnusedTownShootingGalleryManBeardAndLipsTex[];
extern u64 gUnusedTownShootingGalleryManHairTex[];
extern u64 gUnusedTownShootingGalleryManEarTex[];
extern u64 gUnusedTownShootingGalleryManNoseTex[];
extern u64 gUnusedTownShootingGalleryManEyeTex[];
extern u64 gUnusedTownShootingGalleryManSkinTex[];
extern Vtx object_shnVtx_00A860[];
extern Gfx gBurlyGuyEmptyDL[];
extern Gfx gSwampGuideHeadDL[];
extern u64 gSwampGuideHairFabricAndSkinTLUT[];
extern u64 gSwampGuideMouthGoggleAndEyeTLUT[];
extern u64 gSwampGuideSkinTex[];
extern u64 gSwampGuideHatFabricTex[];
extern u64 gSwampGuideHairAndBeardTex[];
extern u64 gSwampGuideHatAndGogglesMetalTex[];
extern u64 gSwampGuideEyeTex[];
extern u64 gSwampGuideGoggleStrapTex[];
extern u64 gSwampGuideNoseTex[];
extern u64 gSwampGuideMouthTex[];
extern s16 sBurlyGuyHeadScratchEndAnimFrameData[];
extern JointIndex sBurlyGuyHeadScratchEndAnimJointIndices[];
extern AnimationHeader gBurlyGuyHeadScratchEndAnim;
extern s16 sBurlyGuyEmptyAnimFrameData[];
extern JointIndex sBurlyGuyEmptyAnimJointIndices[];
extern AnimationHeader gBurlyGuyEmptyAnim;
extern s16 sBurlyGuyHandsOnTableAnimFrameData[];
extern JointIndex sBurlyGuyHandsOnTableAnimJointIndices[];
extern AnimationHeader gBurlyGuyHandsOnTableAnim;
extern s16 sBurlyGuyHeadScratchLoopAnimFrameData[];
extern JointIndex sBurlyGuyHeadScratchLoopAnimJointIndices[];
extern AnimationHeader gBurlyGuyHeadScratchLoopAnim;
extern s16 sBurlyGuyChinScratchAnimFrameData[];
extern JointIndex sBurlyGuyChinScratchAnimJointIndices[];
extern AnimationHeader gBurlyGuyChinScratchAnim;
extern StandardLimb gBurlyGuyWaistLimb;
extern StandardLimb gBurlyGuyLeftThighLimb;
extern StandardLimb gBurlyGuyLeftShinLimb;
extern StandardLimb gBurlyGuyLeftFootLimb;
extern StandardLimb gBurlyGuyRightThighLimb;
extern StandardLimb gBurlyGuyRightShinLimb;
extern StandardLimb gBurlyGuyRightFootLimb;
extern StandardLimb gBurlyGuyTorsoLimb;
extern StandardLimb gBurlyGuyLeftShoulderLimb;
extern StandardLimb gBurlyGuyLeftForearmLimb;
extern StandardLimb gBurlyGuyLeftHandLimb;
extern StandardLimb gBurlyGuyRightShoulderLimb;
extern StandardLimb gBurlyGuyRightForearmLimb;
extern StandardLimb gBurlyGuyRightHandLimb;
extern StandardLimb gBurlyGuyHeadLimb;
extern void* gBurlyGuySkelLimbs[];
extern FlexSkeletonHeader gBurlyGuySkel;
extern Vtx object_shnVtx_00E7E0[];
extern Gfx gTownShootingGalleryManHeadDL[];
extern u64 gTownShootingGalleryManNoseTLUT[];
extern u64 gTownShootingGalleryManHeadTLUT[];
extern u64 gTownShootingGalleryManEyeOpenTex[];
extern u64 gTownShootingGalleryManEyeClosedTex[];
extern u64 gTownShootingGalleryManBeardAndLipsTex[];
extern u64 gTownShootingGalleryManNoseTex[];
extern u64 gTownShootingGalleryManEarTex[];
extern u64 gTownShootingGalleryManHairTex[];
extern u64 gTownShootingGalleryManSkinTex[];
extern AnimatedMaterial gBurlyGuyUnused11210TexAnim[];
#endif
