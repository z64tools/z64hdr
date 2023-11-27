#ifndef OBJECT_KA_H
#define OBJECT_KA_H 1

typedef enum ObjectKaLimb {
    /* 0x00 */ OBJECT_KA_LIMB_NONE,
    /* 0x01 */ OBJECT_KA_LIMB_01,
    /* 0x02 */ OBJECT_KA_LIMB_02,
    /* 0x03 */ OBJECT_KA_LIMB_03,
    /* 0x04 */ OBJECT_KA_LIMB_04,
    /* 0x05 */ OBJECT_KA_LIMB_05,
    /* 0x06 */ OBJECT_KA_LIMB_06,
    /* 0x07 */ OBJECT_KA_LIMB_07,
    /* 0x08 */ OBJECT_KA_LIMB_08,
    /* 0x09 */ OBJECT_KA_LIMB_09,
    /* 0x0A */ OBJECT_KA_LIMB_0A,
    /* 0x0B */ OBJECT_KA_LIMB_0B,
    /* 0x0C */ OBJECT_KA_LIMB_0C,
    /* 0x0D */ OBJECT_KA_LIMB_0D,
    /* 0x0E */ OBJECT_KA_LIMB_0E,
    /* 0x0F */ OBJECT_KA_LIMB_0F,
    /* 0x10 */ OBJECT_KA_LIMB_10,
    /* 0x11 */ OBJECT_KA_LIMB_11,
    /* 0x12 */ OBJECT_KA_LIMB_12,
    /* 0x13 */ OBJECT_KA_LIMB_13,
    /* 0x14 */ OBJECT_KA_LIMB_14,
    /* 0x15 */ OBJECT_KA_LIMB_15,
    /* 0x16 */ OBJECT_KA_LIMB_16,
    /* 0x17 */ OBJECT_KA_LIMB_17,
    /* 0x18 */ OBJECT_KA_LIMB_18,
    /* 0x19 */ OBJECT_KA_LIMB_19,
    /* 0x1A */ OBJECT_KA_LIMB_1A,
    /* 0x1B */ OBJECT_KA_LIMB_1B,
    /* 0x1C */ OBJECT_KA_LIMB_MAX
} ObjectKaLimb;

extern s16 object_ka_Anim_000214FrameData[];
extern JointIndex object_ka_Anim_000214JointIndices[];
extern AnimationHeader object_ka_Anim_000214;
extern Vtx object_kaVtx_000230[];
extern Gfx object_ka_DL_001550[];
extern Gfx object_ka_DL_001600[];
extern Gfx object_ka_DL_0017D8[];
extern Gfx object_ka_DL_001878[];
extern Gfx object_ka_DL_001918[];
extern Gfx object_ka_DL_0019B8[];
extern Gfx object_ka_DL_001CD8[];
extern Gfx object_ka_DL_001F68[];
extern Gfx object_ka_DL_002020[];
extern Gfx object_ka_DL_0020C0[];
extern Gfx object_ka_DL_002160[];
extern Gfx object_ka_DL_002200[];
extern Gfx object_ka_DL_0022A0[];
extern Gfx object_ka_DL_002340[];
extern Gfx object_ka_DL_002430[];
extern Gfx object_ka_DL_0024D0[];
extern Gfx object_ka_DL_002570[];
extern Gfx object_ka_DL_002610[];
extern Gfx object_ka_DL_0027A0[];
extern Gfx object_ka_DL_002890[];
extern Gfx object_ka_DL_002930[];
extern Gfx object_ka_DL_0029D0[];
extern Gfx object_ka_DL_002A70[];
extern u64 object_ka_Tex_002C00[];
extern u64 object_ka_Tex_003400[];
extern u64 object_ka_Tex_003C00[];
extern u64 object_ka_Tex_004400[];
extern u64 object_ka_Tex_004C00[];
extern u64 object_ka_Tex_005400[];
extern u64 object_ka_Tex_005C00[];
extern StandardLimb object_ka_Standardlimb_006400;
extern StandardLimb object_ka_Standardlimb_00640C;
extern StandardLimb object_ka_Standardlimb_006418;
extern StandardLimb object_ka_Standardlimb_006424;
extern StandardLimb object_ka_Standardlimb_006430;
extern StandardLimb object_ka_Standardlimb_00643C;
extern StandardLimb object_ka_Standardlimb_006448;
extern StandardLimb object_ka_Standardlimb_006454;
extern StandardLimb object_ka_Standardlimb_006460;
extern StandardLimb object_ka_Standardlimb_00646C;
extern StandardLimb object_ka_Standardlimb_006478;
extern StandardLimb object_ka_Standardlimb_006484;
extern StandardLimb object_ka_Standardlimb_006490;
extern StandardLimb object_ka_Standardlimb_00649C;
extern StandardLimb object_ka_Standardlimb_0064A8;
extern StandardLimb object_ka_Standardlimb_0064B4;
extern StandardLimb object_ka_Standardlimb_0064C0;
extern StandardLimb object_ka_Standardlimb_0064CC;
extern StandardLimb object_ka_Standardlimb_0064D8;
extern StandardLimb object_ka_Standardlimb_0064E4;
extern StandardLimb object_ka_Standardlimb_0064F0;
extern StandardLimb object_ka_Standardlimb_0064FC;
extern StandardLimb object_ka_Standardlimb_006508;
extern StandardLimb object_ka_Standardlimb_006514;
extern StandardLimb object_ka_Standardlimb_006520;
extern StandardLimb object_ka_Standardlimb_00652C;
extern StandardLimb object_ka_Standardlimb_006538;
extern void* object_ka_Skel_0065B0Limbs[];
extern FlexSkeletonHeader object_ka_Skel_0065B0;
extern s16 object_ka_Anim_00686CFrameData[];
extern JointIndex object_ka_Anim_00686CJointIndices[];
extern AnimationHeader object_ka_Anim_00686C;
extern s16 object_ka_Anim_006A6CFrameData[];
extern JointIndex object_ka_Anim_006A6CJointIndices[];
extern AnimationHeader object_ka_Anim_006A6C;
extern s16 object_ka_Anim_0071ECFrameData[];
extern JointIndex object_ka_Anim_0071ECJointIndices[];
extern AnimationHeader object_ka_Anim_0071EC;
extern s16 object_ka_Anim_007444FrameData[];
extern JointIndex object_ka_Anim_007444JointIndices[];
extern AnimationHeader object_ka_Anim_007444;
extern s16 object_ka_Anim_007B90FrameData[];
extern JointIndex object_ka_Anim_007B90JointIndices[];
extern AnimationHeader object_ka_Anim_007B90;
extern s16 object_ka_Anim_0081A4FrameData[];
extern JointIndex object_ka_Anim_0081A4JointIndices[];
extern AnimationHeader object_ka_Anim_0081A4;
#endif
