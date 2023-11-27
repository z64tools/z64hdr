#ifndef OBJECT_TSN_H
#define OBJECT_TSN_H 1

typedef enum ObjectTsnLimb {
    /* 0x00 */ OBJECT_TSN_LIMB_NONE,
    /* 0x01 */ OBJECT_TSN_LIMB_01,
    /* 0x02 */ OBJECT_TSN_LIMB_02,
    /* 0x03 */ OBJECT_TSN_LIMB_03,
    /* 0x04 */ OBJECT_TSN_LIMB_04,
    /* 0x05 */ OBJECT_TSN_LIMB_05,
    /* 0x06 */ OBJECT_TSN_LIMB_06,
    /* 0x07 */ OBJECT_TSN_LIMB_07,
    /* 0x08 */ OBJECT_TSN_LIMB_08,
    /* 0x09 */ OBJECT_TSN_LIMB_09,
    /* 0x0A */ OBJECT_TSN_LIMB_0A,
    /* 0x0B */ OBJECT_TSN_LIMB_0B,
    /* 0x0C */ OBJECT_TSN_LIMB_0C,
    /* 0x0D */ OBJECT_TSN_LIMB_0D,
    /* 0x0E */ OBJECT_TSN_LIMB_0E,
    /* 0x0F */ OBJECT_TSN_LIMB_0F,
    /* 0x10 */ OBJECT_TSN_LIMB_10,
    /* 0x11 */ OBJECT_TSN_LIMB_MAX
} ObjectTsnLimb;

extern s16 object_tsn_Anim_000964FrameData[];
extern JointIndex object_tsn_Anim_000964JointIndices[];
extern AnimationHeader object_tsn_Anim_000964;
extern s16 object_tsn_Anim_001198FrameData[];
extern JointIndex object_tsn_Anim_001198JointIndices[];
extern AnimationHeader object_tsn_Anim_001198;
extern Vtx object_tsnVtx_0011B0[];
extern Gfx object_tsn_DL_0043A0[];
extern Gfx object_tsn_DL_0044F0[];
extern Gfx object_tsn_DL_0047C0[];
extern Gfx object_tsn_DL_004B48[];
extern Gfx object_tsn_DL_004F00[];
extern Gfx object_tsn_DL_0050B8[];
extern Gfx object_tsn_DL_005270[];
extern Gfx object_tsn_DL_0053B8[];
extern Gfx object_tsn_DL_0055E8[];
extern Gfx object_tsn_DL_005818[];
extern Gfx object_tsn_DL_005960[];
extern Gfx object_tsn_DL_005B00[];
extern Gfx object_tsn_DL_005CF8[];
extern Gfx object_tsn_DL_005DE8[];
extern Gfx object_tsn_DL_005F88[];
extern Gfx object_tsn_DL_006108[];
extern u64 object_tsn_TLUT_0061F8[];
extern u64 object_tsn_Tex_0063F8[];
extern u64 object_tsn_Tex_006BF8[];
extern u64 object_tsn_Tex_006C38[];
extern u64 object_tsn_Tex_006C78[];
extern u64 object_tsn_Tex_006CB8[];
extern u64 object_tsn_Tex_0070B8[];
extern u64 object_tsn_Tex_0072B8[];
extern u64 object_tsn_Tex_0073B8[];
extern u64 object_tsn_Tex_0077B8[];
extern u64 object_tsn_Tex_007BB8[];
extern u64 object_tsn_Tex_007DB8[];
extern u64 object_tsn_Tex_0085B8[];
extern StandardLimb object_tsn_Standardlimb_0089B8;
extern StandardLimb object_tsn_Standardlimb_0089C4;
extern StandardLimb object_tsn_Standardlimb_0089D0;
extern StandardLimb object_tsn_Standardlimb_0089DC;
extern StandardLimb object_tsn_Standardlimb_0089E8;
extern StandardLimb object_tsn_Standardlimb_0089F4;
extern StandardLimb object_tsn_Standardlimb_008A00;
extern StandardLimb object_tsn_Standardlimb_008A0C;
extern StandardLimb object_tsn_Standardlimb_008A18;
extern StandardLimb object_tsn_Standardlimb_008A24;
extern StandardLimb object_tsn_Standardlimb_008A30;
extern StandardLimb object_tsn_Standardlimb_008A3C;
extern StandardLimb object_tsn_Standardlimb_008A48;
extern StandardLimb object_tsn_Standardlimb_008A54;
extern StandardLimb object_tsn_Standardlimb_008A60;
extern StandardLimb object_tsn_Standardlimb_008A6C;
extern void* object_tsn_Skel_008AB8Limbs[];
extern FlexSkeletonHeader object_tsn_Skel_008AB8;
extern s16 object_tsn_Anim_0092FCFrameData[];
extern JointIndex object_tsn_Anim_0092FCJointIndices[];
extern AnimationHeader object_tsn_Anim_0092FC;
#endif
