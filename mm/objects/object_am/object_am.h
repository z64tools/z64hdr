#ifndef OBJECT_AM_H
#define OBJECT_AM_H 1

typedef enum ObjectAmLimb {
    /* 0x00 */ OBJECT_AM_LIMB_NONE,
    /* 0x01 */ OBJECT_AM_LIMB_01,
    /* 0x02 */ OBJECT_AM_LIMB_02,
    /* 0x03 */ OBJECT_AM_LIMB_BODY,
    /* 0x04 */ OBJECT_AM_LIMB_04,
    /* 0x05 */ OBJECT_AM_LIMB_05,
    /* 0x06 */ OBJECT_AM_LIMB_SHIELD,
    /* 0x07 */ OBJECT_AM_LIMB_07,
    /* 0x08 */ OBJECT_AM_LIMB_08,
    /* 0x09 */ OBJECT_AM_LIMB_SWORD,
    /* 0x0A */ OBJECT_AM_LIMB_0A,
    /* 0x0B */ OBJECT_AM_LIMB_0B,
    /* 0x0C */ OBJECT_AM_LIMB_BASE,
    /* 0x0D */ OBJECT_AM_LIMB_0D,
    /* 0x0E */ OBJECT_AM_LIMB_MAX
} ObjectAmLimb;

extern CamData object_am_Colheader_000118CamDataList[];
extern SurfaceType object_am_Colheader_000118CamPosData[];
extern CollisionPoly object_am_Colheader_000118Polygons[];
extern Vec3s object_am_Colheader_000118Vertices[];
extern CollisionHeader object_am_Colheader_000118;
extern s16 sArmosHopAnimFrameData[];
extern JointIndex sArmosHopAnimJointIndices[];
extern AnimationHeader gArmosHopAnim;
extern s16 sArmosPushedBackAnimFrameData[];
extern JointIndex sArmosPushedBackAnimJointIndices[];
extern AnimationHeader gArmosPushedBackAnim;
extern Vtx object_amVtx_000350[];
extern Gfx object_am_DL_0005D0[];
extern Vtx object_amVtx_0006E8[];
extern Gfx object_am_DL_0007A8[];
extern Vtx object_amVtx_000838[];
extern Gfx object_am_DL_0016C8[];
extern Vtx object_amVtx_001EA8[];
extern Gfx object_am_DL_002278[];
extern Vtx object_amVtx_002440[];
extern Gfx object_am_DL_002550[];
extern u64 object_am_Tex_002638[];
extern u64 object_am_Tex_002838[];
extern u64 object_am_Tex_002938[];
extern u64 object_am_Tex_002D38[];
extern u64 object_am_Tex_002E38[];
extern u64 object_am_Tex_003038[];
extern u64 object_am_Tex_003238[];
extern u64 object_am_Tex_003A38[];
extern u64 object_am_Tex_003C38[];
extern u64 object_am_Tex_004438[];
extern u64 object_am_Tex_004C38[];
extern u64 object_am_Tex_005438[];
extern u64 object_am_Tex_005478[];
extern StandardLimb object_am_Standardlimb_005878;
extern StandardLimb object_am_Standardlimb_005884;
extern StandardLimb object_am_Standardlimb_005890;
extern StandardLimb object_am_Standardlimb_00589C;
extern StandardLimb object_am_Standardlimb_0058A8;
extern StandardLimb object_am_Standardlimb_0058B4;
extern StandardLimb object_am_Standardlimb_0058C0;
extern StandardLimb object_am_Standardlimb_0058CC;
extern StandardLimb object_am_Standardlimb_0058D8;
extern StandardLimb object_am_Standardlimb_0058E4;
extern StandardLimb object_am_Standardlimb_0058F0;
extern StandardLimb object_am_Standardlimb_0058FC;
extern StandardLimb object_am_Standardlimb_005908;
extern void* object_am_Skel_005948Limbs[];
extern SkeletonHeader object_am_Skel_005948;
extern s16 sArmosTakeDamageAnimFrameData[];
extern JointIndex sArmosTakeDamageAnimJointIndices[];
extern AnimationHeader gArmosTakeDamageAnim;
extern CamData object_am_Colheader_005CF8CamDataList[];
extern SurfaceType object_am_Colheader_005CF8SurfaceType[];
extern CollisionPoly object_am_Colheader_005CF8Polygons[];
extern Vec3s object_am_Colheader_005CF8Vertices[];
extern CollisionHeader object_am_Colheader_005CF8;
#endif
