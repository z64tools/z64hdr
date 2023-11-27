#ifndef OBJECT_SB_H
#define OBJECT_SB_H 1

typedef enum ObjectSbLimb {
    /* 0x00 */ OBJECT_SB_LIMB_NONE,
    /* 0x01 */ OBJECT_SB_LIMB_01,
    /* 0x02 */ OBJECT_SB_LIMB_02,
    /* 0x03 */ OBJECT_SB_LIMB_03,
    /* 0x04 */ OBJECT_SB_LIMB_04,
    /* 0x05 */ OBJECT_SB_LIMB_05,
    /* 0x06 */ OBJECT_SB_LIMB_06,
    /* 0x07 */ OBJECT_SB_LIMB_07,
    /* 0x08 */ OBJECT_SB_LIMB_08,
    /* 0x09 */ OBJECT_SB_LIMB_MAX
} ObjectSbLimb;

extern s16 object_sb_Anim_00004CFrameData[];
extern JointIndex object_sb_Anim_00004CJointIndices[];
extern AnimationHeader object_sb_Anim_00004C;
extern s16 object_sb_Anim_0000B4FrameData[];
extern JointIndex object_sb_Anim_0000B4JointIndices[];
extern AnimationHeader object_sb_Anim_0000B4;
extern s16 object_sb_Anim_000124FrameData[];
extern JointIndex object_sb_Anim_000124JointIndices[];
extern AnimationHeader object_sb_Anim_000124;
extern s16 object_sb_Anim_000194FrameData[];
extern JointIndex object_sb_Anim_000194JointIndices[];
extern AnimationHeader object_sb_Anim_000194;
extern Vtx object_sbVtx_000640[];
extern Vtx object_sbVtx_000C00[];
extern Gfx object_sb_DL_000D80[];
extern Gfx object_sb_DL_000E70[];
extern u64 object_sb_Tex_001020[];
extern u64 object_sb_Tex_001820[];
extern u64 object_sb_Tex_001920[];
extern u64 object_sb_Tex_0019A0[];
extern u64 object_sb_Tex_001A20[];
extern Vtx object_sbVtx_001AA0[];
extern Gfx object_sb_DL_0025B0[];
extern Gfx object_sb_DL_002858[];
extern u64 object_sb_Tex_002AF0[];
extern StandardLimb object_sb_Standardlimb_002B70;
extern StandardLimb object_sb_Standardlimb_002B7C;
extern StandardLimb object_sb_Standardlimb_002B88;
extern StandardLimb object_sb_Standardlimb_002B94;
extern StandardLimb object_sb_Standardlimb_002BA0;
extern StandardLimb object_sb_Standardlimb_002BAC;
extern StandardLimb object_sb_Standardlimb_002BB8;
extern StandardLimb object_sb_Standardlimb_002BC4;
extern void* object_sb_Skel_002BF0Limbs[];
extern FlexSkeletonHeader object_sb_Skel_002BF0;
extern s16 object_sb_Anim_002C8CFrameData[];
extern JointIndex object_sb_Anim_002C8CJointIndices[];
extern AnimationHeader object_sb_Anim_002C8C;
#endif
