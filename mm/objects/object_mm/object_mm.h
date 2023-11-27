#ifndef OBJECT_MM_H
#define OBJECT_MM_H 1

typedef enum ObjectMmLimb {
    /* 0x00 */ OBJECT_MM_LIMB_NONE,
    /* 0x01 */ OBJECT_MM_LIMB_01,
    /* 0x02 */ OBJECT_MM_LIMB_02,
    /* 0x03 */ OBJECT_MM_LIMB_03,
    /* 0x04 */ OBJECT_MM_LIMB_04,
    /* 0x05 */ OBJECT_MM_LIMB_05,
    /* 0x06 */ OBJECT_MM_LIMB_06,
    /* 0x07 */ OBJECT_MM_LIMB_07,
    /* 0x08 */ OBJECT_MM_LIMB_08,
    /* 0x09 */ OBJECT_MM_LIMB_09,
    /* 0x0A */ OBJECT_MM_LIMB_0A,
    /* 0x0B */ OBJECT_MM_LIMB_0B,
    /* 0x0C */ OBJECT_MM_LIMB_0C,
    /* 0x0D */ OBJECT_MM_LIMB_0D,
    /* 0x0E */ OBJECT_MM_LIMB_0E,
    /* 0x0F */ OBJECT_MM_LIMB_0F,
    /* 0x10 */ OBJECT_MM_LIMB_MAX
} ObjectMmLimb;

extern s16 object_mm_Anim_000468FrameData[];
extern JointIndex object_mm_Anim_000468JointIndices[];
extern AnimationHeader object_mm_Anim_000468;
extern s16 object_mm_Anim_00099CFrameData[];
extern JointIndex object_mm_Anim_00099CJointIndices[];
extern AnimationHeader object_mm_Anim_00099C;
extern s16 object_mm_Anim_000FC4FrameData[];
extern JointIndex object_mm_Anim_000FC4JointIndices[];
extern AnimationHeader object_mm_Anim_000FC4;
extern s16 object_mm_Anim_001F84FrameData[];
extern JointIndex object_mm_Anim_001F84JointIndices[];
extern AnimationHeader object_mm_Anim_001F84;
extern s16 object_mm_Anim_002238FrameData[];
extern JointIndex object_mm_Anim_002238JointIndices[];
extern AnimationHeader object_mm_Anim_002238;
extern u64 object_mm_TLUT_002250[];
extern u64 object_mm_Tex_002450[];
extern u64 object_mm_Tex_002490[];
extern u64 object_mm_Tex_0024D0[];
extern u64 object_mm_Tex_002510[];
extern u64 object_mm_Tex_002550[];
extern u64 object_mm_Tex_002650[];
extern u64 object_mm_Tex_002750[];
extern u64 object_mm_Tex_002950[];
extern u64 object_mm_Tex_002B50[];
extern u64 object_mm_Tex_002C50[];
extern u64 object_mm_Tex_002E50[];
extern Vtx object_mmVtx_002F50[];
extern Gfx object_mm_DL_005B30[];
extern Gfx object_mm_DL_005E70[];
extern Gfx object_mm_DL_006598[];
extern Gfx object_mm_DL_0066D0[];
extern Gfx object_mm_DL_006808[];
extern Gfx object_mm_DL_006A10[];
extern Gfx object_mm_DL_006B48[];
extern Gfx object_mm_DL_006C80[];
extern Gfx object_mm_DL_006E88[];
extern Gfx object_mm_DL_006F20[];
extern Gfx object_mm_DL_007188[];
extern Gfx object_mm_DL_0072F8[];
extern Gfx object_mm_DL_007430[];
extern Gfx object_mm_DL_007610[];
extern Gfx object_mm_DL_007780[];
extern Vtx object_mmVtx_0078B8[];
extern Gfx object_mm_DL_008348[];
extern Gfx object_mm_DL_0083E0[];
extern Gfx object_mm_DL_0085C8[];
extern u64 object_mm_Tex_008778[];
extern u64 object_mm_Tex_0087F8[];
extern u64 object_mm_Tex_0089F8[];
extern u64 object_mm_Tex_0091F8[];
extern StandardLimb object_mm_Standardlimb_0095F8;
extern StandardLimb object_mm_Standardlimb_009604;
extern StandardLimb object_mm_Standardlimb_009610;
extern StandardLimb object_mm_Standardlimb_00961C;
extern StandardLimb object_mm_Standardlimb_009628;
extern StandardLimb object_mm_Standardlimb_009634;
extern StandardLimb object_mm_Standardlimb_009640;
extern StandardLimb object_mm_Standardlimb_00964C;
extern StandardLimb object_mm_Standardlimb_009658;
extern StandardLimb object_mm_Standardlimb_009664;
extern StandardLimb object_mm_Standardlimb_009670;
extern StandardLimb object_mm_Standardlimb_00967C;
extern StandardLimb object_mm_Standardlimb_009688;
extern StandardLimb object_mm_Standardlimb_009694;
extern StandardLimb object_mm_Standardlimb_0096A0;
extern void* object_mm_Skel_0096E8Limbs[];
extern FlexSkeletonHeader object_mm_Skel_0096E8;
extern s16 object_mm_Anim_0099B4FrameData[];
extern JointIndex object_mm_Anim_0099B4JointIndices[];
extern AnimationHeader object_mm_Anim_0099B4;
extern s16 object_mm_Anim_00A4E0FrameData[];
extern JointIndex object_mm_Anim_00A4E0JointIndices[];
extern AnimationHeader object_mm_Anim_00A4E0;
extern s16 object_mm_Anim_00A8D8FrameData[];
extern JointIndex object_mm_Anim_00A8D8JointIndices[];
extern AnimationHeader object_mm_Anim_00A8D8;
extern s16 object_mm_Anim_00B09CFrameData[];
extern JointIndex object_mm_Anim_00B09CJointIndices[];
extern AnimationHeader object_mm_Anim_00B09C;
extern s16 object_mm_Anim_00BA78FrameData[];
extern JointIndex object_mm_Anim_00BA78JointIndices[];
extern AnimationHeader object_mm_Anim_00BA78;
extern s16 object_mm_Anim_00C32CFrameData[];
extern JointIndex object_mm_Anim_00C32CJointIndices[];
extern AnimationHeader object_mm_Anim_00C32C;
extern s16 object_mm_Anim_00C640FrameData[];
extern JointIndex object_mm_Anim_00C640JointIndices[];
extern AnimationHeader object_mm_Anim_00C640;
extern s16 object_mm_Anim_00CD90FrameData[];
extern JointIndex object_mm_Anim_00CD90JointIndices[];
extern AnimationHeader object_mm_Anim_00CD90;
extern s16 object_mm_Anim_00DA50FrameData[];
extern JointIndex object_mm_Anim_00DA50JointIndices[];
extern AnimationHeader object_mm_Anim_00DA50;
#endif
