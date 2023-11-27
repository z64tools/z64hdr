#ifndef OBJECT_SDN_H
#define OBJECT_SDN_H 1

typedef enum SoldierLimb {
    /* 0x00 */ SOLDIER_LIMB_NONE,
    /* 0x01 */ SOLDIER_LIMB_ROOT,
    /* 0x02 */ SOLDIER_LIMB_PELVIS,
    /* 0x03 */ SOLDIER_LIMB_LEFT_THIGH,
    /* 0x04 */ SOLDIER_LIMB_LEFT_SHIN,
    /* 0x05 */ SOLDIER_LIMB_LEFT_FOOT,
    /* 0x06 */ SOLDIER_LIMB_RIGHT_THIGH,
    /* 0x07 */ SOLDIER_LIMB_RIGHT_SHIN,
    /* 0x08 */ SOLDIER_LIMB_RIGHT_FOOT,
    /* 0x09 */ SOLDIER_LIMB_TORSO,
    /* 0x0A */ SOLDIER_LIMB_LEFT_SHOULDER,
    /* 0x0B */ SOLDIER_LIMB_LEFT_FOREARM,
    /* 0x0C */ SOLDIER_LIMB_LEFT_HAND,
    /* 0x0D */ SOLDIER_LIMB_RIGHT_SHOULDER,
    /* 0x0E */ SOLDIER_LIMB_RIGHT_FOREARM,
    /* 0x0F */ SOLDIER_LIMB_RIGHT_HAND_WITH_SPEAR,
    /* 0x10 */ SOLDIER_LIMB_HEAD,
    /* 0x11 */ SOLDIER_LIMB_MAX
} SoldierLimb;

extern Vtx object_sdnVtx_000000[];
extern Gfx gSoldierBottleDL[];
extern Gfx gSoldierBottleContentsDL[];
extern Gfx gSoldierBottleEmptyContentsDL[];
extern u64 gSoldierBottleTex[];
extern s16 sSoldierStandWithHandOnChestAnimFrameData[];
extern JointIndex sSoldierStandWithHandOnChestAnimJointIndices[];
extern AnimationHeader gSoldierStandWithHandOnChestAnim;
extern s16 sSoldierDrinkAnimFrameData[];
extern JointIndex sSoldierDrinkAnimJointIndices[];
extern AnimationHeader gSoldierDrinkAnim;
extern s16 sSoldierCheerWithSpearAnimFrameData[];
extern JointIndex sSoldierCheerWithSpearAnimJointIndices[];
extern AnimationHeader gSoldierCheerWithSpearAnim;
extern s16 sSoldierSitAndReachAnimFrameData[];
extern JointIndex sSoldierSitAndReachAnimJointIndices[];
extern AnimationHeader gSoldierSitAndReachAnim;
extern s16 sSoldierWaveAnimFrameData[];
extern JointIndex sSoldierWaveAnimJointIndices[];
extern AnimationHeader gSoldierWaveAnim;
extern s16 sSoldierStandUpAnimFrameData[];
extern JointIndex sSoldierStandUpAnimJointIndices[];
extern AnimationHeader gSoldierStandUpAnim;
extern s16 sSoldierLookDownAnimFrameData[];
extern JointIndex sSoldierLookDownAnimJointIndices[];
extern AnimationHeader gSoldierLookDownAnim;
extern s16 sSoldierComeUpHereAnimFrameData[];
extern JointIndex sSoldierComeUpHereAnimJointIndices[];
extern AnimationHeader gSoldierComeUpHereAnim;
extern s16 object_sdn_Anim_0057BCFrameData[];
extern JointIndex object_sdn_Anim_0057BCJointIndices[];
extern AnimationHeader object_sdn_Anim_0057BC;
extern s16 object_sdn_Anim_005D28FrameData[];
extern JointIndex object_sdn_Anim_005D28JointIndices[];
extern AnimationHeader object_sdn_Anim_005D28;
extern s16 object_sdn_Anim_0064C0FrameData[];
extern JointIndex object_sdn_Anim_0064C0JointIndices[];
extern AnimationHeader object_sdn_Anim_0064C0;
extern s16 sSoldierStandHandOnHipAnimFrameData[];
extern JointIndex sSoldierStandHandOnHipAnimJointIndices[];
extern AnimationHeader gSoldierStandHandOnHipAnim;
extern Vtx object_sdnVtx_006C30[];
extern Gfx gSoldierTorsoDL[];
extern Gfx gSoldierHeadDL[];
extern Gfx gSoldierRightShoulderDL[];
extern Gfx gSoldierRightForearmDL[];
extern Gfx gSoldierRightHandWithSpearDL[];
extern Gfx gSoldierLeftShoulderDL[];
extern Gfx gSoldierLeftForearmDL[];
extern Gfx gSoldierLeftHandDL[];
extern Gfx gSoldierPelvisDL[];
extern Gfx gSoldierRightThighDL[];
extern Gfx gSoldierRightShinDL[];
extern Gfx gSoldierRightFootDL[];
extern Gfx gSoldierLeftThighDL[];
extern Gfx gSoldierLeftShinDL[];
extern Gfx gSoldierLeftFootDL[];
extern u64 gSoldierSkinTLUT[];
extern u64 gSoldierGeneralTLUT[];
extern u64 gSoldierArmorStrapTex[];
extern u64 gSoldierArmorPlate1Tex[];
extern u64 gSoldierArmorEmblemTex[];
extern u64 gSoldierSkinShadowGradient2Tex[];
extern u64 gSoldierShortsToLegTex[];
extern u64 gSoldierArmorTex[];
extern u64 gSoldierSkinShadowGradient1Tex[];
extern u64 gSoldierLipsTex[];
extern u64 gSoldierArmorCoatOfArmsTex[];
extern u64 gSoldierArmorPlate2Tex[];
extern u64 gSoldierFingersTex[];
extern StandardLimb gSoldierRootLimb;
extern StandardLimb gSoldierPelvisLimb;
extern StandardLimb gSoldierLeftThighLimb;
extern StandardLimb gSoldierLeftShinLimb;
extern StandardLimb gSoldierLeftFootLimb;
extern StandardLimb gSoldierRightThighLimb;
extern StandardLimb gSoldierRightShinLimb;
extern StandardLimb gSoldierRightFootLimb;
extern StandardLimb gSoldierTorsoLimb;
extern StandardLimb gSoldierLeftShoulderLimb;
extern StandardLimb gSoldierLeftForearmLimb;
extern StandardLimb gSoldierLeftHandLimb;
extern StandardLimb gSoldierRightShoulderLimb;
extern StandardLimb gSoldierRightForearmLimb;
extern StandardLimb gSoldierRightHandWithSpearLimb;
extern StandardLimb gSoldierHeadLimb;
extern void* gSoldierSkelLimbs[];
extern FlexSkeletonHeader gSoldierSkel;
extern s16 sSoldierStandAndLookDownAnimFrameData[];
extern JointIndex sSoldierStandAndLookDownAnimJointIndices[];
extern AnimationHeader gSoldierStandAndLookDownAnim;
#endif
