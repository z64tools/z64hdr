#ifndef GAMEPLAY_FIELD_KEEP_H
#define GAMEPLAY_FIELD_KEEP_H 1

typedef enum ButterflyLimb {
    /* 0x00 */ BUTTERFLY_LIMB_NONE,
    /* 0x01 */ BUTTERFLY_LIMB_01,
    /* 0x02 */ BUTTERFLY_LIMB_02,
    /* 0x03 */ BUTTERFLY_LIMB_03,
    /* 0x04 */ BUTTERFLY_LIMB_04,
    /* 0x05 */ BUTTERFLY_LIMB_05,
    /* 0x06 */ BUTTERFLY_LIMB_06,
    /* 0x07 */ BUTTERFLY_LIMB_07,
    /* 0x08 */ BUTTERFLY_LIMB_MAX
} ButterflyLimb;

extern u64 gameplay_field_keep_Tex_000000[];
extern u64 gameplay_field_keep_Tex_000400[];
extern Vtx gameplay_field_keepVtx_000C00[];
extern Gfx gameplay_field_keep_DL_000C40[];
extern u64 gameplay_field_keep_Tex_000CD0[];
extern s16 sameplay_field_keep_Anim_001D20FrameData[];
extern JointIndex sameplay_field_keep_Anim_001D20JointIndices[];
extern AnimationHeader gameplay_field_keep_Anim_001D20;
extern Gfx gameplay_field_keep_DL_001D30[];
extern Gfx gameplay_field_keep_DL_001DD0[];
extern Gfx gameplay_field_keep_DL_001DE0[];
extern Vtx gameplay_field_keepVtx_001DF0[];
extern Gfx gameplay_field_keep_DL_001E30[];
extern Gfx gameplay_field_keep_DL_001ED0[];
extern Gfx gameplay_field_keep_DL_001EE0[];
extern Vtx gameplay_field_keepVtx_001EF0[];
extern u64 gameplay_field_keep_Tex_001F30[];
extern StandardLimb gameplay_field_keep_Standardlimb_002F30;
extern StandardLimb gameplay_field_keep_Standardlimb_002F3C;
extern StandardLimb gameplay_field_keep_Standardlimb_002F48;
extern StandardLimb gameplay_field_keep_Standardlimb_002F54;
extern StandardLimb gameplay_field_keep_Standardlimb_002F60;
extern StandardLimb gameplay_field_keep_Standardlimb_002F6C;
extern StandardLimb gameplay_field_keep_Standardlimb_002F78;
extern void* gameplay_field_keep_Skel_002FA0Limbs[];
extern SkeletonHeader gameplay_field_keep_Skel_002FA0;
extern u64 gameplay_field_keep_TLUT_002FB0[];
extern u64 gameplay_field_keep_Tex_002FD0[];
extern u64 gameplay_field_keep_Tex_0033D0[];
extern Vtx gameplay_field_keepVtx_0037D0[];
extern Gfx gameplay_field_keep_DL_003870[];
extern Gfx gameplay_field_keep_DL_003938[];
extern CamData gameplay_field_keep_Colheader_003A60CamDataList[];
extern SurfaceType gameplay_field_keep_Colheader_003A60SurfaceType[];
extern CollisionPoly gameplay_field_keep_Colheader_003A60Polygons[];
extern Vec3s gameplay_field_keep_Colheader_003A60Vertices[];
extern CollisionHeader gameplay_field_keep_Colheader_003A60;
extern Vtx gameplay_field_keepVtx_003A90[];
extern Gfx gFieldWoodDoorFrameDL[];
extern Gfx gFieldWoodDoorLeftDL[];
extern Gfx gFieldWoodDoorRightDL[];
extern u64 gameplay_field_keep_Tex_004400[];
extern u64 gameplay_field_keep_Tex_004600[];
extern u64 gFieldWoodDoorTex[];
extern u64 gameplay_field_keep_TLUT_005800[];
extern u64 gameplay_field_keep_Tex_005828[];
extern Vtx gameplay_field_keepVtx_006028[];
extern Gfx gameplay_field_keep_DL_0061E8[];
extern Vtx gameplay_field_keepVtx_006300[];
extern Gfx gameplay_field_keep_DL_006420[];
extern Vtx gameplay_field_keepVtx_006500[];
extern Gfx gameplay_field_keep_DL_0066B0[];
extern Gfx gameplay_field_keep_DL_006760[];
extern u64 gameplay_field_keep_Tex_006810[];
extern u64 gameplay_field_keep_Tex_007010[];
extern Vtx gameplay_field_keepVtx_007810[];
extern Gfx gKusaBushType1DL[];
extern Gfx gKusaBushType2DL[];
extern u64 gFieldSandstorm1Tex[];
extern u64 gFieldSandstorm2Tex[];
extern Gfx gFieldSandstormDL[];
extern u64 gameplay_field_keep_Tex_008A90[];
#endif
