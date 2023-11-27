#ifndef OBJECT_ST_H
#define OBJECT_ST_H 1

typedef enum ObjectStLimb {
    /* 0x00 */ OBJECT_ST_LIMB_NONE,
    /* 0x01 */ OBJECT_ST_LIMB_01,
    /* 0x02 */ OBJECT_ST_LIMB_02,
    /* 0x03 */ OBJECT_ST_LIMB_03,
    /* 0x04 */ OBJECT_ST_LIMB_04,
    /* 0x05 */ OBJECT_ST_LIMB_05,
    /* 0x06 */ OBJECT_ST_LIMB_06,
    /* 0x07 */ OBJECT_ST_LIMB_07,
    /* 0x08 */ OBJECT_ST_LIMB_08,
    /* 0x09 */ OBJECT_ST_LIMB_09,
    /* 0x0A */ OBJECT_ST_LIMB_0A,
    /* 0x0B */ OBJECT_ST_LIMB_0B,
    /* 0x0C */ OBJECT_ST_LIMB_0C,
    /* 0x0D */ OBJECT_ST_LIMB_0D,
    /* 0x0E */ OBJECT_ST_LIMB_0E,
    /* 0x0F */ OBJECT_ST_LIMB_0F,
    /* 0x10 */ OBJECT_ST_LIMB_10,
    /* 0x11 */ OBJECT_ST_LIMB_11,
    /* 0x12 */ OBJECT_ST_LIMB_12,
    /* 0x13 */ OBJECT_ST_LIMB_13,
    /* 0x14 */ OBJECT_ST_LIMB_14,
    /* 0x15 */ OBJECT_ST_LIMB_15,
    /* 0x16 */ OBJECT_ST_LIMB_16,
    /* 0x17 */ OBJECT_ST_LIMB_17,
    /* 0x18 */ OBJECT_ST_LIMB_18,
    /* 0x19 */ OBJECT_ST_LIMB_19,
    /* 0x1A */ OBJECT_ST_LIMB_1A,
    /* 0x1B */ OBJECT_ST_LIMB_1B,
    /* 0x1C */ OBJECT_ST_LIMB_1C,
    /* 0x1D */ OBJECT_ST_LIMB_1D,
    /* 0x1E */ OBJECT_ST_LIMB_MAX
} ObjectStLimb;

extern s16 object_st_Anim_000304FrameData[];
extern JointIndex object_st_Anim_000304JointIndices[];
extern AnimationHeader object_st_Anim_000304;
extern u64 object_st_Tex_000320[];
extern u64 object_st_Tex_000360[];
extern u64 object_st_Tex_000460[];
extern u64 object_st_Tex_0004E0[];
extern u64 object_st_Tex_000560[];
extern u64 object_st_Tex_000760[];
extern u64 object_st_Tex_0007E0[];
extern Vtx object_stVtx_000860[];
extern Gfx object_st_DL_001A40[];
extern Gfx object_st_DL_001C30[];
extern Gfx object_st_DL_001FD0[];
extern Gfx object_st_DL_002068[];
extern Gfx object_st_DL_002100[];
extern Gfx object_st_DL_002198[];
extern Gfx object_st_DL_002230[];
extern Gfx object_st_DL_0022C8[];
extern Gfx object_st_DL_002360[];
extern Gfx object_st_DL_0023F8[];
extern u64 object_st_Tex_002490[];
extern u64 object_st_Tex_0024D0[];
extern u64 object_st_Tex_0025D0[];
extern u64 object_st_Tex_002650[];
extern Vtx object_stVtx_0026D0[];
extern Gfx object_st_DL_003FB0[];
extern Gfx object_st_DL_0043D8[];
extern Gfx object_st_DL_0045C0[];
extern Gfx object_st_DL_004658[];
extern Gfx object_st_DL_0046F0[];
extern Gfx object_st_DL_004788[];
extern Gfx object_st_DL_004820[];
extern Gfx object_st_DL_0048B8[];
extern Gfx object_st_DL_004950[];
extern Gfx object_st_DL_0049E8[];
extern Vtx object_stVtx_004A80[];
extern Gfx gSkulltulaTokenDL[];
extern Gfx gSkulltulaTokenFlameDL[];
extern StandardLimb object_st_Standardlimb_0050C8;
extern StandardLimb object_st_Standardlimb_0050D4;
extern StandardLimb object_st_Standardlimb_0050E0;
extern StandardLimb object_st_Standardlimb_0050EC;
extern StandardLimb object_st_Standardlimb_0050F8;
extern StandardLimb object_st_Standardlimb_005104;
extern StandardLimb object_st_Standardlimb_005110;
extern StandardLimb object_st_Standardlimb_00511C;
extern StandardLimb object_st_Standardlimb_005128;
extern StandardLimb object_st_Standardlimb_005134;
extern StandardLimb object_st_Standardlimb_005140;
extern StandardLimb object_st_Standardlimb_00514C;
extern StandardLimb object_st_Standardlimb_005158;
extern StandardLimb object_st_Standardlimb_005164;
extern StandardLimb object_st_Standardlimb_005170;
extern StandardLimb object_st_Standardlimb_00517C;
extern StandardLimb object_st_Standardlimb_005188;
extern StandardLimb object_st_Standardlimb_005194;
extern StandardLimb object_st_Standardlimb_0051A0;
extern StandardLimb object_st_Standardlimb_0051AC;
extern StandardLimb object_st_Standardlimb_0051B8;
extern StandardLimb object_st_Standardlimb_0051C4;
extern StandardLimb object_st_Standardlimb_0051D0;
extern StandardLimb object_st_Standardlimb_0051DC;
extern StandardLimb object_st_Standardlimb_0051E8;
extern StandardLimb object_st_Standardlimb_0051F4;
extern StandardLimb object_st_Standardlimb_005200;
extern StandardLimb object_st_Standardlimb_00520C;
extern StandardLimb object_st_Standardlimb_005218;
extern void* object_st_Skel_005298Limbs[];
extern SkeletonHeader object_st_Skel_005298;
extern s16 object_st_Anim_0055A8FrameData[];
extern JointIndex object_st_Anim_0055A8JointIndices[];
extern AnimationHeader object_st_Anim_0055A8;
extern s16 object_st_Anim_005B98FrameData[];
extern JointIndex object_st_Anim_005B98JointIndices[];
extern AnimationHeader object_st_Anim_005B98;
#endif
