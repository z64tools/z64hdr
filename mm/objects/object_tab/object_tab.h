#ifndef OBJECT_TAB_H
#define OBJECT_TAB_H 1

typedef enum ObjectTabLimb {
    /* 0x00 */ OBJECT_TAB_LIMB_NONE,
    /* 0x01 */ OBJECT_TAB_LIMB_01,
    /* 0x02 */ OBJECT_TAB_LIMB_02,
    /* 0x03 */ OBJECT_TAB_LIMB_03,
    /* 0x04 */ OBJECT_TAB_LIMB_04,
    /* 0x05 */ OBJECT_TAB_LIMB_05,
    /* 0x06 */ OBJECT_TAB_LIMB_06,
    /* 0x07 */ OBJECT_TAB_LIMB_07,
    /* 0x08 */ OBJECT_TAB_LIMB_08,
    /* 0x09 */ OBJECT_TAB_LIMB_09,
    /* 0x0A */ OBJECT_TAB_LIMB_0A,
    /* 0x0B */ OBJECT_TAB_LIMB_0B,
    /* 0x0C */ OBJECT_TAB_LIMB_0C,
    /* 0x0D */ OBJECT_TAB_LIMB_0D,
    /* 0x0E */ OBJECT_TAB_LIMB_0E,
    /* 0x0F */ OBJECT_TAB_LIMB_0F,
    /* 0x10 */ OBJECT_TAB_LIMB_10,
    /* 0x11 */ OBJECT_TAB_LIMB_11,
    /* 0x12 */ OBJECT_TAB_LIMB_12,
    /* 0x13 */ OBJECT_TAB_LIMB_13,
    /* 0x14 */ OBJECT_TAB_LIMB_MAX
} ObjectTabLimb;

extern s16 object_tab_Anim_000758FrameData[];
extern JointIndex object_tab_Anim_000758JointIndices[];
extern AnimationHeader object_tab_Anim_000758;
extern Vtx object_tabVtx_000770[];
extern Gfx object_tab_DL_003E10[];
extern Gfx object_tab_DL_003EF0[];
extern Gfx object_tab_DL_004270[];
extern Gfx object_tab_DL_004438[];
extern Gfx object_tab_DL_0046C8[];
extern Gfx object_tab_DL_0047F8[];
extern Gfx object_tab_DL_004B70[];
extern Gfx object_tab_DL_004E00[];
extern Gfx object_tab_DL_004F30[];
extern Gfx object_tab_DL_005178[];
extern Gfx object_tab_DL_005668[];
extern Gfx object_tab_DL_005758[];
extern Gfx object_tab_DL_005840[];
extern Gfx object_tab_DL_005988[];
extern Gfx object_tab_DL_005A78[];
extern Gfx object_tab_DL_005B60[];
extern u64 object_tab_TLUT_005CA8[];
extern u64 object_tab_Tex_005EA8[];
extern u64 object_tab_Tex_0060A8[];
extern u64 object_tab_Tex_006128[];
extern u64 object_tab_Tex_006328[];
extern u64 object_tab_Tex_006368[];
extern u64 object_tab_Tex_0063E8[];
extern u64 object_tab_Tex_006428[];
extern u64 object_tab_Tex_006828[];
extern u64 object_tab_Tex_006928[];
extern u64 object_tab_Tex_006D28[];
extern u64 object_tab_Tex_007128[];
extern u64 object_tab_Tex_007228[];
extern u64 object_tab_Tex_007328[];
extern u64 object_tab_Tex_007728[];
extern u64 object_tab_Tex_007828[];
extern u64 object_tab_Tex_007868[];
extern u64 object_tab_Tex_0078E8[];
extern u64 object_tab_Tex_0079E8[];
extern u64 object_tab_Tex_007A28[];
extern StandardLimb object_tab_Standardlimb_007E48;
extern StandardLimb object_tab_Standardlimb_007E54;
extern StandardLimb object_tab_Standardlimb_007E60;
extern StandardLimb object_tab_Standardlimb_007E6C;
extern StandardLimb object_tab_Standardlimb_007E78;
extern StandardLimb object_tab_Standardlimb_007E84;
extern StandardLimb object_tab_Standardlimb_007E90;
extern StandardLimb object_tab_Standardlimb_007E9C;
extern StandardLimb object_tab_Standardlimb_007EA8;
extern StandardLimb object_tab_Standardlimb_007EB4;
extern StandardLimb object_tab_Standardlimb_007EC0;
extern StandardLimb object_tab_Standardlimb_007ECC;
extern StandardLimb object_tab_Standardlimb_007ED8;
extern StandardLimb object_tab_Standardlimb_007EE4;
extern StandardLimb object_tab_Standardlimb_007EF0;
extern StandardLimb object_tab_Standardlimb_007EFC;
extern StandardLimb object_tab_Standardlimb_007F08;
extern StandardLimb object_tab_Standardlimb_007F14;
extern StandardLimb object_tab_Standardlimb_007F20;
extern void* object_tab_Skel_007F78Limbs[];
extern FlexSkeletonHeader object_tab_Skel_007F78;
extern s16 object_tab_Anim_0086ACFrameData[];
extern JointIndex object_tab_Anim_0086ACJointIndices[];
extern AnimationHeader object_tab_Anim_0086AC;
#endif
