#ifndef OBJECT_BIGPO_H
#define OBJECT_BIGPO_H 1

typedef enum BigPoeLimb {
    /* 0x00 */ BIG_POE_LIMB_NONE,
    /* 0x01 */ BIG_POE_LIMB_FACE,
    /* 0x02 */ BIG_POE_LIMB_LEFT_UPPER_ARM,
    /* 0x03 */ BIG_POE_LIMB_LEFT_FOREARM,
    /* 0x04 */ BIG_POE_LIMB_RIGHT_UPPER_ARM,
    /* 0x05 */ BIG_POE_LIMB_RIGHT_FOREARM,
    /* 0x06 */ BIG_POE_LIMB_RIGHT_HAND,
    /* 0x07 */ BIG_POE_LIMB_LANTERN,
    /* 0x08 */ BIG_POE_LIMB_HAT_AND_CLOAK,
    /* 0x09 */ BIG_POE_LIMB_LOWER_ROBE,
    /* 0x0A */ BIG_POE_LIMB_MAX
} BigPoeLimb;

extern s16 sBigPoeSwingLampAttackAnimFrameData[];
extern JointIndex sBigPoeSwingLampAttackAnimJointIndices[];
extern AnimationHeader gBigPoeSwingLampAttackAnim;
extern s16 sBigPoeShockAnimFrameData[];
extern JointIndex sBigPoeShockAnimJointIndices[];
extern AnimationHeader gBigPoeShockAnim;
extern s16 sBigPoeBackpedalAnimFrameData[];
extern JointIndex sBigPoeBackpedalAnimJointIndices[];
extern AnimationHeader gBigPoeBackpedalAnim;
extern s16 sBigPoeFloatAnimFrameData[];
extern JointIndex sBigPoeFloatAnimJointIndices[];
extern AnimationHeader gBigPoeFloatAnim;
extern s16 sBigPoeAwakenSpawnAnimFrameData[];
extern JointIndex sBigPoeAwakenSpawnAnimJointIndices[];
extern AnimationHeader gBigPoeAwakenSpawnAnim;
extern s16 sBigPoeAwakenStretchAnimFrameData[];
extern JointIndex sBigPoeAwakenStretchAnimJointIndices[];
extern AnimationHeader gBigPoeAwakenStretchAnim;
extern u64 gBigPoeSoulFaceTex[];
extern Vtx object_bigpoVtx_001B70[];
extern Gfx gBigPoeSoulDL[];
extern u64 gBigPoeNecklaceSkullHalfTex[];
extern u64 gBigPoeLanternGlassTex[];
extern u64 gBigPoeTornRobeTex[];
extern u64 gBigPoeArmSectionTex[];
extern u64 gBigPoeHoodEdgeTex[];
extern u64 gBigPoeNecklaceBeadsTex[];
extern u64 gBigPoeShawlTex[];
extern u64 gBigPoeGlowingEyeTex[];
extern Vtx gFieldPoeLanternVtx[];
extern Vtx gFieldPoeBodyAndFaceVtx[];
extern Vtx gFieldPoeArmVtx[];
extern Vtx gFieldPoeCloakVtx[];
extern Vtx gFieldPoeFaceHoodRobeVtx[];
extern Gfx gBigPoeLanternFallingDL[];
extern Gfx gBigPoeLanternMainDL[];
extern Gfx gBigPoeLanternPurpleTopDL[];
extern Gfx gBigPoeHandDL[];
extern Gfx gBigPoeSmallArmDL[];
extern Gfx gBigPoeBigArmDL[];
extern Gfx gBigPoeArmAndGrowthDL[];
extern Gfx gBigPoeMediumArmDL[];
extern Gfx gBigPoeNecklaceHoodShawlDL[];
extern Gfx gBigPoeFaceDL[];
extern Gfx gBigPoeLowerRobeDL[];
extern u64 gBigPoeCrispyPiecesTex[];
extern u64 gBigPoeCrispyEyesTex[];
extern Vtx object_bigpoVtx_004F18[];
extern Gfx gBigPoeCrispyBodyDL[];
extern StandardLimb gBigPoeFaceLimb;
extern StandardLimb gBigPoeLeftUpperArmLimb;
extern StandardLimb gBigPoeLeftForearmLimb;
extern StandardLimb gBigPoeRightUpperArmLimb;
extern StandardLimb gBigPoeRightForearmLimb;
extern StandardLimb gBigPoeRightHandLimb;
extern StandardLimb gBigPoeLanternLimb;
extern StandardLimb gBigPoeHatAndCloakLimb;
extern StandardLimb gBigPoeLowerRobeLimb;
extern void* gBigPoeSkelLimbs[];
extern SkeletonHeader gBigPoeSkel;
#endif
