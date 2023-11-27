#ifndef OBJECT_AZ_H
#define OBJECT_AZ_H 1

typedef enum BeaverOlderBrotherLimb {
    /* 0x00 */ BEAVER_OLDER_BROTHER_LIMB_NONE,
    /* 0x01 */ BEAVER_OLDER_BROTHER_LIMB_ROOT,
    /* 0x02 */ BEAVER_OLDER_BROTHER_LIMB_PELVIS_ROOT,
    /* 0x03 */ BEAVER_OLDER_BROTHER_LIMB_PELVIS,
    /* 0x04 */ BEAVER_OLDER_BROTHER_LIMB_TORSO_ROOT,
    /* 0x05 */ BEAVER_OLDER_BROTHER_LIMB_HEAD_ROOT,
    /* 0x06 */ BEAVER_OLDER_BROTHER_LIMB_HEAD,
    /* 0x07 */ BEAVER_OLDER_BROTHER_LIMB_TEETH,
    /* 0x08 */ BEAVER_OLDER_BROTHER_LIMB_HAIR_RIGHT,
    /* 0x09 */ BEAVER_OLDER_BROTHER_LIMB_HAIR_LEFT,
    /* 0x0A */ BEAVER_OLDER_BROTHER_LIMB_HAIR_BACK,
    /* 0x0B */ BEAVER_OLDER_BROTHER_LIMB_LEFT_ARM_ROOT,
    /* 0x0C */ BEAVER_OLDER_BROTHER_LIMB_LEFT_ARM,
    /* 0x0D */ BEAVER_OLDER_BROTHER_LIMB_RIGHT_ARM_ROOT,
    /* 0x0E */ BEAVER_OLDER_BROTHER_LIMB_RIGHT_ARM,
    /* 0x0F */ BEAVER_OLDER_BROTHER_LIMB_TORSO,
    /* 0x10 */ BEAVER_OLDER_BROTHER_LIMB_INNER_TUBE,
    /* 0x11 */ BEAVER_OLDER_BROTHER_LIMB_TAIL_ROOT,
    /* 0x12 */ BEAVER_OLDER_BROTHER_LIMB_TAIL_BASE,
    /* 0x13 */ BEAVER_OLDER_BROTHER_LIMB_TAIL_END,
    /* 0x14 */ BEAVER_OLDER_BROTHER_LIMB_RIGHT_LEG_ROOT,
    /* 0x15 */ BEAVER_OLDER_BROTHER_LIMB_RIGHT_LEG,
    /* 0x16 */ BEAVER_OLDER_BROTHER_LIMB_LEFT_LEG_ROOT,
    /* 0x17 */ BEAVER_OLDER_BROTHER_LIMB_LEFT_LEG,
    /* 0x18 */ BEAVER_OLDER_BROTHER_LIMB_MAX
} BeaverOlderBrotherLimb;

typedef enum BeaverYoungerBrotherLimb {
    /* 0x00 */ BEAVER_YOUNGER_BROTHER_LIMB_NONE,
    /* 0x01 */ BEAVER_YOUNGER_BROTHER_LIMB_ROOT,
    /* 0x02 */ BEAVER_YOUNGER_BROTHER_LIMB_PELVIS_ROOT,
    /* 0x03 */ BEAVER_YOUNGER_BROTHER_LIMB_PELVIS,
    /* 0x04 */ BEAVER_YOUNGER_BROTHER_LIMB_TORSO_ROOT,
    /* 0x05 */ BEAVER_YOUNGER_BROTHER_LIMB_HEAD_ROOT,
    /* 0x06 */ BEAVER_YOUNGER_BROTHER_LIMB_HEAD,
    /* 0x07 */ BEAVER_YOUNGER_BROTHER_LIMB_TEETH,
    /* 0x08 */ BEAVER_YOUNGER_BROTHER_LIMB_HAIR_RIGHT,
    /* 0x09 */ BEAVER_YOUNGER_BROTHER_LIMB_HAIR_LEFT,
    /* 0x0A */ BEAVER_YOUNGER_BROTHER_LIMB_HAIR_BACK,
    /* 0x0B */ BEAVER_YOUNGER_BROTHER_LIMB_LEFT_ARM_ROOT,
    /* 0x0C */ BEAVER_YOUNGER_BROTHER_LIMB_LEFT_ARM,
    /* 0x0D */ BEAVER_YOUNGER_BROTHER_LIMB_RIGHT_ARM_ROOT,
    /* 0x0E */ BEAVER_YOUNGER_BROTHER_LIMB_RIGHT_ARM,
    /* 0x0F */ BEAVER_YOUNGER_BROTHER_LIMB_TORSO,
    /* 0x10 */ BEAVER_YOUNGER_BROTHER_LIMB_LOGS,
    /* 0x11 */ BEAVER_YOUNGER_BROTHER_LIMB_TAIL_ROOT,
    /* 0x12 */ BEAVER_YOUNGER_BROTHER_LIMB_TAIL_BASE,
    /* 0x13 */ BEAVER_YOUNGER_BROTHER_LIMB_TAIL_END,
    /* 0x14 */ BEAVER_YOUNGER_BROTHER_LIMB_RIGHT_LEG_ROOT,
    /* 0x15 */ BEAVER_YOUNGER_BROTHER_LIMB_RIGHT_LEG,
    /* 0x16 */ BEAVER_YOUNGER_BROTHER_LIMB_LEFT_LEG_ROOT,
    /* 0x17 */ BEAVER_YOUNGER_BROTHER_LIMB_LEFT_LEG,
    /* 0x18 */ BEAVER_YOUNGER_BROTHER_LIMB_MAX
} BeaverYoungerBrotherLimb;

extern Vtx object_azVtx_000000[];
extern Gfx gBeaverOlderBrotherHeadDL[];
extern Gfx gBeaverOlderBrotherHairLeftDL[];
extern Gfx gBeaverOlderBrotherHairBackDL[];
extern Gfx gBeaverOlderBrotherHairRightDL[];
extern Gfx gBeaverOlderBrotherTeethDL[];
extern Gfx gBeaverOlderBrotherLeftArmDL[];
extern Gfx gBeaverOlderBrotherRightArmDL[];
extern Gfx gBeaverOlderBrotherInnerTubeDL[];
extern Gfx gBeaverOlderBrotherTorsoDL[];
extern Gfx gBeaverOlderBrotherTailEndDL[];
extern Gfx gBeaverOlderBrotherTailBaseDL[];
extern Gfx gBeaverOlderBrotherLeftLegDL[];
extern Gfx gBeaverOlderBrotherRightLegDL[];
extern Gfx gBeaverOlderBrotherPelvisDL[];
extern u64 gBeaverOlderBrotherGoggleTex[];
extern u64 gBeaverOlderBrotherMouthTex[];
extern u64 gBeaverOlderBrotherNoseTex[];
extern u64 gBeaverOlderBrotherSkinTex[];
extern u64 gBeaverOlderBrotherGoggleStrapTex[];
extern u64 gBeaverOlderBrotherCapTex[];
extern u64 gBeaverOlderBrotherToothTex[];
extern u64 gBeaverOlderBrotherHairTex[];
extern u64 gBeaverOlderBrotherHandAndFootTex[];
extern u64 gBeaverOlderBrotherTorsoTex[];
extern u64 gBeaverOlderBrotherInnerTubeTex[];
extern u64 gBeaverOlderBrotherTailTex[];
extern u64 gBeaverOlderBrotherPantsTex[];
extern StandardLimb gBeaverOlderBrotherRootLimb;
extern StandardLimb gBeaverOlderBrotherPelvisRootLimb;
extern StandardLimb gBeaverOlderBrotherPelvisLimb;
extern StandardLimb gBeaverOlderBrotherTorsoRootLimb;
extern StandardLimb gBeaverOlderBrotherHeadRootLimb;
extern StandardLimb gBeaverOlderBrotherHeadLimb;
extern StandardLimb gBeaverOlderBrotherTeethLimb;
extern StandardLimb gBeaverOlderBrotherHairRightLimb;
extern StandardLimb gBeaverOlderBrotherHairLeftLimb;
extern StandardLimb gBeaverOlderBrotherHairBackLimb;
extern StandardLimb gBeaverOlderBrotherLeftArmRootLimb;
extern StandardLimb gBeaverOlderBrotherLeftArmLimb;
extern StandardLimb gBeaverOlderBrotherRightArmRootLimb;
extern StandardLimb gBeaverOlderBrotherRightArmLimb;
extern StandardLimb gBeaverOlderBrotherTorsoLimb;
extern StandardLimb gBeaverOlderBrotherInnerTubeLimb;
extern StandardLimb gBeaverOlderBrotherTailRootLimb;
extern StandardLimb gBeaverOlderBrotherTailBaseLimb;
extern StandardLimb gBeaverOlderBrotherTailEndLimb;
extern StandardLimb gBeaverOlderBrotherRightLegRootLimb;
extern StandardLimb gBeaverOlderBrotherRightLegLimb;
extern StandardLimb gBeaverOlderBrotherLeftLegRootLimb;
extern StandardLimb gBeaverOlderBrotherLeftLegLimb;
extern void* gBeaverOlderBrotherSkelLimbs[];
extern FlexSkeletonHeader gBeaverOlderBrotherSkel;
extern s16 sBeaverGlitchyLimbSpinAnimFrameData[];
extern JointIndex sBeaverGlitchyLimbSpinAnimJointIndices[];
extern AnimationHeader gBeaverGlitchyLimbSpinAnim;
extern s16 sBeaverLaughLeftAnimFrameData[];
extern JointIndex sBeaverLaughLeftAnimJointIndices[];
extern AnimationHeader gBeaverLaughLeftAnim;
extern s16 sBeaverLaughRightAnimFrameData[];
extern JointIndex sBeaverLaughRightAnimJointIndices[];
extern AnimationHeader gBeaverLaughRightAnim;
extern s16 sBeaverSwimWithSpinningTailAnimFrameData[];
extern JointIndex sBeaverSwimWithSpinningTailAnimJointIndices[];
extern AnimationHeader gBeaverSwimWithSpinningTailAnim;
extern s16 sBeaverSwimWithRaisedTailAnimFrameData[];
extern JointIndex sBeaverSwimWithRaisedTailAnimJointIndices[];
extern AnimationHeader gBeaverSwimWithRaisedTailAnim;
extern s16 sBeaverSwimAnimFrameData[];
extern JointIndex sBeaverSwimAnimJointIndices[];
extern AnimationHeader gBeaverSwimAnim;
extern s16 sBeaverTalkAnimFrameData[];
extern JointIndex sBeaverTalkAnimJointIndices[];
extern AnimationHeader gBeaverTalkAnim;
extern s16 sBeaverTalkWaveArmsAnimFrameData[];
extern JointIndex sBeaverTalkWaveArmsAnimJointIndices[];
extern AnimationHeader gBeaverTalkWaveArmsAnim;
extern s16 sBeaverTalkToLeftAnimFrameData[];
extern JointIndex sBeaverTalkToLeftAnimJointIndices[];
extern AnimationHeader gBeaverTalkToLeftAnim;
extern s16 sBeaverTalkToRightAnimFrameData[];
extern JointIndex sBeaverTalkToRightAnimJointIndices[];
extern AnimationHeader gBeaverTalkToRightAnim;
extern s16 sBeaverBowAnimFrameData[];
extern JointIndex sBeaverBowAnimJointIndices[];
extern AnimationHeader gBeaverBowAnim;
extern s16 sBeaverIdleAnimFrameData[];
extern JointIndex sBeaverIdleAnimJointIndices[];
extern AnimationHeader gBeaverIdleAnim;
extern s16 sBeaverIdleFaceLeftAnimFrameData[];
extern JointIndex sBeaverIdleFaceLeftAnimJointIndices[];
extern AnimationHeader gBeaverIdleFaceLeftAnim;
extern s16 sBeaverIdleFaceRightAnimFrameData[];
extern JointIndex sBeaverIdleFaceRightAnimJointIndices[];
extern AnimationHeader gBeaverIdleFaceRightAnim;
extern s16 sBeaverWalkAnimFrameData[];
extern JointIndex sBeaverWalkAnimJointIndices[];
extern AnimationHeader gBeaverWalkAnim;
extern Vtx object_azVtx_00C960[];
extern Gfx gBeaverYoungerBrotherHeadDL[];
extern Gfx gBeaverYoungerBrotherHairLeftDL[];
extern Gfx gBeaverYoungerBrotherHairRightDL[];
extern Gfx gBeaverYoungerBrotherHairBackDL[];
extern Gfx gBeaverYoungerBrotherTeethDL[];
extern Gfx gBeaverYoungerBrotherLeftArmDL[];
extern Gfx gBeaverYoungerBrotherRightArmDL[];
extern Gfx gBeaverYoungerBrotherLogsDL[];
extern Gfx gBeaverYoungerBrotherTorsoDL[];
extern Gfx gBeaverYoungerBrotherTailEndDL[];
extern Gfx gBeaverYoungerBrotherTailBaseDL[];
extern Gfx gBeaverYoungerBrotherLeftLegDL[];
extern Gfx gBeaverYoungerBrotherRightLegDL[];
extern Gfx gBeaverYoungerBrotherPelvisDL[];
extern u64 gBeaverYoungerBrotherEye1Tex[];
extern u64 gBeaverYoungerBrotherEye2Tex[];
extern u64 gBeaverYoungerBrotherEye3Tex[];
extern u64 gBeaverYoungerBrotherEye4Tex[];
extern u64 gBeaverYoungerBrotherMouthTex[];
extern u64 gBeaverYoungerBrotherNoseTex[];
extern u64 gBeaverYoungerBrotherSkinTex[];
extern u64 gBeaverYoungerBrotherClothesTex[];
extern u64 gBeaverYoungerBrotherHairTex[];
extern u64 gBeaverYoungerBrotherToothTex[];
extern u64 gBeaverYoungerBrotherHandAndFootTex[];
extern u64 gBeaverYoungerBrotherLogsEndTex[];
extern u64 gBeaverYoungerBrotherLogsTex[];
extern u64 gBeaverYoungerBrotherTailTex[];
extern u64 gBeaverYoungerBrotherTailSkinTex[];
extern u64 gBeaverYoungerBrotherBeltRedTex[];
extern u64 gBeaverYoungerBrotherBeltGreenTex[];
extern u64 gBeaverYoungerBrotherBeltBlueTex[];
extern StandardLimb gBeaverYoungerBrotherRootLimb;
extern StandardLimb gBeaverYoungerBrotherPelvisRootLimb;
extern StandardLimb gBeaverYoungerBrotherPelvisLimb;
extern StandardLimb gBeaverYoungerBrotherTorsoRootLimb;
extern StandardLimb gBeaverYoungerBrotherHeadRootLimb;
extern StandardLimb gBeaverYoungerBrotherHeadLimb;
extern StandardLimb gBeaverYoungerBrotherTeethLimb;
extern StandardLimb gBeaverYoungerBrotherHairRightLimb;
extern StandardLimb gBeaverYoungerBrotherHairLeftLimb;
extern StandardLimb gBeaverYoungerBrotherHairBackLimb;
extern StandardLimb gBeaverYoungerBrotherLeftArmRootLimb;
extern StandardLimb gBeaverYoungerBrotherLeftArmLimb;
extern StandardLimb gBeaverYoungerBrotherRightArmRootLimb;
extern StandardLimb gBeaverYoungerBrotherRightArmLimb;
extern StandardLimb gBeaverYoungerBrotherTorsoLimb;
extern StandardLimb gBeaverYoungerBrotherLogsLimb;
extern StandardLimb gBeaverYoungerBrotherTailRootLimb;
extern StandardLimb gBeaverYoungerBrotherTailBaseLimb;
extern StandardLimb gBeaverYoungerBrotherTailEndLimb;
extern StandardLimb gBeaverYoungerBrotherRightLegRootLimb;
extern StandardLimb gBeaverYoungerBrotherRightLegLimb;
extern StandardLimb gBeaverYoungerBrotherLeftLegRootLimb;
extern StandardLimb gBeaverYoungerBrotherLeftLegLimb;
extern void* gBeaverYoungerBrotherSkelLimbs[];
extern FlexSkeletonHeader gBeaverYoungerBrotherSkel;
extern u64 gBeaverUnusedTLUT[];
extern u64 gBeaverOlderBrotherTailVortexMaskTex[];
extern u64 gBeaverOlderBrotherTailVortexTex[];
extern u64 gBeaverYoungerBrotherTailVortexTex[];
extern u64 gBeaverYoungerBrotherTailVortexMaskTex[];
extern u64 gBeaverYoungerBrotherTailSplashTex[];
extern u64 gBeaverYoungerBrotherTailSplashMaskTex[];
extern Vtx object_azVtx_01A5C0[];
extern Gfx gBeaverOlderBrotherTailVortex1DL[];
extern AnimatedMatTexScrollParams gBeaverOlderBrotherTailVortex1TexAnimTexScrollParams_01A6E0[];
extern AnimatedMaterial gBeaverOlderBrotherTailVortex1TexAnim[];
extern Vtx object_azVtx_01A6F0[];
extern Gfx gBeaverOlderBrotherTailVortex2DL[];
extern AnimatedMatTexScrollParams gBeaverOlderBrotherTailVortex2TexAnimTexScrollParams_01A810[];
extern AnimatedMaterial gBeaverOlderBrotherTailVortex2TexAnim[];
extern Vtx object_azVtx_01A820[];
extern Gfx gBeaverOlderBrotherTailVortex3DL[];
extern AnimatedMatTexScrollParams gBeaverOlderBrotherTailVortex3TexAnimTexScrollParams_01A940[];
extern AnimatedMaterial gBeaverOlderBrotherTailVortex3TexAnim[];
extern Vtx object_azVtx_01A950[];
extern Gfx gBeaverOlderBrotherTailVortex4DL[];
extern AnimatedMatTexScrollParams gBeaverOlderBrotherTailVortex4TexAnimTexScrollParams_01AA70[];
extern AnimatedMaterial gBeaverOlderBrotherTailVortex4TexAnim[];
extern Vtx object_azVtx_01AA80[];
extern Gfx gBeaverOlderBrotherTailVortex5DL[];
extern AnimatedMatTexScrollParams gBeaverOlderBrotherTailVortex5TexAnimTexScrollParams_01ABA0[];
extern AnimatedMaterial gBeaverOlderBrotherTailVortex5TexAnim[];
extern Vtx object_azVtx_01ABB0[];
extern Gfx gBeaverYoungerBrotherTailVortexDL[];
extern Vtx object_azVtx_01ACC0[];
extern Gfx gBeaverYoungerBrotherTailSplashDL[];
#endif
