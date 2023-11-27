#ifndef OBJECT_IN_H
#define OBJECT_IN_H 1

typedef enum ObjectInLimb {
    /* 0x00 */ OBJECT_IN_LIMB_NONE,
    /* 0x01 */ OBJECT_IN_LIMB_01,
    /* 0x02 */ OBJECT_IN_LIMB_02,
    /* 0x03 */ OBJECT_IN_LIMB_03,
    /* 0x04 */ OBJECT_IN_LIMB_04,
    /* 0x05 */ OBJECT_IN_LIMB_05,
    /* 0x06 */ OBJECT_IN_LIMB_06,
    /* 0x07 */ OBJECT_IN_LIMB_07,
    /* 0x08 */ OBJECT_IN_LIMB_08,
    /* 0x09 */ OBJECT_IN_LIMB_09,
    /* 0x0A */ OBJECT_IN_LIMB_0A,
    /* 0x0B */ OBJECT_IN_LIMB_0B,
    /* 0x0C */ OBJECT_IN_LIMB_0C,
    /* 0x0D */ OBJECT_IN_LIMB_0D,
    /* 0x0E */ OBJECT_IN_LIMB_0E,
    /* 0x0F */ OBJECT_IN_LIMB_0F,
    /* 0x10 */ OBJECT_IN_LIMB_10,
    /* 0x11 */ OBJECT_IN_LIMB_11,
    /* 0x12 */ OBJECT_IN_LIMB_12,
    /* 0x13 */ OBJECT_IN_LIMB_13,
    /* 0x14 */ OBJECT_IN_LIMB_MAX
} ObjectInLimb;

extern s16 object_in_Anim_0003B4FrameData[];
extern JointIndex object_in_Anim_0003B4JointIndices[];
extern AnimationHeader object_in_Anim_0003B4;
extern s16 object_in_Anim_000CB0FrameData[];
extern JointIndex object_in_Anim_000CB0JointIndices[];
extern AnimationHeader object_in_Anim_000CB0;
extern s16 object_in_Anim_001BE0FrameData[];
extern JointIndex object_in_Anim_001BE0JointIndices[];
extern AnimationHeader object_in_Anim_001BE0;
extern F3DPrimColor object_inTexColorChangingPrimColors_001BF0[];
extern F3DEnvColor object_inTexColorChangingEnvColors_001BFC[];
extern AnimatedMatColorParams object_in_Matanimheader_001C30ColorParams_001C04;
extern F3DPrimColor object_inTexColorChangingPrimColors_001C14[];
extern AnimatedMatColorParams object_in_Matanimheader_001C30ColorParams_001C20;
extern AnimatedMaterial object_in_Matanimheader_001C30[];
extern s16 object_in_Anim_001D10FrameData[];
extern JointIndex object_in_Anim_001D10JointIndices[];
extern AnimationHeader object_in_Anim_001D10;
extern u64 object_inTLUT_003260[];
extern u64 object_inTLUT_003458[];
extern u64 object_in_Tex_003520[];
extern u64 object_inTex_003560[];
extern u64 object_inTex_0035A0[];
extern u64 object_in_Tex_0035E0[];
extern u64 object_in_Tex_0039E0[];
extern u64 object_in_Tex_003BE0[];
extern u64 object_in_Tex_003CE0[];
extern u64 object_in_Tex_003DE0[];
extern u64 object_in_Tex_003E20[];
extern u64 object_in_Tex_003F20[];
extern u64 object_in_Tex_004120[];
extern u64 object_in_Tex_004220[];
extern u64 object_in_Tex_0042A0[];
extern u64 object_in_Tex_0043E0[];
extern u64 object_in_Tex_0047E0[];
extern u64 object_in_Tex_004820[];
extern u64 object_in_Tex_004C20[];
extern Vtx object_inVtx_005020[];
extern Gfx object_in_DL_006780[];
extern Gfx object_in_DL_0073E8[];
extern Gfx object_in_DL_007510[];
extern Gfx object_in_DL_007638[];
extern Gfx object_in_DL_007730[];
extern Gfx object_in_DL_0078D0[];
extern Gfx object_in_DL_007A70[];
extern Gfx object_in_DL_007C48[];
extern Vtx object_inVtx_007FE8[];
extern Gfx object_in_DL_00A0B8[];
extern Gfx object_in_DL_00A2B8[];
extern Gfx object_in_DL_00A4B0[];
extern Gfx object_in_DL_00A748[];
extern Gfx object_in_DL_00AAC8[];
extern Gfx object_in_DL_00ACC0[];
extern Gfx object_in_DL_00AF58[];
extern Gfx object_in_DL_00B2D8[];
extern Gfx object_in_DL_00B410[];
extern Gfx object_in_DL_00B570[];
extern Gfx object_in_DL_00B718[];
extern Gfx object_in_DL_00B8D0[];
extern u64 object_in_TLUT_00BA78[];
extern u64 object_in_TLUT_00C078[];
extern u64 object_in_TLUT_00C278[];
extern u64 object_in_Tex_00C678[];
extern u64 object_in_Tex_00CCF8[];
extern u64 object_in_Tex_00CEF8[];
extern u64 object_in_Tex_00D0F8[];
extern u64 object_in_Tex_00D138[];
extern u64 object_in_Tex_00D538[];
extern u64 object_in_Tex_00D578[];
extern u64 object_in_TLUT_00D5B8[];
extern u64 object_in_Tex_00D7B8[];
extern u64 object_in_Tex_00D9B8[];
extern u64 object_in_Tex_00D9F8[];
extern u64 object_in_Tex_00DA38[];
extern u64 object_in_Tex_00DA78[];
extern u64 object_in_Tex_00DC78[];
extern u64 object_in_Tex_00DD78[];
extern u64 object_in_Tex_00DE78[];
extern u64 object_in_Tex_00E6B8[];
extern u64 object_in_Tex_00F6B8[];
extern u64 object_in_Tex_00F7B8[];
extern u64 object_in_Tex_00F9B8[];
extern u64 object_in_Tex_00FAB8[];
extern u64 object_in_Tex_00FBB8[];
extern u64 object_in_Tex_00FCB8[];
extern u64 object_in_Tex_00FDB8[];
extern u64 object_in_Tex_00FDF8[];
extern Vtx object_inVtx_00FE38[];
extern Gfx object_in_DL_012A78[];
extern Gfx object_in_DL_012DF8[];
extern Gfx object_in_DL_013440[];
extern Gfx object_in_DL_013540[];
extern Gfx object_in_DL_013670[];
extern Gfx object_in_DL_0137A0[];
extern Gfx object_in_DL_0138D0[];
extern Gfx object_in_DL_013A00[];
extern Gfx object_in_DL_013DE0[];
extern Gfx object_in_DL_013F10[];
extern Gfx object_in_DL_014040[];
extern Gfx object_in_DL_014420[];
extern Gfx object_in_DL_0145D8[];
extern Gfx object_in_DL_014710[];
extern Gfx object_in_DL_014860[];
extern Gfx object_in_DL_0149A8[];
extern Gfx object_in_DL_014AE0[];
extern Gfx object_in_DL_014C30[];
extern StandardLimb object_in_Standardlimb_014D78;
extern StandardLimb object_in_Standardlimb_014D84;
extern StandardLimb object_in_Standardlimb_014D90;
extern StandardLimb object_in_Standardlimb_014D9C;
extern StandardLimb object_in_Standardlimb_014DA8;
extern StandardLimb object_in_Standardlimb_014DB4;
extern StandardLimb object_in_Standardlimb_014DC0;
extern StandardLimb object_in_Standardlimb_014DCC;
extern StandardLimb object_in_Standardlimb_014DD8;
extern StandardLimb object_in_Standardlimb_014DE4;
extern StandardLimb object_in_Standardlimb_014DF0;
extern StandardLimb object_in_Standardlimb_014DFC;
extern StandardLimb object_in_Standardlimb_014E08;
extern StandardLimb object_in_Standardlimb_014E14;
extern StandardLimb object_in_Standardlimb_014E20;
extern StandardLimb object_in_Standardlimb_014E2C;
extern StandardLimb object_in_Standardlimb_014E38;
extern StandardLimb object_in_Standardlimb_014E44;
extern StandardLimb object_in_Standardlimb_014E50;
extern void* object_in_Skel_014EA8Limbs[];
extern FlexSkeletonHeader object_in_Skel_014EA8;
extern s16 object_in_Anim_014F8CFrameData[];
extern JointIndex object_in_Anim_014F8CJointIndices[];
extern AnimationHeader object_in_Anim_014F8C;
extern s16 object_in_Anim_015918FrameData[];
extern JointIndex object_in_Anim_015918JointIndices[];
extern AnimationHeader object_in_Anim_015918;
extern s16 object_in_Anim_015E38FrameData[];
extern JointIndex object_in_Anim_015E38JointIndices[];
extern AnimationHeader object_in_Anim_015E38;
extern s16 object_in_Anim_016484FrameData[];
extern JointIndex object_in_Anim_016484JointIndices[];
extern AnimationHeader object_in_Anim_016484;
extern s16 object_in_Anim_016A60FrameData[];
extern JointIndex object_in_Anim_016A60JointIndices[];
extern AnimationHeader object_in_Anim_016A60;
extern s16 object_in_Anim_0170DCFrameData[];
extern JointIndex object_in_Anim_0170DCJointIndices[];
extern AnimationHeader object_in_Anim_0170DC;
extern s16 object_in_Anim_0177ACFrameData[];
extern JointIndex object_in_Anim_0177ACJointIndices[];
extern AnimationHeader object_in_Anim_0177AC;
extern s16 object_in_Anim_018240FrameData[];
extern JointIndex object_in_Anim_018240JointIndices[];
extern AnimationHeader object_in_Anim_018240;
extern s16 object_in_Anim_0187C8FrameData[];
extern JointIndex object_in_Anim_0187C8JointIndices[];
extern AnimationHeader object_in_Anim_0187C8;
extern s16 object_in_Anim_0198A8FrameData[];
extern JointIndex object_in_Anim_0198A8JointIndices[];
extern AnimationHeader object_in_Anim_0198A8;
extern s16 object_in_Anim_019EB4FrameData[];
extern JointIndex object_in_Anim_019EB4JointIndices[];
extern AnimationHeader object_in_Anim_019EB4;
extern s16 object_in_Anim_01A140FrameData[];
extern JointIndex object_in_Anim_01A140JointIndices[];
extern AnimationHeader object_in_Anim_01A140;
extern s16 object_in_Anim_01B3C4FrameData[];
extern JointIndex object_in_Anim_01B3C4JointIndices[];
extern AnimationHeader object_in_Anim_01B3C4;
extern s16 object_in_Anim_01B904FrameData[];
extern JointIndex object_in_Anim_01B904JointIndices[];
extern AnimationHeader object_in_Anim_01B904;
extern s16 object_in_Anim_01C0B0FrameData[];
extern JointIndex object_in_Anim_01C0B0JointIndices[];
extern AnimationHeader object_in_Anim_01C0B0;
extern Vtx object_inVtx_01C0C0[];
extern Gfx object_in_DL_01C520[];
extern Gfx object_in_DL_01C528[];
extern u64 object_in_TLUT_01C8F0[];
extern u64 object_in_Tex_01CAF0[];
extern u64 object_in_Tex_01CB30[];
extern u64 object_in_Tex_01CBB0[];
extern u64 object_in_Tex_01CCB0[];
extern u64 object_in_Tex_01CEB0[];
#endif
