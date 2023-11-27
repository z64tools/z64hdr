#ifndef OBJECT_BIGSLIME_H
#define OBJECT_BIGSLIME_H 1

typedef enum GekkoLimb {
    /* 0x00 */ GEKKO_LIMB_NONE,
    /* 0x01 */ GEKKO_LIMB_ROOT,
    /* 0x02 */ GEKKO_LIMB_WAIST,
    /* 0x03 */ GEKKO_LIMB_LEFT_THIGH,
    /* 0x04 */ GEKKO_LIMB_LEFT_SHIN,
    /* 0x05 */ GEKKO_LIMB_LEFT_ANKLE,
    /* 0x06 */ GEKKO_LIMB_LEFT_FOOT,
    /* 0x07 */ GEKKO_LIMB_RIGHT_THIGH,
    /* 0x08 */ GEKKO_LIMB_RIGHT_SHIN,
    /* 0x09 */ GEKKO_LIMB_RIGHT_ANKLE,
    /* 0x0A */ GEKKO_LIMB_RIGHT_FOOT,
    /* 0x0B */ GEKKO_LIMB_TORSO,
    /* 0x0C */ GEKKO_LIMB_LEFT_UPPER_ARM,
    /* 0x0D */ GEKKO_LIMB_LEFT_FOREARM,
    /* 0x0E */ GEKKO_LIMB_LEFT_WRIST,
    /* 0x0F */ GEKKO_LIMB_LEFT_HAND,
    /* 0x10 */ GEKKO_LIMB_RIGHT_UPPER_ARM,
    /* 0x11 */ GEKKO_LIMB_RIGHT_FOREARM,
    /* 0x12 */ GEKKO_LIMB_RIGHT_WRIST,
    /* 0x13 */ GEKKO_LIMB_RIGHT_HAND,
    /* 0x14 */ GEKKO_LIMB_HEAD,
    /* 0x15 */ GEKKO_LIMB_JAW,
    /* 0x16 */ GEKKO_LIMB_LEFT_EYE,
    /* 0x17 */ GEKKO_LIMB_RIGHT_EYE,
    /* 0x18 */ GEKKO_LIMB_MAX
} GekkoLimb;

extern s16 sGekkoFullFistPumpAnimFrameData[];
extern JointIndex sGekkoFullFistPumpAnimJointIndices[];
extern AnimationHeader gGekkoFullFistPumpAnim;
extern s16 sGekkoSurpriseJumpAnimFrameData[];
extern JointIndex sGekkoSurpriseJumpAnimJointIndices[];
extern AnimationHeader gGekkoSurpriseJumpAnim;
extern s16 sGekkoCallAnimFrameData[];
extern JointIndex sGekkoCallAnimJointIndices[];
extern AnimationHeader gGekkoCallAnim;
extern s16 sGekkoCrawlAnimFrameData[];
extern JointIndex sGekkoCrawlAnimJointIndices[];
extern AnimationHeader gGekkoCrawlAnim;
extern s16 sGekkoFallInAirAnimFrameData[];
extern JointIndex sGekkoFallInAirAnimJointIndices[];
extern AnimationHeader gGekkoFallInAirAnim;
extern s16 sGekkoFloorIdleAnimFrameData[];
extern JointIndex sGekkoFloorIdleAnimJointIndices[];
extern AnimationHeader gGekkoFloorIdleAnim;
extern s16 sGekkoDamagedAnimFrameData[];
extern JointIndex sGekkoDamagedAnimJointIndices[];
extern AnimationHeader gGekkoDamagedAnim;
extern s16 sGekkoJumpUpAnimFrameData[];
extern JointIndex sGekkoJumpUpAnimJointIndices[];
extern AnimationHeader gGekkoJumpUpAnim;
extern s16 sGekkoRecoverAnimFrameData[];
extern JointIndex sGekkoRecoverAnimJointIndices[];
extern AnimationHeader gGekkoRecoverAnim;
extern s16 sGekkoJabPunchAnimFrameData[];
extern JointIndex sGekkoJabPunchAnimJointIndices[];
extern AnimationHeader gGekkoJabPunchAnim;
extern s16 sGekkoJumpForwardAnimFrameData[];
extern JointIndex sGekkoJumpForwardAnimJointIndices[];
extern AnimationHeader gGekkoJumpForwardAnim;
extern s16 sGekkoKickAnimFrameData[];
extern JointIndex sGekkoKickAnimJointIndices[];
extern AnimationHeader gGekkoKickAnim;
extern s16 sGekkoFallOnGroundAnimFrameData[];
extern JointIndex sGekkoFallOnGroundAnimJointIndices[];
extern AnimationHeader gGekkoFallOnGroundAnim;
extern s16 sGekkoStandingIdleAnimFrameData[];
extern JointIndex sGekkoStandingIdleAnimJointIndices[];
extern AnimationHeader gGekkoStandingIdleAnim;
extern s16 sGekkoJumpOnSnapperAnimFrameData[];
extern JointIndex sGekkoJumpOnSnapperAnimJointIndices[];
extern AnimationHeader gGekkoJumpOnSnapperAnim;
extern s16 sGekkoQuickFistPumpAnimFrameData[];
extern JointIndex sGekkoQuickFistPumpAnimJointIndices[];
extern AnimationHeader gGekkoQuickFistPumpAnim;
extern s16 sGekkoSqueezeAnimFrameData[];
extern JointIndex sGekkoSqueezeAnimJointIndices[];
extern AnimationHeader gGekkoSqueezeAnim;
extern s16 sGekkoLandOnSnapperAnimFrameData[];
extern JointIndex sGekkoLandOnSnapperAnimJointIndices[];
extern AnimationHeader gGekkoLandOnSnapperAnim;
extern s16 sGekkoWiggleAnimFrameData[];
extern JointIndex sGekkoWiggleAnimJointIndices[];
extern AnimationHeader gGekkoWiggleAnim;
extern s16 sGekkoKnockbackAnimFrameData[];
extern JointIndex sGekkoKnockbackAnimJointIndices[];
extern AnimationHeader gGekkoKnockbackAnim;
extern s16 sGekkoLookAroundAnimFrameData[];
extern JointIndex sGekkoLookAroundAnimJointIndices[];
extern AnimationHeader gGekkoLookAroundAnim;
extern s16 sGekkoNervousIdleAnimFrameData[];
extern JointIndex sGekkoNervousIdleAnimJointIndices[];
extern AnimationHeader gGekkoNervousIdleAnim;
extern s16 sGekkoHookPunchAnimFrameData[];
extern JointIndex sGekkoHookPunchAnimJointIndices[];
extern AnimationHeader gGekkoHookPunchAnim;
extern s16 sGekkoSwimForwardAnimFrameData[];
extern JointIndex sGekkoSwimForwardAnimJointIndices[];
extern AnimationHeader gGekkoSwimForwardAnim;
extern Vtx object_bigslimeVtx_0077A0[];
extern Gfx gGekkoRightEyeDL[];
extern Gfx gGekkoLeftEyeDL[];
extern Gfx gGekkoJawDL[];
extern Gfx gGekkoHeadDL[];
extern Gfx gGekkoRightHandDL[];
extern Gfx gGekkoRightWristDL[];
extern Gfx gGekkoRightForearmDL[];
extern Gfx gGekkoRightUpperArmDL[];
extern Gfx gGekkoLeftHandDL[];
extern Gfx gGekkoLeftWristDL[];
extern Gfx gGekkoLeftForearmDL[];
extern Gfx gGekkoLeftUpperArmDL[];
extern Gfx gGekkoTorsoDL[];
extern Gfx gGekkoRightFootDL[];
extern Gfx gGekkoRightAnkleDL[];
extern Gfx gGekkoRightShinDL[];
extern Gfx gGekkoRightThighDL[];
extern Gfx gGekkoLeftFootDL[];
extern Gfx gGekkoLeftAnkleDL[];
extern Gfx gGekkoLeftShinDL[];
extern Gfx gGekkoLeftThighDL[];
extern Gfx gGekkoWaistDL[];
extern u64 gGekkoArmLegTLUT[];
extern u64 gGekkoBodyTLUT[];
extern u64 gGekkoHeadTLUT[];
extern u64 gGekkoNostrilTex[];
extern u64 gGekkoEyeTex[];
extern u64 gGekkoSpots1Tex[];
extern u64 gGekkoBellyTex[];
extern u64 gGekkoSpots2Tex[];
extern u64 gGekkoToothTex[];
extern u64 gGekkoMouthTex[];
extern u64 gGekkoEyebrowTex[];
extern u64 gGekkoFinTex[];
extern u64 gGekkoSpots3Tex[];
extern u64 gGekkoSwirlTex[];
extern StandardLimb gGekkoRootLimb;
extern StandardLimb gGekkoWaistLimb;
extern StandardLimb gGekkoLeftThighLimb;
extern StandardLimb gGekkoLeftShinLimb;
extern StandardLimb gGekkoLeftAnkleLimb;
extern StandardLimb gGekkoLeftFootLimb;
extern StandardLimb gGekkoRightThighLimb;
extern StandardLimb gGekkoRightShinLimb;
extern StandardLimb gGekkoRightAnkleLimb;
extern StandardLimb gGekkoRightFootLimb;
extern StandardLimb gGekkoTorsoLimb;
extern StandardLimb gGekkoLeftUpperArmLimb;
extern StandardLimb gGekkoLeftForearmLimb;
extern StandardLimb gGekkoLeftWristLimb;
extern StandardLimb gGekkoLeftHandLimb;
extern StandardLimb gGekkoRightUpperArmLimb;
extern StandardLimb gGekkoRightForearmLimb;
extern StandardLimb gGekkoRightWristLimb;
extern StandardLimb gGekkoRightHandLimb;
extern StandardLimb gGekkoHeadLimb;
extern StandardLimb gGekkoJawLimb;
extern StandardLimb gGekkoLeftEyeLimb;
extern StandardLimb gGekkoRightEyeLimb;
extern void* gGekkoSkelLimbs[];
extern FlexSkeletonHeader gGekkoSkel;
extern s16 sGekkoWindupPunchAnimFrameData[];
extern JointIndex sGekkoWindupPunchAnimJointIndices[];
extern AnimationHeader gGekkoWindupPunchAnim;
extern s16 sGekkoSwimUpAnimFrameData[];
extern JointIndex sGekkoSwimUpAnimJointIndices[];
extern AnimationHeader gGekkoSwimUpAnim;
extern s16 sGekkoBoxingStanceAnimFrameData[];
extern JointIndex sGekkoBoxingStanceAnimJointIndices[];
extern AnimationHeader gGekkoBoxingStanceAnim;
extern Vtx object_bigslimeVtx_00F9A0[];
extern Gfx gBigslimeBubbleDL[];
extern Vtx object_bigslimeVtx_00FA70[];
extern Gfx gBigslimeShockwaveDL[];
extern u64 gBigslimeShockwave1Tex[];
extern u8 object_bigslime_zeroes_Blob_010028[];
extern u64 gBigslimeShockwave2Tex[];
extern u8 object_bigslime_zeroes_Blob_0104A8[];
extern Gfx gBigslimeNormalMaterialDL[];
extern Gfx gBigslimeModelDL[];
extern Gfx gBigslimeFrozenMaterialDL[];
extern AnimatedMatTexScrollParams gBigslimeFrozenTexAnimTexScrollParams_010C40[];
extern AnimatedMaterial gBigslimeFrozenTexAnim[];
extern Vtx object_bigslimeVtx_010C50[];
extern Gfx gMinislimeFrozenDL[];
extern AnimatedMatTexScrollParams gMinislimeFrozenTexAnimTexScrollParams_010EC0[];
extern AnimatedMaterial gMinislimeFrozenTexAnim[];
extern Vtx object_bigslimeVtx_010ED0[];
extern Gfx gBigslimeIceShardDL[];
extern Gfx gBigslimeIceShardVtxDL[];
extern AnimatedMatTexScrollParams gBigslimeIceShardTexAnimTexScrollParams_011000[];
extern AnimatedMaterial gBigslimeIceShardTexAnim[];
extern Vtx object_bigslimeVtx_011010[];
extern Gfx gBigslimeShadowDL[];
extern Vtx object_bigslimeVtx_0110E0[];
extern Gfx gMinislimeNormalDL[];
extern u64 gBigslimeBubbleTex[];
extern u64 gBigslimeShadowTex[];
extern u64 gBigslimeNormal1Tex[];
extern u64 gBigslimeNormal2Tex[];
extern u64 gBigslimeFrozen1Tex[];
extern u64 gBigslimeFrozen2Tex[];
#endif
