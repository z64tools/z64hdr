#ifndef OBJECT_DS2_H
#define OBJECT_DS2_H 1

typedef enum ObjectDs2Limb {
    /* 0x00 */ OBJECT_DS2_LIMB_NONE,
    /* 0x01 */ OBJECT_DS2_LIMB_01,
    /* 0x02 */ OBJECT_DS2_LIMB_02,
    /* 0x03 */ OBJECT_DS2_LIMB_03,
    /* 0x04 */ OBJECT_DS2_LIMB_04,
    /* 0x05 */ OBJECT_DS2_LIMB_05,
    /* 0x06 */ OBJECT_DS2_LIMB_06,
    /* 0x07 */ OBJECT_DS2_LIMB_07,
    /* 0x08 */ OBJECT_DS2_LIMB_08,
    /* 0x09 */ OBJECT_DS2_LIMB_MAX
} ObjectDs2Limb;

extern s16 object_ds2_Anim_0002E4FrameData[];
extern JointIndex object_ds2_Anim_0002E4JointIndices[];
extern AnimationHeader object_ds2_Anim_0002E4;
extern Vtx object_ds2Vtx_000300[];
extern Gfx object_ds2_DL_001990[];
extern Gfx object_ds2_DL_001C98[];
extern Gfx object_ds2_DL_002188[];
extern Gfx object_ds2_DL_0022B0[];
extern Gfx object_ds2_DL_002480[];
extern Gfx object_ds2_DL_002610[];
extern Gfx object_ds2_DL_002738[];
extern Gfx object_ds2_DL_002908[];
extern u64 object_ds2_TLUT_002A98[];
extern u64 object_ds2_Tex_002C98[];
extern u64 object_ds2_Tex_002D98[];
extern u64 object_ds2_Tex_002DD8[];
extern u64 object_ds2_Tex_002ED8[];
extern u64 object_ds2_Tex_003CD8[];
extern u64 object_ds2_Tex_003DD8[];
extern u64 object_ds2_Tex_003ED8[];
extern u64 object_ds2_Tex_003FD8[];
extern StandardLimb object_ds2_Standardlimb_0041D8;
extern StandardLimb object_ds2_Standardlimb_0041E4;
extern StandardLimb object_ds2_Standardlimb_0041F0;
extern StandardLimb object_ds2_Standardlimb_0041FC;
extern StandardLimb object_ds2_Standardlimb_004208;
extern StandardLimb object_ds2_Standardlimb_004214;
extern StandardLimb object_ds2_Standardlimb_004220;
extern StandardLimb object_ds2_Standardlimb_00422C;
extern void* object_ds2_Skel_004258Limbs[];
extern FlexSkeletonHeader object_ds2_Skel_004258;
#endif
