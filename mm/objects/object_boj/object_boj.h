#ifndef OBJECT_BOJ_H
#define OBJECT_BOJ_H 1

typedef enum ObjectBojLimb {
    /* 0x00 */ OBJECT_BOJ_LIMB_NONE,
    /* 0x01 */ OBJECT_BOJ_LIMB_01,
    /* 0x02 */ OBJECT_BOJ_LIMB_02,
    /* 0x03 */ OBJECT_BOJ_LIMB_03,
    /* 0x04 */ OBJECT_BOJ_LIMB_04,
    /* 0x05 */ OBJECT_BOJ_LIMB_05,
    /* 0x06 */ OBJECT_BOJ_LIMB_06,
    /* 0x07 */ OBJECT_BOJ_LIMB_07,
    /* 0x08 */ OBJECT_BOJ_LIMB_08,
    /* 0x09 */ OBJECT_BOJ_LIMB_09,
    /* 0x0A */ OBJECT_BOJ_LIMB_0A,
    /* 0x0B */ OBJECT_BOJ_LIMB_0B,
    /* 0x0C */ OBJECT_BOJ_LIMB_0C,
    /* 0x0D */ OBJECT_BOJ_LIMB_0D,
    /* 0x0E */ OBJECT_BOJ_LIMB_0E,
    /* 0x0F */ OBJECT_BOJ_LIMB_0F,
    /* 0x10 */ OBJECT_BOJ_LIMB_MAX
} ObjectBojLimb;

extern s16 object_boj_Anim_00041CFrameData[];
extern JointIndex object_boj_Anim_00041CJointIndices[];
extern AnimationHeader object_boj_Anim_00041C;
extern s16 object_boj_Anim_0004D0FrameData[];
extern JointIndex object_boj_Anim_0004D0JointIndices[];
extern AnimationHeader object_boj_Anim_0004D0;
extern s16 object_boj_Anim_00071CFrameData[];
extern JointIndex object_boj_Anim_00071CJointIndices[];
extern AnimationHeader object_boj_Anim_00071C;
extern s16 object_boj_Anim_0008C0FrameData[];
extern JointIndex object_boj_Anim_0008C0JointIndices[];
extern AnimationHeader object_boj_Anim_0008C0;
extern s16 object_boj_Anim_000AC4FrameData[];
extern JointIndex object_boj_Anim_000AC4JointIndices[];
extern AnimationHeader object_boj_Anim_000AC4;
extern s16 object_boj_Anim_001494FrameData[];
extern JointIndex object_boj_Anim_001494JointIndices[];
extern AnimationHeader object_boj_Anim_001494;
extern s16 object_boj_Anim_001908FrameData[];
extern JointIndex object_boj_Anim_001908JointIndices[];
extern AnimationHeader object_boj_Anim_001908;
extern s16 object_boj_Anim_002734FrameData[];
extern JointIndex object_boj_Anim_002734JointIndices[];
extern AnimationHeader object_boj_Anim_002734;
extern s16 object_boj_Anim_0033B0FrameData[];
extern JointIndex object_boj_Anim_0033B0JointIndices[];
extern AnimationHeader object_boj_Anim_0033B0;
extern s16 object_boj_Anim_004078FrameData[];
extern JointIndex object_boj_Anim_004078JointIndices[];
extern AnimationHeader object_boj_Anim_004078;
extern s16 object_boj_Anim_0043F0FrameData[];
extern JointIndex object_boj_Anim_0043F0JointIndices[];
extern AnimationHeader object_boj_Anim_0043F0;
extern s16 object_boj_Anim_004A7CFrameData[];
extern JointIndex object_boj_Anim_004A7CJointIndices[];
extern AnimationHeader object_boj_Anim_004A7C;
extern s16 object_boj_Anim_004F40FrameData[];
extern JointIndex object_boj_Anim_004F40JointIndices[];
extern AnimationHeader object_boj_Anim_004F40;
extern s16 object_boj_Anim_005CE4FrameData[];
extern JointIndex object_boj_Anim_005CE4JointIndices[];
extern AnimationHeader object_boj_Anim_005CE4;
extern s16 object_boj_Anim_005D9CFrameData[];
extern JointIndex object_boj_Anim_005D9CJointIndices[];
extern AnimationHeader object_boj_Anim_005D9C;
extern u64 object_boj_TLUT_005DB0[];
extern u64 object_boj_Tex_005FB0[];
extern u64 object_boj_Tex_006030[];
extern u64 object_boj_Tex_006070[];
extern u64 object_boj_Tex_006270[];
extern u64 object_boj_Tex_0062B0[];
extern u64 object_boj_Tex_0063B0[];
extern u64 object_boj_Tex_0064B0[];
extern u64 object_boj_Tex_0065B0[];
extern u64 object_boj_Tex_0065F0[];
extern u64 object_boj_Tex_0066F0[];
extern u64 object_boj_Tex_006730[];
extern Vtx object_bojVtx_006770[];
extern Gfx object_boj_DL_0083A0[];
extern Gfx object_boj_DL_008778[];
extern Gfx object_boj_DL_0088C0[];
extern Gfx object_boj_DL_0089C8[];
extern Gfx object_boj_DL_008AD0[];
extern Gfx object_boj_DL_008C18[];
extern Gfx object_boj_DL_008D20[];
extern Gfx object_boj_DL_008E28[];
extern Gfx object_boj_DL_009000[];
extern Gfx object_boj_DL_009118[];
extern Gfx object_boj_DL_009228[];
extern Gfx object_boj_DL_009330[];
extern Gfx object_boj_DL_009448[];
extern Gfx object_boj_DL_009558[];
extern Gfx object_boj_DL_009660[];
extern u64 object_bojTLUT_009848[];
extern u64 object_boj_Tex_009A40[];
extern u64 object_boj_Tex_009A80[];
extern u64 object_boj_Tex_009B80[];
extern u64 object_boj_Tex_009C80[];
extern u64 object_boj_Tex_009D00[];
extern u64 object_boj_Tex_009E00[];
extern u64 object_boj_Tex_009F00[];
extern Vtx object_bojVtx_00A000[];
extern Gfx object_boj_DL_00AF90[];
extern Gfx object_boj_DL_00B1D8[];
extern Gfx object_boj_DL_00B3E8[];
extern Gfx object_boj_DL_00B660[];
extern Gfx object_boj_DL_00B878[];
extern Vtx object_bojVtx_00B968[];
extern Gfx object_boj_DL_00BA28[];
extern Gfx object_boj_DL_00BA30[];
extern u64 object_boj_Tex_00BB88[];
extern Vtx object_bojVtx_00BC88[];
extern Gfx object_boj_DL_00BCC8[];
extern u64 object_boj_Tex_00BD50[];
extern StandardLimb object_boj_Standardlimb_00C150;
extern StandardLimb object_boj_Standardlimb_00C15C;
extern StandardLimb object_boj_Standardlimb_00C168;
extern StandardLimb object_boj_Standardlimb_00C174;
extern StandardLimb object_boj_Standardlimb_00C180;
extern StandardLimb object_boj_Standardlimb_00C18C;
extern StandardLimb object_boj_Standardlimb_00C198;
extern StandardLimb object_boj_Standardlimb_00C1A4;
extern StandardLimb object_boj_Standardlimb_00C1B0;
extern StandardLimb object_boj_Standardlimb_00C1BC;
extern StandardLimb object_boj_Standardlimb_00C1C8;
extern StandardLimb object_boj_Standardlimb_00C1D4;
extern StandardLimb object_boj_Standardlimb_00C1E0;
extern StandardLimb object_boj_Standardlimb_00C1EC;
extern StandardLimb object_boj_Standardlimb_00C1F8;
extern void* object_boj_Skel_00C240Limbs[];
extern FlexSkeletonHeader object_boj_Skel_00C240;
extern s16 object_boj_Anim_00DED8FrameData[];
extern JointIndex object_boj_Anim_00DED8JointIndices[];
extern AnimationHeader object_boj_Anim_00DED8;
extern s16 object_boj_Anim_00F920FrameData[];
extern JointIndex object_boj_Anim_00F920JointIndices[];
extern AnimationHeader object_boj_Anim_00F920;
extern s16 object_boj_Anim_00FC1CFrameData[];
extern JointIndex object_boj_Anim_00FC1CJointIndices[];
extern AnimationHeader object_boj_Anim_00FC1C;
extern s16 object_boj_Anim_00FEE4FrameData[];
extern JointIndex object_boj_Anim_00FEE4JointIndices[];
extern AnimationHeader object_boj_Anim_00FEE4;
extern s16 object_boj_Anim_010330FrameData[];
extern JointIndex object_boj_Anim_010330JointIndices[];
extern AnimationHeader object_boj_Anim_010330;
extern s16 object_boj_Anim_010BDCFrameData[];
extern JointIndex object_boj_Anim_010BDCJointIndices[];
extern AnimationHeader object_boj_Anim_010BDC;
extern s16 object_boj_Anim_01139CFrameData[];
extern JointIndex object_boj_Anim_01139CJointIndices[];
extern AnimationHeader object_boj_Anim_01139C;
extern s16 object_boj_Anim_011C38FrameData[];
extern JointIndex object_boj_Anim_011C38JointIndices[];
extern AnimationHeader object_boj_Anim_011C38;
extern s16 object_boj_Anim_011F84FrameData[];
extern JointIndex object_boj_Anim_011F84JointIndices[];
extern AnimationHeader object_boj_Anim_011F84;
extern s16 object_boj_Anim_0128F4FrameData[];
extern JointIndex object_boj_Anim_0128F4JointIndices[];
extern AnimationHeader object_boj_Anim_0128F4;
extern s16 object_boj_Anim_012E84FrameData[];
extern JointIndex object_boj_Anim_012E84JointIndices[];
extern AnimationHeader object_boj_Anim_012E84;
extern Vtx object_bojVtx_012EA0[];
extern Gfx gBombShopBagDL[];
extern u64 gBombShopBagTLUT[];
extern u64 gBombShopBagTex[];
#endif
