#ifndef OBJECT_ZOB_H
#define OBJECT_ZOB_H 1

typedef enum ObjectZobLimb {
    /* 0x00 */ OBJECT_ZOB_LIMB_NONE,
    /* 0x01 */ OBJECT_ZOB_LIMB_01,
    /* 0x02 */ OBJECT_ZOB_LIMB_02,
    /* 0x03 */ OBJECT_ZOB_LIMB_03,
    /* 0x04 */ OBJECT_ZOB_LIMB_04,
    /* 0x05 */ OBJECT_ZOB_LIMB_05,
    /* 0x06 */ OBJECT_ZOB_LIMB_06,
    /* 0x07 */ OBJECT_ZOB_LIMB_07,
    /* 0x08 */ OBJECT_ZOB_LIMB_08,
    /* 0x09 */ OBJECT_ZOB_LIMB_09,
    /* 0x0A */ OBJECT_ZOB_LIMB_0A,
    /* 0x0B */ OBJECT_ZOB_LIMB_0B,
    /* 0x0C */ OBJECT_ZOB_LIMB_0C,
    /* 0x0D */ OBJECT_ZOB_LIMB_0D,
    /* 0x0E */ OBJECT_ZOB_LIMB_0E,
    /* 0x0F */ OBJECT_ZOB_LIMB_0F,
    /* 0x10 */ OBJECT_ZOB_LIMB_10,
    /* 0x11 */ OBJECT_ZOB_LIMB_11,
    /* 0x12 */ OBJECT_ZOB_LIMB_12,
    /* 0x13 */ OBJECT_ZOB_LIMB_13,
    /* 0x14 */ OBJECT_ZOB_LIMB_14,
    /* 0x15 */ OBJECT_ZOB_LIMB_15,
    /* 0x16 */ OBJECT_ZOB_LIMB_16,
    /* 0x17 */ OBJECT_ZOB_LIMB_17,
    /* 0x18 */ OBJECT_ZOB_LIMB_MAX
} ObjectZobLimb;

extern s16 object_zob_Anim_001FD4FrameData[];
extern JointIndex object_zob_Anim_001FD4JointIndices[];
extern AnimationHeader object_zob_Anim_001FD4;
extern s16 object_zob_Anim_0027D0FrameData[];
extern JointIndex object_zob_Anim_0027D0JointIndices[];
extern AnimationHeader object_zob_Anim_0027D0;
extern s16 object_zob_Anim_002B38FrameData[];
extern JointIndex object_zob_Anim_002B38JointIndices[];
extern AnimationHeader object_zob_Anim_002B38;
extern s16 object_zob_Anim_0037A0FrameData[];
extern JointIndex object_zob_Anim_0037A0JointIndices[];
extern AnimationHeader object_zob_Anim_0037A0;
extern s16 object_zob_Anim_0043C4FrameData[];
extern JointIndex object_zob_Anim_0043C4JointIndices[];
extern AnimationHeader object_zob_Anim_0043C4;
extern s16 object_zob_Anim_005224FrameData[];
extern JointIndex object_zob_Anim_005224JointIndices[];
extern AnimationHeader object_zob_Anim_005224;
extern s16 object_zob_Anim_005E90FrameData[];
extern JointIndex object_zob_Anim_005E90JointIndices[];
extern AnimationHeader object_zob_Anim_005E90;
extern s16 object_zob_Anim_006998FrameData[];
extern JointIndex object_zob_Anim_006998JointIndices[];
extern AnimationHeader object_zob_Anim_006998;
extern Vtx object_zobVtx_0069B0[];
extern Gfx object_zob_DL_00A700[];
extern Gfx object_zob_DL_00A880[];
extern Gfx object_zob_DL_00AA58[];
extern Gfx object_zob_DL_00AB80[];
extern Gfx object_zob_DL_00AE08[];
extern Gfx object_zob_DL_00AF90[];
extern Gfx object_zob_DL_00B150[];
extern Gfx object_zob_DL_00B3B8[];
extern Gfx object_zob_DL_00B4E0[];
extern Gfx object_zob_DL_00B768[];
extern Gfx object_zob_DL_00B8F0[];
extern Gfx object_zob_DL_00BC48[];
extern Gfx object_zob_DL_00BD10[];
extern Gfx object_zob_DL_00BDC8[];
extern Gfx object_zob_DL_00BE90[];
extern Gfx object_zob_DL_00BF48[];
extern Gfx object_zob_DL_00C140[];
extern Gfx object_zob_DL_00C370[];
extern Gfx object_zob_DL_00C528[];
extern Gfx object_zob_DL_00C7B0[];
extern Gfx object_zob_DL_00C9E0[];
extern Gfx object_zob_DL_00CB98[];
extern u64 object_zob_TLUT_00CE20[];
extern u64 object_zob_TLUT_00D020[];
extern u64 object_zob_Tex_00D220[];
extern u64 object_zob_Tex_00D260[];
extern u64 object_zob_Tex_00D660[];
extern u64 object_zob_Tex_00D860[];
extern u64 object_zob_Tex_00DA60[];
extern u64 object_zob_Tex_00E260[];
extern u64 object_zob_Tex_00E2A0[];
extern u64 object_zob_Tex_00EAA0[];
extern u64 object_zob_Tex_00F2A0[];
extern u64 object_zob_Tex_00FAA0[];
extern u64 object_zob_Tex_00FCA0[];
extern u64 object_zob_Tex_00FEA0[];
extern StandardLimb object_zob_Standardlimb_0106A0;
extern StandardLimb object_zob_Standardlimb_0106AC;
extern StandardLimb object_zob_Standardlimb_0106B8;
extern StandardLimb object_zob_Standardlimb_0106C4;
extern StandardLimb object_zob_Standardlimb_0106D0;
extern StandardLimb object_zob_Standardlimb_0106DC;
extern StandardLimb object_zob_Standardlimb_0106E8;
extern StandardLimb object_zob_Standardlimb_0106F4;
extern StandardLimb object_zob_Standardlimb_010700;
extern StandardLimb object_zob_Standardlimb_01070C;
extern StandardLimb object_zob_Standardlimb_010718;
extern StandardLimb object_zob_Standardlimb_010724;
extern StandardLimb object_zob_Standardlimb_010730;
extern StandardLimb object_zob_Standardlimb_01073C;
extern StandardLimb object_zob_Standardlimb_010748;
extern StandardLimb object_zob_Standardlimb_010754;
extern StandardLimb object_zob_Standardlimb_010760;
extern StandardLimb object_zob_Standardlimb_01076C;
extern StandardLimb object_zob_Standardlimb_010778;
extern StandardLimb object_zob_Standardlimb_010784;
extern StandardLimb object_zob_Standardlimb_010790;
extern StandardLimb object_zob_Standardlimb_01079C;
extern StandardLimb object_zob_Standardlimb_0107A8;
extern void* object_zob_Skel_010810Limbs[];
extern FlexSkeletonHeader object_zob_Skel_010810;
extern s16 object_zob_Anim_011144FrameData[];
extern JointIndex object_zob_Anim_011144JointIndices[];
extern AnimationHeader object_zob_Anim_011144;
#endif
