#ifndef OBJECT_TORYO_H
#define OBJECT_TORYO_H 1

typedef enum ObjectToryoLimb {
    /* 0x00 */ OBJECT_TORYO_LIMB_NONE,
    /* 0x01 */ OBJECT_TORYO_LIMB_01,
    /* 0x02 */ OBJECT_TORYO_LIMB_02,
    /* 0x03 */ OBJECT_TORYO_LIMB_03,
    /* 0x04 */ OBJECT_TORYO_LIMB_04,
    /* 0x05 */ OBJECT_TORYO_LIMB_05,
    /* 0x06 */ OBJECT_TORYO_LIMB_06,
    /* 0x07 */ OBJECT_TORYO_LIMB_07,
    /* 0x08 */ OBJECT_TORYO_LIMB_08,
    /* 0x09 */ OBJECT_TORYO_LIMB_09,
    /* 0x0A */ OBJECT_TORYO_LIMB_0A,
    /* 0x0B */ OBJECT_TORYO_LIMB_0B,
    /* 0x0C */ OBJECT_TORYO_LIMB_0C,
    /* 0x0D */ OBJECT_TORYO_LIMB_0D,
    /* 0x0E */ OBJECT_TORYO_LIMB_0E,
    /* 0x0F */ OBJECT_TORYO_LIMB_0F,
    /* 0x10 */ OBJECT_TORYO_LIMB_10,
    /* 0x11 */ OBJECT_TORYO_LIMB_MAX
} ObjectToryoLimb;

extern s16 object_toryo_Anim_000E50FrameData[];
extern JointIndex object_toryo_Anim_000E50JointIndices[];
extern AnimationHeader object_toryo_Anim_000E50;
extern u64 object_toryo_TLUT_000E60[];
extern u64 object_toryo_Tex_001060[];
extern u64 object_toryo_Tex_001160[];
extern u64 object_toryo_Tex_001180[];
extern u64 object_toryo_Tex_0011C0[];
extern u64 object_toryo_Tex_001200[];
extern u64 object_toryo_Tex_001240[];
extern u64 object_toryo_Tex_0012C0[];
extern u64 object_toryo_Tex_0016C0[];
extern u64 object_toryo_Tex_0017C0[];
extern u64 object_toryo_Tex_0018C0[];
extern u64 object_toryo_Tex_0019C0[];
extern u64 object_toryo_Tex_001A00[];
extern u64 object_toryo_Tex_001A80[];
extern u64 object_toryo_Tex_001B80[];
extern Vtx object_toryoVtx_001C80[];
extern Gfx object_toryo_DL_004B20[];
extern Gfx object_toryo_DL_004F20[];
extern Gfx object_toryo_DL_005438[];
extern Gfx object_toryo_DL_005720[];
extern Gfx object_toryo_DL_005958[];
extern Gfx object_toryo_DL_005BA0[];
extern Gfx object_toryo_DL_005D10[];
extern Gfx object_toryo_DL_005EC8[];
extern Gfx object_toryo_DL_006110[];
extern Gfx object_toryo_DL_006280[];
extern Gfx object_toryo_DL_0064B8[];
extern Gfx object_toryo_DL_0067E0[];
extern Gfx object_toryo_DL_0068E8[];
extern Gfx object_toryo_DL_006A88[];
extern Gfx object_toryo_DL_006DA8[];
extern Gfx object_toryo_DL_006EB0[];
extern StandardLimb object_toryo_Standardlimb_007050;
extern StandardLimb object_toryo_Standardlimb_00705C;
extern StandardLimb object_toryo_Standardlimb_007068;
extern StandardLimb object_toryo_Standardlimb_007074;
extern StandardLimb object_toryo_Standardlimb_007080;
extern StandardLimb object_toryo_Standardlimb_00708C;
extern StandardLimb object_toryo_Standardlimb_007098;
extern StandardLimb object_toryo_Standardlimb_0070A4;
extern StandardLimb object_toryo_Standardlimb_0070B0;
extern StandardLimb object_toryo_Standardlimb_0070BC;
extern StandardLimb object_toryo_Standardlimb_0070C8;
extern StandardLimb object_toryo_Standardlimb_0070D4;
extern StandardLimb object_toryo_Standardlimb_0070E0;
extern StandardLimb object_toryo_Standardlimb_0070EC;
extern StandardLimb object_toryo_Standardlimb_0070F8;
extern StandardLimb object_toryo_Standardlimb_007104;
extern void* object_toryo_Skel_007150Limbs[];
extern FlexSkeletonHeader object_toryo_Skel_007150;
#endif
