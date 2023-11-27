#ifndef OBJECT_KZ_H
#define OBJECT_KZ_H 1

typedef enum KaizokuLimb {
    /* 0x00 */ KAIZOKU_LIMB_NONE,
    /* 0x01 */ KAIZOKU_LIMB_01,
    /* 0x02 */ KAIZOKU_LIMB_02,
    /* 0x03 */ KAIZOKU_LIMB_03,
    /* 0x04 */ KAIZOKU_LIMB_04,
    /* 0x05 */ KAIZOKU_LIMB_05,
    /* 0x06 */ KAIZOKU_LIMB_06,
    /* 0x07 */ KAIZOKU_LIMB_07,
    /* 0x08 */ KAIZOKU_LIMB_08,
    /* 0x09 */ KAIZOKU_LIMB_09,
    /* 0x0A */ KAIZOKU_LIMB_0A,
    /* 0x0B */ KAIZOKU_LIMB_R_SWORD,
    /* 0x0C */ KAIZOKU_LIMB_0C,
    /* 0x0D */ KAIZOKU_LIMB_0D,
    /* 0x0E */ KAIZOKU_LIMB_0E,
    /* 0x0F */ KAIZOKU_LIMB_0F,
    /* 0x10 */ KAIZOKU_LIMB_10,
    /* 0x11 */ KAIZOKU_LIMB_11,
    /* 0x12 */ KAIZOKU_LIMB_12,
    /* 0x13 */ KAIZOKU_LIMB_L_FOOT,
    /* 0x14 */ KAIZOKU_LIMB_14,
    /* 0x15 */ KAIZOKU_LIMB_15,
    /* 0x16 */ KAIZOKU_LIMB_R_FOOT,
    /* 0x17 */ KAIZOKU_LIMB_17,
    /* 0x18 */ KAIZOKU_LIMB_MAX
} KaizokuLimb;

extern s16 object_kz_Anim_0003CCFrameData[];
extern JointIndex object_kz_Anim_0003CCJointIndices[];
extern AnimationHeader object_kz_Anim_0003CC;
extern s16 object_kz_Anim_000F5CFrameData[];
extern JointIndex object_kz_Anim_000F5CJointIndices[];
extern AnimationHeader object_kz_Anim_000F5C;
extern s16 object_kz_Anim_001390FrameData[];
extern JointIndex object_kz_Anim_001390JointIndices[];
extern AnimationHeader object_kz_Anim_001390;
extern s16 object_kz_Anim_001578FrameData[];
extern JointIndex object_kz_Anim_001578JointIndices[];
extern AnimationHeader object_kz_Anim_001578;
extern s16 object_kz_Anim_001E9CFrameData[];
extern JointIndex object_kz_Anim_001E9CJointIndices[];
extern AnimationHeader object_kz_Anim_001E9C;
extern s16 object_kz_Anim_002730FrameData[];
extern JointIndex object_kz_Anim_002730JointIndices[];
extern AnimationHeader object_kz_Anim_002730;
extern s16 object_kz_Anim_002BA0FrameData[];
extern JointIndex object_kz_Anim_002BA0JointIndices[];
extern AnimationHeader object_kz_Anim_002BA0;
extern s16 object_kz_Anim_003A3CFrameData[];
extern JointIndex object_kz_Anim_003A3CJointIndices[];
extern AnimationHeader object_kz_Anim_003A3C;
extern s16 object_kz_Anim_0043E4FrameData[];
extern JointIndex object_kz_Anim_0043E4JointIndices[];
extern AnimationHeader object_kz_Anim_0043E4;
extern s16 object_kz_Anim_004860FrameData[];
extern JointIndex object_kz_Anim_004860JointIndices[];
extern AnimationHeader object_kz_Anim_004860;
extern s16 object_kz_Anim_005644FrameData[];
extern JointIndex object_kz_Anim_005644JointIndices[];
extern AnimationHeader object_kz_Anim_005644;
extern s16 object_kz_Anim_0058B8FrameData[];
extern JointIndex object_kz_Anim_0058B8JointIndices[];
extern AnimationHeader object_kz_Anim_0058B8;
extern u64 object_kz_TLUT_0058D0[];
extern u64 object_kz_Tex_005AD0[];
extern u64 object_kz_Tex_005B10[];
extern u64 object_kz_Tex_005B50[];
extern u64 object_kz_Tex_005C50[];
extern u64 object_kz_Tex_005D50[];
extern u64 object_kz_Tex_005E50[];
extern u64 object_kz_Tex_005F50[];
extern Vtx object_kzVtx_005FD0[];
extern Gfx object_kz_DL_007CB0[];
extern Gfx object_kz_DL_008130[];
extern Gfx object_kz_DL_008268[];
extern Gfx object_kz_DL_008490[];
extern Gfx object_kz_DL_0085C8[];
extern Gfx object_kz_DL_0087F0[];
extern Gfx object_kz_DL_008A10[];
extern Gfx object_kz_DL_008B10[];
extern Gfx object_kz_DL_008D80[];
extern Gfx object_kz_DL_008E80[];
extern u64 object_kzTLUT_009100[];
extern u64 object_kzTex_0092F8[];
extern u64 object_kz_Tex_009338[];
extern u64 gKaizokuEyeOpenTex[];
extern u64 object_kz_Tex_0097B8[];
extern u64 object_kz_Tex_0098B8[];
extern u64 object_kz_Tex_009938[];
extern u64 gKaizokuEyeHalfTex[];
extern u64 object_kz_Tex_009D78[];
extern u64 object_kz_Tex_009DF8[];
extern u64 object_kz_Tex_009EF8[];
extern u64 object_kz_Tex_009FF8[];
extern u64 gKaizokuEyeClosedTex[];
extern Vtx object_kzVtx_00A4F8[];
extern Gfx object_kz_DL_00C318[];
extern Gfx object_kz_DL_00C4D8[];
extern Gfx object_kz_DL_00C698[];
extern Gfx object_kz_DL_00C830[];
extern Gfx object_kz_DL_00CA08[];
extern Gfx object_kz_DL_00CBA0[];
extern Gfx object_kz_DL_00CD78[];
extern Gfx object_kz_DL_00CE30[];
extern Gfx object_kz_DL_00CF20[];
extern StandardLimb object_kz_Standardlimb_00D6B8;
extern StandardLimb object_kz_Standardlimb_00D6C4;
extern StandardLimb object_kz_Standardlimb_00D6D0;
extern StandardLimb object_kz_Standardlimb_00D6DC;
extern StandardLimb object_kz_Standardlimb_00D6E8;
extern StandardLimb object_kz_Standardlimb_00D6F4;
extern StandardLimb object_kz_Standardlimb_00D700;
extern StandardLimb object_kz_Standardlimb_00D70C;
extern StandardLimb object_kz_Standardlimb_00D718;
extern StandardLimb object_kz_Standardlimb_00D724;
extern StandardLimb object_kz_Standardlimb_00D730;
extern StandardLimb object_kz_Standardlimb_00D73C;
extern StandardLimb object_kz_Standardlimb_00D748;
extern StandardLimb object_kz_Standardlimb_00D754;
extern StandardLimb object_kz_Standardlimb_00D760;
extern StandardLimb object_kz_Standardlimb_00D76C;
extern StandardLimb object_kz_Standardlimb_00D778;
extern StandardLimb object_kz_Standardlimb_00D784;
extern StandardLimb object_kz_Standardlimb_00D790;
extern StandardLimb object_kz_Standardlimb_00D79C;
extern StandardLimb object_kz_Standardlimb_00D7A8;
extern StandardLimb object_kz_Standardlimb_00D7B4;
extern StandardLimb object_kz_Standardlimb_00D7C0;
extern void* gKaizokuSkelLimbs[];
extern FlexSkeletonHeader gKaizokuSkel;
extern s16 object_kz_Anim_00DBE4FrameData[];
extern JointIndex object_kz_Anim_00DBE4JointIndices[];
extern AnimationHeader object_kz_Anim_00DBE4;
extern s16 object_kz_Anim_00E1C8FrameData[];
extern JointIndex object_kz_Anim_00E1C8JointIndices[];
extern AnimationHeader object_kz_Anim_00E1C8;
extern s16 object_kz_Anim_00E8BCFrameData[];
extern JointIndex object_kz_Anim_00E8BCJointIndices[];
extern AnimationHeader object_kz_Anim_00E8BC;
extern s16 object_kz_Anim_00ED1CFrameData[];
extern JointIndex object_kz_Anim_00ED1CJointIndices[];
extern AnimationHeader object_kz_Anim_00ED1C;
extern s16 object_kz_Anim_00EF9CFrameData[];
extern JointIndex object_kz_Anim_00EF9CJointIndices[];
extern AnimationHeader object_kz_Anim_00EF9C;
extern s16 object_kz_Anim_00F288FrameData[];
extern JointIndex object_kz_Anim_00F288JointIndices[];
extern AnimationHeader object_kz_Anim_00F288;
extern s16 object_kz_Anim_00F8E4FrameData[];
extern JointIndex object_kz_Anim_00F8E4JointIndices[];
extern AnimationHeader object_kz_Anim_00F8E4;
#endif
