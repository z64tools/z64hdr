#ifndef OBJECT_DAIKU_H
#define OBJECT_DAIKU_H 1

typedef enum ObjectDaikuLimb {
    /* 0x00 */ OBJECT_DAIKU_LIMB_NONE,
    /* 0x01 */ OBJECT_DAIKU_LIMB_01,
    /* 0x02 */ OBJECT_DAIKU_LIMB_02,
    /* 0x03 */ OBJECT_DAIKU_LIMB_03,
    /* 0x04 */ OBJECT_DAIKU_LIMB_04,
    /* 0x05 */ OBJECT_DAIKU_LIMB_05,
    /* 0x06 */ OBJECT_DAIKU_LIMB_06,
    /* 0x07 */ OBJECT_DAIKU_LIMB_07,
    /* 0x08 */ OBJECT_DAIKU_LIMB_08,
    /* 0x09 */ OBJECT_DAIKU_LIMB_09,
    /* 0x0A */ OBJECT_DAIKU_LIMB_0A,
    /* 0x0B */ OBJECT_DAIKU_LIMB_0B,
    /* 0x0C */ OBJECT_DAIKU_LIMB_0C,
    /* 0x0D */ OBJECT_DAIKU_LIMB_0D,
    /* 0x0E */ OBJECT_DAIKU_LIMB_0E,
    /* 0x0F */ OBJECT_DAIKU_LIMB_0F,
    /* 0x10 */ OBJECT_DAIKU_LIMB_10,
    /* 0x11 */ OBJECT_DAIKU_LIMB_MAX
} ObjectDaikuLimb;

extern s16 object_daiku_Anim_000600FrameData[];
extern JointIndex object_daiku_Anim_000600JointIndices[];
extern AnimationHeader object_daiku_Anim_000600;
extern s16 object_daiku_Anim_000C44FrameData[];
extern JointIndex object_daiku_Anim_000C44JointIndices[];
extern AnimationHeader object_daiku_Anim_000C44;
extern s16 object_daiku_Anim_001114FrameData[];
extern JointIndex object_daiku_Anim_001114JointIndices[];
extern AnimationHeader object_daiku_Anim_001114;
extern s16 object_daiku_Anim_001A24FrameData[];
extern JointIndex object_daiku_Anim_001A24JointIndices[];
extern AnimationHeader object_daiku_Anim_001A24;
extern s16 object_daiku_Anim_002134FrameData[];
extern JointIndex object_daiku_Anim_002134JointIndices[];
extern AnimationHeader object_daiku_Anim_002134;
extern s16 object_daiku_Anim_002FA0FrameData[];
extern JointIndex object_daiku_Anim_002FA0JointIndices[];
extern AnimationHeader object_daiku_Anim_002FA0;
extern u64 object_daiku_TLUT_002FB0[];
extern u64 object_daiku_Tex_0031B0[];
extern u64 object_daiku_Tex_0031F0[];
extern u64 object_daiku_Tex_0032F0[];
extern u64 object_daiku_Tex_003310[];
extern u64 object_daiku_Tex_003390[];
extern u64 object_daiku_Tex_0033D0[];
extern u64 object_daiku_Tex_0034D0[];
extern u64 object_daiku_Tex_003510[];
extern u64 object_daiku_Tex_003D10[];
extern u64 object_daiku_Tex_003E10[];
extern u64 object_daiku_Tex_003E50[];
extern u64 object_daiku_Tex_003E90[];
extern Vtx object_daikuVtx_003ED0[];
extern Gfx object_daiku_DL_006980[];
extern Gfx object_daiku_DL_006D70[];
extern Gfx object_daiku_DL_006E80[];
extern Gfx object_daiku_DL_006FB0[];
extern Gfx object_daiku_DL_0070C0[];
extern Gfx object_daiku_DL_0071E0[];
extern Gfx object_daiku_DL_007700[];
extern Gfx object_daiku_DL_007A10[];
extern Gfx object_daiku_DL_007B40[];
extern Gfx object_daiku_DL_007C70[];
extern Gfx object_daiku_DL_007DE0[];
extern Gfx object_daiku_DL_007F10[];
extern Gfx object_daiku_DL_008040[];
extern Gfx object_daiku_DL_0081B0[];
extern Gfx object_daiku_DL_0083A0[];
extern Gfx object_daiku_DL_008648[];
extern Gfx object_daiku_DL_008758[];
extern Gfx object_daiku_DL_008870[];
extern Gfx object_daiku_DL_008B20[];
extern Gfx object_daiku_DL_008C30[];
extern Vtx object_daikuVtx_008D48[];
extern Gfx object_daiku_DL_008EC8[];
extern u64 object_daiku_TLUT_008FA8[];
extern u64 object_daiku_Tex_0091A8[];
extern Vtx object_daikuVtx_0092A8[];
extern Gfx object_daiku_DL_009638[];
extern u64 object_daiku_TLUT_0097B0[];
extern u64 object_daiku_Tex_0099B0[];
extern u64 object_daiku_Tex_009DB0[];
extern Vtx object_daikuVtx_009EB0[];
extern Gfx object_daiku_DL_00A390[];
extern u64 object_daiku_TLUT_00A4D0[];
extern u64 object_daiku_Tex_00A6D0[];
extern StandardLimb object_daiku_Standardlimb_00A750;
extern StandardLimb object_daiku_Standardlimb_00A75C;
extern StandardLimb object_daiku_Standardlimb_00A768;
extern StandardLimb object_daiku_Standardlimb_00A774;
extern StandardLimb object_daiku_Standardlimb_00A780;
extern StandardLimb object_daiku_Standardlimb_00A78C;
extern StandardLimb object_daiku_Standardlimb_00A798;
extern StandardLimb object_daiku_Standardlimb_00A7A4;
extern StandardLimb object_daiku_Standardlimb_00A7B0;
extern StandardLimb object_daiku_Standardlimb_00A7BC;
extern StandardLimb object_daiku_Standardlimb_00A7C8;
extern StandardLimb object_daiku_Standardlimb_00A7D4;
extern StandardLimb object_daiku_Standardlimb_00A7E0;
extern StandardLimb object_daiku_Standardlimb_00A7EC;
extern StandardLimb object_daiku_Standardlimb_00A7F8;
extern StandardLimb object_daiku_Standardlimb_00A804;
extern void* object_daiku_Skel_00A850Limbs[];
extern FlexSkeletonHeader object_daiku_Skel_00A850;
extern s16 object_daiku_Anim_00ACD0FrameData[];
extern JointIndex object_daiku_Anim_00ACD0JointIndices[];
extern AnimationHeader object_daiku_Anim_00ACD0;
extern s16 object_daiku_Anim_00B690FrameData[];
extern JointIndex object_daiku_Anim_00B690JointIndices[];
extern AnimationHeader object_daiku_Anim_00B690;
extern s16 object_daiku_Anim_00BEACFrameData[];
extern JointIndex object_daiku_Anim_00BEACJointIndices[];
extern AnimationHeader object_daiku_Anim_00BEAC;
extern s16 object_daiku_Anim_00C234FrameData[];
extern JointIndex object_daiku_Anim_00C234JointIndices[];
extern AnimationHeader object_daiku_Anim_00C234;
extern s16 object_daiku_Anim_00C92CFrameData[];
extern JointIndex object_daiku_Anim_00C92CJointIndices[];
extern AnimationHeader object_daiku_Anim_00C92C;
extern s16 object_daiku_Anim_00D328FrameData[];
extern JointIndex object_daiku_Anim_00D328JointIndices[];
extern AnimationHeader object_daiku_Anim_00D328;
#endif
