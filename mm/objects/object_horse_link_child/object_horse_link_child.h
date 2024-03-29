#ifndef OBJECT_HORSE_LINK_CHILD_H
#define OBJECT_HORSE_LINK_CHILD_H 1

typedef enum ObjectHorseLinkChildLimb {
    /* 0x00 */ OBJECT_HORSE_LINK_CHILD_LIMB_NONE,
    /* 0x01 */ OBJECT_HORSE_LINK_CHILD_LIMB_01,
    /* 0x02 */ OBJECT_HORSE_LINK_CHILD_LIMB_02,
    /* 0x03 */ OBJECT_HORSE_LINK_CHILD_LIMB_03,
    /* 0x04 */ OBJECT_HORSE_LINK_CHILD_LIMB_04,
    /* 0x05 */ OBJECT_HORSE_LINK_CHILD_LIMB_05,
    /* 0x06 */ OBJECT_HORSE_LINK_CHILD_LIMB_06,
    /* 0x07 */ OBJECT_HORSE_LINK_CHILD_LIMB_07,
    /* 0x08 */ OBJECT_HORSE_LINK_CHILD_LIMB_08,
    /* 0x09 */ OBJECT_HORSE_LINK_CHILD_LIMB_09,
    /* 0x0A */ OBJECT_HORSE_LINK_CHILD_LIMB_0A,
    /* 0x0B */ OBJECT_HORSE_LINK_CHILD_LIMB_0B,
    /* 0x0C */ OBJECT_HORSE_LINK_CHILD_LIMB_0C,
    /* 0x0D */ OBJECT_HORSE_LINK_CHILD_LIMB_0D,
    /* 0x0E */ OBJECT_HORSE_LINK_CHILD_LIMB_0E,
    /* 0x0F */ OBJECT_HORSE_LINK_CHILD_LIMB_0F,
    /* 0x10 */ OBJECT_HORSE_LINK_CHILD_LIMB_10,
    /* 0x11 */ OBJECT_HORSE_LINK_CHILD_LIMB_11,
    /* 0x12 */ OBJECT_HORSE_LINK_CHILD_LIMB_12,
    /* 0x13 */ OBJECT_HORSE_LINK_CHILD_LIMB_13,
    /* 0x14 */ OBJECT_HORSE_LINK_CHILD_LIMB_14,
    /* 0x15 */ OBJECT_HORSE_LINK_CHILD_LIMB_15,
    /* 0x16 */ OBJECT_HORSE_LINK_CHILD_LIMB_16,
    /* 0x17 */ OBJECT_HORSE_LINK_CHILD_LIMB_17,
    /* 0x18 */ OBJECT_HORSE_LINK_CHILD_LIMB_18,
    /* 0x19 */ OBJECT_HORSE_LINK_CHILD_LIMB_19,
    /* 0x1A */ OBJECT_HORSE_LINK_CHILD_LIMB_1A,
    /* 0x1B */ OBJECT_HORSE_LINK_CHILD_LIMB_1B,
    /* 0x1C */ OBJECT_HORSE_LINK_CHILD_LIMB_1C,
    /* 0x1D */ OBJECT_HORSE_LINK_CHILD_LIMB_1D,
    /* 0x1E */ OBJECT_HORSE_LINK_CHILD_LIMB_1E,
    /* 0x1F */ OBJECT_HORSE_LINK_CHILD_LIMB_1F,
    /* 0x20 */ OBJECT_HORSE_LINK_CHILD_LIMB_20,
    /* 0x21 */ OBJECT_HORSE_LINK_CHILD_LIMB_21,
    /* 0x22 */ OBJECT_HORSE_LINK_CHILD_LIMB_22,
    /* 0x23 */ OBJECT_HORSE_LINK_CHILD_LIMB_23,
    /* 0x24 */ OBJECT_HORSE_LINK_CHILD_LIMB_24,
    /* 0x25 */ OBJECT_HORSE_LINK_CHILD_LIMB_25,
    /* 0x26 */ OBJECT_HORSE_LINK_CHILD_LIMB_26,
    /* 0x27 */ OBJECT_HORSE_LINK_CHILD_LIMB_27,
    /* 0x28 */ OBJECT_HORSE_LINK_CHILD_LIMB_28,
    /* 0x29 */ OBJECT_HORSE_LINK_CHILD_LIMB_29,
    /* 0x2A */ OBJECT_HORSE_LINK_CHILD_LIMB_2A,
    /* 0x2B */ OBJECT_HORSE_LINK_CHILD_LIMB_2B,
    /* 0x2C */ OBJECT_HORSE_LINK_CHILD_LIMB_2C,
    /* 0x2D */ OBJECT_HORSE_LINK_CHILD_LIMB_2D,
    /* 0x2E */ OBJECT_HORSE_LINK_CHILD_LIMB_2E,
    /* 0x2F */ OBJECT_HORSE_LINK_CHILD_LIMB_MAX
} ObjectHorseLinkChildLimb;

extern Vtx object_horse_link_childVtx_000000[];
extern Gfx object_horse_link_child_DL_000C70[];
extern Gfx object_horse_link_child_DL_001028[];
extern Gfx object_horse_link_child_DL_0010D8[];
extern Gfx object_horse_link_child_DL_0011E8[];
extern Gfx object_horse_link_child_DL_001298[];
extern Gfx object_horse_link_child_DL_0013A8[];
extern Gfx object_horse_link_child_DL_0014B8[];
extern Gfx object_horse_link_child_DL_001568[];
extern Gfx object_horse_link_child_DL_001678[];
extern u64 gEponaTLUT[];
extern u64 gEponaEyeHalfTex[];
extern u64 gEponaEyeClosedTex[];
extern u64 gEponaEyeOpenTex[];
extern u64 object_horse_link_child_Tex_001F28[];
extern u64 object_horse_link_child_Tex_001F68[];
extern u64 object_horse_link_child_Tex_002168[];
extern u64 object_horse_link_child_Tex_002368[];
extern u64 object_horse_link_child_Tex_002568[];
extern u64 object_horse_link_child_Tex_002588[];
extern u64 object_horse_link_child_Tex_002788[];
extern s16 sEponaGallopAnimFrameData[];
extern JointIndex sEponaGallopAnimJointIndices[];
extern AnimationHeader gEponaGallopAnim;
extern s16 object_horse_link_child_Anim_0035B0FrameData[];
extern JointIndex object_horse_link_child_Anim_0035B0JointIndices[];
extern AnimationHeader object_horse_link_child_Anim_0035B0;
extern s16 object_horse_link_child_Anim_003D38FrameData[];
extern JointIndex object_horse_link_child_Anim_003D38JointIndices[];
extern AnimationHeader object_horse_link_child_Anim_003D38;
extern s16 sEponaTrotAnimFrameData[];
extern JointIndex sEponaTrotAnimJointIndices[];
extern AnimationHeader gEponaTrotAnim;
extern s16 object_horse_link_child_Anim_004DE8FrameData[];
extern JointIndex object_horse_link_child_Anim_004DE8JointIndices[];
extern AnimationHeader object_horse_link_child_Anim_004DE8;
extern s16 object_horse_link_child_Anim_005F64FrameData[];
extern JointIndex object_horse_link_child_Anim_005F64JointIndices[];
extern AnimationHeader object_horse_link_child_Anim_005F64;
extern s16 sEponaIdleAnimFrameData[];
extern JointIndex sEponaIdleAnimJointIndices[];
extern AnimationHeader gEponaIdleAnim;
extern s16 sEponaWhinnyAnimFrameData[];
extern JointIndex sEponaWhinnyAnimJointIndices[];
extern AnimationHeader gEponaWhinnyAnim;
extern s16 sEponaWalkAnimFrameData[];
extern JointIndex sEponaWalkAnimJointIndices[];
extern AnimationHeader gEponaWalkAnim;
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007D60[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007D74[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007D94[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007DA8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007DBC[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007DC8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007DD4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007DF4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007E14[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007E28[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007E48[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007E5C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007E90[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007EA4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007EB0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007ED0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007EF0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007F04[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007F24[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007F38[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007F4C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007F60[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007F6C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007F80[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007F94[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007FA8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007FC8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007FE8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_007FFC[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00801C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008030[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00803C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008050[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00805C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00807C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008090[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0080A4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0080B8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0080D8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0080F8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008104[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008118[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008138[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00814C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00816C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008180[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0081A0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0081B4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0081C8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0081E8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008208[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008214[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008228[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008248[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008268[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008288[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00829C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0082B0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0082BC[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0082C8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0082D4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0082E8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0082FC[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008308[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00831C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008328[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00833C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008350[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008364[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008378[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00838C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0083AC[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0083C0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0083E0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008414[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00843C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00845C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008470[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008484[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008490[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0084A4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0084B0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0084C4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0084D0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0084E4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0084F0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008504[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008524[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008530[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00853C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008550[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008564[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008578[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00858C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0085AC[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0085CC[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0085E0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0085F4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008608[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008628[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00863C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008650[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008664[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008678[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008684[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008690[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00869C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0086A8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0086B4[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0086C8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0086F0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008710[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008738[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00874C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008760[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008780[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0087A8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0087BC[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0087C8[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0087DC[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_0087F0[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008804[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008818[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00882C[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008854[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_008868[];
extern Struct_800A598C_2 object_horse_link_child_Skinlimb_00A138Struct_800A598C_2_00887C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00889C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0088C4[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0088E4[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008904[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008918[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00892C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00894C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00896C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00898C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0089AC[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0089E0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008A00[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008A28[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008A50[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008A78[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008A98[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008AB8[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008AD8[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008B0C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008B34[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008B5C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008B84[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008B90[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008BB0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008BD0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008BF0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008C18[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008C2C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008C40[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008C68[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008C88[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008C9C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008CA8[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008CBC[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008CDC[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008CF0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008D24[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008D44[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008D64[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008D78[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008D8C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008DAC[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008DD4[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008E08[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008E28[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008E50[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008E70[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008E98[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008EB8[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008EE0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008F14[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008F3C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008F5C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008F84[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008F98[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008FC0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008FE0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_008FF4[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009028[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00905C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00907C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00909C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0090B0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0090EC[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009100[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00910C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00912C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00914C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00916C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009194[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0091BC[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0091E4[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0091F8[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00920C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009220[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009248[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009284[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0092A4[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0092B8[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0092E0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009314[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009328[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00933C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009378[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00938C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0093C0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0093D4[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009408[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009428[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009450[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009478[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00948C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0094C8[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0094F0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009504[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00952C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00954C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00956C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00958C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0095B4[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0095DC[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009604[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00962C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009640[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009654[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009668[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00967C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009688[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009694[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0096A8[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0096B4[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0096C0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0096CC[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0096E0[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009700[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009734[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009754[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00977C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009790[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0097CC[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0097F4[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009800[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009828[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_00985C[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_009884[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0098AC[];
extern Struct_800A57C0 object_horse_link_child_Skinlimb_00A138Struct_800A57C0_0098B8[];
extern Struct_800A598C object_horse_link_child_Skinlimb_00A138Struct_800A598C_0098EC[];
extern Struct_800A5E28 object_horse_link_child_Skinlimb_00A138Struct_800A5E28_00A0DC;
extern SkinLimb object_horse_link_child_Skinlimb_00A0E8;
extern SkinLimb object_horse_link_child_Skinlimb_00A0F8;
extern SkinLimb object_horse_link_child_Skinlimb_00A108;
extern SkinLimb object_horse_link_child_Skinlimb_00A118;
extern SkinLimb object_horse_link_child_Skinlimb_00A128;
extern SkinLimb object_horse_link_child_Skinlimb_00A138;
extern SkinLimb object_horse_link_child_Skinlimb_00A148;
extern SkinLimb object_horse_link_child_Skinlimb_00A158;
extern SkinLimb object_horse_link_child_Skinlimb_00A168;
extern SkinLimb object_horse_link_child_Skinlimb_00A178;
extern SkinLimb object_horse_link_child_Skinlimb_00A188;
extern SkinLimb object_horse_link_child_Skinlimb_00A198;
extern SkinLimb object_horse_link_child_Skinlimb_00A1A8;
extern SkinLimb object_horse_link_child_Skinlimb_00A1B8;
extern SkinLimb object_horse_link_child_Skinlimb_00A1C8;
extern SkinLimb object_horse_link_child_Skinlimb_00A1D8;
extern SkinLimb object_horse_link_child_Skinlimb_00A1E8;
extern SkinLimb object_horse_link_child_Skinlimb_00A1F8;
extern SkinLimb object_horse_link_child_Skinlimb_00A208;
extern SkinLimb object_horse_link_child_Skinlimb_00A218;
extern SkinLimb object_horse_link_child_Skinlimb_00A228;
extern SkinLimb object_horse_link_child_Skinlimb_00A238;
extern SkinLimb object_horse_link_child_Skinlimb_00A248;
extern SkinLimb object_horse_link_child_Skinlimb_00A258;
extern SkinLimb object_horse_link_child_Skinlimb_00A268;
extern SkinLimb object_horse_link_child_Skinlimb_00A278;
extern SkinLimb object_horse_link_child_Skinlimb_00A288;
extern SkinLimb object_horse_link_child_Skinlimb_00A298;
extern SkinLimb object_horse_link_child_Skinlimb_00A2A8;
extern SkinLimb object_horse_link_child_Skinlimb_00A2B8;
extern SkinLimb object_horse_link_child_Skinlimb_00A2C8;
extern SkinLimb object_horse_link_child_Skinlimb_00A2D8;
extern SkinLimb object_horse_link_child_Skinlimb_00A2E8;
extern SkinLimb object_horse_link_child_Skinlimb_00A2F8;
extern SkinLimb object_horse_link_child_Skinlimb_00A308;
extern SkinLimb object_horse_link_child_Skinlimb_00A318;
extern SkinLimb object_horse_link_child_Skinlimb_00A328;
extern SkinLimb object_horse_link_child_Skinlimb_00A338;
extern SkinLimb object_horse_link_child_Skinlimb_00A348;
extern SkinLimb object_horse_link_child_Skinlimb_00A358;
extern SkinLimb object_horse_link_child_Skinlimb_00A368;
extern SkinLimb object_horse_link_child_Skinlimb_00A378;
extern SkinLimb object_horse_link_child_Skinlimb_00A388;
extern SkinLimb object_horse_link_child_Skinlimb_00A398;
extern SkinLimb object_horse_link_child_Skinlimb_00A3A8;
extern SkinLimb object_horse_link_child_Skinlimb_00A3B8;
extern void* gEponaSkelLimbs[];
extern SkeletonHeader gEponaSkel;
extern s16 object_horse_link_child_Anim_00A8DCFrameData[];
extern JointIndex object_horse_link_child_Anim_00A8DCJointIndices[];
extern AnimationHeader object_horse_link_child_Anim_00A8DC;
extern s16 object_horse_link_child_Anim_00AD08FrameData[];
extern JointIndex object_horse_link_child_Anim_00AD08JointIndices[];
extern AnimationHeader object_horse_link_child_Anim_00AD08;
extern s16 object_horse_link_child_Anim_00B3E0FrameData[];
extern JointIndex object_horse_link_child_Anim_00B3E0JointIndices[];
extern AnimationHeader object_horse_link_child_Anim_00B3E0;
extern s16 object_horse_link_child_Anim_00BDE0FrameData[];
extern JointIndex object_horse_link_child_Anim_00BDE0JointIndices[];
extern AnimationHeader object_horse_link_child_Anim_00BDE0;
extern s16 object_horse_link_child_Anim_00D178FrameData[];
extern JointIndex object_horse_link_child_Anim_00D178JointIndices[];
extern AnimationHeader object_horse_link_child_Anim_00D178;
extern s16 object_horse_link_child_Anim_00D4E8FrameData[];
extern JointIndex object_horse_link_child_Anim_00D4E8JointIndices[];
extern AnimationHeader object_horse_link_child_Anim_00D4E8;
extern Gfx object_horse_link_child_DL_00D500[];
extern u64 object_horse_link_child_Tex_00DAF0[];
extern u64 object_horse_link_child_Tex_00DCF0[];
#endif
