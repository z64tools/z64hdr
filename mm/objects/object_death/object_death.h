#ifndef OBJECT_DEATH_H
#define OBJECT_DEATH_H 1

typedef enum GomessSkelLimbs {
    /* 0x00 */ GOMESS_LIMB_NONE,
    /* 0x01 */ GOMESS_LIMB_1,
    /* 0x02 */ GOMESS_LIMB_CORE_POS,
    /* 0x03 */ GOMESS_LIMB_LOWER_BODY,
    /* 0x04 */ GOMESS_LIMB_TORSO,
    /* 0x05 */ GOMESS_LIMB_COLLAR,
    /* 0x06 */ GOMESS_LIMB_HEAD_LOWER,
    /* 0x07 */ GOMESS_LIMB_HEAD_UPPER,
    /* 0x08 */ GOMESS_LIMB_8,
    /* 0x09 */ GOMESS_LIMB_9,
    /* 0x0A */ GOMESS_LIMB_10,
    /* 0x0B */ GOMESS_LIMB_11,
    /* 0x0C */ GOMESS_LIMB_CLOAK_UPPER,
    /* 0x0D */ GOMESS_LIMB_CLOAK_LOWER,
    /* 0x0E */ GOMESS_LIMB_UPPER_ARM_LEFT,
    /* 0x0F */ GOMESS_LIMB_FOREARM_LEFT,
    /* 0x10 */ GOMESS_LIMB_HAND_LEFT,
    /* 0x11 */ GOMESS_LIMB_UPPER_ARM_RIGHT,
    /* 0x12 */ GOMESS_LIMB_FOREARM_RIGHT,
    /* 0x13 */ GOMESS_LIMB_HAND_RIGHT,
    /* 0x14 */ GOMESS_LIMB_SCYTHE_HANDLE,
    /* 0x15 */ GOMESS_LIMB_SCYTHE_BLADE,
    /* 0x16 */ GOMESS_LIMB_MAX
} GomessSkelLimbs;

extern s16 sGomessScytheSwingAnimFrameData[];
extern JointIndex sGomessScytheSwingAnimJointIndices[];
extern AnimationHeader gGomessScytheSwingAnim;
extern s16 object_death_Anim_0015B4FrameData[];
extern JointIndex object_death_Anim_0015B4JointIndices[];
extern AnimationHeader object_death_Anim_0015B4;
extern s16 object_death_Anim_001834FrameData[];
extern JointIndex object_death_Anim_001834JointIndices[];
extern AnimationHeader object_death_Anim_001834;
extern s16 sGomessDamagedAnimFrameData[];
extern JointIndex sGomessDamagedAnimJointIndices[];
extern AnimationHeader gGomessDamagedAnim;
extern s16 sGomessBeginDeathAnimFrameData[];
extern JointIndex sGomessBeginDeathAnimJointIndices[];
extern AnimationHeader gGomessBeginDeathAnim;
extern s16 sGomessDeathAnimFrameData[];
extern JointIndex sGomessDeathAnimJointIndices[];
extern AnimationHeader gGomessDeathAnim;
extern s16 sGomessFloatAnimFrameData[];
extern JointIndex sGomessFloatAnimJointIndices[];
extern AnimationHeader gGomessFloatAnim;
extern Vtx object_deathVtx_003CC0[];
extern Gfx object_death_DL_006B80[];
extern Gfx object_death_DL_006D18[];
extern Gfx object_death_DL_006E08[];
extern Gfx object_death_DL_006F88[];
extern Gfx object_death_DL_0073D0[];
extern Gfx object_death_DL_0074B8[];
extern Gfx object_death_DL_007560[];
extern Gfx object_death_DL_007638[];
extern Gfx object_death_DL_007710[];
extern Gfx object_death_DL_007818[];
extern Gfx object_death_DL_007998[];
extern Gfx object_death_DL_007A40[];
extern Gfx object_death_DL_007CD0[];
extern Gfx object_death_DL_007ED0[];
extern Gfx object_death_DL_0082C0[];
extern Gfx object_death_DL_008370[];
extern Gfx object_death_DL_008428[];
extern Gfx object_death_DL_0084E0[];
extern Gfx object_death_DL_008598[];
extern Gfx object_death_DL_008638[];
extern u64 object_death_Tex_008788[];
extern u64 object_death_Tex_008F88[];
extern u64 object_death_Tex_009008[];
extern u64 object_death_Tex_009108[];
extern u64 object_death_Tex_009188[];
extern u64 object_death_Tex_009288[];
extern u64 object_death_Tex_009308[];
extern u64 object_death_Tex_009388[];
extern u64 object_death_Tex_009588[];
extern u64 object_death_Tex_0095C8[];
extern u64 object_death_Tex_0097C8[];
extern u64 object_death_Tex_009808[];
extern Vtx object_deathVtx_009888[];
extern Gfx gGomessCoreDL[];
extern u64 gGomessCoreTex[];
extern Vtx object_deathVtx_009B20[];
extern Gfx gGomessBatsGuardingCoreDL[];
extern u64 gGomessBatsGuardingCoreTex[];
extern Vtx object_deathVtx_009E40[];
extern Gfx gGomessBatMaterialDL[];
extern Gfx gGomessBatFrame1DL[];
extern Vtx object_deathVtx_009FB8[];
extern Gfx gGomessBatFrame2DL[];
extern Vtx object_deathVtx_00A0B8[];
extern Gfx gGomessBatFrame3DL[];
extern Vtx object_deathVtx_00A1B8[];
extern Gfx gGomessBatFrame4DL[];
extern Vtx object_deathVtx_00A2B8[];
extern Gfx gGomessBatFrame5DL[];
extern Vtx object_deathVtx_00A3B8[];
extern Gfx gGomessBatFrame6DL[];
extern Vtx object_deathVtx_00A4B8[];
extern Gfx gGomessBatFrame7DL[];
extern Vtx object_deathVtx_00A5B8[];
extern Gfx gGomessBatFrame8DL[];
extern Vtx object_deathVtx_00A6B8[];
extern Gfx gGomessBatFrame9DL[];
extern u64 gGomessBatTex[];
extern StandardLimb object_death_Standardlimb_00ABB8;
extern StandardLimb object_death_Standardlimb_00ABC4;
extern StandardLimb object_death_Standardlimb_00ABD0;
extern StandardLimb object_death_Standardlimb_00ABDC;
extern StandardLimb object_death_Standardlimb_00ABE8;
extern StandardLimb object_death_Standardlimb_00ABF4;
extern StandardLimb object_death_Standardlimb_00AC00;
extern StandardLimb object_death_Standardlimb_00AC0C;
extern StandardLimb object_death_Standardlimb_00AC18;
extern StandardLimb object_death_Standardlimb_00AC24;
extern StandardLimb object_death_Standardlimb_00AC30;
extern StandardLimb object_death_Standardlimb_00AC3C;
extern StandardLimb object_death_Standardlimb_00AC48;
extern StandardLimb object_death_Standardlimb_00AC54;
extern StandardLimb object_death_Standardlimb_00AC60;
extern StandardLimb object_death_Standardlimb_00AC6C;
extern StandardLimb object_death_Standardlimb_00AC78;
extern StandardLimb object_death_Standardlimb_00AC84;
extern StandardLimb object_death_Standardlimb_00AC90;
extern StandardLimb object_death_Standardlimb_00AC9C;
extern StandardLimb object_death_Standardlimb_00ACA8;
extern void* gGomessSkelLimbs[];
extern FlexSkeletonHeader gGomessSkel;
extern s16 object_death_Anim_00B284FrameData[];
extern JointIndex object_death_Anim_00B284JointIndices[];
extern AnimationHeader object_death_Anim_00B284;
extern s16 sGomessScytheSpinAnimFrameData[];
extern JointIndex sGomessScytheSpinAnimJointIndices[];
extern AnimationHeader gGomessScytheSpinAnim;
extern s16 object_death_Anim_00CB2CFrameData[];
extern JointIndex object_death_Anim_00CB2CJointIndices[];
extern AnimationHeader object_death_Anim_00CB2C;
extern F3DPrimColor object_deathTexColorChangingPrimColors_00CB40[];
extern F3DEnvColor object_deathTexColorChangingEnvColors_00CB50[];
extern u16 object_deathTexColorChangingFrameData_00CB5C[];
extern AnimatedMatColorParams gGomessCoreMatAnimColorParams_00CB64;
extern AnimatedMatTexScrollParams gGomessCoreMatAnimTexScrollParams_00CB74[];
extern AnimatedMatTexScrollParams gGomessCoreMatAnimTexScrollParams_00CB7C[];
extern AnimatedMaterial gGomessCoreMatAnim[];
extern F3DPrimColor object_deathTexColorChangingPrimColors_00CBA0[];
extern u16 object_deathTexColorChangingFrameData_00CBAC[];
extern AnimatedMatColorParams gGomessBodyMatAnimColorParams_00CBB0;
extern AnimatedMaterial gGomessBodyMatAnim[];
#endif
