#ifndef OBJECT_FSN_H
#define OBJECT_FSN_H 1

typedef enum FsnLimb {
    /* 0x00 */ FSN_LIMB_NONE,
    /* 0x01 */ FSN_LIMB_PELVIS,
    /* 0x02 */ FSN_LIMB_LEFT_THIGH,
    /* 0x03 */ FSN_LIMB_LEFT_SHIN,
    /* 0x04 */ FSN_LIMB_LEFT_FOOT,
    /* 0x05 */ FSN_LIMB_RIGHT_THIGH,
    /* 0x06 */ FSN_LIMB_RIGHT_SHIN,
    /* 0x07 */ FSN_LIMB_RIGHT_FOOT,
    /* 0x08 */ FSN_LIMB_TORSO,
    /* 0x09 */ FSN_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ FSN_LIMB_LEFT_FOREARM,
    /* 0x0B */ FSN_LIMB_LEFT_HAND,
    /* 0x0C */ FSN_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ FSN_LIMB_RIGHT_FOREARM,
    /* 0x0E */ FSN_LIMB_RIGHT_HAND,
    /* 0x0F */ FSN_LIMB_HEAD_ROOT,
    /* 0x10 */ FSN_LIMB_HEAD,
    /* 0x11 */ FSN_LIMB_TOUPEE,
    /* 0x12 */ FSN_LIMB_MAX
} FsnLimb;

extern Vtx object_fsnVtx_000000[];
extern Gfx gFsnTorsoDL[];
extern Gfx gFsnToupeeDL[];
extern Gfx gFsnHeadDL[];
extern Gfx gFsnRightUpperArmDL[];
extern Gfx gFsnRightForearmDL[];
extern Gfx gFsnRightHandDL[];
extern Gfx gFsnLeftUpperArmDL[];
extern Gfx gFsnLeftForearmDL[];
extern Gfx gFsnLeftHandDL[];
extern Gfx gFsnPelvisDL[];
extern Gfx gFsnRightThighDL[];
extern Gfx gFsnRightShinDL[];
extern Gfx gFsnRightFootDL[];
extern Gfx gFsnLeftThighDL[];
extern Gfx gFsnLeftShinDL[];
extern Gfx gFsnLeftFootDL[];
extern u64 gFsnHandTLUT[];
extern u64 gFsnSkinTLUT[];
extern u64 gFsnShirtTLUT[];
extern u64 gFsnHairTLUT[];
extern u64 gFsnEyeTLUT[];
extern u64 gFsnEarTLUT[];
extern u64 gFsnHairSkinTLUT[];
extern u64 gFsnMouthTLUT[];
extern u64 gFsnNostrilTLUT[];
extern u64 gFsnHandTex[];
extern u64 gFsnSkinTex[];
extern u64 gFsnShirtTex[];
extern u64 gFsnPantsTex[];
extern u64 gFsnBootsTex[];
extern u64 gFsnHairTex[];
extern u64 gFsnEyeOpenTex[];
extern u64 gFsnEarTex[];
extern u64 gFsnHairSkinTex[];
extern u64 gFsnMouthTex[];
extern u64 gFsnNostrilTex[];
extern u64 gFsnVestTex[];
extern u64 gFsnEyeHalfTex[];
extern u64 gFsnEyeClosedTex[];
extern u64 gFsnUnusedEyeOpenTex[];
extern u64 gFsnUnusedEyeHalfTex[];
extern u64 gFsnUnusedEyeClosedTex[];
extern TexturePtr object_fsnTexCycleTexPtrs_00B640[];
extern u8 object_fsnTexCycleTexIndices_00B64C[];
extern AnimatedMatTexCycleParams gFsnEyeTexAnimTexCycleParams_00B654;
extern AnimatedMaterial gFsnEyeTexAnim[];
extern s16 sFsnSlamCounterStartAnimFrameData[];
extern JointIndex sFsnSlamCounterStartAnimJointIndices[];
extern AnimationHeader gFsnSlamCounterStartAnim;
extern s16 sFsnSlamCounterLoopAnimFrameData[];
extern JointIndex sFsnSlamCounterLoopAnimJointIndices[];
extern AnimationHeader gFsnSlamCounterLoopAnim;
extern s16 sFsnTurnAroundAnimFrameData[];
extern JointIndex sFsnTurnAroundAnimJointIndices[];
extern AnimationHeader gFsnTurnAroundAnim;
extern s16 sFsnHandOnFaceStartAnimFrameData[];
extern JointIndex sFsnHandOnFaceStartAnimJointIndices[];
extern AnimationHeader gFsnHandOnFaceStartAnim;
extern s16 sFsnHandOnFaceLoopAnimFrameData[];
extern JointIndex sFsnHandOnFaceLoopAnimJointIndices[];
extern AnimationHeader gFsnHandOnFaceLoopAnim;
extern s16 sFsnMakeOfferAnimFrameData[];
extern JointIndex sFsnMakeOfferAnimJointIndices[];
extern AnimationHeader gFsnMakeOfferAnim;
extern s16 sFsnHandsOnCounterStartAnimFrameData[];
extern JointIndex sFsnHandsOnCounterStartAnimJointIndices[];
extern AnimationHeader gFsnHandsOnCounterStartAnim;
extern s16 sFsnHandsOnCounterLoopAnimFrameData[];
extern JointIndex sFsnHandsOnCounterLoopAnimJointIndices[];
extern AnimationHeader gFsnHandsOnCounterLoopAnim;
extern Vtx object_fsnVtx_00F020[];
extern Gfx gFsnGlassesFrameDL[];
extern Gfx gFsnGlassesLensesDL[];
extern u64 gFsnGlassesLensesTex[];
extern u64 gFsnGlassesFrameTex[];
extern s16 sFsnIdleAnimFrameData[];
extern JointIndex sFsnIdleAnimJointIndices[];
extern AnimationHeader gFsnIdleAnim;
extern s16 sFsnScratchBackAnimFrameData[];
extern JointIndex sFsnScratchBackAnimJointIndices[];
extern AnimationHeader gFsnScratchBackAnim;
extern StandardLimb gFsnPelvisLimb;
extern StandardLimb gFsnLeftThighLimb;
extern StandardLimb gFsnLeftShinLimb;
extern StandardLimb gFsnLeftFootLimb;
extern StandardLimb gFsnRightThighLimb;
extern StandardLimb gFsnRightShinLimb;
extern StandardLimb gFsnRightFootLimb;
extern StandardLimb gFsnTorsoLimb;
extern StandardLimb gFsnLeftUpperArmLimb;
extern StandardLimb gFsnLeftForearmLimb;
extern StandardLimb gFsnLeftHandLimb;
extern StandardLimb gFsnRightUpperArmLimb;
extern StandardLimb gFsnRightForearmLimb;
extern StandardLimb gFsnRightHandLimb;
extern StandardLimb gFsnHeadRootLimb;
extern StandardLimb gFsnHeadLimb;
extern StandardLimb gFsnToupeeLimb;
extern void* gFsnLimbs[];
extern FlexSkeletonHeader gFsnSkel;
extern s16 sFsnLeanForwardStartAnimFrameData[];
extern JointIndex sFsnLeanForwardStartAnimJointIndices[];
extern AnimationHeader gFsnLeanForwardStartAnim;
extern s16 sFsnLeanForwardLoopAnimFrameData[];
extern JointIndex sFsnLeanForwardLoopAnimJointIndices[];
extern AnimationHeader gFsnLeanForwardLoopAnim;
#endif
