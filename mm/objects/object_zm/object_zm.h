#ifndef OBJECT_ZM_H
#define OBJECT_ZM_H 1

typedef enum ObjectZmLimb {
    /* 0x00 */ OBJECT_ZM_LIMB_NONE,
    /* 0x01 */ OBJECT_ZM_LIMB_01,
    /* 0x02 */ OBJECT_ZM_LIMB_02,
    /* 0x03 */ OBJECT_ZM_LIMB_03,
    /* 0x04 */ OBJECT_ZM_LIMB_04,
    /* 0x05 */ OBJECT_ZM_LIMB_05,
    /* 0x06 */ OBJECT_ZM_LIMB_06,
    /* 0x07 */ OBJECT_ZM_LIMB_07,
    /* 0x08 */ OBJECT_ZM_LIMB_08,
    /* 0x09 */ OBJECT_ZM_LIMB_09,
    /* 0x0A */ OBJECT_ZM_LIMB_0A,
    /* 0x0B */ OBJECT_ZM_LIMB_0B,
    /* 0x0C */ OBJECT_ZM_LIMB_0C,
    /* 0x0D */ OBJECT_ZM_LIMB_0D,
    /* 0x0E */ OBJECT_ZM_LIMB_0E,
    /* 0x0F */ OBJECT_ZM_LIMB_0F,
    /* 0x10 */ OBJECT_ZM_LIMB_10,
    /* 0x11 */ OBJECT_ZM_LIMB_11,
    /* 0x12 */ OBJECT_ZM_LIMB_MAX
} ObjectZmLimb;

extern s16 object_zm_Anim_000C80FrameData[];
extern JointIndex object_zm_Anim_000C80JointIndices[];
extern AnimationHeader object_zm_Anim_000C80;
extern s16 object_zm_Anim_001324FrameData[];
extern JointIndex object_zm_Anim_001324JointIndices[];
extern AnimationHeader object_zm_Anim_001324;
extern s16 object_zm_Anim_0016A4FrameData[];
extern JointIndex object_zm_Anim_0016A4JointIndices[];
extern AnimationHeader object_zm_Anim_0016A4;
extern s16 object_zm_Anim_001DF0FrameData[];
extern JointIndex object_zm_Anim_001DF0JointIndices[];
extern AnimationHeader object_zm_Anim_001DF0;
extern s16 object_zm_Anim_0022C8FrameData[];
extern JointIndex object_zm_Anim_0022C8JointIndices[];
extern AnimationHeader object_zm_Anim_0022C8;
extern s16 object_zm_Anim_0028B8FrameData[];
extern JointIndex object_zm_Anim_0028B8JointIndices[];
extern AnimationHeader object_zm_Anim_0028B8;
extern s16 object_zm_Anim_002F20FrameData[];
extern JointIndex object_zm_Anim_002F20JointIndices[];
extern AnimationHeader object_zm_Anim_002F20;
extern s16 object_zm_Anim_003AA8FrameData[];
extern JointIndex object_zm_Anim_003AA8JointIndices[];
extern AnimationHeader object_zm_Anim_003AA8;
extern Vtx object_zmVtx_003AC0[];
extern Gfx object_zm_DL_0063A0[];
extern Gfx object_zm_DL_0066D0[];
extern Gfx object_zm_DL_006898[];
extern Gfx object_zm_DL_0069D8[];
extern Gfx object_zm_DL_006C38[];
extern Gfx object_zm_DL_006E00[];
extern Gfx object_zm_DL_006F40[];
extern Gfx object_zm_DL_007178[];
extern Gfx object_zm_DL_0076F8[];
extern Gfx object_zm_DL_0078A0[];
extern Gfx object_zm_DL_007A18[];
extern Gfx object_zm_DL_007B18[];
extern Gfx object_zm_DL_007C38[];
extern Gfx object_zm_DL_007D60[];
extern Gfx object_zm_DL_007E60[];
extern Gfx object_zm_DL_007F80[];
extern u64 object_zm_TLUT_0080A8[];
extern u64 object_zm_Tex_0082A8[];
extern u64 object_zm_Tex_0082E8[];
extern u64 object_zm_Tex_0086E8[];
extern u64 object_zm_Tex_008AE8[];
extern u64 object_zm_Tex_008EE8[];
extern u64 object_zm_Tex_008FE8[];
extern u64 object_zm_Tex_0097E8[];
extern u64 object_zm_Tex_009868[];
extern u64 object_zm_Tex_009968[];
extern u64 object_zm_Tex_009A68[];
extern u64 object_zm_Tex_009C68[];
extern u64 object_zm_Tex_00A068[];
extern u64 object_zm_Tex_00A468[];
extern StandardLimb object_zm_Standardlimb_00A868;
extern StandardLimb object_zm_Standardlimb_00A874;
extern StandardLimb object_zm_Standardlimb_00A880;
extern StandardLimb object_zm_Standardlimb_00A88C;
extern StandardLimb object_zm_Standardlimb_00A898;
extern StandardLimb object_zm_Standardlimb_00A8A4;
extern StandardLimb object_zm_Standardlimb_00A8B0;
extern StandardLimb object_zm_Standardlimb_00A8BC;
extern StandardLimb object_zm_Standardlimb_00A8C8;
extern StandardLimb object_zm_Standardlimb_00A8D4;
extern StandardLimb object_zm_Standardlimb_00A8E0;
extern StandardLimb object_zm_Standardlimb_00A8EC;
extern StandardLimb object_zm_Standardlimb_00A8F8;
extern StandardLimb object_zm_Standardlimb_00A904;
extern StandardLimb object_zm_Standardlimb_00A910;
extern StandardLimb object_zm_Standardlimb_00A91C;
extern StandardLimb object_zm_Standardlimb_00A928;
extern void* object_zm_Skel_00A978Limbs[];
extern FlexSkeletonHeader object_zm_Skel_00A978;
extern s16 object_zm_Anim_00B3E0FrameData[];
extern JointIndex object_zm_Anim_00B3E0JointIndices[];
extern AnimationHeader object_zm_Anim_00B3E0;
extern s16 object_zm_Anim_00B894FrameData[];
extern JointIndex object_zm_Anim_00B894JointIndices[];
extern AnimationHeader object_zm_Anim_00B894;
extern s16 object_zm_Anim_00BC08FrameData[];
extern JointIndex object_zm_Anim_00BC08JointIndices[];
extern AnimationHeader object_zm_Anim_00BC08;
extern s16 object_zm_Anim_00C880FrameData[];
extern JointIndex object_zm_Anim_00C880JointIndices[];
extern AnimationHeader object_zm_Anim_00C880;
#endif
