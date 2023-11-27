#ifndef OBJECT_BAI_H
#define OBJECT_BAI_H 1

typedef enum ObjectBaiLimb {
    /* 0x00 */ OBJECT_BAI_LIMB_NONE,
    /* 0x01 */ OBJECT_BAI_LIMB_01,
    /* 0x02 */ OBJECT_BAI_LIMB_02,
    /* 0x03 */ OBJECT_BAI_LIMB_03,
    /* 0x04 */ OBJECT_BAI_LIMB_04,
    /* 0x05 */ OBJECT_BAI_LIMB_05,
    /* 0x06 */ OBJECT_BAI_LIMB_06,
    /* 0x07 */ OBJECT_BAI_LIMB_07,
    /* 0x08 */ OBJECT_BAI_LIMB_08,
    /* 0x09 */ OBJECT_BAI_LIMB_09,
    /* 0x0A */ OBJECT_BAI_LIMB_0A,
    /* 0x0B */ OBJECT_BAI_LIMB_0B,
    /* 0x0C */ OBJECT_BAI_LIMB_0C,
    /* 0x0D */ OBJECT_BAI_LIMB_0D,
    /* 0x0E */ OBJECT_BAI_LIMB_0E,
    /* 0x0F */ OBJECT_BAI_LIMB_0F,
    /* 0x10 */ OBJECT_BAI_LIMB_10,
    /* 0x11 */ OBJECT_BAI_LIMB_11,
    /* 0x12 */ OBJECT_BAI_LIMB_12,
    /* 0x13 */ OBJECT_BAI_LIMB_13,
    /* 0x14 */ OBJECT_BAI_LIMB_MAX
} ObjectBaiLimb;

extern s16 object_bai_Anim_0008B4FrameData[];
extern JointIndex object_bai_Anim_0008B4JointIndices[];
extern AnimationHeader object_bai_Anim_0008B4;
extern s16 object_bai_Anim_0011C0FrameData[];
extern JointIndex object_bai_Anim_0011C0JointIndices[];
extern AnimationHeader object_bai_Anim_0011C0;
extern Vtx object_baiVtx_0011D0[];
extern Gfx object_bai_DL_0049C0[];
extern Gfx object_bai_DL_004BA8[];
extern Gfx object_bai_DL_004EC0[];
extern Gfx object_bai_DL_004FF0[];
extern Gfx object_bai_DL_0050F8[];
extern Gfx object_bai_DL_005410[];
extern Gfx object_bai_DL_005540[];
extern Gfx object_bai_DL_005648[];
extern Gfx object_bai_DL_005A30[];
extern Gfx object_bai_DL_005EA8[];
extern Gfx object_bai_DL_005FC8[];
extern Gfx object_bai_DL_0060D0[];
extern Gfx object_bai_DL_0062F8[];
extern Gfx object_bai_DL_006410[];
extern Gfx object_bai_DL_006518[];
extern Gfx object_bai_DL_006740[];
extern u64 object_bai_TLUT_006858[];
extern u64 object_bai_Tex_006A58[];
extern u64 object_bai_Tex_007258[];
extern u64 object_bai_Tex_007298[];
extern u64 object_bai_Tex_0072D8[];
extern u64 object_bai_Tex_007318[];
extern u64 object_bai_Tex_007398[];
extern u64 object_bai_Tex_0073D8[];
extern u64 object_bai_Tex_0074D8[];
extern u64 object_bai_Tex_0075D8[];
extern StandardLimb object_bai_Standardlimb_0077D8;
extern StandardLimb object_bai_Standardlimb_0077E4;
extern StandardLimb object_bai_Standardlimb_0077F0;
extern StandardLimb object_bai_Standardlimb_0077FC;
extern StandardLimb object_bai_Standardlimb_007808;
extern StandardLimb object_bai_Standardlimb_007814;
extern StandardLimb object_bai_Standardlimb_007820;
extern StandardLimb object_bai_Standardlimb_00782C;
extern StandardLimb object_bai_Standardlimb_007838;
extern StandardLimb object_bai_Standardlimb_007844;
extern StandardLimb object_bai_Standardlimb_007850;
extern StandardLimb object_bai_Standardlimb_00785C;
extern StandardLimb object_bai_Standardlimb_007868;
extern StandardLimb object_bai_Standardlimb_007874;
extern StandardLimb object_bai_Standardlimb_007880;
extern StandardLimb object_bai_Standardlimb_00788C;
extern StandardLimb object_bai_Standardlimb_007898;
extern StandardLimb object_bai_Standardlimb_0078A4;
extern StandardLimb object_bai_Standardlimb_0078B0;
extern void* object_bai_Skel_007908Limbs[];
extern FlexSkeletonHeader object_bai_Skel_007908;
extern s16 object_bai_Anim_008198FrameData[];
extern JointIndex object_bai_Anim_008198JointIndices[];
extern AnimationHeader object_bai_Anim_008198;
#endif
