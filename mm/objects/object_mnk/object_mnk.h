#ifndef OBJECT_MNK_H
#define OBJECT_MNK_H 1

typedef enum ObjectMnk1Limb {
    /* 0x00 */ OBJECT_MNK_1_LIMB_NONE,
    /* 0x01 */ OBJECT_MNK_1_LIMB_01,
    /* 0x02 */ OBJECT_MNK_1_LIMB_02,
    /* 0x03 */ OBJECT_MNK_1_LIMB_03,
    /* 0x04 */ OBJECT_MNK_1_LIMB_04,
    /* 0x05 */ OBJECT_MNK_1_LIMB_MAX
} ObjectMnk1Limb;

typedef enum ObjectMnk2Limb {
    /* 0x00 */ OBJECT_MNK_2_LIMB_NONE,
    /* 0x01 */ OBJECT_MNK_2_LIMB_01,
    /* 0x02 */ OBJECT_MNK_2_LIMB_02,
    /* 0x03 */ OBJECT_MNK_2_LIMB_03,
    /* 0x04 */ OBJECT_MNK_2_LIMB_04,
    /* 0x05 */ OBJECT_MNK_2_LIMB_05,
    /* 0x06 */ OBJECT_MNK_2_LIMB_06,
    /* 0x07 */ OBJECT_MNK_2_LIMB_07,
    /* 0x08 */ OBJECT_MNK_2_LIMB_08,
    /* 0x09 */ OBJECT_MNK_2_LIMB_09,
    /* 0x0A */ OBJECT_MNK_2_LIMB_0A,
    /* 0x0B */ OBJECT_MNK_2_LIMB_0B,
    /* 0x0C */ OBJECT_MNK_2_LIMB_0C,
    /* 0x0D */ OBJECT_MNK_2_LIMB_0D,
    /* 0x0E */ OBJECT_MNK_2_LIMB_0E,
    /* 0x0F */ OBJECT_MNK_2_LIMB_0F,
    /* 0x10 */ OBJECT_MNK_2_LIMB_10,
    /* 0x11 */ OBJECT_MNK_2_LIMB_11,
    /* 0x12 */ OBJECT_MNK_2_LIMB_12,
    /* 0x13 */ OBJECT_MNK_2_LIMB_13,
    /* 0x14 */ OBJECT_MNK_2_LIMB_14,
    /* 0x15 */ OBJECT_MNK_2_LIMB_15,
    /* 0x16 */ OBJECT_MNK_2_LIMB_16,
    /* 0x17 */ OBJECT_MNK_2_LIMB_MAX
} ObjectMnk2Limb;

typedef enum ObjectMnk3Limb {
    /* 0x00 */ OBJECT_MNK_3_LIMB_NONE,
    /* 0x01 */ OBJECT_MNK_3_LIMB_01,
    /* 0x02 */ OBJECT_MNK_3_LIMB_02,
    /* 0x03 */ OBJECT_MNK_3_LIMB_03,
    /* 0x04 */ OBJECT_MNK_3_LIMB_MAX
} ObjectMnk3Limb;

extern Vtx object_mnkVtx_000000[];
extern Gfx object_mnk_DL_000F50[];
extern Gfx object_mnk_DL_000F58[];
extern u64 object_mnk_TLUT_001620[];
extern u64 object_mnk_Tex_001820[];
extern u64 object_mnk_Tex_001C20[];
extern u64 object_mnk_Tex_001D20[];
extern u64 object_mnk_Tex_001E20[];
extern u64 object_mnk_Tex_002620[];
extern AnimatedMatTexScrollParams object_mnk_Matanimheader_002E28TexScrollParams_002E20[];
extern AnimatedMaterial object_mnk_Matanimheader_002E28[];
extern CamData object_mnk_Colheader_0033E8CamDataList[];
extern SurfaceType object_mnk_Colheader_0033E8SurfaceType[];
extern CollisionPoly object_mnk_Colheader_0033E8Polygons[];
extern Vec3s object_mnk_Colheader_0033E8Vertices[];
extern CollisionHeader object_mnk_Colheader_0033E8;
extern s16 object_mnk_Anim_003504FrameData[];
extern JointIndex object_mnk_Anim_003504JointIndices[];
extern AnimationHeader object_mnk_Anim_003504;
extern s16 object_mnk_Anim_003584FrameData[];
extern JointIndex object_mnk_Anim_003584JointIndices[];
extern AnimationHeader object_mnk_Anim_003584;
extern s16 object_mnk_Anim_0037E8FrameData[];
extern JointIndex object_mnk_Anim_0037E8JointIndices[];
extern AnimationHeader object_mnk_Anim_0037E8;
extern s16 object_mnk_Anim_003854FrameData[];
extern JointIndex object_mnk_Anim_003854JointIndices[];
extern AnimationHeader object_mnk_Anim_003854;
extern Vtx object_mnkVtx_003870[];
extern Gfx object_mnk_DL_003C70[];
extern Gfx object_mnk_DL_003D40[];
extern Gfx object_mnk_DL_003DF8[];
extern u64 object_mnk_Tex_003F10[];
extern u64 object_mnk_Tex_004F10[];
extern StandardLimb object_mnk_Standardlimb_005110;
extern StandardLimb object_mnk_Standardlimb_00511C;
extern StandardLimb object_mnk_Standardlimb_005128;
extern StandardLimb object_mnk_Standardlimb_005134;
extern void* gMonkeyTiedUpPoleSkelLimbs[];
extern FlexSkeletonHeader gMonkeyTiedUpPoleSkel;
extern s16 object_mnk_Anim_005194FrameData[];
extern JointIndex object_mnk_Anim_005194JointIndices[];
extern AnimationHeader object_mnk_Anim_005194;
extern s16 object_mnk_Anim_0052C4FrameData[];
extern JointIndex object_mnk_Anim_0052C4JointIndices[];
extern AnimationHeader object_mnk_Anim_0052C4;
extern s16 object_mnk_Anim_005390FrameData[];
extern JointIndex object_mnk_Anim_005390JointIndices[];
extern AnimationHeader object_mnk_Anim_005390;
extern s16 object_mnk_Anim_005414FrameData[];
extern JointIndex object_mnk_Anim_005414JointIndices[];
extern AnimationHeader object_mnk_Anim_005414;
extern s16 object_mnk_Anim_0054B4FrameData[];
extern JointIndex object_mnk_Anim_0054B4JointIndices[];
extern AnimationHeader object_mnk_Anim_0054B4;
extern s16 object_mnk_Anim_005A08FrameData[];
extern JointIndex object_mnk_Anim_005A08JointIndices[];
extern AnimationHeader object_mnk_Anim_005A08;
extern s16 object_mnk_Anim_0062D8FrameData[];
extern JointIndex object_mnk_Anim_0062D8JointIndices[];
extern AnimationHeader object_mnk_Anim_0062D8;
extern s16 object_mnk_Anim_007380FrameData[];
extern JointIndex object_mnk_Anim_007380JointIndices[];
extern AnimationHeader object_mnk_Anim_007380;
extern s16 sMonkeyHangingStruggleAnimFrameData[];
extern JointIndex sMonkeyHangingStruggleAnimJointIndices[];
extern AnimationHeader gMonkeyHangingStruggleAnim;
extern s16 object_mnk_Anim_008814FrameData[];
extern JointIndex object_mnk_Anim_008814JointIndices[];
extern AnimationHeader object_mnk_Anim_008814;
extern s16 object_mnk_Anim_0095B4FrameData[];
extern JointIndex object_mnk_Anim_0095B4JointIndices[];
extern AnimationHeader object_mnk_Anim_0095B4;
extern s16 object_mnk_Anim_0099B0FrameData[];
extern JointIndex object_mnk_Anim_0099B0JointIndices[];
extern AnimationHeader object_mnk_Anim_0099B0;
extern s16 object_mnk_Anim_009CC0FrameData[];
extern JointIndex object_mnk_Anim_009CC0JointIndices[];
extern AnimationHeader object_mnk_Anim_009CC0;
extern s16 object_mnk_Anim_009FE0FrameData[];
extern JointIndex object_mnk_Anim_009FE0JointIndices[];
extern AnimationHeader object_mnk_Anim_009FE0;
extern s16 object_mnk_Anim_00B864FrameData[];
extern JointIndex object_mnk_Anim_00B864JointIndices[];
extern AnimationHeader object_mnk_Anim_00B864;
extern s16 object_mnk_Anim_00C23CFrameData[];
extern JointIndex object_mnk_Anim_00C23CJointIndices[];
extern AnimationHeader object_mnk_Anim_00C23C;
extern s16 object_mnk_Anim_00CAE8FrameData[];
extern JointIndex object_mnk_Anim_00CAE8JointIndices[];
extern AnimationHeader object_mnk_Anim_00CAE8;
extern s16 object_mnk_Anim_00CD4CFrameData[];
extern JointIndex object_mnk_Anim_00CD4CJointIndices[];
extern AnimationHeader object_mnk_Anim_00CD4C;
extern s16 object_mnk_Anim_00D1C8FrameData[];
extern JointIndex object_mnk_Anim_00D1C8JointIndices[];
extern AnimationHeader object_mnk_Anim_00D1C8;
extern s16 object_mnk_Anim_00EC44FrameData[];
extern JointIndex object_mnk_Anim_00EC44JointIndices[];
extern AnimationHeader object_mnk_Anim_00EC44;
extern s16 object_mnk_Anim_00F248FrameData[];
extern JointIndex object_mnk_Anim_00F248JointIndices[];
extern AnimationHeader object_mnk_Anim_00F248;
extern s16 object_mnk_Anim_00F9A4FrameData[];
extern JointIndex object_mnk_Anim_00F9A4JointIndices[];
extern AnimationHeader object_mnk_Anim_00F9A4;
extern s16 object_mnk_Anim_00FE34FrameData[];
extern JointIndex object_mnk_Anim_00FE34JointIndices[];
extern AnimationHeader object_mnk_Anim_00FE34;
extern s16 object_mnk_Anim_010298FrameData[];
extern JointIndex object_mnk_Anim_010298JointIndices[];
extern AnimationHeader object_mnk_Anim_010298;
extern s16 object_mnk_Anim_0105DCFrameData[];
extern JointIndex object_mnk_Anim_0105DCJointIndices[];
extern AnimationHeader object_mnk_Anim_0105DC;
extern Vtx object_mnkVtx_0105F0[];
extern Gfx object_mnk_DL_012770[];
extern Gfx object_mnk_DL_012918[];
extern Gfx object_mnk_DL_0129D0[];
extern Gfx object_mnk_DL_012A60[];
extern Gfx object_mnk_DL_012C10[];
extern Gfx object_mnk_DL_012E60[];
extern Gfx object_mnk_DL_012F48[];
extern Gfx object_mnk_DL_0132A8[];
extern Gfx object_mnk_DL_013430[];
extern Gfx object_mnk_DL_013550[];
extern Gfx object_mnk_DL_013660[];
extern Gfx object_mnk_DL_013818[];
extern Gfx object_mnk_DL_013938[];
extern Gfx object_mnk_DL_013A48[];
extern Gfx object_mnk_DL_013C00[];
extern Gfx object_mnk_DL_013E80[];
extern Gfx object_mnk_DL_014080[];
extern Gfx object_mnk_DL_014310[];
extern Gfx object_mnk_DL_014590[];
extern Gfx object_mnk_DL_014790[];
extern u64 object_mnk_TLUT_014A20[];
extern u64 object_mnk_Tex_014C20[];
extern u64 object_mnk_Tex_015020[];
extern u64 object_mnk_Tex_015820[];
extern u64 object_mnk_Tex_015920[];
extern u64 object_mnk_Tex_016120[];
extern u64 object_mnk_Tex_016920[];
extern u64 object_mnk_Tex_017120[];
extern u64 object_mnk_Tex_017920[];
extern u64 object_mnk_Tex_018120[];
extern u64 object_mnk_Tex_018920[];
extern u64 object_mnk_Tex_018A20[];
extern u64 object_mnk_Tex_018E20[];
extern u64 object_mnk_Tex_018F20[];
extern u64 object_mnk_Tex_019720[];
extern u64 object_mnk_Tex_019820[];
extern u64 object_mnk_Tex_019920[];
extern StandardLimb object_mnk_Standardlimb_019A28;
extern StandardLimb object_mnk_Standardlimb_019A34;
extern StandardLimb object_mnk_Standardlimb_019A40;
extern StandardLimb object_mnk_Standardlimb_019A4C;
extern StandardLimb object_mnk_Standardlimb_019A58;
extern StandardLimb object_mnk_Standardlimb_019A64;
extern StandardLimb object_mnk_Standardlimb_019A70;
extern StandardLimb object_mnk_Standardlimb_019A7C;
extern StandardLimb object_mnk_Standardlimb_019A88;
extern StandardLimb object_mnk_Standardlimb_019A94;
extern StandardLimb object_mnk_Standardlimb_019AA0;
extern StandardLimb object_mnk_Standardlimb_019AAC;
extern StandardLimb object_mnk_Standardlimb_019AB8;
extern StandardLimb object_mnk_Standardlimb_019AC4;
extern StandardLimb object_mnk_Standardlimb_019AD0;
extern StandardLimb object_mnk_Standardlimb_019ADC;
extern StandardLimb object_mnk_Standardlimb_019AE8;
extern StandardLimb object_mnk_Standardlimb_019AF4;
extern StandardLimb object_mnk_Standardlimb_019B00;
extern StandardLimb object_mnk_Standardlimb_019B0C;
extern StandardLimb object_mnk_Standardlimb_019B18;
extern StandardLimb object_mnk_Standardlimb_019B24;
extern void* gMonkeySkelLimbs[];
extern FlexSkeletonHeader gMonkeySkel;
extern s16 object_mnk_Anim_01A4F8FrameData[];
extern JointIndex object_mnk_Anim_01A4F8JointIndices[];
extern AnimationHeader object_mnk_Anim_01A4F8;
extern s16 object_mnk_Anim_01B468FrameData[];
extern JointIndex object_mnk_Anim_01B468JointIndices[];
extern AnimationHeader object_mnk_Anim_01B468;
extern s16 object_mnk_Anim_01BB0CFrameData[];
extern JointIndex object_mnk_Anim_01BB0CJointIndices[];
extern AnimationHeader object_mnk_Anim_01BB0C;
extern s16 object_mnk_Anim_01C17CFrameData[];
extern JointIndex object_mnk_Anim_01C17CJointIndices[];
extern AnimationHeader object_mnk_Anim_01C17C;
extern s16 object_mnk_Anim_01C1B8FrameData[];
extern JointIndex object_mnk_Anim_01C1B8JointIndices[];
extern AnimationHeader object_mnk_Anim_01C1B8;
extern s16 object_mnk_Anim_01C1F8FrameData[];
extern JointIndex object_mnk_Anim_01C1F8JointIndices[];
extern AnimationHeader object_mnk_Anim_01C1F8;
extern s16 sMonkeyHangingRopeStruggleAnimFrameData[];
extern JointIndex sMonkeyHangingRopeStruggleAnimJointIndices[];
extern AnimationHeader gMonkeyHangingRopeStruggleAnim;
extern Vtx object_mnkVtx_01C3D0[];
extern Gfx object_mnk_DL_01C660[];
extern Gfx object_mnk_DL_01C770[];
extern Gfx object_mnk_DL_01C818[];
extern u64 object_mnk_Tex_01C8E8[];
extern u64 object_mnk_Tex_01CAE8[];
extern u64 object_mnk_Tex_01D2E8[];
extern StandardLimb object_mnk_Standardlimb_01D4E8;
extern StandardLimb object_mnk_Standardlimb_01D4F4;
extern StandardLimb object_mnk_Standardlimb_01D500;
extern void* gMonkeyHangingRopeSkelLimbs[];
extern FlexSkeletonHeader gMonkeyHangingRopeSkel;
#endif
