#ifndef OBJECT_DY_OBJ_H
#define OBJECT_DY_OBJ_H 1

typedef enum GreatFairyLimb {
    /* 0x00 */ GREAT_FAIRY_LIMB_NONE,
    /* 0x01 */ GREAT_FAIRY_LIMB_WAIST,
    /* 0x02 */ GREAT_FAIRY_LIMB_LEFT_THIGH,
    /* 0x03 */ GREAT_FAIRY_LIMB_LEFT_LOWER_LEG,
    /* 0x04 */ GREAT_FAIRY_LIMB_LEFT_FOOT,
    /* 0x05 */ GREAT_FAIRY_LIMB_RIGHT_THIGH,
    /* 0x06 */ GREAT_FAIRY_LIMB_RIGHT_LOWER_LEG,
    /* 0x07 */ GREAT_FAIRY_LIMB_RIGHT_FOOT,
    /* 0x08 */ GREAT_FAIRY_LIMB_TORSO,
    /* 0x09 */ GREAT_FAIRY_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ GREAT_FAIRY_LIMB_LEFT_FOREARM,
    /* 0x0B */ GREAT_FAIRY_LIMB_LEFT_HAND,
    /* 0x0C */ GREAT_FAIRY_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ GREAT_FAIRY_LIMB_RIGHT_FOREARM,
    /* 0x0E */ GREAT_FAIRY_LIMB_RIGHT_HAND,
    /* 0x0F */ GREAT_FAIRY_LIMB_HEAD,
    /* 0x10 */ GREAT_FAIRY_LIMB_MIDDLE_HAIR_LOWER_PART,
    /* 0x11 */ GREAT_FAIRY_LIMB_MIDDLE_HAIR_MIDDLE_PART,
    /* 0x12 */ GREAT_FAIRY_LIMB_MIDDLE_HAIR_UPPER_PART,
    /* 0x13 */ GREAT_FAIRY_LIMB_MIDDLE_HAIR_TIP,
    /* 0x14 */ GREAT_FAIRY_LIMB_LEFT_HAIR_LOWER_PART,
    /* 0x15 */ GREAT_FAIRY_LIMB_LEFT_HAIR_MIDDLE_PART,
    /* 0x16 */ GREAT_FAIRY_LIMB_LEFT_HAIR_UPPER_PART,
    /* 0x17 */ GREAT_FAIRY_LIMB_LEFT_HAIR_TIP,
    /* 0x18 */ GREAT_FAIRY_LIMB_RIGHT_HAIR_LOWER_PART,
    /* 0x19 */ GREAT_FAIRY_LIMB_RIGHT_HAIR_MIDDLE_PART,
    /* 0x1A */ GREAT_FAIRY_LIMB_RIGHT_HAIR_UPPER_PART,
    /* 0x1B */ GREAT_FAIRY_LIMB_RIGHT_HAIR_TIP,
    /* 0x1C */ GREAT_FAIRY_LIMB_MAX
} GreatFairyLimb;

extern s16 sGreatFairyStartGivingUpgradeAnimFrameData[];
extern JointIndex sGreatFairyStartGivingUpgradeAnimJointIndices[];
extern AnimationHeader gGreatFairyStartGivingUpgradeAnim;
extern s16 sGreatFairyGivingUpgradeAnimFrameData[];
extern JointIndex sGreatFairyGivingUpgradeAnimJointIndices[];
extern AnimationHeader gGreatFairyGivingUpgradeAnim;
extern s16 sGreatFairyAnim_0027B0FrameData[];
extern JointIndex sGreatFairyAnim_0027B0JointIndices[];
extern AnimationHeader gGreatFairyAnim_0027B0;
extern s16 sGreatFairyLayDownTransitionAnimFrameData[];
extern JointIndex sGreatFairyLayDownTransitionAnimJointIndices[];
extern AnimationHeader gGreatFairyLayDownTransitionAnim;
extern s16 sGreatFairyLayingDownAnimFrameData[];
extern JointIndex sGreatFairyLayingDownAnimJointIndices[];
extern AnimationHeader gGreatFairyLayingDownAnim;
extern s16 sGreatFairyTeachSpinAttackAnimFrameData[];
extern JointIndex sGreatFairyTeachSpinAttackAnimJointIndices[];
extern AnimationHeader gGreatFairyTeachSpinAttackAnim;
extern s16 sGreatFairyClappingAnimFrameData[];
extern JointIndex sGreatFairyClappingAnimJointIndices[];
extern AnimationHeader gGreatFairyClappingAnim;
extern s16 sGreatFairyShowingItemAnimFrameData[];
extern JointIndex sGreatFairyShowingItemAnimJointIndices[];
extern AnimationHeader gGreatFairyShowingItemAnim;
extern s16 sGreatFairySpinLayDownAnimFrameData[];
extern JointIndex sGreatFairySpinLayDownAnimJointIndices[];
extern AnimationHeader gGreatFairySpinLayDownAnim;
extern s16 sGreatFairyArmsFoldedAnimFrameData[];
extern JointIndex sGreatFairyArmsFoldedAnimJointIndices[];
extern AnimationHeader gGreatFairyArmsFoldedAnim;
extern Vtx object_dy_objVtx_00D170[];
extern Gfx gGreatFairyParticleSetupDL[];
extern Gfx gGreatFairyParticleDL[];
extern u64 gGreatFairyParticleTex[];
extern u64 gGreatFairySpiralBeamPatternTex[];
extern u64 gGreatFairySpiralBeamGradientTex[];
extern Vtx gGreatFairySpiralBeamVtx[];
extern Gfx gGreatFairySpiralBeamDL[];
extern Vtx object_dy_objVtx_00E030[];
extern Gfx gGreatFairyWaistDL[];
extern Gfx gGreatFairyTorsoDL[];
extern Gfx gGreatFairyHeadDL[];
extern Gfx gGreatFairyRightHairLowerPartDL[];
extern Gfx gGreatFairyRightHairMiddlePartDL[];
extern Gfx gGreatFairyRightHairUpperPartDL[];
extern Gfx gGreatFairyRightHairTipDL[];
extern Gfx gGreatFairyLeftHairLowerPartDL[];
extern Gfx gGreatFairyLeftHairMiddlePartDL[];
extern Gfx gGreatFairyLeftHairUpperPartDL[];
extern Gfx gGreatFairyLeftHairTipDL[];
extern Gfx gGreatFairyMiddleHairLowerPartDL[];
extern Gfx gGreatFairyMiddleHairMiddlePartDL[];
extern Gfx gGreatFairyMiddleHairUpperPartDL[];
extern Gfx gGreatFairyMiddleHairTipDL[];
extern Gfx gGreatFairyRightUpperArmDL[];
extern Gfx gGreatFairyRightForearmDL[];
extern Gfx gGreatFairyRightHandDL[];
extern Gfx gGreatFairyLeftUpperArmDL[];
extern Gfx gGreatFairyLeftForearmDL[];
extern Gfx gGreatFairyLeftHandDL[];
extern Gfx gGreatFairyRightThighDL[];
extern Gfx gGreatFairyRightLowerLegDL[];
extern Gfx gGreatFairyRightFootDL[];
extern Gfx gGreatFairyLeftThighDL[];
extern Gfx gGreatFairyLeftLowerLegDL[];
extern Gfx gGreatFairyLeftFootDL[];
extern u64 object_dy_obj_TLUT_0165C8[];
extern u64 object_dy_obj_Tex_0167C8[];
extern u64 object_dy_obj_Tex_016808[];
extern u64 object_dy_obj_Tex_016848[];
extern u64 object_dy_obj_Tex_017048[];
extern u64 object_dy_obj_Tex_017088[];
extern u64 object_dy_obj_Tex_017488[];
extern u64 object_dy_obj_Tex_017888[];
extern u64 object_dy_obj_Tex_017988[];
extern u64 object_dy_obj_Tex_017D88[];
extern u64 object_dy_obj_Tex_018588[];
extern u64 object_dy_obj_Tex_018D88[];
extern u64 object_dy_obj_Tex_019588[];
extern u64 object_dy_obj_Tex_019D88[];
extern u64 gGreatFairyMouthClosedTex[];
extern u64 gGreatFairyMouthOpenTex[];
extern u64 object_dy_obj_Tex_01C588[];
extern TexturePtr object_dy_objTexCycleTexPtrs_01C688[];
extern u8 object_dy_objTexCycleTexIndices_01C69C[];
extern AnimatedMatTexCycleParams gGreatFairyAppearenceTexAnimTexCycleParams_01C6A4;
extern F3DPrimColor object_dy_objTexColorChangingPrimColors_01C6B4[];
extern F3DEnvColor object_dy_objTexColorChangingEnvColors_01C6D0[];
extern AnimatedMatColorParams gGreatFairyAppearenceTexAnimColorParams_01C6E4;
extern AnimatedMaterial gGreatFairyAppearenceTexAnim[];
extern StandardLimb gGreatFairyWaistLimb;
extern StandardLimb gGreatFairyLeftThighLimb;
extern StandardLimb gGreatFairyLeftLowerLegLimb;
extern StandardLimb gGreatFairyLeftFootLimb;
extern StandardLimb gGreatFairyRightThighLimb;
extern StandardLimb gGreatFairyRightLowerLegLimb;
extern StandardLimb gGreatFairyRightFootLimb;
extern StandardLimb gGreatFairyTorsoLimb;
extern StandardLimb gGreatFairyLeftUpperArmLimb;
extern StandardLimb gGreatFairyLeftForearmLimb;
extern StandardLimb gGreatFairyLeftHandLimb;
extern StandardLimb gGreatFairyRightUpperArmLimb;
extern StandardLimb gGreatFairyRightForearmLimb;
extern StandardLimb gGreatFairyRightHandLimb;
extern StandardLimb gGreatFairyHeadLimb;
extern StandardLimb gGreatFairyMiddleHairLowerPartLimb;
extern StandardLimb gGreatFairyMiddleHairMiddlePartLimb;
extern StandardLimb gGreatFairyMiddleHairUpperPartLimb;
extern StandardLimb gGreatFairyMiddleHairTipLimb;
extern StandardLimb gGreatFairyLeftHairLowerPartLimb;
extern StandardLimb gGreatFairyLeftHairMiddlePartLimb;
extern StandardLimb gGreatFairyLeftHairUpperPartLimb;
extern StandardLimb gGreatFairyLeftHairTipLimb;
extern StandardLimb gGreatFairyRightHairLowerPartLimb;
extern StandardLimb gGreatFairyRightHairMiddlePartLimb;
extern StandardLimb gGreatFairyRightHairUpperPartLimb;
extern StandardLimb gGreatFairyRightHairTipLimb;
extern void* gGreatFairySkelLimbs[];
extern FlexSkeletonHeader gGreatFairySkel;
#endif
