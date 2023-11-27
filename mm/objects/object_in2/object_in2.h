#ifndef OBJECT_IN2_H
#define OBJECT_IN2_H 1

typedef enum ObjectIn2Limb {
    /* 0x00 */ OBJECT_IN2_LIMB_NONE,
    /* 0x01 */ OBJECT_IN2_LIMB_01,
    /* 0x02 */ OBJECT_IN2_LIMB_02,
    /* 0x03 */ OBJECT_IN2_LIMB_03,
    /* 0x04 */ OBJECT_IN2_LIMB_04,
    /* 0x05 */ OBJECT_IN2_LIMB_05,
    /* 0x06 */ OBJECT_IN2_LIMB_06,
    /* 0x07 */ OBJECT_IN2_LIMB_07,
    /* 0x08 */ OBJECT_IN2_LIMB_08,
    /* 0x09 */ OBJECT_IN2_LIMB_09,
    /* 0x0A */ OBJECT_IN2_LIMB_0A,
    /* 0x0B */ OBJECT_IN2_LIMB_0B,
    /* 0x0C */ OBJECT_IN2_LIMB_0C,
    /* 0x0D */ OBJECT_IN2_LIMB_0D,
    /* 0x0E */ OBJECT_IN2_LIMB_0E,
    /* 0x0F */ OBJECT_IN2_LIMB_0F,
    /* 0x10 */ OBJECT_IN2_LIMB_10,
    /* 0x11 */ OBJECT_IN2_LIMB_11,
    /* 0x12 */ OBJECT_IN2_LIMB_12,
    /* 0x13 */ OBJECT_IN2_LIMB_13,
    /* 0x14 */ OBJECT_IN2_LIMB_MAX
} ObjectIn2Limb;

extern s16 object_in2_Anim_000084FrameData[];
extern JointIndex object_in2_Anim_000084JointIndices[];
extern AnimationHeader object_in2_Anim_000084;
extern Vtx object_in2Vtx_0000A0[];
extern Gfx object_in2_DL_002D60[];
extern Gfx object_in2_DL_003060[];
extern Gfx object_in2_DL_0035B0[];
extern Gfx object_in2_DL_0036A8[];
extern Gfx object_in2_DL_0037D0[];
extern Gfx object_in2_DL_0038F8[];
extern Gfx object_in2_DL_003A10[];
extern Gfx object_in2_DL_003B28[];
extern Gfx object_in2_DL_003EA0[];
extern Gfx object_in2_DL_003FB8[];
extern Gfx object_in2_DL_0040D0[];
extern Gfx object_in2_DL_004448[];
extern Gfx object_in2_DL_0045C8[];
extern Gfx object_in2_DL_0046C0[];
extern Gfx object_in2_DL_0047C8[];
extern Gfx object_in2_DL_0048F8[];
extern Gfx object_in2_DL_0049F0[];
extern Gfx object_in2_DL_004AF8[];
extern u64 object_in2_Tex_004C28[];
extern u64 object_in2_TLUT_004E28[];
extern u64 object_in2_Tex_005028[];
extern u64 object_in2_Tex_005428[];
extern u64 object_in2_Tex_005468[];
extern u64 object_in2_Tex_0054A8[];
extern u64 object_in2_Tex_0058A8[];
extern u64 object_in2_Tex_005AA8[];
extern u64 object_in2_Tex_005BA8[];
extern u64 object_in2_Tex_005CA8[];
extern u64 object_in2_Tex_005CE8[];
extern u64 object_in2_Tex_0060E8[];
extern u64 object_in2_Tex_0062E8[];
extern u64 object_in2_Tex_0063E8[];
extern u64 object_in2_Tex_006428[];
extern u64 object_in2_Tex_006528[];
extern u64 object_in2_Tex_006628[];
extern u64 object_in2_Tex_006728[];
extern u64 object_in2_Tex_006828[];
extern u64 object_in2_Tex_006C28[];
extern u64 object_in2_Tex_006C68[];
extern u64 object_in2_Tex_007068[];
extern Vtx object_in2Vtx_0070A8[];
extern Gfx object_in2_DL_007198[];
extern Gfx object_in2_DL_0071A0[];
extern u64 object_in2_Tex_007260[];
extern Vtx object_in2Vtx_007460[];
extern Gfx object_in2_DL_007520[];
extern Gfx object_in2_DL_007528[];
extern u64 object_in2_Tex_007680[];
extern StandardLimb object_in2_Standardlimb_007780;
extern StandardLimb object_in2_Standardlimb_00778C;
extern StandardLimb object_in2_Standardlimb_007798;
extern StandardLimb object_in2_Standardlimb_0077A4;
extern StandardLimb object_in2_Standardlimb_0077B0;
extern StandardLimb object_in2_Standardlimb_0077BC;
extern StandardLimb object_in2_Standardlimb_0077C8;
extern StandardLimb object_in2_Standardlimb_0077D4;
extern StandardLimb object_in2_Standardlimb_0077E0;
extern StandardLimb object_in2_Standardlimb_0077EC;
extern StandardLimb object_in2_Standardlimb_0077F8;
extern StandardLimb object_in2_Standardlimb_007804;
extern StandardLimb object_in2_Standardlimb_007810;
extern StandardLimb object_in2_Standardlimb_00781C;
extern StandardLimb object_in2_Standardlimb_007828;
extern StandardLimb object_in2_Standardlimb_007834;
extern StandardLimb object_in2_Standardlimb_007840;
extern StandardLimb object_in2_Standardlimb_00784C;
extern StandardLimb object_in2_Standardlimb_007858;
extern void* object_in2_Skel_0078B0Limbs[];
extern FlexSkeletonHeader object_in2_Skel_0078B0;
extern s16 object_in2_Anim_008090FrameData[];
extern JointIndex object_in2_Anim_008090JointIndices[];
extern AnimationHeader object_in2_Anim_008090;
extern s16 object_in2_Anim_00898CFrameData[];
extern JointIndex object_in2_Anim_00898CJointIndices[];
extern AnimationHeader object_in2_Anim_00898C;
extern s16 object_in2_Anim_009450FrameData[];
extern JointIndex object_in2_Anim_009450JointIndices[];
extern AnimationHeader object_in2_Anim_009450;
extern s16 object_in2_Anim_009CDCFrameData[];
extern JointIndex object_in2_Anim_009CDCJointIndices[];
extern AnimationHeader object_in2_Anim_009CDC;
extern s16 object_in2_Anim_00A5E0FrameData[];
extern JointIndex object_in2_Anim_00A5E0JointIndices[];
extern AnimationHeader object_in2_Anim_00A5E0;
extern s16 object_in2_Anim_00A70CFrameData[];
extern JointIndex object_in2_Anim_00A70CJointIndices[];
extern AnimationHeader object_in2_Anim_00A70C;
extern s16 object_in2_Anim_00AD18FrameData[];
extern JointIndex object_in2_Anim_00AD18JointIndices[];
extern AnimationHeader object_in2_Anim_00AD18;
extern s16 object_in2_Anim_00B8B0FrameData[];
extern JointIndex object_in2_Anim_00B8B0JointIndices[];
extern AnimationHeader object_in2_Anim_00B8B0;
extern s16 object_in2_Anim_00B990FrameData[];
extern JointIndex object_in2_Anim_00B990JointIndices[];
extern AnimationHeader object_in2_Anim_00B990;
extern s16 object_in2_Anim_00BA80FrameData[];
extern JointIndex object_in2_Anim_00BA80JointIndices[];
extern AnimationHeader object_in2_Anim_00BA80;
extern s16 object_in2_Anim_00C03CFrameData[];
extern JointIndex object_in2_Anim_00C03CJointIndices[];
extern AnimationHeader object_in2_Anim_00C03C;
#endif
