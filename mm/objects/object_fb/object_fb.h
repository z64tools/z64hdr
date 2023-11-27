#ifndef OBJECT_FB_H
#define OBJECT_FB_H 1

typedef enum ObjectFbLimb {
    /* 0x00 */ OBJECT_FB_LIMB_NONE,
    /* 0x01 */ OBJECT_FB_LIMB_01,
    /* 0x02 */ OBJECT_FB_LIMB_02,
    /* 0x03 */ OBJECT_FB_LIMB_03,
    /* 0x04 */ OBJECT_FB_LIMB_04,
    /* 0x05 */ OBJECT_FB_LIMB_05,
    /* 0x06 */ OBJECT_FB_LIMB_06,
    /* 0x07 */ OBJECT_FB_LIMB_07,
    /* 0x08 */ OBJECT_FB_LIMB_08,
    /* 0x09 */ OBJECT_FB_LIMB_09,
    /* 0x0A */ OBJECT_FB_LIMB_0A,
    /* 0x0B */ OBJECT_FB_LIMB_0B,
    /* 0x0C */ OBJECT_FB_LIMB_0C,
    /* 0x0D */ OBJECT_FB_LIMB_0D,
    /* 0x0E */ OBJECT_FB_LIMB_0E,
    /* 0x0F */ OBJECT_FB_LIMB_0F,
    /* 0x10 */ OBJECT_FB_LIMB_10,
    /* 0x11 */ OBJECT_FB_LIMB_11,
    /* 0x12 */ OBJECT_FB_LIMB_12,
    /* 0x13 */ OBJECT_FB_LIMB_13,
    /* 0x14 */ OBJECT_FB_LIMB_14,
    /* 0x15 */ OBJECT_FB_LIMB_15,
    /* 0x16 */ OBJECT_FB_LIMB_16,
    /* 0x17 */ OBJECT_FB_LIMB_17,
    /* 0x18 */ OBJECT_FB_LIMB_MAX
} ObjectFbLimb;

extern s16 object_fb_Anim_0006D8FrameData[];
extern JointIndex object_fb_Anim_0006D8JointIndices[];
extern AnimationHeader object_fb_Anim_0006D8;
extern s16 object_fb_Anim_0007D4FrameData[];
extern JointIndex object_fb_Anim_0007D4JointIndices[];
extern AnimationHeader object_fb_Anim_0007D4;
extern s16 object_fb_Anim_000ACCFrameData[];
extern JointIndex object_fb_Anim_000ACCJointIndices[];
extern AnimationHeader object_fb_Anim_000ACC;
extern s16 object_fb_Anim_001174FrameData[];
extern JointIndex object_fb_Anim_001174JointIndices[];
extern AnimationHeader object_fb_Anim_001174;
extern s16 object_fb_Anim_0013ACFrameData[];
extern JointIndex object_fb_Anim_0013ACJointIndices[];
extern AnimationHeader object_fb_Anim_0013AC;
extern Vtx object_fbVtx_0013C0[];
extern Gfx object_fb_DL_002000[];
extern Gfx object_fb_DL_002088[];
extern Gfx object_fb_DL_002110[];
extern Gfx object_fb_DL_0021A8[];
extern Gfx object_fb_DL_002230[];
extern Gfx object_fb_DL_002388[];
extern Gfx object_fb_DL_002418[];
extern Gfx object_fb_DL_0024A8[];
extern Gfx object_fb_DL_0025F8[];
extern Gfx object_fb_DL_002690[];
extern Gfx object_fb_DL_002730[];
extern Gfx object_fb_DL_0027B8[];
extern Gfx object_fb_DL_002870[];
extern Gfx object_fb_DL_002930[];
extern Gfx object_fb_DL_0029F0[];
extern Gfx object_fb_DL_002AD8[];
extern Gfx object_fb_DL_002B98[];
extern Gfx object_fb_DL_002C20[];
extern u64 object_fb_Tex_002D20[];
extern u64 object_fb_Tex_003120[];
extern u64 object_fb_Tex_003520[];
extern u64 object_fb_Tex_003920[];
extern u64 object_fb_Tex_004920[];
extern u64 object_fb_Tex_004B20[];
extern u64 object_fb_Tex_004F20[];
extern u64 object_fb_Tex_005020[];
extern u64 object_fb_Tex_005820[];
extern StandardLimb object_fb_Standardlimb_006020;
extern StandardLimb object_fb_Standardlimb_00602C;
extern StandardLimb object_fb_Standardlimb_006038;
extern StandardLimb object_fb_Standardlimb_006044;
extern StandardLimb object_fb_Standardlimb_006050;
extern StandardLimb object_fb_Standardlimb_00605C;
extern StandardLimb object_fb_Standardlimb_006068;
extern StandardLimb object_fb_Standardlimb_006074;
extern StandardLimb object_fb_Standardlimb_006080;
extern StandardLimb object_fb_Standardlimb_00608C;
extern StandardLimb object_fb_Standardlimb_006098;
extern StandardLimb object_fb_Standardlimb_0060A4;
extern StandardLimb object_fb_Standardlimb_0060B0;
extern StandardLimb object_fb_Standardlimb_0060BC;
extern StandardLimb object_fb_Standardlimb_0060C8;
extern StandardLimb object_fb_Standardlimb_0060D4;
extern StandardLimb object_fb_Standardlimb_0060E0;
extern StandardLimb object_fb_Standardlimb_0060EC;
extern StandardLimb object_fb_Standardlimb_0060F8;
extern StandardLimb object_fb_Standardlimb_006104;
extern StandardLimb object_fb_Standardlimb_006110;
extern StandardLimb object_fb_Standardlimb_00611C;
extern StandardLimb object_fb_Standardlimb_006128;
extern void* object_fb_Skel_006190Limbs[];
extern FlexSkeletonHeader object_fb_Skel_006190;
extern Vtx object_fbVtx_0061A0[];
extern Gfx object_fb_DL_0061E0[];
extern u64 object_fb_Tex_0062A8[];
extern u64 object_fb_Tex_0066A8[];
#endif
