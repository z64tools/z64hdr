#ifndef OBJECT_OT_H
#define OBJECT_OT_H 1

typedef enum ObjectOtLimb {
    /* 0x00 */ OBJECT_OT_LIMB_NONE,
    /* 0x01 */ OBJECT_OT_LIMB_01,
    /* 0x02 */ OBJECT_OT_LIMB_02,
    /* 0x03 */ OBJECT_OT_LIMB_03,
    /* 0x04 */ OBJECT_OT_LIMB_04,
    /* 0x05 */ OBJECT_OT_LIMB_05,
    /* 0x06 */ OBJECT_OT_LIMB_06,
    /* 0x07 */ OBJECT_OT_LIMB_07,
    /* 0x08 */ OBJECT_OT_LIMB_08,
    /* 0x09 */ OBJECT_OT_LIMB_09,
    /* 0x0A */ OBJECT_OT_LIMB_0A,
    /* 0x0B */ OBJECT_OT_LIMB_0B,
    /* 0x0C */ OBJECT_OT_LIMB_0C,
    /* 0x0D */ OBJECT_OT_LIMB_0D,
    /* 0x0E */ OBJECT_OT_LIMB_0E,
    /* 0x0F */ OBJECT_OT_LIMB_0F,
    /* 0x10 */ OBJECT_OT_LIMB_10,
    /* 0x11 */ OBJECT_OT_LIMB_11,
    /* 0x12 */ OBJECT_OT_LIMB_12,
    /* 0x13 */ OBJECT_OT_LIMB_MAX
} ObjectOtLimb;

extern Vtx object_otVtx_000000[];
extern Gfx object_ot_DL_000040[];
extern Gfx object_ot_DL_000078[];
extern s16 object_ot_Anim_000420FrameData[];
extern JointIndex object_ot_Anim_000420JointIndices[];
extern AnimationHeader object_ot_Anim_000420;
extern Vtx object_otVtx_000430[];
extern Gfx object_ot_DL_0004A0[];
extern u64 object_ot_Tex_000550[];
extern F3DPrimColor object_otTexColorChangingPrimColors_0005D0[];
extern u16 object_otTexColorChangingFrameData_0005E0[];
extern AnimatedMatColorParams object_ot_Matanimheader_0005F8ColorParams_0005E8;
extern AnimatedMaterial object_ot_Matanimheader_0005F8[];
extern s16 object_ot_Anim_0008D8FrameData[];
extern JointIndex object_ot_Anim_0008D8JointIndices[];
extern AnimationHeader object_ot_Anim_0008D8;
extern Vtx object_otVtx_0008F0[];
extern Gfx object_ot_DL_001800[];
extern Gfx object_ot_DL_0018D0[];
extern Gfx object_ot_DL_001988[];
extern Gfx object_ot_DL_001AA0[];
extern Gfx object_ot_DL_001B80[];
extern Gfx object_ot_DL_001C38[];
extern Gfx object_ot_DL_001CF0[];
extern Gfx object_ot_DL_001FD8[];
extern Gfx object_ot_DL_002090[];
extern Gfx object_ot_DL_002220[];
extern Gfx object_ot_DL_002318[];
extern Gfx object_ot_DL_002410[];
extern Gfx object_ot_DL_002508[];
extern Gfx object_ot_DL_002600[];
extern Gfx object_ot_DL_0026F8[];
extern Gfx object_ot_DL_0027F0[];
extern u64 object_ot_TLUT_0028E0[];
extern u64 object_ot_Tex_002AE0[];
extern u64 object_ot_Tex_002EE0[];
extern u64 object_ot_Tex_0036E0[];
extern u64 object_ot_Tex_003AE0[];
extern u64 object_ot_Tex_003EE0[];
extern u64 object_ot_Tex_0042E0[];
extern StandardLimb object_ot_Standardlimb_0046E0;
extern StandardLimb object_ot_Standardlimb_0046EC;
extern StandardLimb object_ot_Standardlimb_0046F8;
extern StandardLimb object_ot_Standardlimb_004704;
extern StandardLimb object_ot_Standardlimb_004710;
extern StandardLimb object_ot_Standardlimb_00471C;
extern StandardLimb object_ot_Standardlimb_004728;
extern StandardLimb object_ot_Standardlimb_004734;
extern StandardLimb object_ot_Standardlimb_004740;
extern StandardLimb object_ot_Standardlimb_00474C;
extern StandardLimb object_ot_Standardlimb_004758;
extern StandardLimb object_ot_Standardlimb_004764;
extern StandardLimb object_ot_Standardlimb_004770;
extern StandardLimb object_ot_Standardlimb_00477C;
extern StandardLimb object_ot_Standardlimb_004788;
extern StandardLimb object_ot_Standardlimb_004794;
extern StandardLimb object_ot_Standardlimb_0047A0;
extern StandardLimb object_ot_Standardlimb_0047AC;
extern void* object_ot_Skel_004800Limbs[];
extern FlexSkeletonHeader object_ot_Skel_004800;
extern s16 object_ot_Anim_004B30FrameData[];
extern JointIndex object_ot_Anim_004B30JointIndices[];
extern AnimationHeader object_ot_Anim_004B30;
#endif
