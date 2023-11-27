#ifndef OBJECT_KITAN_H
#define OBJECT_KITAN_H 1

typedef enum ObjectKitanLimb {
    /* 0x00 */ OBJECT_KITAN_LIMB_NONE,
    /* 0x01 */ OBJECT_KITAN_LIMB_01,
    /* 0x02 */ OBJECT_KITAN_LIMB_02,
    /* 0x03 */ OBJECT_KITAN_LIMB_03,
    /* 0x04 */ OBJECT_KITAN_LIMB_04,
    /* 0x05 */ OBJECT_KITAN_LIMB_05,
    /* 0x06 */ OBJECT_KITAN_LIMB_06,
    /* 0x07 */ OBJECT_KITAN_LIMB_07,
    /* 0x08 */ OBJECT_KITAN_LIMB_08,
    /* 0x09 */ OBJECT_KITAN_LIMB_09,
    /* 0x0A */ OBJECT_KITAN_LIMB_0A,
    /* 0x0B */ OBJECT_KITAN_LIMB_0B,
    /* 0x0C */ OBJECT_KITAN_LIMB_0C,
    /* 0x0D */ OBJECT_KITAN_LIMB_0D,
    /* 0x0E */ OBJECT_KITAN_LIMB_0E,
    /* 0x0F */ OBJECT_KITAN_LIMB_0F,
    /* 0x10 */ OBJECT_KITAN_LIMB_10,
    /* 0x11 */ OBJECT_KITAN_LIMB_11,
    /* 0x12 */ OBJECT_KITAN_LIMB_12,
    /* 0x13 */ OBJECT_KITAN_LIMB_13,
    /* 0x14 */ OBJECT_KITAN_LIMB_14,
    /* 0x15 */ OBJECT_KITAN_LIMB_MAX
} ObjectKitanLimb;

extern s16 object_kitan_Anim_000CE8FrameData[];
extern JointIndex object_kitan_Anim_000CE8JointIndices[];
extern AnimationHeader object_kitan_Anim_000CE8;
extern s16 object_kitan_Anim_00190CFrameData[];
extern JointIndex object_kitan_Anim_00190CJointIndices[];
extern AnimationHeader object_kitan_Anim_00190C;
extern s16 object_kitan_Anim_002770FrameData[];
extern JointIndex object_kitan_Anim_002770JointIndices[];
extern AnimationHeader object_kitan_Anim_002770;
extern Vtx object_kitanVtx_002780[];
extern Gfx object_kitan_DL_004C40[];
extern Gfx object_kitan_DL_004DF0[];
extern Gfx object_kitan_DL_005160[];
extern Gfx object_kitan_DL_005628[];
extern Gfx object_kitan_DL_005928[];
extern Gfx object_kitan_DL_005B48[];
extern Gfx object_kitan_DL_005E48[];
extern Gfx object_kitan_DL_006068[];
extern Gfx object_kitan_DL_0063E8[];
extern Gfx object_kitan_DL_0065E0[];
extern Gfx object_kitan_DL_0066A8[];
extern Gfx object_kitan_DL_006810[];
extern Gfx object_kitan_DL_006990[];
extern Gfx object_kitan_DL_006A58[];
extern Gfx object_kitan_DL_006BC0[];
extern Gfx object_kitan_DL_006D40[];
extern Gfx object_kitan_DL_006E08[];
extern Gfx object_kitan_DL_006F70[];
extern Gfx object_kitan_DL_0070F0[];
extern Gfx object_kitan_DL_007470[];
extern u64 object_kitan_TLUT_007668[];
extern u64 object_kitan_Tex_007868[];
extern u64 object_kitan_Tex_007A68[];
extern u64 object_kitan_Tex_007B68[];
extern u64 object_kitan_Tex_007C68[];
extern u64 object_kitan_Tex_007D68[];
extern StandardLimb object_kitan_Standardlimb_007E68;
extern StandardLimb object_kitan_Standardlimb_007E74;
extern StandardLimb object_kitan_Standardlimb_007E80;
extern StandardLimb object_kitan_Standardlimb_007E8C;
extern StandardLimb object_kitan_Standardlimb_007E98;
extern StandardLimb object_kitan_Standardlimb_007EA4;
extern StandardLimb object_kitan_Standardlimb_007EB0;
extern StandardLimb object_kitan_Standardlimb_007EBC;
extern StandardLimb object_kitan_Standardlimb_007EC8;
extern StandardLimb object_kitan_Standardlimb_007ED4;
extern StandardLimb object_kitan_Standardlimb_007EE0;
extern StandardLimb object_kitan_Standardlimb_007EEC;
extern StandardLimb object_kitan_Standardlimb_007EF8;
extern StandardLimb object_kitan_Standardlimb_007F04;
extern StandardLimb object_kitan_Standardlimb_007F10;
extern StandardLimb object_kitan_Standardlimb_007F1C;
extern StandardLimb object_kitan_Standardlimb_007F28;
extern StandardLimb object_kitan_Standardlimb_007F34;
extern StandardLimb object_kitan_Standardlimb_007F40;
extern StandardLimb object_kitan_Standardlimb_007F4C;
extern void* object_kitan_Skel_007FA8Limbs[];
extern FlexSkeletonHeader object_kitan_Skel_007FA8;
#endif
