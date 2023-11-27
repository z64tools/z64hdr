#ifndef OBJECT_DAI_H
#define OBJECT_DAI_H 1

typedef enum ObjectDaiLimb {
    /* 0x00 */ OBJECT_DAI_LIMB_NONE,
    /* 0x01 */ OBJECT_DAI_LIMB_01,
    /* 0x02 */ OBJECT_DAI_LIMB_02,
    /* 0x03 */ OBJECT_DAI_LIMB_03,
    /* 0x04 */ OBJECT_DAI_LIMB_04,
    /* 0x05 */ OBJECT_DAI_LIMB_05,
    /* 0x06 */ OBJECT_DAI_LIMB_06,
    /* 0x07 */ OBJECT_DAI_LIMB_07,
    /* 0x08 */ OBJECT_DAI_LIMB_08,
    /* 0x09 */ OBJECT_DAI_LIMB_09,
    /* 0x0A */ OBJECT_DAI_LIMB_0A,
    /* 0x0B */ OBJECT_DAI_LIMB_0B,
    /* 0x0C */ OBJECT_DAI_LIMB_0C,
    /* 0x0D */ OBJECT_DAI_LIMB_0D,
    /* 0x0E */ OBJECT_DAI_LIMB_0E,
    /* 0x0F */ OBJECT_DAI_LIMB_0F,
    /* 0x10 */ OBJECT_DAI_LIMB_10,
    /* 0x11 */ OBJECT_DAI_LIMB_11,
    /* 0x12 */ OBJECT_DAI_LIMB_12,
    /* 0x13 */ OBJECT_DAI_LIMB_MAX
} ObjectDaiLimb;

extern u64 object_dai_Tex_000000[];
extern Vtx object_daiVtx_000200[];
extern Gfx object_dai_DL_000230[];
extern Gfx object_dai_DL_0002E8[];
extern s16 object_dai_Anim_000CECFrameData[];
extern JointIndex object_dai_Anim_000CECJointIndices[];
extern AnimationHeader object_dai_Anim_000CEC;
extern s16 object_dai_Anim_0010F8FrameData[];
extern JointIndex object_dai_Anim_0010F8JointIndices[];
extern AnimationHeader object_dai_Anim_0010F8;
extern s16 object_dai_Anim_0014BCFrameData[];
extern JointIndex object_dai_Anim_0014BCJointIndices[];
extern AnimationHeader object_dai_Anim_0014BC;
extern s16 object_dai_Anim_001E44FrameData[];
extern JointIndex object_dai_Anim_001E44JointIndices[];
extern AnimationHeader object_dai_Anim_001E44;
extern s16 object_dai_Anim_002E58FrameData[];
extern JointIndex object_dai_Anim_002E58JointIndices[];
extern AnimationHeader object_dai_Anim_002E58;
extern s16 object_dai_Anim_003CACFrameData[];
extern JointIndex object_dai_Anim_003CACJointIndices[];
extern AnimationHeader object_dai_Anim_003CAC;
extern s16 object_dai_Anim_0040E0FrameData[];
extern JointIndex object_dai_Anim_0040E0JointIndices[];
extern AnimationHeader object_dai_Anim_0040E0;
extern s16 object_dai_Anim_0048B4FrameData[];
extern JointIndex object_dai_Anim_0048B4JointIndices[];
extern AnimationHeader object_dai_Anim_0048B4;
extern s16 object_dai_Anim_005100FrameData[];
extern JointIndex object_dai_Anim_005100JointIndices[];
extern AnimationHeader object_dai_Anim_005100;
extern s16 object_dai_Anim_00563CFrameData[];
extern JointIndex object_dai_Anim_00563CJointIndices[];
extern AnimationHeader object_dai_Anim_00563C;
extern s16 object_dai_Anim_006590FrameData[];
extern JointIndex object_dai_Anim_006590JointIndices[];
extern AnimationHeader object_dai_Anim_006590;
extern s16 object_dai_Anim_0069DCFrameData[];
extern JointIndex object_dai_Anim_0069DCJointIndices[];
extern AnimationHeader object_dai_Anim_0069DC;
extern s16 object_dai_Anim_007354FrameData[];
extern JointIndex object_dai_Anim_007354JointIndices[];
extern AnimationHeader object_dai_Anim_007354;
extern s16 object_dai_Anim_0079E4FrameData[];
extern JointIndex object_dai_Anim_0079E4JointIndices[];
extern AnimationHeader object_dai_Anim_0079E4;
extern Vtx object_daiVtx_007A00[];
extern Gfx object_dai_DL_008710[];
extern Gfx object_dai_DL_0087B8[];
extern Gfx object_dai_DL_0089D8[];
extern Gfx object_dai_DL_008B00[];
extern u64 object_dai_TLUT_008C58[];
extern u64 object_dai_Tex_008E58[];
extern u64 object_dai_Tex_009258[];
extern u64 object_dai_Tex_009298[];
extern u64 object_dai_Tex_009498[];
extern u64 object_dai_Tex_009698[];
extern Vtx object_daiVtx_0096D8[];
extern Gfx object_dai_DL_00C538[];
extern Gfx object_dai_DL_00C5D8[];
extern Gfx object_dai_DL_00C9B8[];
extern Gfx object_dai_DL_00D068[];
extern Gfx object_dai_DL_00D400[];
extern Gfx object_dai_DL_00D588[];
extern Gfx object_dai_DL_00D6C0[];
extern Gfx object_dai_DL_00D948[];
extern Gfx object_dai_DL_00DAD0[];
extern Gfx object_dai_DL_00DC08[];
extern Gfx object_dai_DL_00DE18[];
extern Gfx object_dai_DL_00DF78[];
extern Gfx object_dai_DL_00E068[];
extern Gfx object_dai_DL_00E1A0[];
extern Gfx object_dai_DL_00E470[];
extern Gfx object_dai_DL_00E560[];
extern Gfx object_dai_DL_00E698[];
extern u64 object_dai_TLUT_00E8F0[];
extern u64 object_dai_Tex_00EAF0[];
extern u64 object_dai_Tex_00EBF0[];
extern u64 object_dai_Tex_00ECF0[];
extern u64 object_dai_Tex_00F0F0[];
extern u64 object_dai_Tex_00F2F0[];
extern u64 object_dai_Tex_00F6F0[];
extern u64 object_dai_Tex_00F730[];
extern u64 object_dai_Tex_00F7B0[];
extern u64 object_dai_Tex_00FFB0[];
extern u64 object_dai_Tex_0100B0[];
extern u64 object_dai_Tex_010130[];
extern u64 object_dai_Tex_010330[];
extern u64 object_dai_Tex_0103B0[];
extern u64 object_dai_Tex_0107B0[];
extern u64 object_dai_Tex_010FB0[];
extern u64 object_dai_Tex_0117B0[];
extern u64 object_dai_Tex_011FB0[];
extern u64 object_dai_Tex_0127B0[];
extern StandardLimb object_dai_Standardlimb_012FB0;
extern StandardLimb object_dai_Standardlimb_012FBC;
extern StandardLimb object_dai_Standardlimb_012FC8;
extern StandardLimb object_dai_Standardlimb_012FD4;
extern StandardLimb object_dai_Standardlimb_012FE0;
extern StandardLimb object_dai_Standardlimb_012FEC;
extern StandardLimb object_dai_Standardlimb_012FF8;
extern StandardLimb object_dai_Standardlimb_013004;
extern StandardLimb object_dai_Standardlimb_013010;
extern StandardLimb object_dai_Standardlimb_01301C;
extern StandardLimb object_dai_Standardlimb_013028;
extern StandardLimb object_dai_Standardlimb_013034;
extern StandardLimb object_dai_Standardlimb_013040;
extern StandardLimb object_dai_Standardlimb_01304C;
extern StandardLimb object_dai_Standardlimb_013058;
extern StandardLimb object_dai_Standardlimb_013064;
extern StandardLimb object_dai_Standardlimb_013070;
extern StandardLimb object_dai_Standardlimb_01307C;
extern void* object_dai_Skel_0130D0Limbs[];
extern FlexSkeletonHeader object_dai_Skel_0130D0;
#endif
