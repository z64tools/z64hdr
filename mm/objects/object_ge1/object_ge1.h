#ifndef OBJECT_GE1_H
#define OBJECT_GE1_H 1

typedef enum GerudoWhiteLimb {
    /* 0x00 */ GERUDO_WHITE_LIMB_NONE,
    /* 0x01 */ GERUDO_WHITE_LIMB_WAIST,
    /* 0x02 */ GERUDO_WHITE_LIMB_LEFT_THIGH,
    /* 0x03 */ GERUDO_WHITE_LIMB_LEFT_LOWER_LEG,
    /* 0x04 */ GERUDO_WHITE_LIMB_LEFT_FOOT,
    /* 0x05 */ GERUDO_WHITE_LIMB_RIGHT_THIGH,
    /* 0x06 */ GERUDO_WHITE_LIMB_RIGHT_LOWER_LEG,
    /* 0x07 */ GERUDO_WHITE_LIMB_RIGHT_FOOT,
    /* 0x08 */ GERUDO_WHITE_LIMB_TORSO,
    /* 0x09 */ GERUDO_WHITE_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ GERUDO_WHITE_LIMB_LEFT_FOREARM,
    /* 0x0B */ GERUDO_WHITE_LIMB_LEFT_HAND,
    /* 0x0C */ GERUDO_WHITE_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ GERUDO_WHITE_LIMB_RIGHT_FOREARM,
    /* 0x0E */ GERUDO_WHITE_LIMB_RIGHT_HAND,
    /* 0x0F */ GERUDO_WHITE_LIMB_HEAD,
    /* 0x10 */ GERUDO_WHITE_LIMB_MAX
} GerudoWhiteLimb;

extern s16 sGerudoWhiteStandingHeadBowedAnimFrameData[];
extern JointIndex sGerudoWhiteStandingHeadBowedAnimJointIndices[];
extern AnimationHeader gGerudoWhiteStandingHeadBowedAnim;
extern s16 sGerudoWhiteSaluteAnimFrameData[];
extern JointIndex sGerudoWhiteSaluteAnimJointIndices[];
extern AnimationHeader gGerudoWhiteSaluteAnim;
extern s16 sGerudoWhiteStiffeningAnimFrameData[];
extern JointIndex sGerudoWhiteStiffeningAnimJointIndices[];
extern AnimationHeader gGerudoWhiteStiffeningAnim;
extern s16 sGerudoWhiteStiffShiveringAnimFrameData[];
extern JointIndex sGerudoWhiteStiffShiveringAnimJointIndices[];
extern AnimationHeader gGerudoWhiteStiffShiveringAnim;
extern s16 sGerudoWhiteTrudgingOffAnimFrameData[];
extern JointIndex sGerudoWhiteTrudgingOffAnimJointIndices[];
extern AnimationHeader gGerudoWhiteTrudgingOffAnim;
extern s16 sGerudoWhiteGreatBayCutsceneAnimFrameData[];
extern JointIndex sGerudoWhiteGreatBayCutsceneAnimJointIndices[];
extern AnimationHeader gGerudoWhiteGreatBayCutsceneAnim;
extern s16 sGerudoWhiteExcitedClappingAnimFrameData[];
extern JointIndex sGerudoWhiteExcitedClappingAnimJointIndices[];
extern AnimationHeader gGerudoWhiteExcitedClappingAnim;
extern s16 sGerudoWhiteUnfoldingArmsAnimFrameData[];
extern JointIndex sGerudoWhiteUnfoldingArmsAnimJointIndices[];
extern AnimationHeader gGerudoWhiteUnfoldingArmsAnim;
extern s16 sGerudoWhiteArmsFoldedAnimFrameData[];
extern JointIndex sGerudoWhiteArmsFoldedAnimJointIndices[];
extern AnimationHeader gGerudoWhiteArmsFoldedAnim;
extern StandardLimb gGerudoWhiteWaistLimb;
extern StandardLimb gGerudoWhiteLeftThighLimb;
extern StandardLimb gGerudoWhiteLeftShinLimb;
extern StandardLimb gGerudoWhiteLeftFootLimb;
extern StandardLimb gGerudoWhiteRightThighLimb;
extern StandardLimb gGerudoWhiteRightShinLimb;
extern StandardLimb gGerudoWhiteRightFootLimb;
extern StandardLimb gGerudoWhiteTorsoLimb;
extern StandardLimb gGerudoWhiteLeftUpperArmLimb;
extern StandardLimb gGerudoWhiteLeftForearmLimb;
extern StandardLimb gGerudoWhiteLeftHandLimb;
extern StandardLimb gGerudoWhiteRightUpperArmLimb;
extern StandardLimb gGerudoWhiteRightForearmLimb;
extern StandardLimb gGerudoWhiteRightHandLimb;
extern StandardLimb gGerudoWhiteHeadLimb;
extern void* gGerudoWhiteSkelLimbs[];
extern FlexSkeletonHeader gGerudoWhiteSkel;
extern u64 gGerudoWhiteGeneralTLUT[];
extern u64 gGerudoWhiteSkinGradientTex[];
extern u64 gGerudoWhiteWhiteFabricLipsTex[];
extern u64 gGerudoWhiteEarTex[];
extern u64 gGerudoWhiteEyeOpenTex[];
extern u64 gGerudoWhiteEyeHalfTex[];
extern u64 gGerudoWhiteEyeClosedTex[];
extern u64 gGerudoWhiteFingersTex[];
extern u64 gGerudoWhiteArmletTex[];
extern u64 gGerudoWhiteJacketTex[];
extern u64 gGerudoWhiteTubeTopTex[];
extern u64 gGerudoWhiteNavelTex[];
extern u64 gGerudoWhiteCleavageTex[];
extern u64 gGerudoWhiteShoeUpperTex[];
extern u64 gGerudoWhiteShoeSoleTex[];
extern u64 gGerudoWhiteCrotchTex[];
extern u64 gGerudoWhiteHairTLUT[];
extern u64 gGerudoWhiteHairTex[];
extern Vtx object_ge1Vtx_005478[];
extern Gfx gGerudoWhiteWaistDL[];
extern Gfx gGerudoWhiteLeftThighDL[];
extern Gfx gGerudoWhiteLeftShinDL[];
extern Gfx gGerudoWhiteLeftFootDL[];
extern Gfx gGerudoWhiteRightThighDL[];
extern Gfx gGerudoWhiteRightShinDL[];
extern Gfx gGerudoWhiteRightFootDL[];
extern Gfx gGerudoWhiteTorsoDL[];
extern Gfx gGerudoWhiteLeftUpperArmDL[];
extern Gfx gGerudoWhiteLeftForearmDL[];
extern Gfx gGerudoWhiteLeftHandDL[];
extern Gfx gGerudoWhiteRightUpperArmDL[];
extern Gfx gGerudoWhiteRightForearmDL[];
extern Gfx gGerudoWhiteRightHandDL[];
extern Gfx gGerudoWhiteHeadDL[];
extern Vtx object_ge1Vtx_009EF8[];
extern Gfx gGerudoWhiteHairstyleBobDL[];
extern Gfx gGerudoWhiteHairstyleStraightFringeDL[];
extern Gfx gGerudoWhiteHairstyleSpikyDL[];
#endif
