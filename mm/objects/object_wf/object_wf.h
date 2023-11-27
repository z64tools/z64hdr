#ifndef OBJECT_WF_H
#define OBJECT_WF_H 1

typedef enum WolfosWhiteLimb {
    /* 0x00 */ WOLFOS_WHITE_LIMB_NONE,
    /* 0x01 */ WOLFOS_WHITE_LIMB_ROOT,
    /* 0x02 */ WOLFOS_WHITE_LIMB_BACK_LEFT_THIGH,
    /* 0x03 */ WOLFOS_WHITE_LIMB_BACK_LEFT_SHIN,
    /* 0x04 */ WOLFOS_WHITE_LIMB_BACK_LEFT_PASTERN,
    /* 0x05 */ WOLFOS_WHITE_LIMB_BACK_LEFT_PAW,
    /* 0x06 */ WOLFOS_WHITE_LIMB_TAIL,
    /* 0x07 */ WOLFOS_WHITE_LIMB_ABDOMEN,
    /* 0x08 */ WOLFOS_WHITE_LIMB_BACK_RIGHT_THIGH,
    /* 0x09 */ WOLFOS_WHITE_LIMB_BACK_RIGHT_SHIN,
    /* 0x0A */ WOLFOS_WHITE_LIMB_BACK_RIGHT_PASTERN,
    /* 0x0B */ WOLFOS_WHITE_LIMB_BACK_RIGHT_PAW,
    /* 0x0C */ WOLFOS_WHITE_LIMB_THORAX,
    /* 0x0D */ WOLFOS_WHITE_LIMB_FRONT_RIGHT_UPPER_LEG,
    /* 0x0E */ WOLFOS_WHITE_LIMB_FRONT_RIGHT_LOWER_LEG,
    /* 0x0F */ WOLFOS_WHITE_LIMB_FRONT_RIGHT_CLAW,
    /* 0x10 */ WOLFOS_WHITE_LIMB_HEAD_ROOT,
    /* 0x11 */ WOLFOS_WHITE_LIMB_HEAD,
    /* 0x12 */ WOLFOS_WHITE_LIMB_EYES,
    /* 0x13 */ WOLFOS_WHITE_LIMB_FRONT_LEFT_UPPER_LEG,
    /* 0x14 */ WOLFOS_WHITE_LIMB_FRONT_LEFT_LOWER_LEG,
    /* 0x15 */ WOLFOS_WHITE_LIMB_FRONT_LEFT_CLAW,
    /* 0x16 */ WOLFOS_WHITE_LIMB_MAX
} WolfosWhiteLimb;

typedef enum WolfosNormalLimb {
    /* 0x00 */ WOLFOS_NORMAL_LIMB_NONE,
    /* 0x01 */ WOLFOS_NORMAL_LIMB_ROOT,
    /* 0x02 */ WOLFOS_NORMAL_LIMB_BACK_LEFT_THIGH,
    /* 0x03 */ WOLFOS_NORMAL_LIMB_BACK_LEFT_SHIN,
    /* 0x04 */ WOLFOS_NORMAL_LIMB_BACK_LEFT_PASTERN,
    /* 0x05 */ WOLFOS_NORMAL_LIMB_BACK_LEFT_PAW,
    /* 0x06 */ WOLFOS_NORMAL_LIMB_TAIL,
    /* 0x07 */ WOLFOS_NORMAL_LIMB_ABDOMEN,
    /* 0x08 */ WOLFOS_NORMAL_LIMB_BACK_RIGHT_THIGH,
    /* 0x09 */ WOLFOS_NORMAL_LIMB_BACK_RIGHT_SHIN,
    /* 0x0A */ WOLFOS_NORMAL_LIMB_BACK_RIGHT_PASTERN,
    /* 0x0B */ WOLFOS_NORMAL_LIMB_BACK_RIGHT_PAW,
    /* 0x0C */ WOLFOS_NORMAL_LIMB_THORAX,
    /* 0x0D */ WOLFOS_NORMAL_LIMB_FRONT_RIGHT_UPPER_LEG,
    /* 0x0E */ WOLFOS_NORMAL_LIMB_FRONT_RIGHT_LOWER_LEG,
    /* 0x0F */ WOLFOS_NORMAL_LIMB_FRONT_RIGHT_CLAW,
    /* 0x10 */ WOLFOS_NORMAL_LIMB_HEAD_ROOT,
    /* 0x11 */ WOLFOS_NORMAL_LIMB_HEAD,
    /* 0x12 */ WOLFOS_NORMAL_LIMB_EYES,
    /* 0x13 */ WOLFOS_NORMAL_LIMB_FRONT_LEFT_UPPER_LEG,
    /* 0x14 */ WOLFOS_NORMAL_LIMB_FRONT_LEFT_LOWER_LEG,
    /* 0x15 */ WOLFOS_NORMAL_LIMB_FRONT_LEFT_CLAW,
    /* 0x16 */ WOLFOS_NORMAL_LIMB_MAX
} WolfosNormalLimb;

extern u64 gWolfosWhiteFurTex[];
extern u64 gWolfosWhiteToothClawTex[];
extern u64 gWolfosWhiteMouthTex[];
extern u64 gWolfosWhiteTongueTex[];
extern u64 gWolfosWhiteNostrilTex[];
extern u64 gWolfosWhiteEyeOpenTex[];
extern Vtx object_wfVtx_000500[];
extern Gfx gWolfosWhiteAbdomenDL[];
extern Gfx gWolfosWhiteBackRightThighDL[];
extern Gfx gWolfosWhiteBackRightShinDL[];
extern Gfx gWolfosWhiteBackRightPasternDL[];
extern Gfx gWolfosWhiteBackRightPawDL[];
extern Gfx gWolfosWhiteBackLeftThighDL[];
extern Gfx gWolfosWhiteBackLeftShinDL[];
extern Gfx gWolfosWhiteBackLeftPasternDL[];
extern Gfx gWolfosWhiteBackLeftPawDL[];
extern Gfx gWolfosWhiteThoraxDL[];
extern Gfx gWolfosWhiteFrontLeftUpperLegDL[];
extern Gfx gWolfosWhiteFrontLeftLowerLegDL[];
extern Gfx gWolfosWhiteFrontRightUpperLegDL[];
extern Gfx gWolfosWhiteFrontRightLowerLegDL[];
extern u64 gWolfosWhiteEyeHalfTex[];
extern u64 gWolfosWhiteEyeNarrowTex[];
extern Vtx object_wfVtx_002BD8[];
extern Gfx gWolfosWhiteTailDL[];
extern Gfx gWolfosWhiteFrontLeftClawDL[];
extern Gfx gWolfosWhiteFrontRightClawDL[];
extern Gfx gWolfosWhiteHeadDL[];
extern Gfx gWolfosWhiteEyesDL[];
extern StandardLimb gWolfosWhiteRootLimb;
extern StandardLimb gWolfosWhiteBackLeftThighLimb;
extern StandardLimb gWolfosWhiteBackLeftShinLimb;
extern StandardLimb gWolfosWhiteBackLeftPasternLimb;
extern StandardLimb gWolfosWhiteBackLeftPawLimb;
extern StandardLimb gWolfosWhiteTailLimb;
extern StandardLimb gWolfosWhiteAbdomenLimb;
extern StandardLimb gWolfosWhiteBackRightThighLimb;
extern StandardLimb gWolfosWhiteBackRightShinLimb;
extern StandardLimb gWolfosWhiteBackRightPasternLimb;
extern StandardLimb gWolfosWhiteBackRightPawLimb;
extern StandardLimb gWolfosWhiteThoraxLimb;
extern StandardLimb gWolfosWhiteFrontRightUpperLegLimb;
extern StandardLimb gWolfosWhiteFrontRightLowerLegLimb;
extern StandardLimb gWolfosWhiteFrontRightClawLimb;
extern StandardLimb gWolfosWhiteHeadRootLimb;
extern StandardLimb gWolfosWhiteHeadLimb;
extern StandardLimb gWolfosWhiteEyesLimb;
extern StandardLimb gWolfosWhiteFrontLeftUpperLegLimb;
extern StandardLimb gWolfosWhiteFrontLeftLowerLegLimb;
extern StandardLimb gWolfosWhiteFrontLeftClawLimb;
extern void* gWolfosWhiteSkelLimbs[];
extern FlexSkeletonHeader gWolfosWhiteSkel;
extern s16 sWolfosSlashAnimFrameData[];
extern JointIndex sWolfosSlashAnimJointIndices[];
extern AnimationHeader gWolfosSlashAnim;
extern s16 sWolfosBackflipAnimFrameData[];
extern JointIndex sWolfosBackflipAnimJointIndices[];
extern AnimationHeader gWolfosBackflipAnim;
extern s16 sWolfosBlockAnimFrameData[];
extern JointIndex sWolfosBlockAnimJointIndices[];
extern AnimationHeader gWolfosBlockAnim;
extern s16 sWolfosRearUpFallOverAnimFrameData[];
extern JointIndex sWolfosRearUpFallOverAnimJointIndices[];
extern AnimationHeader gWolfosRearUpFallOverAnim;
extern s16 sWolfosRunAnimFrameData[];
extern JointIndex sWolfosRunAnimJointIndices[];
extern AnimationHeader gWolfosRunAnim;
extern Vtx object_wfVtx_005710[];
extern Gfx gWolfosNormalAbdomenDL[];
extern Gfx gWolfosNormalBackRightThighDL[];
extern Gfx gWolfosNormalBackRightShinDL[];
extern Gfx gWolfosNormalBackRightPasternDL[];
extern Gfx gWolfosNormalBackRightPawDL[];
extern Gfx gWolfosNormalBackLeftThighDL[];
extern Gfx gWolfosNormalBackLeftShinDL[];
extern Gfx gWolfosNormalBackLeftPasternDL[];
extern Gfx gWolfosNormalBackLeftPawDL[];
extern Gfx gWolfosNormalThoraxDL[];
extern Gfx gWolfosNormalFrontLeftUpperLegDL[];
extern Gfx gWolfosNormalFrontLeftLowerLegDL[];
extern Gfx gWolfosNormalFrontRightUpperLegDL[];
extern Gfx gWolfosNormalFrontRightLowerLegDL[];
extern u64 gWolfosNormalEyeOpenTex[];
extern u64 gWolfosNormalFurTex[];
extern u64 gWolfosNormalMouthTex[];
extern u64 gWolfosNormalTongueTex[];
extern u64 gWolfosNormalToothClawTex[];
extern u64 gWolfosNormalNostrilTex[];
extern u64 gWolfosNormalEyeHalfTex[];
extern u64 gWolfosNormalEyeNarrowTex[];
extern Vtx object_wfVtx_0086A8[];
extern Gfx gWolfosNormalTailDL[];
extern Gfx gWolfosNormalFrontLeftClawDL[];
extern Gfx gWolfosNormalFrontRightClawDL[];
extern Gfx gWolfosNormalHeadDL[];
extern Gfx gWolfosNormalEyesDL[];
extern StandardLimb gWolfosNormalRootLimb;
extern StandardLimb gWolfosNormalBackLeftThighLimb;
extern StandardLimb gWolfosNormalBackLeftShinLimb;
extern StandardLimb gWolfosNormalBackLeftPasternLimb;
extern StandardLimb gWolfosNormalBackLeftPawLimb;
extern StandardLimb gWolfosNormalTailLimb;
extern StandardLimb gWolfosNormalAbdomenLimb;
extern StandardLimb gWolfosNormalBackRightThighLimb;
extern StandardLimb gWolfosNormalBackRightShinLimb;
extern StandardLimb gWolfosNormalBackRightPasternLimb;
extern StandardLimb gWolfosNormalBackRightPawLimb;
extern StandardLimb gWolfosNormalThoraxLimb;
extern StandardLimb gWolfosNormalFrontRightUpperLegLimb;
extern StandardLimb gWolfosNormalFrontRightLowerLegLimb;
extern StandardLimb gWolfosNormalFrontRightClawLimb;
extern StandardLimb gWolfosNormalHeadRootLimb;
extern StandardLimb gWolfosNormalHeadLimb;
extern StandardLimb gWolfosNormalEyesLimb;
extern StandardLimb gWolfosNormalFrontLeftUpperLegLimb;
extern StandardLimb gWolfosNormalFrontLeftLowerLegLimb;
extern StandardLimb gWolfosNormalFrontLeftClawLimb;
extern void* gWolfosNormalSkelLimbs[];
extern FlexSkeletonHeader gWolfosNormalSkel;
extern s16 sWolfosSidestepAnimFrameData[];
extern JointIndex sWolfosSidestepAnimJointIndices[];
extern AnimationHeader gWolfosSidestepAnim;
extern s16 sWolfosDamagedAnimFrameData[];
extern JointIndex sWolfosDamagedAnimJointIndices[];
extern AnimationHeader gWolfosDamagedAnim;
extern s16 sWolfosWaitAnimFrameData[];
extern JointIndex sWolfosWaitAnimJointIndices[];
extern AnimationHeader gWolfosWaitAnim;
#endif
