#ifndef OBJECT_MA1_H
#define OBJECT_MA1_H 1

typedef enum RomaniLimb {
    /* 0x00 */ ROMANI_LIMB_NONE,
    /* 0x01 */ ROMANI_LIMB_ROOT,
    /* 0x02 */ ROMANI_LIMB_PELVIS,
    /* 0x03 */ ROMANI_LIMB_LEFT_THIGH,
    /* 0x04 */ ROMANI_LIMB_LEFT_SHIN,
    /* 0x05 */ ROMANI_LIMB_LEFT_FOOT,
    /* 0x06 */ ROMANI_LIMB_RIGHT_THIGH,
    /* 0x07 */ ROMANI_LIMB_RIGHT_SHIN,
    /* 0x08 */ ROMANI_LIMB_RIGHT_FOOT,
    /* 0x09 */ ROMANI_LIMB_DRESS_1,
    /* 0x0A */ ROMANI_LIMB_DRESS_2,
    /* 0x0B */ ROMANI_LIMB_DRESS_3,
    /* 0x0C */ ROMANI_LIMB_DRESS_4,
    /* 0x0D */ ROMANI_LIMB_TORSO,
    /* 0x0E */ ROMANI_LIMB_HEAD,
    /* 0x0F */ ROMANI_LIMB_UPPER_HAIR,
    /* 0x10 */ ROMANI_LIMB_LOWER_HAIR,
    /* 0x11 */ ROMANI_LIMB_LEFT_UPPER_ARM,
    /* 0x12 */ ROMANI_LIMB_LEFT_FOREARM,
    /* 0x13 */ ROMANI_LIMB_LEFT_HAND,
    /* 0x14 */ ROMANI_LIMB_RIGHT_UPPER_ARM,
    /* 0x15 */ ROMANI_LIMB_RIGHT_FOREARM,
    /* 0x16 */ ROMANI_LIMB_RIGHT_HAND,
    /* 0x17 */ ROMANI_LIMB_MAX
} RomaniLimb;

extern Vtx object_ma1Vtx_000000[];
extern Gfx gRomaniBowDL[];
extern u64 gRomaniBowTLUT[];
extern u64 gRomaniBowHandleTex[];
extern u64 gRomaniBowLimbTex[];
extern Vtx object_ma1Vtx_000920[];
extern Gfx gRomaniWoodenBoxDL[];
extern u64 gRomaniWoodenBoxTex[];
extern s16 sRomaniLookAroundAnimFrameData[];
extern JointIndex sRomaniLookAroundAnimJointIndices[];
extern AnimationHeader gRomaniLookAroundAnim;
extern Vtx object_ma1Vtx_002AA0[];
extern Gfx gRomaniSleepingDL[];
extern u64 gRomaniSleepingTLUT[];
extern u64 gRomaniSleepingDressTex[];
extern u64 gRomaniSleepingSkinTex[];
extern u64 gRomaniSleepingEarTex[];
extern u64 gRomaniSleepingHairTex[];
extern u64 gRomaniSleepingHandTex[];
extern u64 gRomaniSleepingDressPatternAndPillowTex[];
extern u64 gRomaniSleepingEyeTex[];
extern u64 gRomaniSleepingBlanketTex[];
extern u64 gRomaniSleepingMouthTex[];
extern s16 sRomaniRunAnimFrameData[];
extern JointIndex sRomaniRunAnimJointIndices[];
extern AnimationHeader gRomaniRunAnim;
extern s16 sRomaniSittingAnimFrameData[];
extern JointIndex sRomaniSittingAnimJointIndices[];
extern AnimationHeader gRomaniSittingAnim;
extern s16 sRomaniSittingHeadShakeAnimFrameData[];
extern JointIndex sRomaniSittingHeadShakeAnimJointIndices[];
extern AnimationHeader gRomaniSittingHeadShakeAnim;
extern s16 sRomaniSittingLookDownAnimFrameData[];
extern JointIndex sRomaniSittingLookDownAnimJointIndices[];
extern AnimationHeader gRomaniSittingLookDownAnim;
extern s16 sRomaniIdleAnimFrameData[];
extern JointIndex sRomaniIdleAnimJointIndices[];
extern AnimationHeader gRomaniIdleAnim;
extern Vtx object_ma1Vtx_009E70[];
extern Gfx gRomaniTorsoDL[];
extern Gfx gRomaniRightUpperArmDL[];
extern Gfx gRomaniRightForearmDL[];
extern Gfx gRomaniRightHandDL[];
extern Gfx gRomaniLeftUpperArmDL[];
extern Gfx gRomaniLeftForearmDL[];
extern Gfx gRomaniLeftHandDL[];
extern Gfx gRomaniHeadDL[];
extern Gfx gRomaniUpperHairDL[];
extern Gfx gRomaniLowerHairDL[];
extern Gfx gRomaniDress1DL[];
extern Gfx gRomaniDress2DL[];
extern Gfx gRomaniDress3DL[];
extern Gfx gRomaniDress4DL[];
extern Gfx gRomaniPelvisDL[];
extern Gfx gRomaniRightThighDL[];
extern Gfx gRomaniRightShinDL[];
extern Gfx gRomaniRightFootDL[];
extern Gfx gRomaniLeftThighDL[];
extern Gfx gRomaniLeftShinDL[];
extern Gfx gRomaniLeftFootDL[];
extern u64 gRomaniTLUT[];
extern u64 gRomaniDressTex[];
extern u64 gRomaniSkinTex[];
extern u64 gRomaniEarTex[];
extern u64 gRomaniHairTex[];
extern u64 gRomaniShawlTex[];
extern u64 gRomaniBroochTex[];
extern u64 gRomaniHandTex[];
extern u64 gRomaniBootTex[];
extern u64 gRomaniDressPatternTex[];
extern u64 gRomaniEyeOpenTex[];
extern u64 gRomaniEyeHalfTex[];
extern u64 gRomaniEyeClosedTex[];
extern u64 gRomaniEyeHappyTex[];
extern u64 gRomaniEyeSadTex[];
extern u64 gRomaniMouthHappyTex[];
extern u64 gRomaniMouthFrownTex[];
extern u64 gRomaniMouthHangingOpenTex[];
extern u64 gRomaniMouthSmileTex[];
extern StandardLimb gRomaniRootLimb;
extern StandardLimb gRomaniPelvisLimb;
extern StandardLimb gRomaniLeftThighLimb;
extern StandardLimb gRomaniLeftShinLimb;
extern StandardLimb gRomaniLeftFootLimb;
extern StandardLimb gRomaniRightThighLimb;
extern StandardLimb gRomaniRightShinLimb;
extern StandardLimb gRomaniRightFootLimb;
extern StandardLimb gRomaniDress1Limb;
extern StandardLimb gRomaniDress2Limb;
extern StandardLimb gRomaniDress3Limb;
extern StandardLimb gRomaniDress4Limb;
extern StandardLimb gRomaniTorsoLimb;
extern StandardLimb gRomaniHeadLimb;
extern StandardLimb gRomaniUpperHairLimb;
extern StandardLimb gRomaniLowerHairLimb;
extern StandardLimb gRomaniLeftUpperArmLimb;
extern StandardLimb gRomaniLeftForearmLimb;
extern StandardLimb gRomaniLeftHandLimb;
extern StandardLimb gRomaniRightUpperArmLimb;
extern StandardLimb gRomaniRightForearmLimb;
extern StandardLimb gRomaniRightHandLimb;
extern void* gRomaniSkelLimbs[];
extern FlexSkeletonHeader gRomaniSkel;
extern s16 sRomaniWalkAnimFrameData[];
extern JointIndex sRomaniWalkAnimJointIndices[];
extern AnimationHeader gRomaniWalkAnim;
extern s16 sRomaniShootBowAnimFrameData[];
extern JointIndex sRomaniShootBowAnimJointIndices[];
extern AnimationHeader gRomaniShootBowAnim;
extern s16 sRomaniAbductedAnimFrameData[];
extern JointIndex sRomaniAbductedAnimJointIndices[];
extern AnimationHeader gRomaniAbductedAnim;
extern s16 sRomaniTurnAroundAndFlickHairAnimFrameData[];
extern JointIndex sRomaniTurnAroundAndFlickHairAnimJointIndices[];
extern AnimationHeader gRomaniTurnAroundAndFlickHairAnim;
extern s16 sRomaniSingStartAnimFrameData[];
extern JointIndex sRomaniSingStartAnimJointIndices[];
extern AnimationHeader gRomaniSingStartAnim;
extern s16 sRomaniSingLoopAnimFrameData[];
extern JointIndex sRomaniSingLoopAnimJointIndices[];
extern AnimationHeader gRomaniSingLoopAnim;
#endif
