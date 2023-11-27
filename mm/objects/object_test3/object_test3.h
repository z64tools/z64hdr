#ifndef OBJECT_TEST3_H
#define OBJECT_TEST3_H 1

typedef enum KafeiLimb {
    /* 0x00 */ KAFEI_LIMB_NONE,
    /* 0x01 */ KAFEI_LIMB_ROOT,
    /* 0x02 */ KAFEI_LIMB_WAIST,
    /* 0x03 */ KAFEI_LIMB_LOWER_ROOT,
    /* 0x04 */ KAFEI_LIMB_RIGHT_THIGH,
    /* 0x05 */ KAFEI_LIMB_RIGHT_SHIN,
    /* 0x06 */ KAFEI_LIMB_RIGHT_FOOT,
    /* 0x07 */ KAFEI_LIMB_LEFT_THIGH,
    /* 0x08 */ KAFEI_LIMB_LEFT_SHIN,
    /* 0x09 */ KAFEI_LIMB_LEFT_FOOT,
    /* 0x0A */ KAFEI_LIMB_UPPER_ROOT,
    /* 0x0B */ KAFEI_LIMB_HEAD,
    /* 0x0C */ KAFEI_LIMB_HAT,
    /* 0x0D */ KAFEI_LIMB_COLLAR,
    /* 0x0E */ KAFEI_LIMB_LEFT_SHOULDER,
    /* 0x0F */ KAFEI_LIMB_LEFT_FOREARM,
    /* 0x10 */ KAFEI_LIMB_LEFT_HAND,
    /* 0x11 */ KAFEI_LIMB_RIGHT_SHOULDER,
    /* 0x12 */ KAFEI_LIMB_RIGHT_FOREARM,
    /* 0x13 */ KAFEI_LIMB_RIGHT_HAND,
    /* 0x14 */ KAFEI_LIMB_SHEATH,
    /* 0x15 */ KAFEI_LIMB_TORSO,
    /* 0x16 */ KAFEI_LIMB_MAX
} KafeiLimb;

extern u64 gKafeiBody1TLUT[];
extern u64 gKafeiBody2TLUT[];
extern u64 gKafeiMouthTLUT[];
extern u64 gKafeiEyesTLUT[];
extern u64 gKafeiSkinTex[];
extern u64 gKafeiHairTex[];
extern u64 gKafeiNoseTex[];
extern u64 gKafeiMouthClosedTex[];
extern u64 gKafeiEyesOpenTex[];
extern u64 gKafeiHairPartAndUndersideTex[];
extern u64 gKafeiFingersTex[];
extern u64 gKafeiBootTex[];
extern u64 gKafeiSleevePatternTex[];
extern u64 gKafeiInnerSleeveTex[];
extern u64 gKafeiClothesNeckOpeningTex[];
extern u64 gKafeiPendantOfMemoriesTex[];
extern u64 gKafeiClothesPatternTex[];
extern u64 gKafeiTrouserHemTex[];
extern u64 gKafeiEyesHalfTex[];
extern u64 gKafeiEyesClosedTex[];
extern u64 gKafeiEyesRollRightTex[];
extern u64 gKafeiEyesRollLeftTex[];
extern u64 gKafeiEyesRollUpTex[];
extern u64 gKafeiEyesRollDownTex[];
extern u64 object_test3_Tex_006680[];
extern u64 gKafeiMouthTeethTex[];
extern u64 gKafeiMouthAngryTex[];
extern u64 gKafeiMouthHappyTex[];
extern Vtx object_test3Vtx_007A80[];
extern Gfx gKafeiRightThighDL[];
extern Gfx gKafeiRightShinDL[];
extern Gfx gKafeiRightFootDL[];
extern Gfx gKafeiLeftThighDL[];
extern Gfx gKafeiLeftShinDL[];
extern Gfx gKafeiLeftFootDL[];
extern Gfx gKafeiWaistDL[];
extern Gfx gKafeiPendantOfMemoriesDL[];
extern Gfx gKafeiTorsoDL[];
extern Gfx gKafeiHeadDL[];
extern Gfx gKafeiNose1DL[];
extern Gfx gKafeiNose2DL[];
extern Gfx gKafeiRightShoulderDL[];
extern Gfx gKafeiRightForearmDL[];
extern Gfx gKafeiRightHandDL[];
extern Gfx gKafeiLeftShoulderDL[];
extern Gfx gKafeiLeftForearmDL[];
extern Gfx gKafeiLeftHandDL[];
extern Vtx object_test3Vtx_00E1F0[];
extern Gfx gKafeiSunMaskDL[];
extern u64 gKafeiSunMaskEyeTex[];
extern u64 gKafeiSunMaskPattern1Tex[];
extern u64 gKafeiSunMaskPattern2Tex[];
extern u64 gKafeiSunMaskPattern3Tex[];
extern Gfx gKafeiSunMaskEmptyDL[];
extern LodLimb gKafeiRootLimb;
extern LodLimb gKafeiWaistLimb;
extern LodLimb gKafeiLowerRootLimb;
extern LodLimb gKafeiRightThighLimb;
extern LodLimb gKafeiRightShinLimb;
extern LodLimb gKafeiRightFootLimb;
extern LodLimb gKafeiLeftThighLimb;
extern LodLimb gKafeiLeftShinLimb;
extern LodLimb gKafeiLeftFootLimb;
extern LodLimb gKafeiUpperRootLimb;
extern LodLimb gKafeiHeadLimb;
extern LodLimb gKafeiHatLimb;
extern LodLimb gKafeiCollarLimb;
extern LodLimb gKafeiLeftShoulderLimb;
extern LodLimb gKafeiLeftForearmLimb;
extern LodLimb gKafeiLeftHandLimb;
extern LodLimb gKafeiRightShoulderLimb;
extern LodLimb gKafeiRightForearmLimb;
extern LodLimb gKafeiRightHandLimb;
extern LodLimb gKafeiSheathLimb;
extern LodLimb gKafeiTorsoLimb;
extern void* gKafeiSkelLimbs[];
extern FlexSkeletonHeader gKafeiSkel;
#endif
