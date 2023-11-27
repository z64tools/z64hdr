#ifndef OBJECT_AH_H
#define OBJECT_AH_H 1

typedef enum ObjectAhLimb {
    /* 0x00 */ OBJECT_AH_LIMB_NONE,
    /* 0x01 */ OBJECT_AH_LIMB_01,
    /* 0x02 */ OBJECT_AH_LIMB_02,
    /* 0x03 */ OBJECT_AH_LIMB_03,
    /* 0x04 */ OBJECT_AH_LIMB_04,
    /* 0x05 */ OBJECT_AH_LIMB_05,
    /* 0x06 */ OBJECT_AH_LIMB_06,
    /* 0x07 */ OBJECT_AH_LIMB_07,
    /* 0x08 */ OBJECT_AH_LIMB_08,
    /* 0x09 */ OBJECT_AH_LIMB_09,
    /* 0x0A */ OBJECT_AH_LIMB_0A,
    /* 0x0B */ OBJECT_AH_LIMB_0B,
    /* 0x0C */ OBJECT_AH_LIMB_0C,
    /* 0x0D */ OBJECT_AH_LIMB_0D,
    /* 0x0E */ OBJECT_AH_LIMB_0E,
    /* 0x0F */ OBJECT_AH_LIMB_0F,
    /* 0x10 */ OBJECT_AH_LIMB_10,
    /* 0x11 */ OBJECT_AH_LIMB_MAX
} ObjectAhLimb;

extern s16 object_ah_Anim_000968FrameData[];
extern JointIndex object_ah_Anim_000968JointIndices[];
extern AnimationHeader object_ah_Anim_000968;
extern s16 object_ah_Anim_000DDCFrameData[];
extern JointIndex object_ah_Anim_000DDCJointIndices[];
extern AnimationHeader object_ah_Anim_000DDC;
extern s16 object_ah_Anim_001860FrameData[];
extern JointIndex object_ah_Anim_001860JointIndices[];
extern AnimationHeader object_ah_Anim_001860;
extern s16 object_ah_Anim_002280FrameData[];
extern JointIndex object_ah_Anim_002280JointIndices[];
extern AnimationHeader object_ah_Anim_002280;
extern Vtx object_ahVtx_002290[];
extern Gfx object_ah_DL_004A60[];
extern Gfx object_ah_DL_004B70[];
extern Gfx object_ah_DL_004C80[];
extern Gfx object_ah_DL_004E78[];
extern Gfx object_ah_DL_005010[];
extern Gfx object_ah_DL_0050E8[];
extern Gfx object_ah_DL_005268[];
extern Gfx object_ah_DL_005400[];
extern Gfx object_ah_DL_0054D8[];
extern Gfx object_ah_DL_0055F0[];
extern Gfx object_ah_DL_005BA8[];
extern Gfx object_ah_DL_005D88[];
extern Gfx object_ah_DL_005EB0[];
extern Gfx object_ah_DL_006090[];
extern Gfx object_ah_DL_0061B8[];
extern u64 object_ah_TLUT_0064B0[];
extern u64 object_ah_Tex_0066B0[];
extern u64 object_ah_Tex_0067B0[];
extern u64 object_ah_Tex_0068B0[];
extern u64 object_ah_Tex_0068F0[];
extern u64 object_ah_Tex_006930[];
extern u64 object_ah_Tex_006970[];
extern u64 object_ah_Tex_006A70[];
extern u64 object_ah_Tex_006AB0[];
extern u64 object_ah_Tex_006BB0[];
extern u64 object_ah_Tex_006C30[];
extern u64 object_ah_Tex_006C70[];
extern u64 object_ah_Tex_006D70[];
extern u64 object_ah_Tex_007570[];
extern u64 object_ah_Tex_007D70[];
extern u64 object_ah_Tex_008570[];
extern u64 object_ah_Tex_008D70[];
extern u64 object_ah_Tex_009570[];
extern StandardLimb object_ah_Standardlimb_009D70;
extern StandardLimb object_ah_Standardlimb_009D7C;
extern StandardLimb object_ah_Standardlimb_009D88;
extern StandardLimb object_ah_Standardlimb_009D94;
extern StandardLimb object_ah_Standardlimb_009DA0;
extern StandardLimb object_ah_Standardlimb_009DAC;
extern StandardLimb object_ah_Standardlimb_009DB8;
extern StandardLimb object_ah_Standardlimb_009DC4;
extern StandardLimb object_ah_Standardlimb_009DD0;
extern StandardLimb object_ah_Standardlimb_009DDC;
extern StandardLimb object_ah_Standardlimb_009DE8;
extern StandardLimb object_ah_Standardlimb_009DF4;
extern StandardLimb object_ah_Standardlimb_009E00;
extern StandardLimb object_ah_Standardlimb_009E0C;
extern StandardLimb object_ah_Standardlimb_009E18;
extern StandardLimb object_ah_Standardlimb_009E24;
extern void* object_ah_Skel_009E70Limbs[];
extern FlexSkeletonHeader object_ah_Skel_009E70;
#endif
