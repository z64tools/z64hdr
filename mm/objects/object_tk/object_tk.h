#ifndef OBJECT_TK_H
#define OBJECT_TK_H 1

typedef enum ObjectTkLimb {
    /* 0x00 */ OBJECT_TK_LIMB_NONE,
    /* 0x01 */ OBJECT_TK_LIMB_01,
    /* 0x02 */ OBJECT_TK_LIMB_02,
    /* 0x03 */ OBJECT_TK_LIMB_03,
    /* 0x04 */ OBJECT_TK_LIMB_04,
    /* 0x05 */ OBJECT_TK_LIMB_05,
    /* 0x06 */ OBJECT_TK_LIMB_06,
    /* 0x07 */ OBJECT_TK_LIMB_07,
    /* 0x08 */ OBJECT_TK_LIMB_08,
    /* 0x09 */ OBJECT_TK_LIMB_09,
    /* 0x0A */ OBJECT_TK_LIMB_0A,
    /* 0x0B */ OBJECT_TK_LIMB_0B,
    /* 0x0C */ OBJECT_TK_LIMB_0C,
    /* 0x0D */ OBJECT_TK_LIMB_0D,
    /* 0x0E */ OBJECT_TK_LIMB_0E,
    /* 0x0F */ OBJECT_TK_LIMB_0F,
    /* 0x10 */ OBJECT_TK_LIMB_10,
    /* 0x11 */ OBJECT_TK_LIMB_11,
    /* 0x12 */ OBJECT_TK_LIMB_MAX
} ObjectTkLimb;

extern s16 object_tk_Anim_001144FrameData[];
extern JointIndex object_tk_Anim_001144JointIndices[];
extern AnimationHeader object_tk_Anim_001144;
extern s16 object_tk_Anim_001FA8FrameData[];
extern JointIndex object_tk_Anim_001FA8JointIndices[];
extern AnimationHeader object_tk_Anim_001FA8;
extern s16 object_tk_Anim_0020C8FrameData[];
extern JointIndex object_tk_Anim_0020C8JointIndices[];
extern AnimationHeader object_tk_Anim_0020C8;
extern s16 object_tk_Anim_0030A4FrameData[];
extern JointIndex object_tk_Anim_0030A4JointIndices[];
extern AnimationHeader object_tk_Anim_0030A4;
extern s16 object_tk_Anim_003724FrameData[];
extern JointIndex object_tk_Anim_003724JointIndices[];
extern AnimationHeader object_tk_Anim_003724;
extern s16 object_tk_Anim_003B10FrameData[];
extern JointIndex object_tk_Anim_003B10JointIndices[];
extern AnimationHeader object_tk_Anim_003B10;
extern s16 object_tk_Anim_003FB8FrameData[];
extern JointIndex object_tk_Anim_003FB8JointIndices[];
extern AnimationHeader object_tk_Anim_003FB8;
extern u64 object_tk_TLUT_003FD0[];
extern u64 object_tk_Tex_0041D0[];
extern u64 object_tk_Tex_004210[];
extern u64 object_tk_Tex_004250[];
extern u64 object_tk_Tex_004290[];
extern u64 object_tk_Tex_004390[];
extern u64 object_tk_Tex_004B90[];
extern u64 object_tk_Tex_005390[];
extern u64 object_tk_Tex_005B90[];
extern u64 object_tk_Tex_005C90[];
extern u64 object_tk_Tex_005F10[];
extern Vtx object_tkVtx_006010[];
extern Gfx object_tk_DL_008870[];
extern Gfx object_tk_DL_0089B0[];
extern Gfx object_tk_DL_008B40[];
extern Gfx object_tk_DL_008C60[];
extern Gfx object_tk_DL_0091A8[];
extern Gfx object_tk_DL_0094F0[];
extern Gfx object_tk_DL_009620[];
extern Gfx object_tk_DL_009750[];
extern Gfx object_tk_DL_009960[];
extern Gfx object_tk_DL_009A90[];
extern Gfx object_tk_DL_009BC0[];
extern Gfx object_tk_DL_009DD0[];
extern Gfx object_tk_DL_009F88[];
extern Gfx object_tk_DL_00A068[];
extern Gfx object_tk_DL_00A220[];
extern u64 object_tkTLUT_00A300[];
extern u64 object_tk_Tex_00A350[];
extern u64 object_tk_Tex_00A450[];
extern u64 object_tk_Tex_00A4D0[];
extern u64 object_tk_Tex_00A510[];
extern u64 object_tk_Tex_00A590[];
extern Vtx object_tkVtx_00A690[];
extern Gfx object_tk_DL_00B260[];
extern Gfx object_tk_DL_00B3C8[];
extern Gfx object_tk_DL_00B530[];
extern StandardLimb object_tk_Standardlimb_00B8D8;
extern StandardLimb object_tk_Standardlimb_00B8E4;
extern StandardLimb object_tk_Standardlimb_00B8F0;
extern StandardLimb object_tk_Standardlimb_00B8FC;
extern StandardLimb object_tk_Standardlimb_00B908;
extern StandardLimb object_tk_Standardlimb_00B914;
extern StandardLimb object_tk_Standardlimb_00B920;
extern StandardLimb object_tk_Standardlimb_00B92C;
extern StandardLimb object_tk_Standardlimb_00B938;
extern StandardLimb object_tk_Standardlimb_00B944;
extern StandardLimb object_tk_Standardlimb_00B950;
extern StandardLimb object_tk_Standardlimb_00B95C;
extern StandardLimb object_tk_Standardlimb_00B968;
extern StandardLimb object_tk_Standardlimb_00B974;
extern StandardLimb object_tk_Standardlimb_00B980;
extern StandardLimb object_tk_Standardlimb_00B98C;
extern StandardLimb object_tk_Standardlimb_00B998;
extern void* object_tk_Skel_00B9E8Limbs[];
extern FlexSkeletonHeader object_tk_Skel_00B9E8;
#endif
