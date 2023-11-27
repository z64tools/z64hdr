#ifndef OBJECT_PR_H
#define OBJECT_PR_H 1

typedef enum ObjectPr1Limb {
    /* 0x00 */ OBJECT_PR_1_LIMB_NONE,
    /* 0x01 */ OBJECT_PR_1_LIMB_01,
    /* 0x02 */ OBJECT_PR_1_LIMB_02,
    /* 0x03 */ OBJECT_PR_1_LIMB_03,
    /* 0x04 */ OBJECT_PR_1_LIMB_04,
    /* 0x05 */ OBJECT_PR_1_LIMB_05,
    /* 0x06 */ OBJECT_PR_1_LIMB_06,
    /* 0x07 */ OBJECT_PR_1_LIMB_07,
    /* 0x08 */ OBJECT_PR_1_LIMB_08,
    /* 0x09 */ OBJECT_PR_1_LIMB_09,
    /* 0x0A */ OBJECT_PR_1_LIMB_MAX
} ObjectPr1Limb;

typedef enum ObjectPr2Limb {
    /* 0x00 */ OBJECT_PR_2_LIMB_NONE,
    /* 0x01 */ OBJECT_PR_2_LIMB_01,
    /* 0x02 */ OBJECT_PR_2_LIMB_02,
    /* 0x03 */ OBJECT_PR_2_LIMB_03,
    /* 0x04 */ OBJECT_PR_2_LIMB_04,
    /* 0x05 */ OBJECT_PR_2_LIMB_MAX
} ObjectPr2Limb;

extern s16 object_pr_Anim_000268FrameData[];
extern JointIndex object_pr_Anim_000268JointIndices[];
extern AnimationHeader object_pr_Anim_000268;
extern s16 object_pr_Anim_000740FrameData[];
extern JointIndex object_pr_Anim_000740JointIndices[];
extern AnimationHeader object_pr_Anim_000740;
extern Vtx object_prVtx_000750[];
extern Gfx object_pr_DL_000F30[];
extern Gfx object_pr_DL_001130[];
extern Gfx object_pr_DL_0011C8[];
extern Gfx object_pr_DL_001260[];
extern Gfx object_pr_DL_0012F8[];
extern Gfx object_pr_DL_0013E8[];
extern Gfx object_pr_DL_001480[];
extern Gfx object_pr_DL_001550[];
extern u64 object_pr_Tex_001608[];
extern u64 object_pr_Tex_001708[];
extern u64 object_pr_Tex_001908[];
extern u64 object_pr_Tex_001B08[];
extern u64 object_pr_Tex_001D08[];
extern F3DPrimColor object_prTexColorChangingPrimColors_001D90[];
extern u16 object_prTexColorChangingFrameData_001D9C[];
extern AnimatedMatColorParams object_pr_Matanimheader_001DB0ColorParams_001DA0;
extern AnimatedMaterial object_pr_Matanimheader_001DB0[];
extern s16 object_pr_Anim_001E10FrameData[];
extern JointIndex object_pr_Anim_001E10JointIndices[];
extern AnimationHeader object_pr_Anim_001E10;
extern s16 object_pr_Anim_0021E8FrameData[];
extern JointIndex object_pr_Anim_0021E8JointIndices[];
extern AnimationHeader object_pr_Anim_0021E8;
extern Vtx object_prVtx_002200[];
extern Gfx object_pr_DL_0029E0[];
extern Gfx object_pr_DL_002BD0[];
extern Gfx object_pr_DL_002C68[];
extern Gfx object_pr_DL_002D00[];
extern Gfx object_pr_DL_002D98[];
extern Gfx object_pr_DL_002E88[];
extern Gfx object_pr_DL_002F20[];
extern Gfx object_pr_DL_002FF0[];
extern u64 object_pr_Tex_0030A8[];
extern u64 object_pr_Tex_0031A8[];
extern u64 object_pr_Tex_0033A8[];
extern u64 object_pr_Tex_0035A8[];
extern u64 object_pr_Tex_0037A8[];
extern StandardLimb object_pr_Standardlimb_003828;
extern StandardLimb object_pr_Standardlimb_003834;
extern StandardLimb object_pr_Standardlimb_003840;
extern StandardLimb object_pr_Standardlimb_00384C;
extern StandardLimb object_pr_Standardlimb_003858;
extern StandardLimb object_pr_Standardlimb_003864;
extern StandardLimb object_pr_Standardlimb_003870;
extern StandardLimb object_pr_Standardlimb_00387C;
extern StandardLimb object_pr_Standardlimb_003888;
extern void* object_pr_Skel_0038B8Limbs[];
extern FlexSkeletonHeader object_pr_Skel_0038B8;
extern s16 object_pr_Anim_003904FrameData[];
extern JointIndex object_pr_Anim_003904JointIndices[];
extern AnimationHeader object_pr_Anim_003904;
extern Vtx object_prVtx_003920[];
extern Gfx object_pr_DL_003AB0[];
extern Gfx object_pr_DL_003B50[];
extern Gfx object_pr_DL_003C08[];
extern Gfx object_pr_DL_003D10[];
extern u64 object_pr_Tex_003DA8[];
extern u64 object_pr_Tex_003EA8[];
extern u64 object_pr_Tex_003FA8[];
extern u64 object_pr_Tex_004028[];
extern u64 object_pr_Tex_004128[];
extern StandardLimb object_pr_Standardlimb_004148;
extern StandardLimb object_pr_Standardlimb_004154;
extern StandardLimb object_pr_Standardlimb_004160;
extern StandardLimb object_pr_Standardlimb_00416C;
extern void* object_pr_Skel_004188Limbs[];
extern FlexSkeletonHeader object_pr_Skel_004188;
extern s16 object_pr_Anim_004274FrameData[];
extern JointIndex object_pr_Anim_004274JointIndices[];
extern AnimationHeader object_pr_Anim_004274;
extern s16 object_pr_Anim_004340FrameData[];
extern JointIndex object_pr_Anim_004340JointIndices[];
extern AnimationHeader object_pr_Anim_004340;
#endif
