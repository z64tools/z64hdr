#ifndef OBJECT_WIZ_H
#define OBJECT_WIZ_H 1

typedef enum WizrobeLimb {
    /* 0x00 */ WIZROBE_LIMB_NONE,
    /* 0x01 */ WIZROBE_LIMB_PELVIS,
    /* 0x02 */ WIZROBE_LIMB_TORSO,
    /* 0x03 */ WIZROBE_LIMB_LEFT_UPPER_ARM,
    /* 0x04 */ WIZROBE_LIMB_LEFT_FOREARM,
    /* 0x05 */ WIZROBE_LIMB_LEFT_HAND,
    /* 0x06 */ WIZROBE_LIMB_RIGHT_UPPER_ARM,
    /* 0x07 */ WIZROBE_LIMB_RIGHT_FOREARM,
    /* 0x08 */ WIZROBE_LIMB_RIGHT_HAND,
    /* 0x09 */ WIZROBE_LIMB_STAFF,
    /* 0x0A */ WIZROBE_LIMB_NECK,
    /* 0x0B */ WIZROBE_LIMB_HEAD,
    /* 0x0C */ WIZROBE_LIMB_JAW,
    /* 0x0D */ WIZROBE_LIMB_LOINCLOTH,
    /* 0x0E */ WIZROBE_LIMB_LEFT_THIGH,
    /* 0x0F */ WIZROBE_LIMB_LEFT_SHIN,
    /* 0x10 */ WIZROBE_LIMB_LEFT_FOOT,
    /* 0x11 */ WIZROBE_LIMB_RIGHT_THIGH,
    /* 0x12 */ WIZROBE_LIMB_RIGHT_SHIN,
    /* 0x13 */ WIZROBE_LIMB_RIGHT_FOOT,
    /* 0x14 */ WIZROBE_LIMB_MAX
} WizrobeLimb;

extern s16 sWizrobeAttackAnimFrameData[];
extern JointIndex sWizrobeAttackAnimJointIndices[];
extern AnimationHeader gWizrobeAttackAnim;
extern u64 gWizrobeIceSmokeTex[];
extern u64 gWizrobeIceSmokeMaskTex[];
extern u64 gWizrobeUnusedTex[];
extern Vtx object_wizVtx_000E40[];
extern Gfx gWizrobeIceSmokeMaterialDL[];
extern Gfx gWizrobeUnusedIceSmokeMaterialDL[];
extern Gfx gWizrobeIceSmokeModelDL[];
extern Vtx object_wizVtx_001000[];
extern Gfx gWizrobePlatformEmptyDL[];
extern Gfx gWizrobePlatformDL[];
extern u64 gWizrobePlatformTex[];
extern AnimatedMaterial gWizrobePlatformEmptyTexAnim[];
extern CamData gWizrobePlatformColCamDataList[];
extern SurfaceType gWizrobePlatformColSurfaceType[];
extern CollisionPoly gWizrobePlatformColPolygons[];
extern Vec3s gWizrobePlatformColVertices[];
extern CollisionHeader gWizrobePlatformCol;
extern Vtx object_wizVtx_0016C0[];
extern Gfx gWizrobePlatformLightDL[];
extern u64 gWizrobePlatformLightMaskTex[];
extern u64 gWizrobePlatformLightBaseTex[];
extern u64 gWizrobePlatformLightRaysTex[];
extern F3DPrimColor object_wizTexColorChangingPrimColors_0020F0[];
extern AnimatedMatColorParams gWizrobePlatformLightTexAnimColorParams_0020FC;
extern AnimatedMatTexScrollParams gWizrobePlatformLightTexAnimTexScrollParams_00210C[];
extern AnimatedMatTexScrollParams gWizrobePlatformLightTexAnimTexScrollParams_002114[];
extern AnimatedMaterial gWizrobePlatformLightTexAnim[];
extern s16 sWizrobeDamageAnimFrameData[];
extern JointIndex sWizrobeDamageAnimJointIndices[];
extern AnimationHeader gWizrobeDamageAnim;
extern s16 sWizrobeDanceAnimFrameData[];
extern JointIndex sWizrobeDanceAnimJointIndices[];
extern AnimationHeader gWizrobeDanceAnim;
extern s16 sWizrobeRunAnimFrameData[];
extern JointIndex sWizrobeRunAnimJointIndices[];
extern AnimationHeader gWizrobeRunAnim;
extern Vtx object_wizVtx_002600[];
extern Gfx gWizrobeSmallFlameDL[];
extern u64 gWizrobeSmallFlameTex[];
extern u64 gWizrobeSmallFlameMaskTex[];
extern AnimatedMatTexScrollParams gWizrobeUnusedScrollTexAnimTexScrollParams_002B00[];
extern AnimatedMaterial gWizrobeUnusedScrollTexAnim[];
extern Vtx object_wizVtx_002B10[];
extern Gfx gWizrobeMagicProjectileDL[];
extern u64 gWizrobeMagicProjectileTex[];
extern F3DPrimColor object_wizTexColorChangingPrimColors_002DD0[];
extern F3DEnvColor object_wizTexColorChangingEnvColors_002DDC[];
extern AnimatedMatColorParams gWizrobeUnusedColorChangingTexAnimColorParams_002DE4;
extern AnimatedMaterial gWizrobeUnusedColorChangingTexAnim[];
extern u64 gWizrobeFirePoolTex[];
extern Vtx object_wizVtx_003000[];
extern Gfx gWizrobeFirePoolDL[];
extern u64 gWizrobeFireSmokeTex[];
extern Vtx object_wizVtx_0035E0[];
extern Gfx gWizrobeFireSmokeDL[];
extern u64 gWizrobeBigFlameTex[];
extern u64 gWizrobeBigFlameMaskTex[];
extern Vtx object_wizVtx_003F00[];
extern Gfx gWizrobeBigFlameDL[];
extern u64 gWizrobeIcePoolTex[];
extern Vtx gWizrobeUnusedVtx[];
extern Vtx object_wizVtx_0050F0[];
extern Gfx gWizrobeIcePoolDL[];
extern u64 gWizrobeIcePoolShineTex[];
extern u64 gWizrobeIcePoolShineMaskTex[];
extern Vtx object_wizVtx_0056B0[];
extern Gfx gWizrobeIcePoolShineDL[];
extern Vtx object_wizVtx_005830[];
extern Gfx gWizrobePlatformCenterDL[];
extern Gfx gWizrobePlatformCenterEmptyDL[];
extern u64 gWizrobePlatformCenterMaskTex[];
extern u64 gWizrobePlatformCenterTex[];
extern F3DPrimColor object_wizTexColorChangingPrimColors_005C40[];
extern AnimatedMatColorParams gWizrobePlatformCenterTexAnimColorParams_005C4C;
extern AnimatedMatTexScrollParams gWizrobePlatformCenterTexAnimTexScrollParams_005C5C[];
extern AnimatedMaterial gWizrobePlatformCenterTexAnim[];
extern s16 sWizrobeWindUpAnimFrameData[];
extern JointIndex sWizrobeWindUpAnimJointIndices[];
extern AnimationHeader gWizrobeWindUpAnim;
extern s16 sWizrobeIdleAnimFrameData[];
extern JointIndex sWizrobeIdleAnimJointIndices[];
extern AnimationHeader gWizrobeIdleAnim;
extern Vtx object_wizVtx_0066D0[];
extern Gfx gWizrobePelvisDL[];
extern Gfx gWizrobeRightThighDL[];
extern Gfx gWizrobeRightShinDL[];
extern Gfx gWizrobeRightFootDL[];
extern Gfx gWizrobeLeftThighDL[];
extern Gfx gWizrobeLeftShinDL[];
extern Gfx gWizrobeLeftFootDL[];
extern Gfx gWizrobeLoinclothDL[];
extern Gfx gWizrobeTorsoDL[];
extern Gfx gWizrobeNeckDL[];
extern Gfx gWizrobeJawDL[];
extern Gfx gWizrobeHeadDL[];
extern Gfx gWizrobeRightUpperArmDL[];
extern Gfx gWizrobeRightForearmDL[];
extern Gfx gWizrobeRightHandDL[];
extern Gfx gWizrobeStaffDL[];
extern Gfx gWizrobeLeftUpperArmDL[];
extern Gfx gWizrobeLeftForearmDL[];
extern Gfx gWizrobeLeftHandDL[];
extern u64 gWizrobeFaceSkinTex[];
extern u64 gWizrobeRobeTex[];
extern u64 gWizrobeHairTex[];
extern u64 gWizrobeEyeOrbitTex[];
extern u64 gWizrobeEyeTex[];
extern u64 gWizrobeLowerLipTex[];
extern u64 gWizrobeNoseTex[];
extern u64 gWizrobeEarTex[];
extern u64 gWizrobeStaffTipTex[];
extern u64 gWizrobeStaffTex[];
extern u64 gWizrobeBandTex[];
extern u64 gWizrobeFootTex[];
extern StandardLimb gWizrobePelvisLimb;
extern StandardLimb gWizrobeTorsoLimb;
extern StandardLimb gWizrobeLeftUpperArmLimb;
extern StandardLimb gWizrobeLeftForearmLimb;
extern StandardLimb gWizrobeLeftHandLimb;
extern StandardLimb gWizrobeRightUpperArmLimb;
extern StandardLimb gWizrobeRightForearmLimb;
extern StandardLimb gWizrobeRightHandLimb;
extern StandardLimb gWizrobeStaffLimb;
extern StandardLimb gWizrobeNeckLimb;
extern StandardLimb gWizrobeHeadLimb;
extern StandardLimb gWizrobeJawLimb;
extern StandardLimb gWizrobeLoinclothLimb;
extern StandardLimb gWizrobeLeftThighLimb;
extern StandardLimb gWizrobeLeftShinLimb;
extern StandardLimb gWizrobeLeftFootLimb;
extern StandardLimb gWizrobeRightThighLimb;
extern StandardLimb gWizrobeRightShinLimb;
extern StandardLimb gWizrobeRightFootLimb;
extern void* gWizrobeSkelLimbs[];
extern FlexSkeletonHeader gWizrobeSkel;
#endif
