#ifndef OBJECT_GK_H
#define OBJECT_GK_H 1

typedef enum ObjectGkLimb {
    /* 0x00 */ OBJECT_GK_LIMB_NONE,
    /* 0x01 */ OBJECT_GK_LIMB_01,
    /* 0x02 */ OBJECT_GK_LIMB_02,
    /* 0x03 */ OBJECT_GK_LIMB_03,
    /* 0x04 */ OBJECT_GK_LIMB_04,
    /* 0x05 */ OBJECT_GK_LIMB_05,
    /* 0x06 */ OBJECT_GK_LIMB_06,
    /* 0x07 */ OBJECT_GK_LIMB_07,
    /* 0x08 */ OBJECT_GK_LIMB_08,
    /* 0x09 */ OBJECT_GK_LIMB_09,
    /* 0x0A */ OBJECT_GK_LIMB_0A,
    /* 0x0B */ OBJECT_GK_LIMB_0B,
    /* 0x0C */ OBJECT_GK_LIMB_0C,
    /* 0x0D */ OBJECT_GK_LIMB_0D,
    /* 0x0E */ OBJECT_GK_LIMB_0E,
    /* 0x0F */ OBJECT_GK_LIMB_0F,
    /* 0x10 */ OBJECT_GK_LIMB_10,
    /* 0x11 */ OBJECT_GK_LIMB_11,
    /* 0x12 */ OBJECT_GK_LIMB_12,
    /* 0x13 */ OBJECT_GK_LIMB_13,
    /* 0x14 */ OBJECT_GK_LIMB_MAX
} ObjectGkLimb;

extern Vtx object_gkVtx_000000[];
extern Gfx object_gk_DL_002E30[];
extern Gfx object_gk_DL_0031B0[];
extern Gfx object_gk_DL_0038B0[];
extern Gfx object_gk_DL_0039D0[];
extern Gfx object_gk_DL_003AC0[];
extern Gfx object_gk_DL_003D60[];
extern Gfx object_gk_DL_003F68[];
extern Gfx object_gk_DL_004088[];
extern Gfx object_gk_DL_004218[];
extern Gfx object_gk_DL_004498[];
extern Gfx object_gk_DL_0045B8[];
extern Gfx object_gk_DL_004748[];
extern Gfx object_gk_DL_0047D8[];
extern Gfx object_gk_DL_0048C0[];
extern Gfx object_gk_DL_0049F0[];
extern Gfx object_gk_DL_004CB8[];
extern Gfx object_gk_DL_004DA0[];
extern Gfx object_gk_DL_004ED0[];
extern TexturePtr object_gkTexCycleTexPtrs_005120[];
extern u8 object_gkTexCycleTexIndices_005130[];
extern AnimatedMatTexCycleParams object_gk_Matanimheader_005144TexCycleParams_005134;
extern AnimatedMaterial object_gk_Matanimheader_005144[];
extern s16 object_gk_Anim_005EDCFrameData[];
extern JointIndex object_gk_Anim_005EDCJointIndices[];
extern AnimationHeader object_gk_Anim_005EDC;
extern Vtx object_gkVtx_005EF0[];
extern Gfx object_gk_DL_006680[];
extern Gfx object_gk_DL_006688[];
extern s16 object_gk_Anim_00787CFrameData[];
extern JointIndex object_gk_Anim_00787CJointIndices[];
extern AnimationHeader object_gk_Anim_00787C;
extern StandardLimb object_gk_Standardlimb_007890;
extern StandardLimb object_gk_Standardlimb_00789C;
extern StandardLimb object_gk_Standardlimb_0078A8;
extern StandardLimb object_gk_Standardlimb_0078B4;
extern StandardLimb object_gk_Standardlimb_0078C0;
extern StandardLimb object_gk_Standardlimb_0078CC;
extern StandardLimb object_gk_Standardlimb_0078D8;
extern StandardLimb object_gk_Standardlimb_0078E4;
extern StandardLimb object_gk_Standardlimb_0078F0;
extern StandardLimb object_gk_Standardlimb_0078FC;
extern StandardLimb object_gk_Standardlimb_007908;
extern StandardLimb object_gk_Standardlimb_007914;
extern StandardLimb object_gk_Standardlimb_007920;
extern StandardLimb object_gk_Standardlimb_00792C;
extern StandardLimb object_gk_Standardlimb_007938;
extern StandardLimb object_gk_Standardlimb_007944;
extern StandardLimb object_gk_Standardlimb_007950;
extern StandardLimb object_gk_Standardlimb_00795C;
extern StandardLimb object_gk_Standardlimb_007968;
extern void* object_gk_Skel_0079C0Limbs[];
extern FlexSkeletonHeader object_gk_Skel_0079C0;
extern s16 object_gk_Anim_007DC4FrameData[];
extern JointIndex object_gk_Anim_007DC4JointIndices[];
extern AnimationHeader object_gk_Anim_007DC4;
extern s16 object_gk_Anim_008774FrameData[];
extern JointIndex object_gk_Anim_008774JointIndices[];
extern AnimationHeader object_gk_Anim_008774;
extern s16 object_gk_Anim_0092C0FrameData[];
extern JointIndex object_gk_Anim_0092C0JointIndices[];
extern AnimationHeader object_gk_Anim_0092C0;
extern s16 object_gk_Anim_009638FrameData[];
extern JointIndex object_gk_Anim_009638JointIndices[];
extern AnimationHeader object_gk_Anim_009638;
extern s16 object_gk_Anim_009858FrameData[];
extern JointIndex object_gk_Anim_009858JointIndices[];
extern AnimationHeader object_gk_Anim_009858;
extern s16 object_gk_Anim_009D88FrameData[];
extern JointIndex object_gk_Anim_009D88JointIndices[];
extern AnimationHeader object_gk_Anim_009D88;
extern s16 object_gk_Anim_00A21CFrameData[];
extern JointIndex object_gk_Anim_00A21CJointIndices[];
extern AnimationHeader object_gk_Anim_00A21C;
extern s16 object_gk_Anim_00AAECFrameData[];
extern JointIndex object_gk_Anim_00AAECJointIndices[];
extern AnimationHeader object_gk_Anim_00AAEC;
extern s16 object_gk_Anim_00AE34FrameData[];
extern JointIndex object_gk_Anim_00AE34JointIndices[];
extern AnimationHeader object_gk_Anim_00AE34;
extern s16 object_gk_Anim_00BD90FrameData[];
extern JointIndex object_gk_Anim_00BD90JointIndices[];
extern AnimationHeader object_gk_Anim_00BD90;
extern s16 object_gk_Anim_00C308FrameData[];
extern JointIndex object_gk_Anim_00C308JointIndices[];
extern AnimationHeader object_gk_Anim_00C308;
extern u64 object_gk_TLUT_00C320[];
extern u64 object_gk_Tex_00DE20[];
extern u64 object_gk_Tex_00DE60[];
extern u64 object_gk_Tex_00DF60[];
extern u64 object_gk_Tex_00E160[];
extern u64 object_gk_Tex_00E360[];
extern u64 object_gk_Tex_00E760[];
extern u64 object_gk_Tex_00E7A0[];
extern u64 object_gk_Tex_00EFA0[];
extern u64 object_gk_Tex_00F0A0[];
extern u64 object_gk_Tex_00F4A0[];
extern u64 object_gk_Tex_00F520[];
extern u64 object_gk_Tex_00F720[];
extern u64 object_gk_Tex_00FF20[];
extern u64 object_gk_Tex_010720[];
extern u64 object_gk_Tex_010F20[];
#endif
