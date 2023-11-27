#ifndef OBJECT_JS_H
#define OBJECT_JS_H 1

typedef enum ObjectJsLimb {
    /* 0x00 */ OBJECT_JS_LIMB_NONE,
    /* 0x01 */ OBJECT_JS_LIMB_01,
    /* 0x02 */ OBJECT_JS_LIMB_02,
    /* 0x03 */ OBJECT_JS_LIMB_03,
    /* 0x04 */ OBJECT_JS_LIMB_04,
    /* 0x05 */ OBJECT_JS_LIMB_05,
    /* 0x06 */ OBJECT_JS_LIMB_06,
    /* 0x07 */ OBJECT_JS_LIMB_07,
    /* 0x08 */ OBJECT_JS_LIMB_08,
    /* 0x09 */ OBJECT_JS_LIMB_09,
    /* 0x0A */ OBJECT_JS_LIMB_0A,
    /* 0x0B */ OBJECT_JS_LIMB_0B,
    /* 0x0C */ OBJECT_JS_LIMB_0C,
    /* 0x0D */ OBJECT_JS_LIMB_MAX
} ObjectJsLimb;

extern s16 object_js_Anim_00016CFrameData[];
extern JointIndex object_js_Anim_00016CJointIndices[];
extern AnimationHeader object_js_Anim_00016C;
extern s16 object_js_Anim_0003DCFrameData[];
extern JointIndex object_js_Anim_0003DCJointIndices[];
extern AnimationHeader object_js_Anim_0003DC;
extern s16 object_js_Anim_000AD4FrameData[];
extern JointIndex object_js_Anim_000AD4JointIndices[];
extern AnimationHeader object_js_Anim_000AD4;
extern s16 object_js_Anim_000C7CFrameData[];
extern JointIndex object_js_Anim_000C7CJointIndices[];
extern AnimationHeader object_js_Anim_000C7C;
extern s16 object_js_Anim_000F4CFrameData[];
extern JointIndex object_js_Anim_000F4CJointIndices[];
extern AnimationHeader object_js_Anim_000F4C;
extern Vtx object_jsVtx_000F60[];
extern Gfx object_js_DL_003F30[];
extern Gfx object_js_DL_004510[];
extern Gfx object_js_DL_004688[];
extern Gfx object_js_DL_004868[];
extern Gfx object_js_DL_004B60[];
extern Gfx object_js_DL_004EA0[];
extern Gfx object_js_DL_004FD0[];
extern Gfx object_js_DL_005178[];
extern Gfx object_js_DL_0052D8[];
extern Gfx object_js_DL_005408[];
extern Gfx object_js_DL_0055B0[];
extern u64 object_js_TLUT_005710[];
extern u64 object_js_Tex_005910[];
extern u64 object_js_Tex_005990[];
extern u64 object_js_Tex_005A90[];
extern u64 object_js_Tex_005C90[];
extern u64 object_js_Tex_005CD0[];
extern u64 object_js_Tex_0060D0[];
extern u64 object_js_Tex_0061D0[];
extern u64 object_js_Tex_0063D0[];
extern u64 object_js_Tex_0065D0[];
extern u64 object_js_Tex_0067D0[];
extern StandardLimb object_js_Standardlimb_0068D0;
extern StandardLimb object_js_Standardlimb_0068DC;
extern StandardLimb object_js_Standardlimb_0068E8;
extern StandardLimb object_js_Standardlimb_0068F4;
extern StandardLimb object_js_Standardlimb_006900;
extern StandardLimb object_js_Standardlimb_00690C;
extern StandardLimb object_js_Standardlimb_006918;
extern StandardLimb object_js_Standardlimb_006924;
extern StandardLimb object_js_Standardlimb_006930;
extern StandardLimb object_js_Standardlimb_00693C;
extern StandardLimb object_js_Standardlimb_006948;
extern StandardLimb object_js_Standardlimb_006954;
extern void* object_js_Skel_006990Limbs[];
extern FlexSkeletonHeader object_js_Skel_006990;
extern CamData object_js_Colheader_0069E8CamDataList[];
extern SurfaceType object_js_Colheader_0069E8SurfaceType[];
extern CollisionPoly object_js_Colheader_0069E8Polygons[];
extern Vec3s object_js_Colheader_0069E8Vertices[];
extern CollisionHeader object_js_Colheader_0069E8;
#endif
