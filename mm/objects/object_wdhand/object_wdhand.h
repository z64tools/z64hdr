#ifndef OBJECT_WDHAND_H
#define OBJECT_WDHAND_H 1

typedef enum ObjectWdhandLimb {
    /* 0x00 */ OBJECT_WDHAND_LIMB_NONE,
    /* 0x01 */ OBJECT_WDHAND_LIMB_01,
    /* 0x02 */ OBJECT_WDHAND_LIMB_02,
    /* 0x03 */ OBJECT_WDHAND_LIMB_03,
    /* 0x04 */ OBJECT_WDHAND_LIMB_04,
    /* 0x05 */ OBJECT_WDHAND_LIMB_05,
    /* 0x06 */ OBJECT_WDHAND_LIMB_06,
    /* 0x07 */ OBJECT_WDHAND_LIMB_07,
    /* 0x08 */ OBJECT_WDHAND_LIMB_MAX
} ObjectWdhandLimb;

extern s16 object_wdhand_Anim_0000F4FrameData[];
extern JointIndex object_wdhand_Anim_0000F4JointIndices[];
extern AnimationHeader object_wdhand_Anim_0000F4;
extern s16 object_wdhand_Anim_000364FrameData[];
extern JointIndex object_wdhand_Anim_000364JointIndices[];
extern AnimationHeader object_wdhand_Anim_000364;
extern s16 object_wdhand_Anim_000534FrameData[];
extern JointIndex object_wdhand_Anim_000534JointIndices[];
extern AnimationHeader object_wdhand_Anim_000534;
extern s16 object_wdhand_Anim_000854FrameData[];
extern JointIndex object_wdhand_Anim_000854JointIndices[];
extern AnimationHeader object_wdhand_Anim_000854;
extern u64 object_wdhand_Tex_000870[];
extern u64 object_wdhand_Tex_000C70[];
extern u64 object_wdhand_Tex_001070[];
extern Vtx object_wdhandVtx_001470[];
extern Gfx object_wdhand_DL_0014C0[];
extern Vtx object_wdhandVtx_001550[];
extern Gfx object_wdhand_DL_0015B0[];
extern Vtx object_wdhandVtx_001638[];
extern Gfx object_wdhand_DL_001908[];
extern Gfx object_wdhand_DL_001998[];
extern Gfx object_wdhand_DL_001A20[];
extern Gfx object_wdhand_DL_001AD0[];
extern Gfx object_wdhand_DL_001B80[];
extern Gfx object_wdhand_DL_001C40[];
extern Gfx object_wdhand_DL_001CF0[];
extern StandardLimb object_wdhand_Standardlimb_001DB0;
extern StandardLimb object_wdhand_Standardlimb_001DBC;
extern StandardLimb object_wdhand_Standardlimb_001DC8;
extern StandardLimb object_wdhand_Standardlimb_001DD4;
extern StandardLimb object_wdhand_Standardlimb_001DE0;
extern StandardLimb object_wdhand_Standardlimb_001DEC;
extern StandardLimb object_wdhand_Standardlimb_001DF8;
extern void* object_wdhand_Skel_001E20Limbs[];
extern FlexSkeletonHeader object_wdhand_Skel_001E20;
#endif
