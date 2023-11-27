#ifndef OBJECT_JSO_H
#define OBJECT_JSO_H 1

typedef enum GaroMasterLimb {
    /* 0x00 */ GARO_MASTER_LIMB_NONE,
    /* 0x01 */ GARO_MASTER_LIMB_ROOT,
    /* 0x02 */ GARO_MASTER_LIMB_TORSO,
    /* 0x03 */ GARO_MASTER_LIMB_LEFT_ARM,
    /* 0x04 */ GARO_MASTER_LIMB_LEFT_SWORD,
    /* 0x05 */ GARO_MASTER_LIMB_RIGHT_ARM,
    /* 0x06 */ GARO_MASTER_LIMB_RIGHT_SWORD,
    /* 0x07 */ GARO_MASTER_LIMB_ROBE_TOP,
    /* 0x08 */ GARO_MASTER_LIMB_ROBE_BACK,
    /* 0x09 */ GARO_MASTER_LIMB_ROBE_LEFT,
    /* 0x0A */ GARO_MASTER_LIMB_ROBE_RIGHT,
    /* 0x0B */ GARO_MASTER_LIMB_ROBE_FRONT,
    /* 0x0C */ GARO_MASTER_LIMB_HEAD,
    /* 0x0D */ GARO_MASTER_LIMB_LOWER_BODY_ROOT,
    /* 0x0E */ GARO_MASTER_LIMB_RIGHT_THIGH,
    /* 0x0F */ GARO_MASTER_LIMB_RIGHT_SHIN,
    /* 0x10 */ GARO_MASTER_LIMB_RIGHT_FOOT,
    /* 0x11 */ GARO_MASTER_LIMB_LEFT_THIGH,
    /* 0x12 */ GARO_MASTER_LIMB_LEFT_SHIN,
    /* 0x13 */ GARO_MASTER_LIMB_LEFT_FOOT,
    /* 0x14 */ GARO_MASTER_LIMB_MAX
} GaroMasterLimb;

typedef enum GaroLimb {
    /* 0x00 */ GARO_LIMB_NONE,
    /* 0x01 */ GARO_LIMB_ROOT,
    /* 0x02 */ GARO_LIMB_TORSO,
    /* 0x03 */ GARO_LIMB_LEFT_ARM,
    /* 0x04 */ GARO_LIMB_LEFT_SWORD,
    /* 0x05 */ GARO_LIMB_RIGHT_ARM,
    /* 0x06 */ GARO_LIMB_RIGHT_SWORD,
    /* 0x07 */ GARO_LIMB_ROBE_TOP,
    /* 0x08 */ GARO_LIMB_ROBE_BACK,
    /* 0x09 */ GARO_LIMB_ROBE_LEFT,
    /* 0x0A */ GARO_LIMB_ROBE_RIGHT,
    /* 0x0B */ GARO_LIMB_ROBE_FRONT,
    /* 0x0C */ GARO_LIMB_HEAD,
    /* 0x0D */ GARO_LIMB_LOWER_BODY_ROOT,
    /* 0x0E */ GARO_LIMB_RIGHT_THIGH,
    /* 0x0F */ GARO_LIMB_RIGHT_SHIN,
    /* 0x10 */ GARO_LIMB_RIGHT_FOOT,
    /* 0x11 */ GARO_LIMB_LEFT_THIGH,
    /* 0x12 */ GARO_LIMB_LEFT_SHIN,
    /* 0x13 */ GARO_LIMB_LEFT_FOOT,
    /* 0x14 */ GARO_LIMB_MAX
} GaroLimb;

extern AnimatedMaterial gGaroEmpty1TexAnim[];
extern AnimatedMaterial gGaroEmpty2TexAnim[];
extern Vtx object_jsoVtx_000020[];
extern Gfx gGaroMasterLeftThighDL[];
extern Gfx gGaroMasterLeftShinDL[];
extern Gfx gGaroMasterLeftFootDL[];
extern Gfx gGaroMasterRightThighDL[];
extern Gfx gGaroMasterRightShinDL[];
extern Gfx gGaroMasterRightFootDL[];
extern Gfx gGaroMasterTorsoDL[];
extern Gfx gGaroMasterHeadDL[];
extern Gfx gGaroMasterRobeTopDL[];
extern Gfx gGaroMasterRobeFrontDL[];
extern Gfx gGaroMasterRobeRightDL[];
extern Gfx gGaroMasterRobeLeftDL[];
extern Gfx gGaroMasterRobeBackDL[];
extern Gfx gGaroMasterRightArmDL[];
extern Gfx gGaroMasterRightSwordDL[];
extern Gfx gGaroMasterLeftArmDL[];
extern Gfx gGaroMasterLeftSwordDL[];
extern u64 gGaroMasterUnusedLegWrappingTex[];
extern u64 gGaroMasterRobeFrontTex[];
extern u64 gGaroMasterShinTex[];
extern u64 gGaroMasterDuplicateEyeTex[];
extern u64 gGaroMasterSwordTex[];
extern u64 gGaroMasterRobeTex[];
extern u64 gGaroMasterClothingTLUT[];
extern u64 gGaroMasterMaskTLUT[];
extern u64 gGaroMasterClothingTex[];
extern u64 gGaroMasterMaskTex[];
extern Vtx object_jsoVtx_002E58[];
extern Gfx gGaroMasterEyesDL[];
extern u64 gGaroMasterEyeTex[];
extern StandardLimb gGaroMasterRootLimb;
extern StandardLimb gGaroMasterTorsoLimb;
extern StandardLimb gGaroMasterLeftArmLimb;
extern StandardLimb gGaroMasterLeftSwordLimb;
extern StandardLimb gGaroMasterRightArmLimb;
extern StandardLimb gGaroMasterRightSwordLimb;
extern StandardLimb gGaroMasterRobeTopLimb;
extern StandardLimb gGaroMasterRobeBackLimb;
extern StandardLimb gGaroMasterRobeLeftLimb;
extern StandardLimb gGaroMasterRobeRightLimb;
extern StandardLimb gGaroMasterRobeFrontLimb;
extern StandardLimb gGaroMasterHeadLimb;
extern StandardLimb gGaroMasterLowerBodyRootLimb;
extern StandardLimb gGaroMasterRightThighLimb;
extern StandardLimb gGaroMasterRightShinLimb;
extern StandardLimb gGaroMasterRightFootLimb;
extern StandardLimb gGaroMasterLeftThighLimb;
extern StandardLimb gGaroMasterLeftShinLimb;
extern StandardLimb gGaroMasterLeftFootLimb;
extern void* gGaroMasterSkelLimbs[];
extern FlexSkeletonHeader gGaroMasterSkel;
extern s16 sGaroStaticJumpPoseAnimFrameData[];
extern JointIndex sGaroStaticJumpPoseAnimJointIndices[];
extern AnimationHeader gGaroStaticJumpPoseAnim;
extern s16 sGaroDashAttackAnimFrameData[];
extern JointIndex sGaroDashAttackAnimJointIndices[];
extern AnimationHeader gGaroDashAttackAnim;
extern s16 sGaroSlashStartAnimFrameData[];
extern JointIndex sGaroSlashStartAnimJointIndices[];
extern AnimationHeader gGaroSlashStartAnim;
extern s16 sGaroSlashLoopAnimFrameData[];
extern JointIndex sGaroSlashLoopAnimJointIndices[];
extern AnimationHeader gGaroSlashLoopAnim;
extern s16 sGaroJumpBackAnimFrameData[];
extern JointIndex sGaroJumpBackAnimJointIndices[];
extern AnimationHeader gGaroJumpBackAnim;
extern s16 sGaroTakeOutBombAnimFrameData[];
extern JointIndex sGaroTakeOutBombAnimJointIndices[];
extern AnimationHeader gGaroTakeOutBombAnim;
extern s16 sGaroLandAnimFrameData[];
extern JointIndex sGaroLandAnimJointIndices[];
extern AnimationHeader gGaroLandAnim;
extern s16 sGaroDamagedAnimFrameData[];
extern JointIndex sGaroDamagedAnimJointIndices[];
extern AnimationHeader gGaroDamagedAnim;
extern s16 sGaroGuardAnimFrameData[];
extern JointIndex sGaroGuardAnimJointIndices[];
extern AnimationHeader gGaroGuardAnim;
extern s16 sGaroAppearAndDrawSwordsAnimFrameData[];
extern JointIndex sGaroAppearAndDrawSwordsAnimJointIndices[];
extern AnimationHeader gGaroAppearAndDrawSwordsAnim;
extern s16 sGaroFallDownAnimFrameData[];
extern JointIndex sGaroFallDownAnimJointIndices[];
extern AnimationHeader gGaroFallDownAnim;
extern s16 sGaroKnockedBackAnimFrameData[];
extern JointIndex sGaroKnockedBackAnimJointIndices[];
extern AnimationHeader gGaroKnockedBackAnim;
extern s16 sGaroTrembleAnimFrameData[];
extern JointIndex sGaroTrembleAnimJointIndices[];
extern AnimationHeader gGaroTrembleAnim;
extern s16 sGaroCollapseAnimFrameData[];
extern JointIndex sGaroCollapseAnimJointIndices[];
extern AnimationHeader gGaroCollapseAnim;
extern s16 sGaroDrawSwordsAnimFrameData[];
extern JointIndex sGaroDrawSwordsAnimJointIndices[];
extern AnimationHeader gGaroDrawSwordsAnim;
extern s16 sGaroJumpDownAnimFrameData[];
extern JointIndex sGaroJumpDownAnimJointIndices[];
extern AnimationHeader gGaroJumpDownAnim;
extern s16 sGaroSpinAttackAnimFrameData[];
extern JointIndex sGaroSpinAttackAnimJointIndices[];
extern AnimationHeader gGaroSpinAttackAnim;
extern s16 sGaroLookAroundAnimFrameData[];
extern JointIndex sGaroLookAroundAnimJointIndices[];
extern AnimationHeader gGaroLookAroundAnim;
extern s16 sGaroCowerAnimFrameData[];
extern JointIndex sGaroCowerAnimJointIndices[];
extern AnimationHeader gGaroCowerAnim;
extern s16 sGaroAppearAnimFrameData[];
extern JointIndex sGaroAppearAnimJointIndices[];
extern AnimationHeader gGaroAppearAnim;
extern Vtx object_jsoVtx_008210[];
extern Gfx gGaroLeftThighDL[];
extern Gfx gGaroLeftShinDL[];
extern Gfx gGaroLeftFootDL[];
extern Gfx gGaroRightThighDL[];
extern Gfx gGaroRightShinDL[];
extern Gfx gGaroRightFootDL[];
extern Gfx gGaroTorsoDL[];
extern Gfx gGaroHeadDL[];
extern Gfx gGaroRobeTopDL[];
extern Gfx gGaroRobeFrontDL[];
extern Gfx gGaroRobeRightDL[];
extern Gfx gGaroRobeLeftDL[];
extern Gfx gGaroRobeBackDL[];
extern Gfx gGaroRightArmDL[];
extern Gfx gGaroRightSwordDL[];
extern Gfx gGaroLeftArmDL[];
extern Gfx gGaroLeftSwordDL[];
extern u64 gGaroLegWrappingTex[];
extern u64 gGaroThighTex[];
extern u64 gGaroRobeFrontTex[];
extern u64 gGaroRobeTex[];
extern u64 gGaroRobeStitchingTex[];
extern u64 gGaroRobeTopTex[];
extern u64 gGaroEyesTex[];
extern u64 gGaroSwordTex[];
extern StandardLimb gGaroRootLimb;
extern StandardLimb gGaroTorsoLimb;
extern StandardLimb gGaroLeftArmLimb;
extern StandardLimb gGaroLeftSwordLimb;
extern StandardLimb gGaroRightArmLimb;
extern StandardLimb gGaroRightSwordLimb;
extern StandardLimb gGaroRobeTopLimb;
extern StandardLimb gGaroRobeBackLimb;
extern StandardLimb gGaroRobeLeftLimb;
extern StandardLimb gGaroRobeRightLimb;
extern StandardLimb gGaroRobeFrontLimb;
extern StandardLimb gGaroHeadLimb;
extern StandardLimb gGaroLowerBodyRootLimb;
extern StandardLimb gGaroRightThighLimb;
extern StandardLimb gGaroRightShinLimb;
extern StandardLimb gGaroRightFootLimb;
extern StandardLimb gGaroLeftThighLimb;
extern StandardLimb gGaroLeftShinLimb;
extern StandardLimb gGaroLeftFootLimb;
extern void* gGaroSkelLimbs[];
extern FlexSkeletonHeader gGaroSkel;
extern s16 sGaroIdleAnimFrameData[];
extern JointIndex sGaroIdleAnimJointIndices[];
extern AnimationHeader gGaroIdleAnim;
extern s16 sGaroLaughAnimFrameData[];
extern JointIndex sGaroLaughAnimJointIndices[];
extern AnimationHeader gGaroLaughAnim;
extern s16 sGaroBounceAnimFrameData[];
extern JointIndex sGaroBounceAnimJointIndices[];
extern AnimationHeader gGaroBounceAnim;
#endif
