#ifndef OBJECT_BOB_H
#define OBJECT_BOB_H 1

typedef enum ObjectBobLimb {
    /* 0x00 */ OBJECT_BOB_LIMB_NONE,
    /* 0x01 */ OBJECT_BOB_LIMB_01,
    /* 0x02 */ OBJECT_BOB_LIMB_02,
    /* 0x03 */ OBJECT_BOB_LIMB_03,
    /* 0x04 */ OBJECT_BOB_LIMB_04,
    /* 0x05 */ OBJECT_BOB_LIMB_05,
    /* 0x06 */ OBJECT_BOB_LIMB_06,
    /* 0x07 */ OBJECT_BOB_LIMB_07,
    /* 0x08 */ OBJECT_BOB_LIMB_08,
    /* 0x09 */ OBJECT_BOB_LIMB_09,
    /* 0x0A */ OBJECT_BOB_LIMB_0A,
    /* 0x0B */ OBJECT_BOB_LIMB_0B,
    /* 0x0C */ OBJECT_BOB_LIMB_0C,
    /* 0x0D */ OBJECT_BOB_LIMB_0D,
    /* 0x0E */ OBJECT_BOB_LIMB_0E,
    /* 0x0F */ OBJECT_BOB_LIMB_0F,
    /* 0x10 */ OBJECT_BOB_LIMB_MAX
} ObjectBobLimb;

extern StandardLimb object_bob_Standardlimb_000000;
extern StandardLimb object_bob_Standardlimb_00000C;
extern StandardLimb object_bob_Standardlimb_000018;
extern StandardLimb object_bob_Standardlimb_000024;
extern StandardLimb object_bob_Standardlimb_000030;
extern StandardLimb object_bob_Standardlimb_00003C;
extern StandardLimb object_bob_Standardlimb_000048;
extern StandardLimb object_bob_Standardlimb_000054;
extern StandardLimb object_bob_Standardlimb_000060;
extern StandardLimb object_bob_Standardlimb_00006C;
extern StandardLimb object_bob_Standardlimb_000078;
extern StandardLimb object_bob_Standardlimb_000084;
extern StandardLimb object_bob_Standardlimb_000090;
extern StandardLimb object_bob_Standardlimb_00009C;
extern StandardLimb object_bob_Standardlimb_0000A8;
extern void* object_bob_Skel_0000F0Limbs[];
extern FlexSkeletonHeader object_bob_Skel_0000F0;
extern u64 object_bob_TLUT_000108[];
extern u64 object_bob_Tex_000308[];
extern u64 object_bob_Tex_000348[];
extern u64 object_bob_Tex_000388[];
extern u64 object_bob_Tex_000788[];
extern u64 object_bob_Tex_0007C8[];
extern u64 object_bob_Tex_000FC8[];
extern u64 object_bob_Tex_0017C8[];
extern u64 object_bob_Tex_001FC8[];
extern u64 object_bob_Tex_0020C8[];
extern u64 object_bob_Tex_0021C8[];
extern u64 object_bob_Tex_002208[];
extern Vtx object_bobVtx_002308[];
extern Gfx object_bob_DL_003B78[];
extern Gfx object_bob_DL_003F68[];
extern Gfx object_bob_DL_0040B0[];
extern Gfx object_bob_DL_0041E0[];
extern Gfx object_bob_DL_004310[];
extern Gfx object_bob_DL_004458[];
extern Gfx object_bob_DL_004588[];
extern Gfx object_bob_DL_0046B8[];
extern Gfx object_bob_DL_004A48[];
extern Gfx object_bob_DL_004B18[];
extern Gfx object_bob_DL_004BE8[];
extern Gfx object_bob_DL_004C38[];
extern Gfx object_bob_DL_004D08[];
extern Gfx object_bob_DL_004DD8[];
extern Gfx object_bob_DL_004E28[];
#endif
