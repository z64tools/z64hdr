#ifndef OBJECT_DOG_H
#define OBJECT_DOG_H 1

typedef enum DogLimb {
    /* 0x00 */ DOG_LIMB_NONE,
    /* 0x01 */ DOG_LIMB_ROOT,
    /* 0x02 */ DOG_LIMB_BODY_BACK,
    /* 0x03 */ DOG_LIMB_BODY_FRONT,
    /* 0x04 */ DOG_LIMB_HEAD_ROOT,
    /* 0x05 */ DOG_LIMB_HEAD,
    /* 0x06 */ DOG_LIMB_RIGHT_FACE_HAIR,
    /* 0x07 */ DOG_LIMB_LEFT_FACE_HAIR,
    /* 0x08 */ DOG_LIMB_FRONT_RIGHT_LEG,
    /* 0x09 */ DOG_LIMB_FRONT_LEFT_LEG,
    /* 0x0A */ DOG_LIMB_BACK_RIGHT_LEG,
    /* 0x0B */ DOG_LIMB_BACK_LEFT_LEG,
    /* 0x0C */ DOG_LIMB_TAIL,
    /* 0x0D */ DOG_LIMB_MAX
} DogLimb;

extern Vtx object_dogVtx_000000[];
extern Mtx gDogSelectionArrowAnimatedDLMtx_000000;
extern Gfx gDogSelectionArrowAnimatedDL[];
extern Gfx gDogSelectionArrowAnimatedEmptyDL[];
extern u64 gDogSelectionArrowAnimatedTex[];
extern F3DPrimColor object_dogTexColorChangingPrimColors_000360[];
extern F3DEnvColor object_dogTexColorChangingEnvColors_000374[];
extern u16 object_dogTexColorChangingFrameData_000384[];
extern AnimatedMatColorParams gDogSelectionArrowTexAnimColorParams_00038C;
extern TexturePtr object_dogTexCycleTexPtrs_00039C[];
extern u8 object_dogTexCycleTexIndices_0003A0[];
extern AnimatedMatTexCycleParams gDogSelectionArrowTexAnimTexCycleParams_0003B4;
extern AnimatedMaterial gDogSelectionArrowTexAnim[];
extern Vtx object_dogVtx_0003E0[];
extern Mtx gDogSelectionArrowDLMtx_000000;
extern Gfx gDogSelectionArrowDL[];
extern Gfx gDogSelectionArrowEmptyDL[];
extern u64 gDogSelectionArrowTex[];
extern s16 sDogBarkAnimFrameData[];
extern JointIndex sDogBarkAnimJointIndices[];
extern AnimationHeader gDogBarkAnim;
extern s16 sDogLyingDownAnimFrameData[];
extern JointIndex sDogLyingDownAnimJointIndices[];
extern AnimationHeader gDogLyingDownAnim;
extern s16 sDogLyingDownLoopAnimFrameData[];
extern JointIndex sDogLyingDownLoopAnimJointIndices[];
extern AnimationHeader gDogLyingDownLoopAnim;
extern s16 sDogJumpAnimFrameData[];
extern JointIndex sDogJumpAnimJointIndices[];
extern AnimationHeader gDogJumpAnim;
extern s16 sDogJumpAttackAnimFrameData[];
extern JointIndex sDogJumpAttackAnimJointIndices[];
extern AnimationHeader gDogJumpAttackAnim;
extern s16 sDogLongJumpAnimFrameData[];
extern JointIndex sDogLongJumpAnimJointIndices[];
extern AnimationHeader gDogLongJumpAnim;
extern s16 sDogRunAnimFrameData[];
extern JointIndex sDogRunAnimJointIndices[];
extern AnimationHeader gDogRunAnim;
extern s16 sDogSitAnimFrameData[];
extern JointIndex sDogSitAnimJointIndices[];
extern AnimationHeader gDogSitAnim;
extern s16 sDogWalkAnimFrameData[];
extern JointIndex sDogWalkAnimJointIndices[];
extern AnimationHeader gDogWalkAnim;
extern u64 gDogFur1Tex[];
extern u64 gDogFur2Tex[];
extern u64 gDogFur3Tex[];
extern u64 gDogFaceAndEyeTex[];
extern u64 gDogFaceAndNoseTex[];
extern u64 gDogFur4Tex[];
extern u64 gDogPawTex[];
extern u64 gDogFaceHairTex[];
extern Vtx object_dogVtx_005BE0[];
extern Gfx gDogHeadDL[];
extern Gfx gDogRightFaceHairDL[];
extern Gfx gDogLeftFaceHairDL[];
extern Gfx gDogBodyFrontDL[];
extern Gfx gDogFrontRightLegDL[];
extern Gfx gDogFrontLeftLegDL[];
extern Gfx gDogBodyBackDL[];
extern Gfx gDogBackRightLegDL[];
extern Gfx gDogBackLeftLegDL[];
extern Gfx gDogTailDL[];
extern StandardLimb gDogRootLimb;
extern StandardLimb gDogBodyBackLimb;
extern StandardLimb gDogBodyFrontLimb;
extern StandardLimb gDogHeadRootLimb;
extern StandardLimb gDogHeadLimb;
extern StandardLimb gDogRightFaceHairLimb;
extern StandardLimb gDogLeftFaceHairLimb;
extern StandardLimb gDogFrontRightLegLimb;
extern StandardLimb gDogFrontLeftLegLimb;
extern StandardLimb gDogBackRightLegLimb;
extern StandardLimb gDogBackLeftLegLimb;
extern StandardLimb gDogTailLimb;
extern void* gDogSkelLimbs[];
extern FlexSkeletonHeader gDogSkel;
#endif
