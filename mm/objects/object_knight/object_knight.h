#ifndef OBJECT_KNIGHT_H
#define OBJECT_KNIGHT_H 1

typedef enum ObjectKnight1Limb {
    /* 0x00 */ OBJECT_KNIGHT_1_LIMB_NONE,
    /* 0x01 */ OBJECT_KNIGHT_1_LIMB_01,
    /* 0x02 */ OBJECT_KNIGHT_1_LIMB_02,
    /* 0x03 */ OBJECT_KNIGHT_1_LIMB_03,
    /* 0x04 */ OBJECT_KNIGHT_1_LIMB_04,
    /* 0x05 */ OBJECT_KNIGHT_1_LIMB_05,
    /* 0x06 */ OBJECT_KNIGHT_1_LIMB_06,
    /* 0x07 */ OBJECT_KNIGHT_1_LIMB_07,
    /* 0x08 */ OBJECT_KNIGHT_1_LIMB_08,
    /* 0x09 */ OBJECT_KNIGHT_1_LIMB_09,
    /* 0x0A */ OBJECT_KNIGHT_1_LIMB_0A,
    /* 0x0B */ OBJECT_KNIGHT_1_LIMB_0B,
    /* 0x0C */ OBJECT_KNIGHT_1_LIMB_0C,
    /* 0x0D */ OBJECT_KNIGHT_1_LIMB_0D,
    /* 0x0E */ OBJECT_KNIGHT_1_LIMB_0E,
    /* 0x0F */ OBJECT_KNIGHT_1_LIMB_0F,
    /* 0x10 */ OBJECT_KNIGHT_1_LIMB_10,
    /* 0x11 */ OBJECT_KNIGHT_1_LIMB_11,
    /* 0x12 */ OBJECT_KNIGHT_1_LIMB_12,
    /* 0x13 */ OBJECT_KNIGHT_1_LIMB_13,
    /* 0x14 */ OBJECT_KNIGHT_1_LIMB_14,
    /* 0x15 */ OBJECT_KNIGHT_1_LIMB_15,
    /* 0x16 */ OBJECT_KNIGHT_1_LIMB_16,
    /* 0x17 */ OBJECT_KNIGHT_1_LIMB_17,
    /* 0x18 */ OBJECT_KNIGHT_1_LIMB_18,
    /* 0x19 */ OBJECT_KNIGHT_1_LIMB_19,
    /* 0x1A */ OBJECT_KNIGHT_1_LIMB_1A,
    /* 0x1B */ OBJECT_KNIGHT_1_LIMB_1B,
    /* 0x1C */ OBJECT_KNIGHT_1_LIMB_1C,
    /* 0x1D */ OBJECT_KNIGHT_1_LIMB_MAX
} ObjectKnight1Limb;

typedef enum ObjectKnight2Limb {
    /* 0x00 */ OBJECT_KNIGHT_2_LIMB_NONE,
    /* 0x01 */ OBJECT_KNIGHT_2_LIMB_01,
    /* 0x02 */ OBJECT_KNIGHT_2_LIMB_02,
    /* 0x03 */ OBJECT_KNIGHT_2_LIMB_03,
    /* 0x04 */ OBJECT_KNIGHT_2_LIMB_04,
    /* 0x05 */ OBJECT_KNIGHT_2_LIMB_05,
    /* 0x06 */ OBJECT_KNIGHT_2_LIMB_06,
    /* 0x07 */ OBJECT_KNIGHT_2_LIMB_07,
    /* 0x08 */ OBJECT_KNIGHT_2_LIMB_08,
    /* 0x09 */ OBJECT_KNIGHT_2_LIMB_09,
    /* 0x0A */ OBJECT_KNIGHT_2_LIMB_0A,
    /* 0x0B */ OBJECT_KNIGHT_2_LIMB_0B,
    /* 0x0C */ OBJECT_KNIGHT_2_LIMB_0C,
    /* 0x0D */ OBJECT_KNIGHT_2_LIMB_0D,
    /* 0x0E */ OBJECT_KNIGHT_2_LIMB_0E,
    /* 0x0F */ OBJECT_KNIGHT_2_LIMB_0F,
    /* 0x10 */ OBJECT_KNIGHT_2_LIMB_10,
    /* 0x11 */ OBJECT_KNIGHT_2_LIMB_11,
    /* 0x12 */ OBJECT_KNIGHT_2_LIMB_12,
    /* 0x13 */ OBJECT_KNIGHT_2_LIMB_13,
    /* 0x14 */ OBJECT_KNIGHT_2_LIMB_14,
    /* 0x15 */ OBJECT_KNIGHT_2_LIMB_15,
    /* 0x16 */ OBJECT_KNIGHT_2_LIMB_16,
    /* 0x17 */ OBJECT_KNIGHT_2_LIMB_17,
    /* 0x18 */ OBJECT_KNIGHT_2_LIMB_18,
    /* 0x19 */ OBJECT_KNIGHT_2_LIMB_19,
    /* 0x1A */ OBJECT_KNIGHT_2_LIMB_1A,
    /* 0x1B */ OBJECT_KNIGHT_2_LIMB_1B,
    /* 0x1C */ OBJECT_KNIGHT_2_LIMB_1C,
    /* 0x1D */ OBJECT_KNIGHT_2_LIMB_MAX
} ObjectKnight2Limb;

extern s16 object_knight_Anim_0005A8FrameData[];
extern JointIndex object_knight_Anim_0005A8JointIndices[];
extern AnimationHeader object_knight_Anim_0005A8;
extern s16 object_knight_Anim_0009E0FrameData[];
extern JointIndex object_knight_Anim_0009E0JointIndices[];
extern AnimationHeader object_knight_Anim_0009E0;
extern s16 object_knight_Anim_000D9CFrameData[];
extern JointIndex object_knight_Anim_000D9CJointIndices[];
extern AnimationHeader object_knight_Anim_000D9C;
extern s16 object_knight_Anim_001CDCFrameData[];
extern JointIndex object_knight_Anim_001CDCJointIndices[];
extern AnimationHeader object_knight_Anim_001CDC;
extern s16 object_knight_Anim_002174FrameData[];
extern JointIndex object_knight_Anim_002174JointIndices[];
extern AnimationHeader object_knight_Anim_002174;
extern s16 object_knight_Anim_003008FrameData[];
extern JointIndex object_knight_Anim_003008JointIndices[];
extern AnimationHeader object_knight_Anim_003008;
extern s16 object_knight_Anim_0031F0FrameData[];
extern JointIndex object_knight_Anim_0031F0JointIndices[];
extern AnimationHeader object_knight_Anim_0031F0;
extern s16 object_knight_Anim_003650FrameData[];
extern JointIndex object_knight_Anim_003650JointIndices[];
extern AnimationHeader object_knight_Anim_003650;
extern s16 object_knight_Anim_0040E0FrameData[];
extern JointIndex object_knight_Anim_0040E0JointIndices[];
extern AnimationHeader object_knight_Anim_0040E0;
extern s16 object_knight_Anim_004620FrameData[];
extern JointIndex object_knight_Anim_004620JointIndices[];
extern AnimationHeader object_knight_Anim_004620;
extern s16 object_knight_Anim_004974FrameData[];
extern JointIndex object_knight_Anim_004974JointIndices[];
extern AnimationHeader object_knight_Anim_004974;
extern s16 object_knight_Anim_005D30FrameData[];
extern JointIndex object_knight_Anim_005D30JointIndices[];
extern AnimationHeader object_knight_Anim_005D30;
extern s16 object_knight_Anim_005E78FrameData[];
extern JointIndex object_knight_Anim_005E78JointIndices[];
extern AnimationHeader object_knight_Anim_005E78;
extern s16 object_knight_Anim_006754FrameData[];
extern JointIndex object_knight_Anim_006754JointIndices[];
extern AnimationHeader object_knight_Anim_006754;
extern s16 object_knight_Anim_006EF8FrameData[];
extern JointIndex object_knight_Anim_006EF8JointIndices[];
extern AnimationHeader object_knight_Anim_006EF8;
extern s16 object_knight_Anim_0079D4FrameData[];
extern JointIndex object_knight_Anim_0079D4JointIndices[];
extern AnimationHeader object_knight_Anim_0079D4;
extern s16 object_knight_Anim_008390FrameData[];
extern JointIndex object_knight_Anim_008390JointIndices[];
extern AnimationHeader object_knight_Anim_008390;
extern s16 object_knight_Anim_008524FrameData[];
extern JointIndex object_knight_Anim_008524JointIndices[];
extern AnimationHeader object_knight_Anim_008524;
extern s16 object_knight_Anim_0089E4FrameData[];
extern JointIndex object_knight_Anim_0089E4JointIndices[];
extern AnimationHeader object_knight_Anim_0089E4;
extern s16 object_knight_Anim_008D80FrameData[];
extern JointIndex object_knight_Anim_008D80JointIndices[];
extern AnimationHeader object_knight_Anim_008D80;
extern s16 object_knight_Anim_009538FrameData[];
extern JointIndex object_knight_Anim_009538JointIndices[];
extern AnimationHeader object_knight_Anim_009538;
extern s16 object_knight_Anim_009D8CFrameData[];
extern JointIndex object_knight_Anim_009D8CJointIndices[];
extern AnimationHeader object_knight_Anim_009D8C;
extern s16 object_knight_Anim_00A530FrameData[];
extern JointIndex object_knight_Anim_00A530JointIndices[];
extern AnimationHeader object_knight_Anim_00A530;
extern s16 object_knight_Anim_00A88CFrameData[];
extern JointIndex object_knight_Anim_00A88CJointIndices[];
extern AnimationHeader object_knight_Anim_00A88C;
extern s16 object_knight_Anim_00AB68FrameData[];
extern JointIndex object_knight_Anim_00AB68JointIndices[];
extern AnimationHeader object_knight_Anim_00AB68;
extern s16 object_knight_Anim_00AFACFrameData[];
extern JointIndex object_knight_Anim_00AFACJointIndices[];
extern AnimationHeader object_knight_Anim_00AFAC;
extern s16 object_knight_Anim_00B5D4FrameData[];
extern JointIndex object_knight_Anim_00B5D4JointIndices[];
extern AnimationHeader object_knight_Anim_00B5D4;
extern s16 object_knight_Anim_00BCF4FrameData[];
extern JointIndex object_knight_Anim_00BCF4JointIndices[];
extern AnimationHeader object_knight_Anim_00BCF4;
extern s16 object_knight_Anim_00C384FrameData[];
extern JointIndex object_knight_Anim_00C384JointIndices[];
extern AnimationHeader object_knight_Anim_00C384;
extern s16 object_knight_Anim_00C7F0FrameData[];
extern JointIndex object_knight_Anim_00C7F0JointIndices[];
extern AnimationHeader object_knight_Anim_00C7F0;
extern s16 object_knight_Anim_00CDE0FrameData[];
extern JointIndex object_knight_Anim_00CDE0JointIndices[];
extern AnimationHeader object_knight_Anim_00CDE0;
extern s16 object_knight_Anim_00D870FrameData[];
extern JointIndex object_knight_Anim_00D870JointIndices[];
extern AnimationHeader object_knight_Anim_00D870;
extern s16 object_knight_Anim_00DDCCFrameData[];
extern JointIndex object_knight_Anim_00DDCCJointIndices[];
extern AnimationHeader object_knight_Anim_00DDCC;
extern s16 object_knight_Anim_00E15CFrameData[];
extern JointIndex object_knight_Anim_00E15CJointIndices[];
extern AnimationHeader object_knight_Anim_00E15C;
extern s16 object_knight_Anim_00E45CFrameData[];
extern JointIndex object_knight_Anim_00E45CJointIndices[];
extern AnimationHeader object_knight_Anim_00E45C;
extern s16 object_knight_Anim_00E7F4FrameData[];
extern JointIndex object_knight_Anim_00E7F4JointIndices[];
extern AnimationHeader object_knight_Anim_00E7F4;
extern s16 object_knight_Anim_00EA90FrameData[];
extern JointIndex object_knight_Anim_00EA90JointIndices[];
extern AnimationHeader object_knight_Anim_00EA90;
extern s16 object_knight_Anim_00EF44FrameData[];
extern JointIndex object_knight_Anim_00EF44JointIndices[];
extern AnimationHeader object_knight_Anim_00EF44;
extern s16 object_knight_Anim_00F90CFrameData[];
extern JointIndex object_knight_Anim_00F90CJointIndices[];
extern AnimationHeader object_knight_Anim_00F90C;
extern s16 object_knight_Anim_00FC78FrameData[];
extern JointIndex object_knight_Anim_00FC78JointIndices[];
extern AnimationHeader object_knight_Anim_00FC78;
extern s16 object_knight_Anim_01024CFrameData[];
extern JointIndex object_knight_Anim_01024CJointIndices[];
extern AnimationHeader object_knight_Anim_01024C;
extern s16 object_knight_Anim_010E98FrameData[];
extern JointIndex object_knight_Anim_010E98JointIndices[];
extern AnimationHeader object_knight_Anim_010E98;
extern s16 object_knight_Anim_011298FrameData[];
extern JointIndex object_knight_Anim_011298JointIndices[];
extern AnimationHeader object_knight_Anim_011298;
extern s16 object_knight_Anim_011AACFrameData[];
extern JointIndex object_knight_Anim_011AACJointIndices[];
extern AnimationHeader object_knight_Anim_011AAC;
extern Vtx object_knightVtx_011AC0[];
extern Gfx object_knight_DL_012400[];
extern u64 object_knight_Tex_012760[];
extern u64 object_knight_Tex_012960[];
extern u64 object_knight_Tex_012B60[];
extern u64 object_knight_Tex_012BE0[];
extern Vtx object_knightVtx_012C60[];
extern Gfx object_knight_DL_012DB0[];
extern u64 object_knight_Tex_012EC0[];
extern u64 object_knight_Tex_012FC0[];
extern Vtx object_knightVtx_012FE0[];
extern Gfx object_knight_DL_013020[];
extern Vtx object_knightVtx_0130B0[];
extern Gfx object_knight_DL_0153E0[];
extern Gfx object_knight_DL_0154B0[];
extern Gfx object_knight_DL_0155A0[];
extern Gfx object_knight_DL_015660[];
extern Gfx object_knight_DL_015730[];
extern Gfx object_knight_DL_015820[];
extern Gfx object_knight_DL_0158E0[];
extern Gfx object_knight_DL_015A40[];
extern Gfx object_knight_DL_015AE0[];
extern Gfx object_knight_DL_015B88[];
extern Gfx object_knight_DL_015D78[];
extern Gfx object_knight_DL_015E38[];
extern Gfx object_knight_DL_015ED8[];
extern Gfx object_knight_DL_016310[];
extern Gfx object_knight_DL_0163C8[];
extern Gfx object_knight_DL_016478[];
extern Gfx object_knight_DL_016530[];
extern Gfx object_knight_DL_0165F0[];
extern Gfx object_knight_DL_0166D8[];
extern Gfx object_knight_DL_016810[];
extern Gfx object_knight_DL_0169C8[];
extern Gfx object_knight_DL_016AD0[];
extern Gfx object_knight_DL_016B90[];
extern Gfx object_knight_DL_016C78[];
extern Gfx object_knight_DL_016DB0[];
extern Gfx object_knight_DL_016F70[];
extern u64 object_knight_Tex_017078[];
extern u64 object_knight_Tex_017278[];
extern u64 object_knight_Tex_017298[];
extern u64 object_knight_Tex_0172D8[];
extern u64 object_knight_Tex_017358[];
extern u64 object_knight_Tex_017558[];
extern u64 object_knight_Tex_0175D8[];
extern u64 object_knight_Tex_0176D8[];
extern u64 object_knight_Tex_0178D8[];
extern u64 object_knight_Tex_017AD8[];
extern u64 object_knight_Tex_017BD8[];
extern u64 object_knight_Tex_017DD8[];
extern u64 object_knight_Tex_017FD8[];
extern u64 object_knight_Tex_018018[];
extern u64 object_knight_Tex_018098[];
extern Vtx object_knightVtx_018898[];
extern Gfx object_knight_DL_0188F8[];
extern Vtx object_knightVtx_0189B0[];
extern Gfx object_knight_DL_0189F0[];
extern Vtx object_knightVtx_018AA0[];
extern Gfx object_knight_DL_018AF0[];
extern F3DPrimColor object_knightTexColorChangingPrimColors_018BA0[];
extern F3DEnvColor object_knightTexColorChangingEnvColors_018BAC[];
extern AnimatedMatColorParams object_knight_Matanimheader_018BC4ColorParams_018BB4;
extern AnimatedMaterial object_knight_Matanimheader_018BC4[];
extern Vtx object_knight_Vtx_018BD0[];
extern Gfx object_knight_DL_018CF0[];
extern Gfx object_knight_DL_018DE0[];
extern Gfx object_knight_DL_018E50[];
extern u64 object_knight_Tex_018E58[];
extern u64 object_knight_Tex_018F58[];
extern AnimatedMatTexScrollParams object_knight_Matanimheader_019360TexScrollParams_019358[];
extern AnimatedMaterial object_knight_Matanimheader_019360[];
extern Vtx object_knightVtx_019368[];
extern Gfx object_knight_DL_0193A8[];
extern Gfx object_knight_DL_0193B0[];
extern u64 object_knight_Tex_019470[];
extern u64 object_knight_Tex_019490[];
extern Vtx object_knightVtx_019C90[];
extern Gfx object_knight_DL_01D380[];
extern Gfx object_knight_DL_01D4C0[];
extern Gfx object_knight_DL_01D650[];
extern Gfx object_knight_DL_01D710[];
extern Gfx object_knight_DL_01D870[];
extern Gfx object_knight_DL_01DA00[];
extern Gfx object_knight_DL_01DAC0[];
extern Gfx object_knight_DL_01DC00[];
extern Gfx object_knight_DL_01DCA0[];
extern Gfx object_knight_DL_01DD48[];
extern Gfx object_knight_DL_01DF88[];
extern Gfx object_knight_DL_01E050[];
extern Gfx object_knight_DL_01E0A0[];
extern Gfx object_knight_DL_01E878[];
extern Gfx object_knight_DL_01EAA8[];
extern Gfx object_knight_DL_01EB40[];
extern Gfx object_knight_DL_01EBD8[];
extern Gfx object_knight_DL_01EC98[];
extern Gfx object_knight_DL_01EDE0[];
extern Gfx object_knight_DL_01EF68[];
extern Gfx object_knight_DL_01F188[];
extern Gfx object_knight_DL_01F248[];
extern Gfx object_knight_DL_01F308[];
extern Gfx object_knight_DL_01F3C0[];
extern Gfx object_knight_DL_01F5C0[];
extern Gfx object_knight_DL_01F828[];
extern u64 object_knight_Tex_01F8E8[];
extern u64 object_knight_Tex_01F9E8[];
extern u64 object_knight_Tex_01FAE8[];
extern u64 object_knight_Tex_01FBE8[];
extern u64 object_knight_Tex_01FCE8[];
extern u64 object_knight_Tex_01FDE8[];
extern StandardLimb object_knight_Standardlimb_01FFE8;
extern StandardLimb object_knight_Standardlimb_01FFF4;
extern StandardLimb object_knight_Standardlimb_020000;
extern StandardLimb object_knight_Standardlimb_02000C;
extern StandardLimb object_knight_Standardlimb_020018;
extern StandardLimb object_knight_Standardlimb_020024;
extern StandardLimb object_knight_Standardlimb_020030;
extern StandardLimb object_knight_Standardlimb_02003C;
extern StandardLimb object_knight_Standardlimb_020048;
extern StandardLimb object_knight_Standardlimb_020054;
extern StandardLimb object_knight_Standardlimb_020060;
extern StandardLimb object_knight_Standardlimb_02006C;
extern StandardLimb object_knight_Standardlimb_020078;
extern StandardLimb object_knight_Standardlimb_020084;
extern StandardLimb object_knight_Standardlimb_020090;
extern StandardLimb object_knight_Standardlimb_02009C;
extern StandardLimb object_knight_Standardlimb_0200A8;
extern StandardLimb object_knight_Standardlimb_0200B4;
extern StandardLimb object_knight_Standardlimb_0200C0;
extern StandardLimb object_knight_Standardlimb_0200CC;
extern StandardLimb object_knight_Standardlimb_0200D8;
extern StandardLimb object_knight_Standardlimb_0200E4;
extern StandardLimb object_knight_Standardlimb_0200F0;
extern StandardLimb object_knight_Standardlimb_0200FC;
extern StandardLimb object_knight_Standardlimb_020108;
extern StandardLimb object_knight_Standardlimb_020114;
extern StandardLimb object_knight_Standardlimb_020120;
extern StandardLimb object_knight_Standardlimb_02012C;
extern void* object_knight_Skel_0201A8Limbs[];
extern FlexSkeletonHeader object_knight_Skel_0201A8;
extern StandardLimb object_knight_Standardlimb_0201B4;
extern StandardLimb object_knight_Standardlimb_0201C0;
extern StandardLimb object_knight_Standardlimb_0201CC;
extern StandardLimb object_knight_Standardlimb_0201D8;
extern StandardLimb object_knight_Standardlimb_0201E4;
extern StandardLimb object_knight_Standardlimb_0201F0;
extern StandardLimb object_knight_Standardlimb_0201FC;
extern StandardLimb object_knight_Standardlimb_020208;
extern StandardLimb object_knight_Standardlimb_020214;
extern StandardLimb object_knight_Standardlimb_020220;
extern StandardLimb object_knight_Standardlimb_02022C;
extern StandardLimb object_knight_Standardlimb_020238;
extern StandardLimb object_knight_Standardlimb_020244;
extern StandardLimb object_knight_Standardlimb_020250;
extern StandardLimb object_knight_Standardlimb_02025C;
extern StandardLimb object_knight_Standardlimb_020268;
extern StandardLimb object_knight_Standardlimb_020274;
extern StandardLimb object_knight_Standardlimb_020280;
extern StandardLimb object_knight_Standardlimb_02028C;
extern StandardLimb object_knight_Standardlimb_020298;
extern StandardLimb object_knight_Standardlimb_0202A4;
extern StandardLimb object_knight_Standardlimb_0202B0;
extern StandardLimb object_knight_Standardlimb_0202BC;
extern StandardLimb object_knight_Standardlimb_0202C8;
extern StandardLimb object_knight_Standardlimb_0202D4;
extern StandardLimb object_knight_Standardlimb_0202E0;
extern StandardLimb object_knight_Standardlimb_0202EC;
extern StandardLimb object_knight_Standardlimb_0202F8;
extern void* object_knight_Skel_020374Limbs[];
extern FlexSkeletonHeader object_knight_Skel_020374;
extern s16 object_knight_Anim_020950FrameData[];
extern JointIndex object_knight_Anim_020950JointIndices[];
extern AnimationHeader object_knight_Anim_020950;
extern s16 object_knight_Anim_02105CFrameData[];
extern JointIndex object_knight_Anim_02105CJointIndices[];
extern AnimationHeader object_knight_Anim_02105C;
extern s16 object_knight_Anim_021B10FrameData[];
extern JointIndex object_knight_Anim_021B10JointIndices[];
extern AnimationHeader object_knight_Anim_021B10;
extern s16 object_knight_Anim_021E34FrameData[];
extern JointIndex object_knight_Anim_021E34JointIndices[];
extern AnimationHeader object_knight_Anim_021E34;
extern s16 object_knight_Anim_022728FrameData[];
extern JointIndex object_knight_Anim_022728JointIndices[];
extern AnimationHeader object_knight_Anim_022728;
extern s16 object_knight_Anim_022CACFrameData[];
extern JointIndex object_knight_Anim_022CACJointIndices[];
extern AnimationHeader object_knight_Anim_022CAC;
#endif
