#ifndef OBJECT_HARFGIBUD_H
#define OBJECT_HARFGIBUD_H 1

typedef enum PamelasFatherGibdoLimb {
    /* 0x00 */ PAMELAS_FATHER_GIBDO_LIMB_NONE,
    /* 0x01 */ PAMELAS_FATHER_GIBDO_LIMB_ROOT,
    /* 0x02 */ PAMELAS_FATHER_GIBDO_LIMB_ABDOMEN,
    /* 0x03 */ PAMELAS_FATHER_GIBDO_LIMB_CHEST,
    /* 0x04 */ PAMELAS_FATHER_GIBDO_LIMB_LEFT_UPPER_ARM,
    /* 0x05 */ PAMELAS_FATHER_GIBDO_LIMB_LEFT_FOREARM,
    /* 0x06 */ PAMELAS_FATHER_GIBDO_LIMB_LEFT_HAND,
    /* 0x07 */ PAMELAS_FATHER_GIBDO_LIMB_RIGHT_UPPER_ARM,
    /* 0x08 */ PAMELAS_FATHER_GIBDO_LIMB_RIGHT_FOREARM,
    /* 0x09 */ PAMELAS_FATHER_GIBDO_LIMB_RIGHT_HAND,
    /* 0x0A */ PAMELAS_FATHER_GIBDO_LIMB_EYEBROWS,
    /* 0x0B */ PAMELAS_FATHER_GIBDO_LIMB_HEAD,
    /* 0x0C */ PAMELAS_FATHER_GIBDO_LIMB_PELVIS,
    /* 0x0D */ PAMELAS_FATHER_GIBDO_LIMB_LEFT_THIGH,
    /* 0x0E */ PAMELAS_FATHER_GIBDO_LIMB_LEFT_SHIN,
    /* 0x0F */ PAMELAS_FATHER_GIBDO_LIMB_LEFT_FOOT,
    /* 0x10 */ PAMELAS_FATHER_GIBDO_LIMB_RIGHT_THIGH,
    /* 0x11 */ PAMELAS_FATHER_GIBDO_LIMB_RIGHT_SHIN,
    /* 0x12 */ PAMELAS_FATHER_GIBDO_LIMB_RIGHT_FOOT,
    /* 0x13 */ PAMELAS_FATHER_GIBDO_LIMB_MAX
} PamelasFatherGibdoLimb;

typedef enum PamelasFatherHumanLimb {
    /* 0x00 */ PAMELAS_FATHER_HUMAN_LIMB_NONE,
    /* 0x01 */ PAMELAS_FATHER_HUMAN_LIMB_ROOT,
    /* 0x02 */ PAMELAS_FATHER_HUMAN_LIMB_ABDOMEN,
    /* 0x03 */ PAMELAS_FATHER_HUMAN_LIMB_CHEST,
    /* 0x04 */ PAMELAS_FATHER_HUMAN_LIMB_LEFT_UPPER_ARM,
    /* 0x05 */ PAMELAS_FATHER_HUMAN_LIMB_LEFT_FOREARM,
    /* 0x06 */ PAMELAS_FATHER_HUMAN_LIMB_LEFT_HAND,
    /* 0x07 */ PAMELAS_FATHER_HUMAN_LIMB_RIGHT_UPPER_ARM,
    /* 0x08 */ PAMELAS_FATHER_HUMAN_LIMB_RIGHT_FOREARM,
    /* 0x09 */ PAMELAS_FATHER_HUMAN_LIMB_RIGHT_HAND,
    /* 0x0A */ PAMELAS_FATHER_HUMAN_LIMB_EYEBROWS,
    /* 0x0B */ PAMELAS_FATHER_HUMAN_LIMB_HEAD,
    /* 0x0C */ PAMELAS_FATHER_HUMAN_LIMB_PELVIS,
    /* 0x0D */ PAMELAS_FATHER_HUMAN_LIMB_LEFT_THIGH,
    /* 0x0E */ PAMELAS_FATHER_HUMAN_LIMB_LEFT_SHIN,
    /* 0x0F */ PAMELAS_FATHER_HUMAN_LIMB_LEFT_FOOT,
    /* 0x10 */ PAMELAS_FATHER_HUMAN_LIMB_RIGHT_THIGH,
    /* 0x11 */ PAMELAS_FATHER_HUMAN_LIMB_RIGHT_SHIN,
    /* 0x12 */ PAMELAS_FATHER_HUMAN_LIMB_RIGHT_FOOT,
    /* 0x13 */ PAMELAS_FATHER_HUMAN_LIMB_MAX
} PamelasFatherHumanLimb;

extern s16 sPamelasFatherLeanForwardAnimFrameData[];
extern JointIndex sPamelasFatherLeanForwardAnimJointIndices[];
extern AnimationHeader gPamelasFatherLeanForwardAnim;
extern s16 sPamelasFatherReachForwardAnimFrameData[];
extern JointIndex sPamelasFatherReachForwardAnimJointIndices[];
extern AnimationHeader gPamelasFatherReachForwardAnim;
extern s16 sPamelasFatherCurlUpAnimFrameData[];
extern JointIndex sPamelasFatherCurlUpAnimJointIndices[];
extern AnimationHeader gPamelasFatherCurlUpAnim;
extern s16 sPamelasFatherCrouchedPanicAnimFrameData[];
extern JointIndex sPamelasFatherCrouchedPanicAnimJointIndices[];
extern AnimationHeader gPamelasFatherCrouchedPanicAnim;
extern s16 sPamelasFatherIdleAnimFrameData[];
extern JointIndex sPamelasFatherIdleAnimJointIndices[];
extern AnimationHeader gPamelasFatherIdleAnim;
extern Vtx object_harfgibudVtx_002620[];
extern Gfx gPamelasFatherGibdoPelvisDL[];
extern Gfx gPamelasFatherGibdoRightFootDL[];
extern Gfx gPamelasFatherGibdoRightLegDL[];
extern Gfx gPamelasFatherGibdoRightThighDL[];
extern Gfx gPamelasFatherGibdoLeftFootDL[];
extern Gfx gPamelasFatherGibdoLeftLegDL[];
extern Gfx gPamelasFatherGibdoLeftThighDL[];
extern Gfx gPamelasFatherGibdoEyebrowsDL[];
extern Gfx gPamelasFatherGibdoHeadDL[];
extern Gfx gPamelasFatherGibdoChestDL[];
extern Gfx gPamelasFatherGibdoRightHandDL[];
extern Gfx gPamelasFatherGibdoRightForearmDL[];
extern Gfx gPamelasFatherGibdoRightUpperArmDL[];
extern Gfx gPamelasFatherGibdoLeftHandDL[];
extern Gfx gPamelasFatherGibdoLeftForearmDL[];
extern Gfx gPamelasFatherGibdoLeftUpperArmDL[];
extern Gfx gPamelasFatherGibdoAbdomenDL[];
extern u64 gPamelasFatherGibdoTLUT[];
extern u64 gPamelasFatherGibdoBandageWrappingsTex[];
extern u64 gPamelasFatherGibdoSkinGradientTex[];
extern u64 gPamelasFatherGibdoSideHairTex[];
extern u64 gPamelasFatherGibdoEarTex[];
extern u64 gPamelasFatherGibdoLipTex[];
extern u64 gPamelasFatherGibdoBloodshotEyeTex[];
extern u64 gPamelasFatherGibdoHairTex[];
extern u64 gPamelasFatherGibdoEyebrowTex[];
extern u64 gPamelasFatherGibdoLabCoatSleeveTex[];
extern u64 gPamelasFatherGibdoShirtPieceTex[];
extern u64 gPamelasFatherGibdoFingernailTex[];
extern u64 gPamelasFatherGibdoLabCoatCuffTex[];
extern StandardLimb gPamelasFatherGibdoRootLimb;
extern StandardLimb gPamelasFatherGibdoAbdomenLimb;
extern StandardLimb gPamelasFatherGibdoChestLimb;
extern StandardLimb gPamelasFatherGibdoLeftUpperArmLimb;
extern StandardLimb gPamelasFatherGibdoLeftForearmLimb;
extern StandardLimb gPamelasFatherGibdoLeftHandLimb;
extern StandardLimb gPamelasFatherGibdoRightUpperArmLimb;
extern StandardLimb gPamelasFatherGibdoRightForearmLimb;
extern StandardLimb gPamelasFatherGibdoRightHandLimb;
extern StandardLimb gPamelasFatherGibdoEyebrowsLimb;
extern StandardLimb gPamelasFatherGibdoHeadLimb;
extern StandardLimb gPamelasFatherGibdoPelvisLimb;
extern StandardLimb gPamelasFatherGibdoLeftThighLimb;
extern StandardLimb gPamelasFatherGibdoLeftShinLimb;
extern StandardLimb gPamelasFatherGibdoLeftFootLimb;
extern StandardLimb gPamelasFatherGibdoRightThighLimb;
extern StandardLimb gPamelasFatherGibdoRightShinLimb;
extern StandardLimb gPamelasFatherGibdoRightFootLimb;
extern void* gPamelasFatherGibdoSkelLimbs[];
extern FlexSkeletonHeader gPamelasFatherGibdoSkel;
extern s16 sPamelasFatherLurchForwardAnimFrameData[];
extern JointIndex sPamelasFatherLurchForwardAnimJointIndices[];
extern AnimationHeader gPamelasFatherLurchForwardAnim;
extern s16 sPamelasFatherRecoilFromHitAnimFrameData[];
extern JointIndex sPamelasFatherRecoilFromHitAnimJointIndices[];
extern AnimationHeader gPamelasFatherRecoilFromHitAnim;
extern s16 sPamelasFatherPanicAnimFrameData[];
extern JointIndex sPamelasFatherPanicAnimJointIndices[];
extern AnimationHeader gPamelasFatherPanicAnim;
extern TexturePtr object_harfgibudTexCycleTexPtrs_00AE30[];
extern u8 object_harfgibudTexCycleTexIndices_00AE3C[];
extern AnimatedMatTexCycleParams gPamelasFatherEyeTexAnimTexCycleParams_00AE40;
extern AnimatedMaterial gPamelasFatherEyeTexAnim[];
extern s16 sPamelasFatherArmsFoldedAnimFrameData[];
extern JointIndex sPamelasFatherArmsFoldedAnimJointIndices[];
extern AnimationHeader gPamelasFatherArmsFoldedAnim;
extern Vtx object_harfgibudVtx_00B660[];
extern Gfx gPamelasFatherHumanPelvisDL[];
extern Gfx gPamelasFatherHumanRightFootDL[];
extern Gfx gPamelasFatherHumanRightShinDL[];
extern Gfx gPamelasFatherHumanRightThighDL[];
extern Gfx gPamelasFatherHumanLeftFootDL[];
extern Gfx gPamelasFatherHumanLeftShinDL[];
extern Gfx gPamelasFatherHumanLeftThighDL[];
extern Gfx gPamelasFatherHumanEyebrowsDL[];
extern Gfx gPamelasFatherHumanHeadDL[];
extern Gfx gPamelasFatherHumanChestDL[];
extern Gfx gPamelasFatherHumanRightHandDL[];
extern Gfx gPamelasFatherHumanRightForearmDL[];
extern Gfx gPamelasFatherHumanRightUpperArmDL[];
extern Gfx gPamelasFatherHumanLeftHandDL[];
extern Gfx gPamelasFatherHumanLeftForearmDL[];
extern Gfx gPamelasFatherHumanLeftUpperArmDL[];
extern Gfx gPamelasFatherHumanAbdomenDL[];
extern u64 gPamelasFatherHumanTLUT[];
extern u64 gPamelasFatherHumanSkinGradientTex[];
extern u64 gPamelasFatherHumanHandTex[];
extern u64 gPamelasFatherHumanSideHairTex[];
extern u64 gPamelasFatherHumanEarTex[];
extern u64 gPamelasFatherHumanBeltTex[];
extern u64 gPamelasFatherHumanLipTex[];
extern u64 gPamelasFatherHumanShirtTex[];
extern u64 gPamelasFatherHumanEyebrowTex[];
extern u64 gPamelasFatherHumanLabCoatTex[];
extern u64 gPamelasFatherHumanSockTex[];
extern u64 gPamelasFatherHumanLabCoatCuffTex[];
extern u64 gPamelasFatherHumanEyeOpenTex[];
extern u64 gPamelasFatherHumanEyeHalfTex[];
extern u64 gPamelasFatherHumanEyeClosedTex[];
extern StandardLimb gPamelasFatherHumanRootLimb;
extern StandardLimb gPamelasFatherHumanAbdomenLimb;
extern StandardLimb gPamelasFatherHumanChestLimb;
extern StandardLimb gPamelasFatherHumanLeftUpperArmLimb;
extern StandardLimb gPamelasFatherHumanLeftForearmLimb;
extern StandardLimb gPamelasFatherHumanLeftHandLimb;
extern StandardLimb gPamelasFatherHumanRightUpperArmLimb;
extern StandardLimb gPamelasFatherHumanRightForearmLimb;
extern StandardLimb gPamelasFatherHumanRightHandLimb;
extern StandardLimb gPamelasFatherHumanEyebrowsLimb;
extern StandardLimb gPamelasFatherHumanHeadLimb;
extern StandardLimb gPamelasFatherHumanPelvisLimb;
extern StandardLimb gPamelasFatherHumanLeftThighLimb;
extern StandardLimb gPamelasFatherHumanLeftLegLimb;
extern StandardLimb gPamelasFatherHumanLeftFootLimb;
extern StandardLimb gPamelasFatherHumanRightThighLimb;
extern StandardLimb gPamelasFatherHumanRightLegLimb;
extern StandardLimb gPamelasFatherHumanRightFootLimb;
extern void* gPamelasFatherHumanSkelLimbs[];
extern FlexSkeletonHeader gPamelasFatherHumanSkel;
extern s16 sPamelasFatherAstonishedAnimFrameData[];
extern JointIndex sPamelasFatherAstonishedAnimJointIndices[];
extern AnimationHeader gPamelasFatherAstonishedAnim;
extern s16 sPamelasFatherReachDownToLiftAnimFrameData[];
extern JointIndex sPamelasFatherReachDownToLiftAnimJointIndices[];
extern AnimationHeader gPamelasFatherReachDownToLiftAnim;
extern s16 sPamelasFatherTossAnimFrameData[];
extern JointIndex sPamelasFatherTossAnimJointIndices[];
extern AnimationHeader gPamelasFatherTossAnim;
extern s16 sPamelasFatherKneelDownAndHugAnimFrameData[];
extern JointIndex sPamelasFatherKneelDownAndHugAnimJointIndices[];
extern AnimationHeader gPamelasFatherKneelDownAndHugAnim;
extern s16 sPamelasFatherConsoleAnimFrameData[];
extern JointIndex sPamelasFatherConsoleAnimJointIndices[];
extern AnimationHeader gPamelasFatherConsoleAnim;
extern s16 sPamelasFatherConsoleHeadUpAnimFrameData[];
extern JointIndex sPamelasFatherConsoleHeadUpAnimJointIndices[];
extern AnimationHeader gPamelasFatherConsoleHeadUpAnim;
#endif
