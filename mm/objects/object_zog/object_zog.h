#ifndef OBJECT_ZOG_H
#define OBJECT_ZOG_H 1

typedef enum ObjectZogLimb {
    /* 0x00 */ OBJECT_ZOG_LIMB_NONE,
    /* 0x01 */ OBJECT_ZOG_LIMB_01,
    /* 0x02 */ OBJECT_ZOG_LIMB_02,
    /* 0x03 */ OBJECT_ZOG_LIMB_03,
    /* 0x04 */ OBJECT_ZOG_LIMB_04,
    /* 0x05 */ OBJECT_ZOG_LIMB_05,
    /* 0x06 */ OBJECT_ZOG_LIMB_06,
    /* 0x07 */ OBJECT_ZOG_LIMB_07,
    /* 0x08 */ OBJECT_ZOG_LIMB_08,
    /* 0x09 */ OBJECT_ZOG_LIMB_09,
    /* 0x0A */ OBJECT_ZOG_LIMB_0A,
    /* 0x0B */ OBJECT_ZOG_LIMB_0B,
    /* 0x0C */ OBJECT_ZOG_LIMB_0C,
    /* 0x0D */ OBJECT_ZOG_LIMB_0D,
    /* 0x0E */ OBJECT_ZOG_LIMB_0E,
    /* 0x0F */ OBJECT_ZOG_LIMB_0F,
    /* 0x10 */ OBJECT_ZOG_LIMB_10,
    /* 0x11 */ OBJECT_ZOG_LIMB_11,
    /* 0x12 */ OBJECT_ZOG_LIMB_12,
    /* 0x13 */ OBJECT_ZOG_LIMB_13,
    /* 0x14 */ OBJECT_ZOG_LIMB_14,
    /* 0x15 */ OBJECT_ZOG_LIMB_15,
    /* 0x16 */ OBJECT_ZOG_LIMB_16,
    /* 0x17 */ OBJECT_ZOG_LIMB_MAX
} ObjectZogLimb;

extern s16 object_zog_Anim_001000FrameData[];
extern JointIndex object_zog_Anim_001000JointIndices[];
extern AnimationHeader object_zog_Anim_001000;
extern s16 object_zog_Anim_001970FrameData[];
extern JointIndex object_zog_Anim_001970JointIndices[];
extern AnimationHeader object_zog_Anim_001970;
extern s16 object_zog_Anim_002344FrameData[];
extern JointIndex object_zog_Anim_002344JointIndices[];
extern AnimationHeader object_zog_Anim_002344;
extern s16 object_zog_Anim_002894FrameData[];
extern JointIndex object_zog_Anim_002894JointIndices[];
extern AnimationHeader object_zog_Anim_002894;
extern s16 object_zog_Anim_0030E0FrameData[];
extern JointIndex object_zog_Anim_0030E0JointIndices[];
extern AnimationHeader object_zog_Anim_0030E0;
extern s16 object_zog_Anim_0037F8FrameData[];
extern JointIndex object_zog_Anim_0037F8JointIndices[];
extern AnimationHeader object_zog_Anim_0037F8;
extern s16 object_zog_Anim_0041D0FrameData[];
extern JointIndex object_zog_Anim_0041D0JointIndices[];
extern AnimationHeader object_zog_Anim_0041D0;
extern s16 object_zog_Anim_004BDCFrameData[];
extern JointIndex object_zog_Anim_004BDCJointIndices[];
extern AnimationHeader object_zog_Anim_004BDC;
extern s16 object_zog_Anim_0055B4FrameData[];
extern JointIndex object_zog_Anim_0055B4JointIndices[];
extern AnimationHeader object_zog_Anim_0055B4;
extern Vtx object_zogVtx_0055D0[];
extern Gfx gMikauGraveDirtDL[];
extern Gfx gMikauGraveDL[];
extern u64 gMikauGraveDirtTex[];
extern u64 gMikauGraveJawTex[];
extern u64 gMikauGraveEyeTex[];
extern u64 gMikauGraveTeethTex[];
extern u64 gMikauGraveSpinousTex[];
extern u64 gMikauGraveBoneTex[];
extern u64 gMikauGraveWoodenStickTex[];
extern u64 gMikauGraveCordTex[];
extern CamData gMikauGraveColCamDataList[];
extern SurfaceType gMikauGraveColSurfaceType[];
extern CollisionPoly gMikauGraveColPolygons[];
extern Vec3s gMikauGraveColVertices[];
extern CollisionHeader gMikauGraveCol;
extern s16 object_zog_Anim_008EB8FrameData[];
extern JointIndex object_zog_Anim_008EB8JointIndices[];
extern AnimationHeader object_zog_Anim_008EB8;
extern s16 object_zog_Anim_00931CFrameData[];
extern JointIndex object_zog_Anim_00931CJointIndices[];
extern AnimationHeader object_zog_Anim_00931C;
extern s16 object_zog_Anim_0099A4FrameData[];
extern JointIndex object_zog_Anim_0099A4JointIndices[];
extern AnimationHeader object_zog_Anim_0099A4;
extern s16 object_zog_Anim_009EC4FrameData[];
extern JointIndex object_zog_Anim_009EC4JointIndices[];
extern AnimationHeader object_zog_Anim_009EC4;
extern s16 object_zog_Anim_00B01CFrameData[];
extern JointIndex object_zog_Anim_00B01CJointIndices[];
extern AnimationHeader object_zog_Anim_00B01C;
extern s16 object_zog_Anim_00BF38FrameData[];
extern JointIndex object_zog_Anim_00BF38JointIndices[];
extern AnimationHeader object_zog_Anim_00BF38;
extern s16 object_zog_Anim_00CA94FrameData[];
extern JointIndex object_zog_Anim_00CA94JointIndices[];
extern AnimationHeader object_zog_Anim_00CA94;
extern s16 object_zog_Anim_00ECBCFrameData[];
extern JointIndex object_zog_Anim_00ECBCJointIndices[];
extern AnimationHeader object_zog_Anim_00ECBC;
extern s16 object_zog_Anim_00F110FrameData[];
extern JointIndex object_zog_Anim_00F110JointIndices[];
extern AnimationHeader object_zog_Anim_00F110;
extern s16 object_zog_Anim_00FC0CFrameData[];
extern JointIndex object_zog_Anim_00FC0CJointIndices[];
extern AnimationHeader object_zog_Anim_00FC0C;
extern s16 object_zog_Anim_0106B0FrameData[];
extern JointIndex object_zog_Anim_0106B0JointIndices[];
extern AnimationHeader object_zog_Anim_0106B0;
extern s16 object_zog_Anim_014B10FrameData[];
extern JointIndex object_zog_Anim_014B10JointIndices[];
extern AnimationHeader object_zog_Anim_014B10;
extern s16 object_zog_Anim_01579CFrameData[];
extern JointIndex object_zog_Anim_01579CJointIndices[];
extern AnimationHeader object_zog_Anim_01579C;
extern s16 object_zog_Anim_015B80FrameData[];
extern JointIndex object_zog_Anim_015B80JointIndices[];
extern AnimationHeader object_zog_Anim_015B80;
extern s16 object_zog_Anim_0166F4FrameData[];
extern JointIndex object_zog_Anim_0166F4JointIndices[];
extern AnimationHeader object_zog_Anim_0166F4;
extern s16 object_zog_Anim_017170FrameData[];
extern JointIndex object_zog_Anim_017170JointIndices[];
extern AnimationHeader object_zog_Anim_017170;
extern s16 object_zog_Anim_018600FrameData[];
extern JointIndex object_zog_Anim_018600JointIndices[];
extern AnimationHeader object_zog_Anim_018600;
extern s16 object_zog_Anim_01A06CFrameData[];
extern JointIndex object_zog_Anim_01A06CJointIndices[];
extern AnimationHeader object_zog_Anim_01A06C;
extern s16 object_zog_Anim_01A990FrameData[];
extern JointIndex object_zog_Anim_01A990JointIndices[];
extern AnimationHeader object_zog_Anim_01A990;
extern s16 object_zog_Anim_01AD58FrameData[];
extern JointIndex object_zog_Anim_01AD58JointIndices[];
extern AnimationHeader object_zog_Anim_01AD58;
extern s16 object_zog_Anim_01B72CFrameData[];
extern JointIndex object_zog_Anim_01B72CJointIndices[];
extern AnimationHeader object_zog_Anim_01B72C;
extern s16 object_zog_Anim_01BC88FrameData[];
extern JointIndex object_zog_Anim_01BC88JointIndices[];
extern AnimationHeader object_zog_Anim_01BC88;
extern Vtx object_zogVtx_01BCA0[];
extern Gfx object_zog_DL_01F830[];
extern Gfx object_zog_DL_01F9A8[];
extern Gfx object_zog_DL_01FB40[];
extern Gfx object_zog_DL_01FFA0[];
extern Gfx object_zog_DL_0201C8[];
extern Gfx object_zog_DL_0204D0[];
extern Gfx object_zog_DL_020690[];
extern Gfx object_zog_DL_0209B8[];
extern Gfx object_zog_DL_020CC0[];
extern Gfx object_zog_DL_020E80[];
extern Gfx object_zog_DL_021360[];
extern Gfx object_zog_DL_021438[];
extern Gfx object_zog_DL_021510[];
extern Gfx object_zog_DL_021850[];
extern Gfx object_zog_DL_021A88[];
extern Gfx object_zog_DL_021D48[];
extern Gfx object_zog_DL_021FF0[];
extern Gfx object_zog_DL_022228[];
extern Gfx object_zog_DL_0224E8[];
extern u64 object_zog_TLUT_022790[];
extern u64 object_zog_TLUT_022990[];
extern u64 object_zog_Tex_022B90[];
extern u64 object_zog_Tex_022BD0[];
extern u64 object_zog_Tex_022FD0[];
extern u64 object_zog_Tex_0233D0[];
extern u64 object_zog_Tex_0235D0[];
extern u64 object_zog_Tex_023DD0[];
extern u64 object_zog_Tex_023E50[];
extern u64 object_zog_Tex_024050[];
extern u64 object_zog_Tex_024150[];
extern u64 object_zog_Tex_024350[];
extern u64 object_zog_Tex_024550[];
extern u64 object_zog_Tex_024750[];
extern u64 object_zog_Tex_024F50[];
extern u64 object_zog_Tex_025750[];
extern u64 object_zog_Tex_025F50[];
extern u64 object_zog_Tex_026750[];
extern Vtx object_zogVtx_026F50[];
extern Gfx object_zog_DL_0280A0[];
extern Gfx object_zog_DL_0280A8[];
extern u64 object_zog_Tex_028610[];
extern u64 object_zog_Tex_028810[];
extern u64 object_zog_Tex_028C10[];
extern StandardLimb object_zog_Standardlimb_029010;
extern StandardLimb object_zog_Standardlimb_02901C;
extern StandardLimb object_zog_Standardlimb_029028;
extern StandardLimb object_zog_Standardlimb_029034;
extern StandardLimb object_zog_Standardlimb_029040;
extern StandardLimb object_zog_Standardlimb_02904C;
extern StandardLimb object_zog_Standardlimb_029058;
extern StandardLimb object_zog_Standardlimb_029064;
extern StandardLimb object_zog_Standardlimb_029070;
extern StandardLimb object_zog_Standardlimb_02907C;
extern StandardLimb object_zog_Standardlimb_029088;
extern StandardLimb object_zog_Standardlimb_029094;
extern StandardLimb object_zog_Standardlimb_0290A0;
extern StandardLimb object_zog_Standardlimb_0290AC;
extern StandardLimb object_zog_Standardlimb_0290B8;
extern StandardLimb object_zog_Standardlimb_0290C4;
extern StandardLimb object_zog_Standardlimb_0290D0;
extern StandardLimb object_zog_Standardlimb_0290DC;
extern StandardLimb object_zog_Standardlimb_0290E8;
extern StandardLimb object_zog_Standardlimb_0290F4;
extern StandardLimb object_zog_Standardlimb_029100;
extern StandardLimb object_zog_Standardlimb_02910C;
extern void* object_zog_Skel_029170Limbs[];
extern FlexSkeletonHeader object_zog_Skel_029170;
#endif
