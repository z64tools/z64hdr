#ifndef OBJECT_OSN_H
#define OBJECT_OSN_H 1

typedef enum HappyMaskSalesmanLimb {
    /* 0x00 */ HAPPY_MASK_SALESMAN_LIMB_NONE,
    /* 0x01 */ HAPPY_MASK_SALESMAN_LIMB_ROOT,
    /* 0x02 */ HAPPY_MASK_SALESMAN_LIMB_ABDOMEN,
    /* 0x03 */ HAPPY_MASK_SALESMAN_LIMB_CHEST,
    /* 0x04 */ HAPPY_MASK_SALESMAN_LIMB_LEFT_UPPER_ARM,
    /* 0x05 */ HAPPY_MASK_SALESMAN_LIMB_LEFT_FOREARM,
    /* 0x06 */ HAPPY_MASK_SALESMAN_LIMB_LEFT_HAND,
    /* 0x07 */ HAPPY_MASK_SALESMAN_RIGHT_UPPER_ARM,
    /* 0x08 */ HAPPY_MASK_SALESMAN_RIGHT_FOREARM,
    /* 0x09 */ HAPPY_MASK_SALESMAN_LIMB_RIGHT_HAND,
    /* 0x0A */ HAPPY_MASK_SALESMAN_LIMB_BACKPACK,
    /* 0x0B */ HAPPY_MASK_SALESMAN_LIMB_HEAD,
    /* 0x0C */ HAPPY_MASK_SALESMAN_LIMB_PELVIS,
    /* 0x0D */ HAPPY_MASK_SALESMAN_LIMB_LEFT_THIGH,
    /* 0x0E */ HAPPY_MASK_SALESMAN_LIMB_LEFT_SHIN,
    /* 0x0F */ HAPPY_MASK_SALESMAN_LIMB_LEFT_FOOT,
    /* 0x10 */ HAPPY_MASK_SALESMAN_LIMB_RIGHT_THIGH,
    /* 0x11 */ HAPPY_MASK_SALESMAN_LIMB_RIGHT_SHIN,
    /* 0x12 */ HAPPY_MASK_SALESMAN_LIMB_RIGHT_FOOT,
    /* 0x13 */ HAPPY_MASK_SALESMAN_LIMB_MAX
} HappyMaskSalesmanLimb;

typedef enum DekuMaskLimb {
    /* 0x00 */ DEKU_MASK_LIMB_NONE,
    /* 0x01 */ DEKU_MASK_LIMB,
    /* 0x02 */ DEKU_MASK_LIMB_MAX
} DekuMaskLimb;

extern s16 sHappyMaskSalesmanLyingDownAnimFrameData[];
extern JointIndex sHappyMaskSalesmanLyingDownAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanLyingDownAnim;
extern s16 sHappyMaskSalesmanOrganPlayAnimFrameData[];
extern JointIndex sHappyMaskSalesmanOrganPlayAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanOrganPlayAnim;
extern s16 sHappyMaskSalesmanOrganTalkAnimFrameData[];
extern JointIndex sHappyMaskSalesmanOrganTalkAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanOrganTalkAnim;
extern s16 sHappyMaskSalesmanTurnAroundStartAnimFrameData[];
extern JointIndex sHappyMaskSalesmanTurnAroundStartAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanTurnAroundStartAnim;
extern s16 sHappyMaskSalesmanTurnAroundLoopAnimFrameData[];
extern JointIndex sHappyMaskSalesmanTurnAroundLoopAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanTurnAroundLoopAnim;
extern s16 sHappyMaskSalesmanArmsOutAnimFrameData[];
extern JointIndex sHappyMaskSalesmanArmsOutAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanArmsOutAnim;
extern s16 sHappyMaskSalesmanBowingAnimFrameData[];
extern JointIndex sHappyMaskSalesmanBowingAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanBowingAnim;
extern s16 sHappyMaskSalesmanChokeAnimFrameData[];
extern JointIndex sHappyMaskSalesmanChokeAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanChokeAnim;
extern s16 sHappyMaskSalesmanReminisceAnimFrameData[];
extern JointIndex sHappyMaskSalesmanReminisceAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanReminisceAnim;
extern s16 sHappyMaskSalesmanHandsClaspedAnimFrameData[];
extern JointIndex sHappyMaskSalesmanHandsClaspedAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanHandsClaspedAnim;
extern s16 sHappyMaskSalesmanDespairAnimFrameData[];
extern JointIndex sHappyMaskSalesmanDespairAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanDespairAnim;
extern s16 sHappyMaskSalesmanMaskLookFromStartAnimFrameData[];
extern JointIndex sHappyMaskSalesmanMaskLookFromStartAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanMaskLookFromStartAnim;
extern s16 sHappyMaskSalesmanMaskLookFromLoopAnimFrameData[];
extern JointIndex sHappyMaskSalesmanMaskLookFromLoopAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanMaskLookFromLoopAnim;
extern s16 sHappyMaskSalesmanMaskLookAtAnimFrameData[];
extern JointIndex sHappyMaskSalesmanMaskLookAtAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanMaskLookAtAnim;
extern s16 sHappyMaskSalesmanFastBowsAnimFrameData[];
extern JointIndex sHappyMaskSalesmanFastBowsAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanFastBowsAnim;
extern s16 sHappyMaskSalesmanWalkAwayAnimFrameData[];
extern JointIndex sHappyMaskSalesmanWalkAwayAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanWalkAwayAnim;
extern s16 sHappyMaskSalesmanBelieveAnimFrameData[];
extern JointIndex sHappyMaskSalesmanBelieveAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanBelieveAnim;
extern s16 sHappyMaskSalesmanThinkAnimFrameData[];
extern JointIndex sHappyMaskSalesmanThinkAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanThinkAnim;
extern s16 sHappyMaskSalesmanHandOutAnimFrameData[];
extern JointIndex sHappyMaskSalesmanHandOutAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanHandOutAnim;
extern s16 sHappyMaskSalesmanShakeHeadAnimFrameData[];
extern JointIndex sHappyMaskSalesmanShakeHeadAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanShakeHeadAnim;
extern s16 sHappyMaskSalesmanShakeAnimFrameData[];
extern JointIndex sHappyMaskSalesmanShakeAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanShakeAnim;
extern Vtx object_osnVtx_00AEB0[];
extern Gfx gHappyMaskSalesmanPelvisDL[];
extern Gfx gHappyMaskSalesmanRightThighDL[];
extern Gfx gHappyMaskSalesmanRightShinDL[];
extern Gfx gHappyMaskSalesmanRightFootDL[];
extern Gfx gHappyMaskSalesmanLeftThighDL[];
extern Gfx gHappyMaskSalesmanLeftShinDL[];
extern Gfx gHappyMaskSalesmanLeftFootDL[];
extern Gfx gHappyMaskSalesmanAbdomenDL[];
extern Gfx gHappyMaskSalesmanChestDL[];
extern Gfx gHappyMaskSalesmanHeadDL[];
extern Gfx gHappyMaskSalesmanBackpackDL[];
extern Gfx gHappyMaskSalesmanRightUpperArmDL[];
extern Gfx gHappyMaskSalesmanRightForearmDL[];
extern Gfx gHappyMaskSalesmanRightHandDL[];
extern Gfx gHappyMaskSalesmanLeftUpperArmDL[];
extern Gfx gHappyMaskSalesmanLeftForearmDL[];
extern Gfx gHappyMaskSalesmanLeftHandDL[];
extern u64 gHappyMaskSalesmanBodyTLUT[];
extern u64 gHappyMaskSalesmanBackpackTLUT[];
extern u64 gHappyMaskSalesmanMask1TLUT[];
extern u64 gHappyMaskSalesmanMask2TLUT[];
extern u64 gHappyMaskSalesmanSkinTex[];
extern u64 gHappyMaskSalesmanEarTex[];
extern u64 gHappyMaskSalesmanNostrilTex[];
extern u64 gHappyMaskSalesmanHairTex[];
extern u64 gHappyMaskSalesmanGoldFabric1Tex[];
extern u64 gHappyMaskSalesmanGoldFabric2Tex[];
extern u64 gHappyMaskSalesmanRobeFrontTex[];
extern u64 gHappyMaskSalesmanFootTex[];
extern u64 gHappyMaskSalesmanFingersTex[];
extern u64 gHappyMaskSalesmaeClothesTex[];
extern u64 gHappyMaskSalesmanHairlineTex[];
extern u64 gHappyMaskSalesmanShoeTex[];
extern u64 gHappyMaskSalesmanRobeBackTex[];
extern u64 gHappyMaskSalesmanShirtTex[];
extern u64 gHappyMaskSalesmaeClothesEndTex[];
extern u64 gHappyMaskSalesmanBackpackTopTex[];
extern u64 gHappyMaskSalesmanBackpackPocketTex[];
extern u64 gHappyMaskSalesmanBackpackPocketTopTex[];
extern u64 gHappyMaskSalesmanBackpackBottomTex[];
extern u64 gHappyMaskSalesmanBackpackRollTex[];
extern u64 gHappyMaskSalesmanBackpackRollEndTex[];
extern u64 gHappyMaskSalesmanBackpackStrapTex[];
extern u64 gHappyMaskSalesmanMask01Tex[];
extern u64 gHappyMaskSalesmanMask02Tex[];
extern u64 gHappyMaskSalesmanScrollTex[];
extern u64 gHappyMaskSalesmanMask03Tex[];
extern u64 gHappyMaskSalesmanMask04Tex[];
extern u64 gHappyMaskSalesmanMask05Tex[];
extern u64 gHappyMaskSalesmanMask06Tex[];
extern u64 gHappyMaskSalesmanMask07Tex[];
extern u64 gHappyMaskSalesmanMask08Tex[];
extern u64 gHappyMaskSalesmanMask09Tex[];
extern u64 gHappyMaskSalesmanMask10Tex[];
extern u64 gHappyMaskSalesmanEyeClosedHappyTex[];
extern u64 gHappyMaskSalesmanEyeOpenTex[];
extern u64 gHappyMaskSalesmanEyeClosedAngryTex[];
extern u64 gHappyMaskSalesmanSmileTex[];
extern u64 gHappyMaskSalesmanFrownTex[];
extern TexturePtr object_osnTexCycleTexPtrs_018700[];
extern u8 object_osnTexCycleTexIndices_01870C[];
extern AnimatedMatTexCycleParams gHappyMaskSalesmanMouthTexAnimTexCycleParams_018710;
extern TexturePtr object_osnTexCycleTexPtrs_018720[];
extern u8 object_osnTexCycleTexIndices_018728[];
extern AnimatedMatTexCycleParams gHappyMaskSalesmanMouthTexAnimTexCycleParams_01872C;
extern AnimatedMaterial gHappyMaskSalesmanMouthTexAnim[];
extern Vtx object_osnVtx_018750[];
extern Gfx gHappyMaskSalesmanMajorasMaskDL[];
extern Gfx gHappyMaskSalesmanMajorasMaskEyesDL[];
extern u64 gHappyMaskSalesmanMajorasMaskFaceTex[];
extern u64 gHappyMaskSalesmanMajorasMaskSpikes1Tex[];
extern u64 gHappyMaskSalesmanMajorasMaskSpikes2Tex[];
extern u64 gHappyMaskSalesmanMajorasMaskSpikes3Tex[];
extern u64 gHappyMaskSalesmanMajorasMaskSpikes4Tex[];
extern u64 gHappyMaskSalesmanMajorasMaskBackTex[];
extern u64 gHappyMaskSalesmanMajorasMaskEyeTex[];
extern s16 sHappyMaskSalesmanIdleAnimFrameData[];
extern JointIndex sHappyMaskSalesmanIdleAnimJointIndices[];
extern AnimationHeader gHappyMaskSalesmanIdleAnim;
extern StandardLimb gHappyMaskSalesmanRootLimb;
extern StandardLimb gHappyMaskSalesmanAbdomenLimb;
extern StandardLimb gHappyMaskSalesmanChestLimb;
extern StandardLimb gHappyMaskSalesmanLeftUpperArmLimb;
extern StandardLimb gHappyMaskSalesmanLeftForearmLimb;
extern StandardLimb gHappyMaskSalesmanLeftHandLimb;
extern StandardLimb gHappyMaskSalesmanRightUpperArmLimb;
extern StandardLimb gHappyMaskSalesmanRightForearmLimb;
extern StandardLimb gHappyMaskSalesmanRightHandLimb;
extern StandardLimb gHappyMaskSalesmanBackpackLimb;
extern StandardLimb gHappyMaskSalesmanHeadLimb;
extern StandardLimb gHappyMaskSalesmanPelvisLimb;
extern StandardLimb gHappyMaskSalesmanLeftThighLimb;
extern StandardLimb gHappyMaskSalesmanLeftShinLimb;
extern StandardLimb gHappyMaskSalesmanLeftFootLimb;
extern StandardLimb gHappyMaskSalesmanRightThighLimb;
extern StandardLimb gHappyMaskSalesmanRightShinLimb;
extern StandardLimb gHappyMaskSalesmanRightFootLimb;
extern void* gHappyMaskSalesmanSkelLimbs[];
extern FlexSkeletonHeader gHappyMaskSalesmanSkel;
extern s16 sDekuMaskFallOverAnimFrameData[];
extern JointIndex sDekuMaskFallOverAnimJointIndices[];
extern AnimationHeader gDekuMaskFallOverAnim;
extern StandardLimb gDekuMaskLimb;
extern void* gDekuMaskSkelLimbs[];
extern FlexSkeletonHeader gDekuMaskSkel;
#endif
