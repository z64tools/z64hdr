#ifndef OBJECT_BOSS07_H
#define OBJECT_BOSS07_H 1

typedef enum MajorasIncarnationLimb {
    /* 0x00 */ MAJORAS_INCARNATION_LIMB_NONE,
    /* 0x01 */ MAJORAS_INCARNATION_LIMB_ROOT,
    /* 0x02 */ MAJORAS_INCARNATION_LIMB_WRAPPER,
    /* 0x03 */ MAJORAS_INCARNATION_LIMB_MASK,
    /* 0x04 */ MAJORAS_INCARNATION_LIMB_RIGHT_LEG_ROOT,
    /* 0x05 */ MAJORAS_INCARNATION_LIMB_RIGHT_THIGH,
    /* 0x06 */ MAJORAS_INCARNATION_LIMB_RIGHT_LOWER_LEG_ROOT,
    /* 0x07 */ MAJORAS_INCARNATION_LIMB_RIGHT_SHIN,
    /* 0x08 */ MAJORAS_INCARNATION_LIMB_RIGHT_FOOT,
    /* 0x09 */ MAJORAS_INCARNATION_LIMB_RIGHT_ARM_ROOT,
    /* 0x0A */ MAJORAS_INCARNATION_LIMB_RIGHT_UPPER_ARM,
    /* 0x0B */ MAJORAS_INCARNATION_LIMB_RIGHT_LOWER_ARM_ROOT,
    /* 0x0C */ MAJORAS_INCARNATION_LIMB_RIGHT_FOREARM,
    /* 0x0D */ MAJORAS_INCARNATION_LIMB_RIGHT_HAND,
    /* 0x0E */ MAJORAS_INCARNATION_LIMB_LEFT_ARM_ROOT,
    /* 0x0F */ MAJORAS_INCARNATION_LIMB_LEFT_UPPER_ARM,
    /* 0x10 */ MAJORAS_INCARNATION_LIMB_LEFT_LOWER_ARM_ROOT,
    /* 0x11 */ MAJORAS_INCARNATION_LIMB_LEFT_FOREARM,
    /* 0x12 */ MAJORAS_INCARNATION_LIMB_LEFT_HAND,
    /* 0x13 */ MAJORAS_INCARNATION_LIMB_LEFT_LEG_ROOT,
    /* 0x14 */ MAJORAS_INCARNATION_LIMB_LEFT_THIGH,
    /* 0x15 */ MAJORAS_INCARNATION_LIMB_LEFT_LOWER_LEG_ROOT,
    /* 0x16 */ MAJORAS_INCARNATION_LIMB_LEFT_SHIN,
    /* 0x17 */ MAJORAS_INCARNATION_LIMB_LEFT_FOOT,
    /* 0x18 */ MAJORAS_INCARNATION_LIMB_EYESTALK,
    /* 0x19 */ MAJORAS_INCARNATION_LIMB_MAX
} MajorasIncarnationLimb;

typedef enum MajorasMaskLimb {
    /* 0x00 */ MAJORAS_MASK_LIMB_NONE,
    /* 0x01 */ MAJORAS_MASK_LIMB_ROOT,
    /* 0x02 */ MAJORAS_MASK_LIMB_FACE,
    /* 0x03 */ MAJORAS_MASK_LIMB_LEFT_SPIKE2_ROOT,
    /* 0x04 */ MAJORAS_MASK_LIMB_LEFT_SPIKE2,
    /* 0x05 */ MAJORAS_MASK_LIMB_LEFT_SPIKE1_ROOT,
    /* 0x06 */ MAJORAS_MASK_LIMB_LEFT_SPIKE1,
    /* 0x07 */ MAJORAS_MASK_LIMB_RIGHT_SPIKE1_ROOT,
    /* 0x08 */ MAJORAS_MASK_LIMB_RIGHT_SPIKE1,
    /* 0x09 */ MAJORAS_MASK_LIMB_RIGHT_SPIKE2_ROOT,
    /* 0x0A */ MAJORAS_MASK_LIMB_RIGHT_SPIKE2,
    /* 0x0B */ MAJORAS_MASK_LIMB_RIGHT_SPIKE3_ROOT,
    /* 0x0C */ MAJORAS_MASK_LIMB_RIGHT_SPIKE3,
    /* 0x0D */ MAJORAS_MASK_LIMB_RIGHT_SPIKE4_ROOT,
    /* 0x0E */ MAJORAS_MASK_LIMB_RIGHT_SPIKE4,
    /* 0x0F */ MAJORAS_MASK_LIMB_LEFT_SPIKE4_ROOT,
    /* 0x10 */ MAJORAS_MASK_LIMB_LEFT_SPIKE4,
    /* 0x11 */ MAJORAS_MASK_LIMB_LEFT_SPIKE3_ROOT,
    /* 0x12 */ MAJORAS_MASK_LIMB_LEFT_SPIKE3,
    /* 0x13 */ MAJORAS_MASK_LIMB_MAX
} MajorasMaskLimb;

typedef enum MajorasWrathLimb {
    /* 0x00 */ MAJORAS_WRATH_LIMB_NONE,
    /* 0x01 */ MAJORAS_WRATH_LIMB_ROOT,
    /* 0x02 */ MAJORAS_WRATH_LIMB_PELVIS,
    /* 0x03 */ MAJORAS_WRATH_LIMB_LEFT_LEG_ROOT,
    /* 0x04 */ MAJORAS_WRATH_LIMB_LEFT_THIGH,
    /* 0x05 */ MAJORAS_WRATH_LIMB_LEFT_LOWER_LEG_ROOT,
    /* 0x06 */ MAJORAS_WRATH_LIMB_LEFT_SHIN,
    /* 0x07 */ MAJORAS_WRATH_LIMB_LEFT_FOOT,
    /* 0x08 */ MAJORAS_WRATH_LIMB_RIGHT_LEG_ROOT,
    /* 0x09 */ MAJORAS_WRATH_LIMB_RIGHT_THIGH,
    /* 0x0A */ MAJORAS_WRATH_LIMB_RIGHT_LOWER_LEG_ROOT,
    /* 0x0B */ MAJORAS_WRATH_LIMB_RIGHT_SHIN,
    /* 0x0C */ MAJORAS_WRATH_LIMB_RIGHT_FOOT,
    /* 0x0D */ MAJORAS_WRATH_LIMB_TORSO_ROOT,
    /* 0x0E */ MAJORAS_WRATH_LIMB_TORSO,
    /* 0x0F */ MAJORAS_WRATH_LIMB_RIGHT_ARM_ROOT,
    /* 0x10 */ MAJORAS_WRATH_LIMB_RIGHT_UPPER_ARM,
    /* 0x11 */ MAJORAS_WRATH_LIMB_RIGHT_LOWER_ARM_ROOT,
    /* 0x12 */ MAJORAS_WRATH_LIMB_RIGHT_FOREARM,
    /* 0x13 */ MAJORAS_WRATH_LIMB_RIGHT_HAND,
    /* 0x14 */ MAJORAS_WRATH_LIMB_LEFT_ARM_ROOT,
    /* 0x15 */ MAJORAS_WRATH_LIMB_LEFT_UPPER_ARM,
    /* 0x16 */ MAJORAS_WRATH_LIMB_LEFT_LOWER_ARM_ROOT,
    /* 0x17 */ MAJORAS_WRATH_LIMB_LEFT_FOREARM,
    /* 0x18 */ MAJORAS_WRATH_LIMB_LEFT_HAND,
    /* 0x19 */ MAJORAS_WRATH_LIMB_HEAD_ROOT,
    /* 0x1A */ MAJORAS_WRATH_LIMB_HEAD,
    /* 0x1B */ MAJORAS_WRATH_LIMB_THIRD_EYE,
    /* 0x1C */ MAJORAS_WRATH_LIMB_MAX
} MajorasWrathLimb;

extern s16 sMajorasIncarnationPirouetteAnimFrameData[];
extern JointIndex sMajorasIncarnationPirouetteAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationPirouetteAnim;
extern s16 sMajorasIncarnationEnergyBallAttackAnimFrameData[];
extern JointIndex sMajorasIncarnationEnergyBallAttackAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationEnergyBallAttackAnim;
extern s16 sMajorasIncarnationDamageAnimFrameData[];
extern JointIndex sMajorasIncarnationDamageAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationDamageAnim;
extern s16 sMajorasIncarnationIntroDanceAnimFrameData[];
extern JointIndex sMajorasIncarnationIntroDanceAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationIntroDanceAnim;
extern s16 sMajorasIncarnationJerkingAnimFrameData[];
extern JointIndex sMajorasIncarnationJerkingAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationJerkingAnim;
extern s16 sMajorasIncarnationPumpingUpAnimFrameData[];
extern JointIndex sMajorasIncarnationPumpingUpAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationPumpingUpAnim;
extern s16 sMajorasIncarnationFinalHitAnimFrameData[];
extern JointIndex sMajorasIncarnationFinalHitAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationFinalHitAnim;
extern s16 sMajorasIncarnationSquattingDanceAnimFrameData[];
extern JointIndex sMajorasIncarnationSquattingDanceAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationSquattingDanceAnim;
extern s16 sMajorasIncarnationStationaryAnimFrameData[];
extern JointIndex sMajorasIncarnationStationaryAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationStationaryAnim;
extern Vtx object_boss07Vtx_003B50[];
extern Gfx gMajorasIncarnationEyestalkDL[];
extern Gfx gMajorasIncarnationLeftFootDL[];
extern Gfx gMajorasIncarnationLeftShinDL[];
extern Gfx gMajorasIncarnationLeftThighDL[];
extern Gfx gMajorasIncarnationLeftHandDL[];
extern Gfx gMajorasIncarnationLeftForearmDL[];
extern Gfx gMajorasIncarnationLeftUpperArmDL[];
extern Gfx gMajorasIncarnationRightHandDL[];
extern Gfx gMajorasIncarnationRightForearmDL[];
extern Gfx gMajorasIncarnationRightUpperArmDL[];
extern Gfx gMajorasIncarnationRightFootDL[];
extern Gfx gMajorasIncarnationRightShinDL[];
extern Gfx gMajorasIncarnationRightThighDL[];
extern Gfx gMajorasIncarnationMaskDL[];
extern StandardLimb gMajorasIncarnationRootLimb;
extern StandardLimb gMajorasIncarnationWrapperLimb;
extern StandardLimb gMajorasIncarnationMaskLimb;
extern StandardLimb gMajorasIncarnationRightLegRootLimb;
extern StandardLimb gMajorasIncarnationRightThighLimb;
extern StandardLimb gMajorasIncarnationRightLowerLegRootLimb;
extern StandardLimb gMajorasIncarnationRightShinLimb;
extern StandardLimb gMajorasIncarnationRightFootLimb;
extern StandardLimb gMajorasIncarnationRightArmRootLimb;
extern StandardLimb gMajorasIncarnationRightUpperArmLimb;
extern StandardLimb gMajorasIncarnationRightLowerArmRootLimb;
extern StandardLimb gMajorasIncarnationRightForearmLimb;
extern StandardLimb gMajorasIncarnationRightHandLimb;
extern StandardLimb gMajorasIncarnationLeftArmRootLimb;
extern StandardLimb gMajorasIncarnationLeftUpperArmLimb;
extern StandardLimb gMajorasIncarnationLeftLowerArmRootLimb;
extern StandardLimb gMajorasIncarnationLeftForearmLimb;
extern StandardLimb gMajorasIncarnationLeftHandLimb;
extern StandardLimb gMajorasIncarnationLeftLegRootLimb;
extern StandardLimb gMajorasIncarnationLeftThighLimb;
extern StandardLimb gMajorasIncarnationLeftLowerLegRootLimb;
extern StandardLimb gMajorasIncarnationLeftShinLimb;
extern StandardLimb gMajorasIncarnationLeftFootLimb;
extern StandardLimb gMajorasIncarnationEyestalkLimb;
extern void* gMajorasIncarnationSkelLimbs[];
extern FlexSkeletonHeader gMajorasIncarnationSkel;
extern s16 sMajorasIncarnationFallOverStartAnimFrameData[];
extern JointIndex sMajorasIncarnationFallOverStartAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationFallOverStartAnim;
extern s16 sMajorasIncarnationFallOverLoopAnimFrameData[];
extern JointIndex sMajorasIncarnationFallOverLoopAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationFallOverLoopAnim;
extern s16 sMajorasIncarnationMoonwalkAnimFrameData[];
extern JointIndex sMajorasIncarnationMoonwalkAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationMoonwalkAnim;
extern s16 sMajorasIncarnationRunAnimFrameData[];
extern JointIndex sMajorasIncarnationRunAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationRunAnim;
extern s16 sMajorasIncarnationTauntDance1AnimFrameData[];
extern JointIndex sMajorasIncarnationTauntDance1AnimJointIndices[];
extern AnimationHeader gMajorasIncarnationTauntDance1Anim;
extern s16 sMajorasIncarnationTauntDance2AnimFrameData[];
extern JointIndex sMajorasIncarnationTauntDance2AnimJointIndices[];
extern AnimationHeader gMajorasIncarnationTauntDance2Anim;
extern s16 sMajorasIncarnationTauntJumpAnimFrameData[];
extern JointIndex sMajorasIncarnationTauntJumpAnimJointIndices[];
extern AnimationHeader gMajorasIncarnationTauntJumpAnim;
extern s16 sMajorasMaskJerkingAnimFrameData[];
extern JointIndex sMajorasMaskJerkingAnimJointIndices[];
extern AnimationHeader gMajorasMaskJerkingAnim;
extern s16 sMajorasMaskStationaryAnimFrameData[];
extern JointIndex sMajorasMaskStationaryAnimJointIndices[];
extern AnimationHeader gMajorasMaskStationaryAnim;
extern u64 gMajorasMaskTentacleTex[];
extern Vtx object_boss07Vtx_00AF70[];
extern Gfx gMajorasMaskTentacleMaterialDL[];
extern Gfx gMajorasMaskTentacleModelDL[];
extern Vtx object_boss07Vtx_00B040[];
extern Gfx gMajorasMaskLeftSpike3DL[];
extern Gfx gMajorasMaskLeftSpike4DL[];
extern Gfx gMajorasMaskRightSpike4DL[];
extern Gfx gMajorasMaskRightSpike3DL[];
extern Gfx gMajorasMaskRightSpike2DL[];
extern Gfx gMajorasMaskRightSpike1DL[];
extern Gfx gMajorasMaskLeftSpike1DL[];
extern Gfx gMajorasMaskLeftSpike2DL[];
extern Gfx gMajorasMaskFaceDL[];
extern u64 gMajorasMaskBeamTex[];
extern Vtx object_boss07Vtx_00C698[];
extern Gfx gMajorasMaskBeamDL[];
extern u64 gMajorasMaskFireTex[];
extern u64 gMajorasMaskFireMaskTex[];
extern Vtx object_boss07Vtx_00CEB8[];
extern Gfx gMajorasMaskFireDL[];
extern u64 gBossMaskOdolwaFaceTLUT[];
extern u64 gBossMaskOdolwaEarTLUT[];
extern u64 gBossMaskOdolwaPlumeTex[];
extern u64 gBossMaskOdolwaFaceTex[];
extern u64 gBossMaskOdolwaEarTex[];
extern u64 gBossMaskGyorgSkinTLUT[];
extern u64 gBossMaskGyorgMouthTLUT[];
extern u64 gBossMaskGyorgToothHornTLUT[];
extern u64 gBossMaskGyorgTwinmoldEyeTex[];
extern u64 gBossMaskGyorgSkinTex[];
extern u64 gBossMaskGyorgMouthTex[];
extern u64 gBossMaskGyorgToothHornTex[];
extern u64 gBossMaskGohtEyeTex[];
extern u64 gBossMaskGohtTopPatternTex[];
extern u64 gBossMaskGohtTwinmoldPatternTex[];
extern u64 gBossMaskGohtSpikeTwinmoldMandibleTex[];
extern u64 gBossMaskTwinmoldSkinTLUT[];
extern u64 gBossMaskTwinmoldSnoutTLUT[];
extern u64 gBossMaskTwinmoldSkinTex[];
extern u64 gBossMaskTwinmoldSnoutTex[];
extern Vtx object_boss07Vtx_014310[];
extern Gfx gBossMaskOdolwaDL[];
extern Vtx object_boss07Vtx_014CF0[];
extern Gfx gBossMaskGyorgDL[];
extern Vtx object_boss07Vtx_016990[];
extern Gfx gBossMaskGohtDL[];
extern Vtx object_boss07Vtx_018578[];
extern Gfx gBossMaskTwinmoldDL[];
extern StandardLimb gMajorasMaskRootLimb;
extern StandardLimb gMajorasMaskFaceLimb;
extern StandardLimb gMajorasMaskLeftSpike2RootLimb;
extern StandardLimb gMajorasMaskLeftSpike2Limb;
extern StandardLimb gMajorasMaskLeftSpike1RootLimb;
extern StandardLimb gMajorasMaskLeftSpike1Limb;
extern StandardLimb gMajorasMaskRightSpike1RootLimb;
extern StandardLimb gMajorasMaskRightSpike1Limb;
extern StandardLimb gMajorasMaskRightSpike2RootLimb;
extern StandardLimb gMajorasMaskRightSpike2Limb;
extern StandardLimb gMajorasMaskRightSpike3RootLimb;
extern StandardLimb gMajorasMaskRightSpike3Limb;
extern StandardLimb gMajorasMaskRightSpike4RootLimb;
extern StandardLimb gMajorasMaskRightSpike4Limb;
extern StandardLimb gMajorasMaskLeftSpike4RootLimb;
extern StandardLimb gMajorasMaskLeftSpike4Limb;
extern StandardLimb gMajorasMaskLeftSpike3RootLimb;
extern StandardLimb gMajorasMaskLeftSpike3Limb;
extern void* gMajorasMaskSkelLimbs[];
extern SkeletonHeader gMajorasMaskSkel;
extern s16 sMajorasMaskFloatingAnimFrameData[];
extern JointIndex sMajorasMaskFloatingAnimJointIndices[];
extern AnimationHeader gMajorasMaskFloatingAnim;
extern s16 sMajorasWrathFlipLeftAndSpinAnimFrameData[];
extern JointIndex sMajorasWrathFlipLeftAndSpinAnimJointIndices[];
extern AnimationHeader gMajorasWrathFlipLeftAndSpinAnim;
extern s16 sMajorasWrathDoubleKickAndJumpBackAnimFrameData[];
extern JointIndex sMajorasWrathDoubleKickAndJumpBackAnimJointIndices[];
extern AnimationHeader gMajorasWrathDoubleKickAndJumpBackAnim;
extern s16 sMajorasWrathBackflipUppercutAttackAnimFrameData[];
extern JointIndex sMajorasWrathBackflipUppercutAttackAnimJointIndices[];
extern AnimationHeader gMajorasWrathBackflipUppercutAttackAnim;
extern s16 sMajorasWrathHighKickAnimFrameData[];
extern JointIndex sMajorasWrathHighKickAnimJointIndices[];
extern AnimationHeader gMajorasWrathHighKickAnim;
extern s16 sMajorasWrathDamageAnimFrameData[];
extern JointIndex sMajorasWrathDamageAnimJointIndices[];
extern AnimationHeader gMajorasWrathDamageAnim;
extern s16 sMajorasWrathDeathAnimFrameData[];
extern JointIndex sMajorasWrathDeathAnimJointIndices[];
extern AnimationHeader gMajorasWrathDeathAnim;
extern s16 sMajorasWrathTiptoeWhipAttackAnimFrameData[];
extern JointIndex sMajorasWrathTiptoeWhipAttackAnimJointIndices[];
extern AnimationHeader gMajorasWrathTiptoeWhipAttackAnim;
extern s16 sMajorasWrathHeavyBreathingAnimFrameData[];
extern JointIndex sMajorasWrathHeavyBreathingAnimJointIndices[];
extern AnimationHeader gMajorasWrathHeavyBreathingAnim;
extern s16 sMajorasWrathIntroAnimFrameData[];
extern JointIndex sMajorasWrathIntroAnimJointIndices[];
extern AnimationHeader gMajorasWrathIntroAnim;
extern s16 sMajorasWrathBackflipAnimFrameData[];
extern JointIndex sMajorasWrathBackflipAnimJointIndices[];
extern AnimationHeader gMajorasWrathBackflipAnim;
extern s16 sMajorasWrathKickAnimFrameData[];
extern JointIndex sMajorasWrathKickAnimJointIndices[];
extern AnimationHeader gMajorasWrathKickAnim;
extern s16 sMajorasWrathReleaseTopAnimFrameData[];
extern JointIndex sMajorasWrathReleaseTopAnimJointIndices[];
extern AnimationHeader gMajorasWrathReleaseTopAnim;
extern s16 sMajorasWrathGrabAnimFrameData[];
extern JointIndex sMajorasWrathGrabAnimJointIndices[];
extern AnimationHeader gMajorasWrathGrabAnim;
extern s16 sMajorasWrathThrowAnimFrameData[];
extern JointIndex sMajorasWrathThrowAnimJointIndices[];
extern AnimationHeader gMajorasWrathThrowAnim;
extern Vtx object_boss07Vtx_027280[];
extern Gfx gMajorasWrathPelvisDL[];
extern Gfx gMajorasWrathHeadDL[];
extern Gfx gMajorasWrathThirdEyeDL[];
extern Gfx gMajorasWrathTorsoDL[];
extern Gfx gMajorasWrathLeftHandDL[];
extern Gfx gMajorasWrathLeftForearmDL[];
extern Gfx gMajorasWrathLeftUpperArmDL[];
extern Gfx gMajorasWrathRightHandDL[];
extern Gfx gMajorasWrathRightForearmDL[];
extern Gfx gMajorasWrathRightUpperArmDL[];
extern Gfx gMajorasWrathRightFootDL[];
extern Gfx gMajorasWrathRightShinDL[];
extern Gfx gMajorasWrathRightThighDL[];
extern Gfx gMajorasWrathLeftFootDL[];
extern Gfx gMajorasWrathLeftShinDL[];
extern Gfx gMajorasWrathLeftThighDL[];
extern u64 gMajorasWrathWhipTex[];
extern Vtx object_boss07Vtx_02EDF0[];
extern Gfx gMajorasWrathWhipMaterialDL[];
extern Gfx gMajorasMaskWhipShadowMaterialDL[];
extern Gfx gMajorasWrathWhipModelDL[];
extern Vtx object_boss07Vtx_02EF28[];
extern Gfx gMajorasWrathShadowMaterialDL[];
extern Gfx gMajorasWrathShadowModelDL[];
extern Vtx object_boss07Vtx_02EFB8[];
extern Gfx gMajorasWrathDeathLightModelDL[];
extern Vtx object_boss07Vtx_02F000[];
extern Gfx gMajorasWrathSpinningTopDL[];
extern u64 gMajorasMaskTitleCardTex[];
extern u64 gMajorasIncarnationTitleCardTex[];
extern u64 gMajorasWrathTitleCardTex[];
extern StandardLimb gMajorasWrathRootLimb;
extern StandardLimb gMajorasWrathPelvisLimb;
extern StandardLimb gMajorasWrathLeftLegRootLimb;
extern StandardLimb gMajorasWrathLeftThighLimb;
extern StandardLimb gMajorasWrathLeftLowerLegRootLimb;
extern StandardLimb gMajorasWrathLeftShinLimb;
extern StandardLimb gMajorasWrathLeftFootLimb;
extern StandardLimb gMajorasWrathRightLegRootLimb;
extern StandardLimb gMajorasWrathRightThighLimb;
extern StandardLimb gMajorasWrathRightLowerLegRootLimb;
extern StandardLimb gMajorasWrathRightShinLimb;
extern StandardLimb gMajorasWrathRightFootLimb;
extern StandardLimb gMajorasWrathTorsoRootLimb;
extern StandardLimb gMajorasWrathTorsoLimb;
extern StandardLimb gMajorasWrathRightArmRootLimb;
extern StandardLimb gMajorasWrathRightUpperArmLimb;
extern StandardLimb gMajorasWrathRightLowerArmRootLimb;
extern StandardLimb gMajorasWrathRightForearmLimb;
extern StandardLimb gMajorasWrathRightHandLimb;
extern StandardLimb gMajorasWrathLeftArmRootLimb;
extern StandardLimb gMajorasWrathLeftUpperArmLimb;
extern StandardLimb gMajorasWrathLeftLowerArmRootLimb;
extern StandardLimb gMajorasWrathLeftForearmLimb;
extern StandardLimb gMajorasWrathLeftHandLimb;
extern StandardLimb gMajorasWrathHeadRootLimb;
extern StandardLimb gMajorasWrathHeadLimb;
extern StandardLimb gMajorasWrathThirdEyeLimb;
extern void* gMajorasWrathSkelLimbs[];
extern FlexSkeletonHeader gMajorasWrathSkel;
extern s16 sMajorasWrathShortSingleWhipAttackAnimFrameData[];
extern JointIndex sMajorasWrathShortSingleWhipAttackAnimJointIndices[];
extern AnimationHeader gMajorasWrathShortSingleWhipAttackAnim;
extern s16 sMajorasWrathWhipFlurryAttackAnimFrameData[];
extern JointIndex sMajorasWrathWhipFlurryAttackAnimJointIndices[];
extern AnimationHeader gMajorasWrathWhipFlurryAttackAnim;
extern s16 sMajorasWrathDoubleWhipAttackAnimFrameData[];
extern JointIndex sMajorasWrathDoubleWhipAttackAnimJointIndices[];
extern AnimationHeader gMajorasWrathDoubleWhipAttackAnim;
extern s16 sMajorasWrathLongSingleWhipAttackAnimFrameData[];
extern JointIndex sMajorasWrathLongSingleWhipAttackAnimJointIndices[];
extern AnimationHeader gMajorasWrathLongSingleWhipAttackAnim;
extern s16 sMajorasWrathTauntAnimFrameData[];
extern JointIndex sMajorasWrathTauntAnimJointIndices[];
extern AnimationHeader gMajorasWrathTauntAnim;
extern s16 sMajorasWrathThreeAttackComboAnimFrameData[];
extern JointIndex sMajorasWrathThreeAttackComboAnimJointIndices[];
extern AnimationHeader gMajorasWrathThreeAttackComboAnim;
extern s16 sMajorasWrathStunAnimFrameData[];
extern JointIndex sMajorasWrathStunAnimJointIndices[];
extern AnimationHeader gMajorasWrathStunAnim;
extern s16 sMajorasWrathSpinAttackAnimFrameData[];
extern JointIndex sMajorasWrathSpinAttackAnimJointIndices[];
extern AnimationHeader gMajorasWrathSpinAttackAnim;
extern s16 sMajorasWrathIdleAnimFrameData[];
extern JointIndex sMajorasWrathIdleAnimJointIndices[];
extern AnimationHeader gMajorasWrathIdleAnim;
extern s16 sMajorasWrathFlipLeftAnimFrameData[];
extern JointIndex sMajorasWrathFlipLeftAnimJointIndices[];
extern AnimationHeader gMajorasWrathFlipLeftAnim;
extern s16 sMajorasWrathFlipRightAnimFrameData[];
extern JointIndex sMajorasWrathFlipRightAnimJointIndices[];
extern AnimationHeader gMajorasWrathFlipRightAnim;
extern s16 sMajorasWrathSidestepAnimFrameData[];
extern JointIndex sMajorasWrathSidestepAnimJointIndices[];
extern AnimationHeader gMajorasWrathSidestepAnim;
extern u64 gMajoraBodyTex[];
extern u64 gMajoraStripesTex[];
extern u64 gMajorasWrathEyeTex[];
extern u64 gMajorasWrathMouthTex[];
extern u64 gMajorasWrathEarTex[];
extern u64 gMajoraVeinsTex[];
extern u64 gMajoraBloodshotEyeTex[];
extern u64 gMajorasMaskWithNormalEyesTex[];
extern u64 gMajoraHandTex[];
extern u64 gMajorasIncarnationMaskTex[];
extern u64 gMajorasMaskSpikes1Tex[];
extern u64 gMajorasMaskSpikes2Tex[];
extern u64 gMajorasMaskSpikes3Tex[];
extern u64 gMajorasMaskSpikes4Tex[];
extern u64 gMajorasMaskWithDullEyesTex[];
#endif
