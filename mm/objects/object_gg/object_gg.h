#ifndef OBJECT_GG_H
#define OBJECT_GG_H 1

typedef enum ObjectGgLimb {
    /* 0x00 */ OBJECT_GG_LIMB_NONE,
    /* 0x01 */ OBJECT_GG_LIMB_01,
    /* 0x02 */ OBJECT_GG_LIMB_02,
    /* 0x03 */ OBJECT_GG_LIMB_03,
    /* 0x04 */ OBJECT_GG_LIMB_04,
    /* 0x05 */ OBJECT_GG_LIMB_05,
    /* 0x06 */ OBJECT_GG_LIMB_06,
    /* 0x07 */ OBJECT_GG_LIMB_07,
    /* 0x08 */ OBJECT_GG_LIMB_08,
    /* 0x09 */ OBJECT_GG_LIMB_09,
    /* 0x0A */ OBJECT_GG_LIMB_0A,
    /* 0x0B */ OBJECT_GG_LIMB_0B,
    /* 0x0C */ OBJECT_GG_LIMB_0C,
    /* 0x0D */ OBJECT_GG_LIMB_0D,
    /* 0x0E */ OBJECT_GG_LIMB_0E,
    /* 0x0F */ OBJECT_GG_LIMB_0F,
    /* 0x10 */ OBJECT_GG_LIMB_10,
    /* 0x11 */ OBJECT_GG_LIMB_11,
    /* 0x12 */ OBJECT_GG_LIMB_12,
    /* 0x13 */ OBJECT_GG_LIMB_13,
    /* 0x14 */ OBJECT_GG_LIMB_MAX
} ObjectGgLimb;

extern Vtx object_ggVtx_000000[];
extern Gfx object_gg_DL_003BA0[];
extern Gfx object_gg_DL_003EC0[];
extern Gfx object_gg_DL_004578[];
extern Gfx object_gg_DL_004890[];
extern Gfx object_gg_DL_004B08[];
extern Gfx object_gg_DL_004B50[];
extern Gfx object_gg_DL_004C48[];
extern Gfx object_gg_DL_004F08[];
extern Gfx object_gg_DL_005050[];
extern Gfx object_gg_DL_0050E0[];
extern Gfx object_gg_DL_0051D8[];
extern Gfx object_gg_DL_005498[];
extern Gfx object_gg_DL_0055D8[];
extern Gfx object_gg_DL_005670[];
extern Gfx object_gg_DL_005730[];
extern Gfx object_gg_DL_005828[];
extern Gfx object_gg_DL_0058E8[];
extern u64 object_gg_Tex_0059E0[];
extern u64 object_gg_Tex_005AE0[];
extern u64 object_gg_Tex_005B20[];
extern u64 object_gg_Tex_005B60[];
extern u64 object_gg_Tex_006360[];
extern u64 object_gg_Tex_006760[];
extern u64 object_gg_Tex_006860[];
extern u64 object_gg_Tex_006A60[];
extern u64 object_gg_Tex_006AE0[];
extern u64 object_gg_Tex_006BE0[];
extern u64 object_gg_Tex_006C60[];
extern u64 object_gg_Tex_006CA0[];
extern u64 object_gg_Tex_006D20[];
extern u64 object_gg_Tex_006E20[];
extern u64 object_gg_Tex_007620[];
extern u64 object_gg_Tex_007E20[];
extern u64 object_gg_Tex_008E20[];
extern u64 object_gg_Tex_008E60[];
extern u64 object_gg_Tex_009260[];
extern u64 object_gg_Tex_009660[];
extern u64 object_gg_Tex_009A60[];
extern u64 object_gg_Tex_009E60[];
extern s16 object_gg_Anim_00A4B4FrameData[];
extern JointIndex object_gg_Anim_00A4B4JointIndices[];
extern AnimationHeader object_gg_Anim_00A4B4;
extern TexturePtr object_ggTexCycleTexPtrs_00A4D0[];
extern u8 object_ggTexCycleTexIndices_00A4E0[];
extern AnimatedMatTexCycleParams object_gg_Matanimheader_00A4F4TexCycleParams_00A4E4;
extern AnimatedMaterial object_gg_Matanimheader_00A4F4[];
extern s16 object_gg_Anim_00AF40FrameData[];
extern JointIndex object_gg_Anim_00AF40JointIndices[];
extern AnimationHeader object_gg_Anim_00AF40;
extern s16 object_gg_Anim_00B560FrameData[];
extern JointIndex object_gg_Anim_00B560JointIndices[];
extern AnimationHeader object_gg_Anim_00B560;
extern s16 object_gg_Anim_00BAF0FrameData[];
extern JointIndex object_gg_Anim_00BAF0JointIndices[];
extern AnimationHeader object_gg_Anim_00BAF0;
extern s16 object_gg_Anim_00CDA0FrameData[];
extern JointIndex object_gg_Anim_00CDA0JointIndices[];
extern AnimationHeader object_gg_Anim_00CDA0;
extern s16 object_gg_Anim_00D174FrameData[];
extern JointIndex object_gg_Anim_00D174JointIndices[];
extern AnimationHeader object_gg_Anim_00D174;
extern s16 object_gg_Anim_00D528FrameData[];
extern JointIndex object_gg_Anim_00D528JointIndices[];
extern AnimationHeader object_gg_Anim_00D528;
extern s16 object_gg_Anim_00D99CFrameData[];
extern JointIndex object_gg_Anim_00D99CJointIndices[];
extern AnimationHeader object_gg_Anim_00D99C;
extern s16 object_gg_Anim_00E2A4FrameData[];
extern JointIndex object_gg_Anim_00E2A4JointIndices[];
extern AnimationHeader object_gg_Anim_00E2A4;
extern s16 object_gg_Anim_00E86CFrameData[];
extern JointIndex object_gg_Anim_00E86CJointIndices[];
extern AnimationHeader object_gg_Anim_00E86C;
extern s16 object_gg_Anim_00ECC0FrameData[];
extern JointIndex object_gg_Anim_00ECC0JointIndices[];
extern AnimationHeader object_gg_Anim_00ECC0;
extern s16 object_gg_Anim_00F578FrameData[];
extern JointIndex object_gg_Anim_00F578JointIndices[];
extern AnimationHeader object_gg_Anim_00F578;
extern StandardLimb object_gg_Standardlimb_00F590;
extern StandardLimb object_gg_Standardlimb_00F59C;
extern StandardLimb object_gg_Standardlimb_00F5A8;
extern StandardLimb object_gg_Standardlimb_00F5B4;
extern StandardLimb object_gg_Standardlimb_00F5C0;
extern StandardLimb object_gg_Standardlimb_00F5CC;
extern StandardLimb object_gg_Standardlimb_00F5D8;
extern StandardLimb object_gg_Standardlimb_00F5E4;
extern StandardLimb object_gg_Standardlimb_00F5F0;
extern StandardLimb object_gg_Standardlimb_00F5FC;
extern StandardLimb object_gg_Standardlimb_00F608;
extern StandardLimb object_gg_Standardlimb_00F614;
extern StandardLimb object_gg_Standardlimb_00F620;
extern StandardLimb object_gg_Standardlimb_00F62C;
extern StandardLimb object_gg_Standardlimb_00F638;
extern StandardLimb object_gg_Standardlimb_00F644;
extern StandardLimb object_gg_Standardlimb_00F650;
extern StandardLimb object_gg_Standardlimb_00F65C;
extern StandardLimb object_gg_Standardlimb_00F668;
extern void* object_gg_Skel_00F6C0Limbs[];
extern FlexSkeletonHeader object_gg_Skel_00F6C0;
extern s16 object_gg_Anim_0100C8FrameData[];
extern JointIndex object_gg_Anim_0100C8JointIndices[];
extern AnimationHeader object_gg_Anim_0100C8;
#endif
