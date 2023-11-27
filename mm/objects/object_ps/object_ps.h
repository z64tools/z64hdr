#ifndef OBJECT_PS_H
#define OBJECT_PS_H 1

typedef enum ObjectPsLimb {
    /* 0x00 */ OBJECT_PS_LIMB_NONE,
    /* 0x01 */ OBJECT_PS_LIMB_01,
    /* 0x02 */ OBJECT_PS_LIMB_02,
    /* 0x03 */ OBJECT_PS_LIMB_03,
    /* 0x04 */ OBJECT_PS_LIMB_04,
    /* 0x05 */ OBJECT_PS_LIMB_05,
    /* 0x06 */ OBJECT_PS_LIMB_06,
    /* 0x07 */ OBJECT_PS_LIMB_07,
    /* 0x08 */ OBJECT_PS_LIMB_08,
    /* 0x09 */ OBJECT_PS_LIMB_09,
    /* 0x0A */ OBJECT_PS_LIMB_0A,
    /* 0x0B */ OBJECT_PS_LIMB_0B,
    /* 0x0C */ OBJECT_PS_LIMB_MAX
} ObjectPsLimb;

extern s16 object_ps_Anim_00049CFrameData[];
extern JointIndex object_ps_Anim_00049CJointIndices[];
extern AnimationHeader object_ps_Anim_00049C;
extern Vtx object_psVtx_0004B0[];
extern Gfx object_ps_DL_001B30[];
extern Gfx object_ps_DL_001B38[];
extern Gfx object_ps_DL_001F38[];
extern Gfx object_ps_DL_002438[];
extern Gfx object_ps_DL_002560[];
extern Gfx object_ps_DL_002638[];
extern Gfx object_ps_DL_002840[];
extern Gfx object_ps_DL_002948[];
extern Gfx object_ps_DL_002A60[];
extern Gfx object_ps_DL_002B68[];
extern u64 object_ps_TLUT_002C80[];
extern u64 object_ps_Tex_003F00[];
extern u64 object_ps_Tex_0062C0[];
extern u64 object_ps_Tex_006300[];
extern u64 object_ps_Tex_006700[];
extern u64 object_ps_Tex_006740[];
extern u64 object_ps_Tex_006780[];
extern u64 object_ps_Tex_006B80[];
extern u64 object_ps_Tex_006D80[];
extern StandardLimb object_ps_Standardlimb_007180;
extern StandardLimb object_ps_Standardlimb_00718C;
extern StandardLimb object_ps_Standardlimb_007198;
extern StandardLimb object_ps_Standardlimb_0071A4;
extern StandardLimb object_ps_Standardlimb_0071B0;
extern StandardLimb object_ps_Standardlimb_0071BC;
extern StandardLimb object_ps_Standardlimb_0071C8;
extern StandardLimb object_ps_Standardlimb_0071D4;
extern StandardLimb object_ps_Standardlimb_0071E0;
extern StandardLimb object_ps_Standardlimb_0071EC;
extern StandardLimb object_ps_Standardlimb_0071F8;
extern void* object_ps_Skel_007230Limbs[];
extern FlexSkeletonHeader object_ps_Skel_007230;
extern CamData object_ps_Colheader_0072E0CamDataList[];
extern SurfaceType object_ps_Colheader_0072E0SurfaceType[];
extern CollisionPoly object_ps_Colheader_0072E0Polygons[];
extern Vec3s object_ps_Colheader_0072E0Vertices[];
extern CollisionHeader object_ps_Colheader_0072E0;
extern s16 object_ps_Anim_0078FCFrameData[];
extern JointIndex object_ps_Anim_0078FCJointIndices[];
extern AnimationHeader object_ps_Anim_0078FC;
#endif
