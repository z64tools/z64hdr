#ifndef OBJECT_PH_H
#define OBJECT_PH_H 1

typedef enum ObjectPhLimb {
    /* 0x00 */ OBJECT_PH_LIMB_NONE,
    /* 0x01 */ OBJECT_PH_LIMB_01,
    /* 0x02 */ OBJECT_PH_LIMB_02,
    /* 0x03 */ OBJECT_PH_LIMB_03,
    /* 0x04 */ OBJECT_PH_LIMB_04,
    /* 0x05 */ OBJECT_PH_LIMB_05,
    /* 0x06 */ OBJECT_PH_LIMB_06,
    /* 0x07 */ OBJECT_PH_LIMB_07,
    /* 0x08 */ OBJECT_PH_LIMB_08,
    /* 0x09 */ OBJECT_PH_LIMB_09,
    /* 0x0A */ OBJECT_PH_LIMB_0A,
    /* 0x0B */ OBJECT_PH_LIMB_0B,
    /* 0x0C */ OBJECT_PH_LIMB_0C,
    /* 0x0D */ OBJECT_PH_LIMB_0D,
    /* 0x0E */ OBJECT_PH_LIMB_0E,
    /* 0x0F */ OBJECT_PH_LIMB_0F,
    /* 0x10 */ OBJECT_PH_LIMB_10,
    /* 0x11 */ OBJECT_PH_LIMB_11,
    /* 0x12 */ OBJECT_PH_LIMB_12,
    /* 0x13 */ OBJECT_PH_LIMB_13,
    /* 0x14 */ OBJECT_PH_LIMB_14,
    /* 0x15 */ OBJECT_PH_LIMB_15,
    /* 0x16 */ OBJECT_PH_LIMB_16,
    /* 0x17 */ OBJECT_PH_LIMB_17,
    /* 0x18 */ OBJECT_PH_LIMB_MAX
} ObjectPhLimb;

extern s16 object_ph_Anim_000350FrameData[];
extern JointIndex object_ph_Anim_000350JointIndices[];
extern AnimationHeader object_ph_Anim_000350;
extern s16 object_ph_Anim_0005C4FrameData[];
extern JointIndex object_ph_Anim_0005C4JointIndices[];
extern AnimationHeader object_ph_Anim_0005C4;
extern s16 object_ph_Anim_000844FrameData[];
extern JointIndex object_ph_Anim_000844JointIndices[];
extern AnimationHeader object_ph_Anim_000844;
extern s16 object_ph_Anim_0009C4FrameData[];
extern JointIndex object_ph_Anim_0009C4JointIndices[];
extern AnimationHeader object_ph_Anim_0009C4;
extern Vtx object_phVtx_0009E0[];
extern Gfx object_ph_DL_000ED0[];
extern Gfx object_ph_DL_000F60[];
extern Gfx object_ph_DL_000FF0[];
extern Gfx object_ph_DL_001080[];
extern Gfx object_ph_DL_001110[];
extern Gfx object_ph_DL_0011A0[];
extern Gfx object_ph_DL_001230[];
extern Gfx object_ph_DL_0012F0[];
extern u64 object_ph_Tex_001410[];
extern u64 object_ph_Tex_001490[];
extern u64 object_ph_Tex_001890[];
extern u64 object_ph_Tex_001A90[];
extern StandardLimb object_ph_Standardlimb_001B10;
extern StandardLimb object_ph_Standardlimb_001B1C;
extern StandardLimb object_ph_Standardlimb_001B28;
extern StandardLimb object_ph_Standardlimb_001B34;
extern StandardLimb object_ph_Standardlimb_001B40;
extern StandardLimb object_ph_Standardlimb_001B4C;
extern StandardLimb object_ph_Standardlimb_001B58;
extern StandardLimb object_ph_Standardlimb_001B64;
extern StandardLimb object_ph_Standardlimb_001B70;
extern StandardLimb object_ph_Standardlimb_001B7C;
extern StandardLimb object_ph_Standardlimb_001B88;
extern StandardLimb object_ph_Standardlimb_001B94;
extern StandardLimb object_ph_Standardlimb_001BA0;
extern StandardLimb object_ph_Standardlimb_001BAC;
extern StandardLimb object_ph_Standardlimb_001BB8;
extern StandardLimb object_ph_Standardlimb_001BC4;
extern StandardLimb object_ph_Standardlimb_001BD0;
extern StandardLimb object_ph_Standardlimb_001BDC;
extern StandardLimb object_ph_Standardlimb_001BE8;
extern StandardLimb object_ph_Standardlimb_001BF4;
extern StandardLimb object_ph_Standardlimb_001C00;
extern StandardLimb object_ph_Standardlimb_001C0C;
extern StandardLimb object_ph_Standardlimb_001C18;
extern void* object_ph_Skel_001C80Limbs[];
extern SkeletonHeader object_ph_Skel_001C80;
#endif
