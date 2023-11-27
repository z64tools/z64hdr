#ifndef OBJECT_BOSS05_H
#define OBJECT_BOSS05_H 1

typedef enum BioDekuBabaLilyPadLimb {
    /* 0x00 */ BIO_DEKU_BABA_LILY_PAD_LIMB_NONE,
    /* 0x01 */ BIO_DEKU_BABA_LILY_PAD_LIMB_ROOTS,
    /* 0x02 */ BIO_DEKU_BABA_LILY_PAD_LIMB_UPPER_STEM,
    /* 0x03 */ BIO_DEKU_BABA_LILY_PAD_LIMB_MIDDLE_STEM,
    /* 0x04 */ BIO_DEKU_BABA_LILY_PAD_LIMB_LOWER_STEM,
    /* 0x05 */ BIO_DEKU_BABA_LILY_PAD_LIMB_LEFT_UPPER_ARM,
    /* 0x06 */ BIO_DEKU_BABA_LILY_PAD_LIMB_LEFT_LOWER_ARM,
    /* 0x07 */ BIO_DEKU_BABA_LILY_PAD_LIMB_RIGHT_UPPER_ARM,
    /* 0x08 */ BIO_DEKU_BABA_LILY_PAD_LIMB_RIGHT_LOWER_ARM,
    /* 0x09 */ BIO_DEKU_BABA_LILY_PAD_LIMB_LEAF,
    /* 0x0A */ BIO_DEKU_BABA_LILY_PAD_LIMB_MAX
} BioDekuBabaLilyPadLimb;

typedef enum BioDekuBabaHeadLimb {
    /* 0x00 */ BIO_DEKU_BABA_HEAD_LIMB_NONE,
    /* 0x01 */ BIO_DEKU_BABA_HEAD_LIMB_BODY,
    /* 0x02 */ BIO_DEKU_BABA_HEAD_LIMB_LOWER_JAW,
    /* 0x03 */ BIO_DEKU_BABA_HEAD_LIMB_UPPER_JAW,
    /* 0x04 */ BIO_DEKU_BABA_HEAD_LIMB_BACK_UPPER_LEG,
    /* 0x05 */ BIO_DEKU_BABA_HEAD_LIMB_BACK_LOWER_LEG,
    /* 0x06 */ BIO_DEKU_BABA_HEAD_LIMB_BACK_FOOT,
    /* 0x07 */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_UPPER_LEG,
    /* 0x08 */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_LOWER_LEG,
    /* 0x09 */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_FOOT,
    /* 0x0A */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_LOWER_EYESTALK,
    /* 0x0B */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_UPPER_EYESTALK,
    /* 0x0C */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_EYE,
    /* 0x0D */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_LOWER_EYESTALK,
    /* 0x0E */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_UPPER_EYESTALK,
    /* 0x0F */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_EYE,
    /* 0x10 */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_UPPER_LEG,
    /* 0x11 */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_LOWER_LEG,
    /* 0x12 */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_FOOT,
    /* 0x13 */ BIO_DEKU_BABA_HEAD_LIMB_LEAVES,
    /* 0x14 */ BIO_DEKU_BABA_HEAD_LIMB_MAX
} BioDekuBabaHeadLimb;

extern s16 sBioDekuBabaHeadAttackAnimFrameData[];
extern JointIndex sBioDekuBabaHeadAttackAnimJointIndices[];
extern AnimationHeader gBioDekuBabaHeadAttackAnim;
extern s16 sBioDekuBabaHeadChargeAnimFrameData[];
extern JointIndex sBioDekuBabaHeadChargeAnimJointIndices[];
extern AnimationHeader gBioDekuBabaHeadChargeAnim;
extern s16 sBioDekuBabaLilyPadIdleAnimFrameData[];
extern JointIndex sBioDekuBabaLilyPadIdleAnimJointIndices[];
extern AnimationHeader gBioDekuBabaLilyPadIdleAnim;
extern Vtx object_boss05Vtx_000AD0[];
extern Gfx gBioDekuBabaLilyPadRootsDL[];
extern Gfx gBioDekuBabaLilyPadLeafDL[];
extern Gfx gBioDekuBabaLilyPadUpperStemDL[];
extern Gfx gBioDekuBabaLilyPadMiddleStemDL[];
extern Gfx gBioDekuBabaLilyPadRightUpperArmDL[];
extern Gfx gBioDekuBabaLilyPadRightLowerArmDL[];
extern Gfx gBioDekuBabaLilyPadLeftUpperArmDL[];
extern Gfx gBioDekuBabaLilyPadLeftLowerArmDL[];
extern Gfx gBioDekuBabaLilyPadLowerStemDL[];
extern u64 gBioDekuBabaLilyPadStemTex[];
extern u64 gBioDekuBabaLilyPadLeafTex[];
extern u64 gBioDekuBabaLilyPadRootsTex[];
extern StandardLimb gBioDekuBabaLilyPadRootsLimb;
extern StandardLimb gBioDekuBabaLilyPadUpperStemLimb;
extern StandardLimb gBioDekuBabaLilyPadMiddleStemLimb;
extern StandardLimb gBioDekuBabaLilyPadLowerStemLimb;
extern StandardLimb gBioDekuBabaLilyPadLeftUpperArmLimb;
extern StandardLimb gBioDekuBabaLilyPadLeftLowerArmLimb;
extern StandardLimb gBioDekuBabaLilyPadRightUpperArmLimb;
extern StandardLimb gBioDekuBabaLilyPadRightLowerArmLimb;
extern StandardLimb gBioDekuBabaLilyPadLeafLimb;
extern void* gBioDekuBabaLilyPadSkelLimbs[];
extern FlexSkeletonHeader gBioDekuBabaLilyPadSkel;
extern s16 sBioDekuBabaHeadDamagedAnimFrameData[];
extern JointIndex sBioDekuBabaHeadDamagedAnimJointIndices[];
extern AnimationHeader gBioDekuBabaHeadDamagedAnim;
extern s16 sBioDekuBabaHeadSpotAnimFrameData[];
extern JointIndex sBioDekuBabaHeadSpotAnimJointIndices[];
extern AnimationHeader gBioDekuBabaHeadSpotAnim;
extern s16 sBioDekuBabaHeadRapidChompAnimFrameData[];
extern JointIndex sBioDekuBabaHeadRapidChompAnimJointIndices[];
extern AnimationHeader gBioDekuBabaHeadRapidChompAnim;
extern Vtx object_boss05Vtx_003510[];
extern Gfx gBioDekuBabaHeadBodyDL[];
extern Gfx gBioDekuBabaHeadLeavesDL[];
extern Gfx gBioDekuBabaHeadRightUpperLegDL[];
extern Gfx gBioDekuBabaHeadRightLowerLegDL[];
extern Gfx gBioDekuBabaHeadRightFootDL[];
extern Gfx gBioDekuBabaHeadRightLowerEyestalkDL[];
extern Gfx gBioDekuBabaHeadRightUpperEyestalkDL[];
extern Gfx gBioDekuBabaHeadRightEyeDL[];
extern Gfx gBioDekuBabaHeadLeftLowerEyestalkDL[];
extern Gfx gBioDekuBabaHeadLeftUpperEyestalkDL[];
extern Gfx gBioDekuBabaHeadLeftEyeDL[];
extern Gfx gBioDekuBabaHeadLeftUpperLegDL[];
extern Gfx gBioDekuBabaHeadLeftLowerLegDL[];
extern Gfx gBioDekuBabaHeadLeftFootDL[];
extern Gfx gBioDekuBabaHeadBackUpperLegDL[];
extern Gfx gBioDekuBabaHeadBackLowerLegDL[];
extern Gfx gBioDekuBabaHeadBackFootDL[];
extern Gfx gBioDekuBabaHeadUpperJawDL[];
extern Gfx gBioDekuBabaHeadLowerJawDL[];
extern u64 gBioDekuBabaHeadLeavesTex[];
extern u64 gBioDekuBabaHeadJawOuterTex[];
extern u64 gBioDekuBabaHeadLegAndEyestalkTex[];
extern u64 gBioDekuBabaHeadJawInnerTex[];
extern u64 gBioDekuBabaHeadEyeTex[];
extern F3DPrimColor object_boss05TexColorChangingPrimColors_006218[];
extern u16 object_boss05TexColorChangingFrameData_006228[];
extern AnimatedMatColorParams gBioDekuBabaHeadEyeFlashTexAnimColorParams_006230;
extern AnimatedMaterial gBioDekuBabaHeadEyeFlashTexAnim[];
extern StandardLimb gBioDekuBabaHeadBodyLimb;
extern StandardLimb gBioDekuBabaHeadLowerJawLimb;
extern StandardLimb gBioDekuBabaHeadUpperJawLimb;
extern StandardLimb gBioDekuBabaHeadBackUpperLegLimb;
extern StandardLimb gBioDekuBabaHeadBackLowerLegLimb;
extern StandardLimb gBioDekuBabaHeadBackFootLimb;
extern StandardLimb gBioDekuBabaHeadLeftUpperLegLimb;
extern StandardLimb gBioDekuBabaHeadLeftLowerLegLimb;
extern StandardLimb gBioDekuBabaHeadLeftFootLimb;
extern StandardLimb gBioDekuBabaHeadLeftLowerEyestalkLimb;
extern StandardLimb gBioDekuBabaHeadLeftUpperEyestalkLimb;
extern StandardLimb gBioDekuBabaHeadLeftEyeLimb;
extern StandardLimb gBioDekuBabaHeadRightLowerEyestalkLimb;
extern StandardLimb gBioDekuBabaHeadRightUpperEyestalkLimb;
extern StandardLimb gBioDekuBabaHeadRightEyeLimb;
extern StandardLimb gBioDekuBabaHeadRightUpperLegLimb;
extern StandardLimb gBioDekuBabaHeadRightLowerLegLimb;
extern StandardLimb gBioDekuBabaHeadRightFootLimb;
extern StandardLimb gBioDekuBabaHeadLeavesLimb;
extern void* gBioDekuBabaHeadSkelLimbs[];
extern FlexSkeletonHeader gBioDekuBabaHeadSkel;
extern s16 sBioDekuBabaHeadChompAnimFrameData[];
extern JointIndex sBioDekuBabaHeadChompAnimJointIndices[];
extern AnimationHeader gBioDekuBabaHeadChompAnim;
extern s16 sBioDekuBabaHeadTransformAnimFrameData[];
extern JointIndex sBioDekuBabaHeadTransformAnimJointIndices[];
extern AnimationHeader gBioDekuBabaHeadTransformAnim;
extern s16 sBioDekuBabaHeadIdleAnimFrameData[];
extern JointIndex sBioDekuBabaHeadIdleAnimJointIndices[];
extern AnimationHeader gBioDekuBabaHeadIdleAnim;
extern s16 sBioDekuBabaHeadWalkAnimFrameData[];
extern JointIndex sBioDekuBabaHeadWalkAnimJointIndices[];
extern AnimationHeader gBioDekuBabaHeadWalkAnim;
#endif
