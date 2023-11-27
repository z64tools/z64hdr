#ifndef OBJECT_STK_H
#define OBJECT_STK_H 1

typedef enum SkullKidLimb {
    /* 0x00 */ SKULL_KID_LIMB_NONE,
    /* 0x01 */ SKULL_KID_LIMB_ROOT,
    /* 0x02 */ SKULL_KID_LIMB_PELVIS,
    /* 0x03 */ SKULL_KID_LIMB_RIGHT_THIGH,
    /* 0x04 */ SKULL_KID_LIMB_RIGHT_SHIN,
    /* 0x05 */ SKULL_KID_LIMB_RIGHT_FOOT,
    /* 0x06 */ SKULL_KID_LIMB_LEFT_THIGH,
    /* 0x07 */ SKULL_KID_LIMB_LEFT_SHIN,
    /* 0x08 */ SKULL_KID_LIMB_LEFT_FOOT,
    /* 0x09 */ SKULL_KID_LIMB_TORSO,
    /* 0x0A */ SKULL_KID_LIMB_LEFT_UPPER_ARM,
    /* 0x0B */ SKULL_KID_LIMB_LEFT_FOREARM,
    /* 0x0C */ SKULL_KID_LIMB_LEFT_HAND,
    /* 0x0D */ SKULL_KID_LIMB_RIGHT_UPPER_ARM,
    /* 0x0E */ SKULL_KID_LIMB_RIGHT_FOREARM,
    /* 0x0F */ SKULL_KID_LIMB_RIGHT_HAND,
    /* 0x10 */ SKULL_KID_LIMB_NECK,
    /* 0x11 */ SKULL_KID_LIMB_HEAD,
    /* 0x12 */ SKULL_KID_LIMB_HAT_BRIM,
    /* 0x13 */ SKULL_KID_LIMB_HAT_RINGS,
    /* 0x14 */ SKULL_KID_LIMB_HAT_NARROW_SECTION,
    /* 0x15 */ SKULL_KID_LIMB_HAT_TOP,
    /* 0x16 */ SKULL_KID_LIMB_MAX
} SkullKidLimb;

extern s16 sSkullKidLookAroundAnimFrameData[];
extern JointIndex sSkullKidLookAroundAnimJointIndices[];
extern AnimationHeader gSkullKidLookAroundAnim;
extern s16 sSkullKidCallDownMoonStartAnimFrameData[];
extern JointIndex sSkullKidCallDownMoonStartAnimJointIndices[];
extern AnimationHeader gSkullKidCallDownMoonStartAnim;
extern s16 sSkullKidCallDownMoonLoopAnimFrameData[];
extern JointIndex sSkullKidCallDownMoonLoopAnimJointIndices[];
extern AnimationHeader gSkullKidCallDownMoonLoopAnim;
extern Vtx object_stkVtx_003080[];
extern Gfx gSkullKidLinkMask1DL[];
extern Vtx object_stkVtx_003D90[];
extern Gfx gSkullKidLinkMask2DL[];
extern Vtx object_stkVtx_004AA0[];
extern Gfx gSkullKidLinkMask3DL[];
extern Vtx object_stkVtx_0057B0[];
extern Gfx gSkullKidMajorasMaskEyesDL[];
extern u64 gSkullKidMajorasMaskEyeTex[];
extern Vtx object_stkVtx_006120[];
extern Gfx gSkullKidMajorasMask1DL[];
extern Vtx object_stkVtx_006F60[];
extern Gfx gSkullKidMajorasMask2DL[];
extern Vtx object_stkVtx_007DA0[];
extern Gfx gSkullKidUnusedEyesDL[];
extern u64 gSkullKidUnusedEyeTex[];
extern Vtx object_stkVtx_007F20[];
extern Gfx gSkullKidUntexturedLeftHandDL[];
extern Vtx object_stkVtx_008640[];
extern Gfx gSkullKidOpenLeftHandDL[];
extern Vtx object_stkVtx_0088E0[];
extern Gfx gSkullKidFluteHoldingLeftHandDL[];
extern Vtx object_stkVtx_008BB0[];
extern Gfx gSkullKidTwoFingersExtendedLeftHandDL[];
extern Vtx object_stkVtx_009240[];
extern Gfx gSkullKidMaskHoldingRightHandDL[];
extern Vtx object_stkVtx_0098D0[];
extern Gfx gSkullKidUntexturedRightHandDL[];
extern Vtx object_stkVtx_009BF0[];
extern Gfx gSkullKidOcarinaHoldingRightHandDL[];
extern Vtx object_stkVtx_009EF0[];
extern Gfx gSkullKidNormalEyesDL[];
extern Gfx gSkullKidNormalHeadDL[];
extern Vtx object_stkVtx_00A7F0[];
extern Gfx gSkullKidLaughingEyesDL[];
extern Gfx gSkullKidLaughingHeadDL[];
extern s16 sSkullKidTelescopeLookUpStartAnimFrameData[];
extern JointIndex sSkullKidTelescopeLookUpStartAnimJointIndices[];
extern AnimationHeader gSkullKidTelescopeLookUpStartAnim;
extern s16 sSkullKidTelescopeLookUpLoopAnimFrameData[];
extern JointIndex sSkullKidTelescopeLookUpLoopAnimJointIndices[];
extern AnimationHeader gSkullKidTelescopeLookUpLoopAnim;
extern Vtx object_stkVtx_00C980[];
extern Gfx gSkullKidOcarinaOfTimeDL[];
extern s16 sSkullKidTPoseAnimFrameData[];
extern JointIndex sSkullKidTPoseAnimJointIndices[];
extern AnimationHeader gSkullKidTPoseAnim;
extern Vtx object_stkVtx_00CCB0[];
extern Gfx gSkullKidTorsoDL[];
extern Gfx gSkullKidNeckDL[];
extern Gfx gSkullKidHeadWithLipsDL[];
extern Gfx gSkullKidHatBrimDL[];
extern Gfx gSkullKidHatRingsDL[];
extern Gfx gSkullKidHatNarrowSectionDL[];
extern Gfx gSkullKidHatTopDL[];
extern Gfx gSkullKidRightUpperArmDL[];
extern Gfx gSkullKidRightForearmDL[];
extern Gfx gSkullKidRightHandDL[];
extern Gfx gSkullKidLeftUpperArmDL[];
extern Gfx gSkullKidLeftForearmDL[];
extern Gfx gSkullKidLeftHandAndFluteDL[];
extern Gfx gSkullKidPelvisDL[];
extern Gfx gSkullKidLeftThighDL[];
extern Gfx gSkullKidLeftShinDL[];
extern Gfx gSkullKidLeftFootDL[];
extern Gfx gSkullKidRightThighDL[];
extern Gfx gSkullKidRightShinDL[];
extern Gfx gSkullKidRightFootDL[];
extern AnimatedMaterial gSkullKidEmptyTexAnim[];
extern u64 gSkullKidClothingFringeTex[];
extern u64 gSkullKidRingTex[];
extern u64 gSkullKidOoTStyleMouthTex[];
extern u64 gSkullKidPantsAndWristsTex[];
extern u64 gSkullKidSkinTex[];
extern u64 gSkullKidShawlTex[];
extern u64 gSkullKidShoeTex[];
extern StandardLimb gSkullKidRootLimb;
extern StandardLimb gSkullKidPelvisLimb;
extern StandardLimb gSkullKidRightThighLimb;
extern StandardLimb gSkullKidRightShinLimb;
extern StandardLimb gSkullKidRightFootLimb;
extern StandardLimb gSkullKidLeftThighLimb;
extern StandardLimb gSkullKidLeftShinLimb;
extern StandardLimb gSkullKidLeftFootLimb;
extern StandardLimb gSkullKidTorsoLimb;
extern StandardLimb gSkullKidLeftUpperArmLimb;
extern StandardLimb gSkullKidLeftForearmLimb;
extern StandardLimb gSkullKidLeftHandLimb;
extern StandardLimb gSkullKidRightUpperArmLimb;
extern StandardLimb gSkullKidRightForearmLimb;
extern StandardLimb gSkullKidRightHandLimb;
extern StandardLimb gSkullKidNeckLimb;
extern StandardLimb gSkullKidHeadLimb;
extern StandardLimb gSkullKidHatBrimLimb;
extern StandardLimb gSkullKidHatRingsLimb;
extern StandardLimb gSkullKidHatNarrowSectionLimb;
extern StandardLimb gSkullKidHatTopLimb;
extern void* gSkullKidSkelLimbs[];
extern FlexSkeletonHeader gSkullKidSkel;
extern s16 sSkullKidHipShakeAndJumpAnimFrameData[];
extern JointIndex sSkullKidHipShakeAndJumpAnimJointIndices[];
extern AnimationHeader gSkullKidHipShakeAndJumpAnim;
extern s16 sSkullKidSpankAnimFrameData[];
extern JointIndex sSkullKidSpankAnimJointIndices[];
extern AnimationHeader gSkullKidSpankAnim;
extern s16 sSkullKidBentOverHeadTwitchAnimFrameData[];
extern JointIndex sSkullKidBentOverHeadTwitchAnimJointIndices[];
extern AnimationHeader gSkullKidBentOverHeadTwitchAnim;
extern s16 sSkullKidBentOverLookUpAnimFrameData[];
extern JointIndex sSkullKidBentOverLookUpAnimJointIndices[];
extern AnimationHeader gSkullKidBentOverLookUpAnim;
extern Vtx object_stkVtx_016520[];
extern Gfx gSkullKidFluteDL[];
extern u64 gSkullKidLinkMaskEyeTex[];
extern u64 gSkullKidLinkMaskNoseTex[];
extern u64 gSkullKidLinkMaskMouthTex[];
extern u64 gSkullKidLinkMaskHairTex[];
extern u64 gSkullKidLinkMaskHatTex[];
extern u64 gSkullKidLinkMaskEarTex[];
extern u64 gSkullKidUnusedMajorasMaskEyeTex[];
extern u64 gSkullKidMajorasMaskFaceTex[];
extern u64 gSkullKidMajorasMaskSpikes1Tex[];
extern u64 gSkullKidMajorasMaskSpikes2Tex[];
extern u64 gSkullKidMajorasMaskSpikes3Tex[];
extern u64 gSkullKidMajorasMaskSpikes4Tex[];
extern u64 gSkullKidMajorasMaskBackTex[];
extern u64 gSkullKidUnusedEye2Tex[];
extern u64 gSkullKidHandTex[];
extern u64 gSkullKidEyeTex[];
extern u64 gSkullKidBeakTex[];
extern u64 gSkullKidHeadSkinTex[];
extern u64 gSkullKidOcarinaOfTimeTex[];
extern u64 gSkullKidFluteTex[];
extern u64 gSkullKidFluteHoleTex[];
extern s16 sSkullKidShakeHeadAnimFrameData[];
extern JointIndex sSkullKidShakeHeadAnimJointIndices[];
extern AnimationHeader gSkullKidShakeHeadAnim;
extern s16 sSkullKidIdleAnimFrameData[];
extern JointIndex sSkullKidIdleAnimJointIndices[];
extern AnimationHeader gSkullKidIdleAnim;
extern s16 sSkullKidWalkAnimFrameData[];
extern JointIndex sSkullKidWalkAnimJointIndices[];
extern AnimationHeader gSkullKidWalkAnim;
#endif
