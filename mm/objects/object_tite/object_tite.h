#ifndef OBJECT_TITE_H
#define OBJECT_TITE_H 1

typedef enum ObjectTiteLimb {
    /* 0x00 */ OBJECT_TITE_LIMB_NONE,
    /* 0x01 */ OBJECT_TITE_LIMB_01,
    /* 0x02 */ OBJECT_TITE_LIMB_02,
    /* 0x03 */ OBJECT_TITE_LIMB_03,
    /* 0x04 */ OBJECT_TITE_LIMB_04,
    /* 0x05 */ OBJECT_TITE_LIMB_05,
    /* 0x06 */ OBJECT_TITE_LIMB_06,
    /* 0x07 */ OBJECT_TITE_LIMB_07,
    /* 0x08 */ OBJECT_TITE_LIMB_08,
    /* 0x09 */ OBJECT_TITE_LIMB_09,
    /* 0x0A */ OBJECT_TITE_LIMB_0A,
    /* 0x0B */ OBJECT_TITE_LIMB_0B,
    /* 0x0C */ OBJECT_TITE_LIMB_0C,
    /* 0x0D */ OBJECT_TITE_LIMB_0D,
    /* 0x0E */ OBJECT_TITE_LIMB_0E,
    /* 0x0F */ OBJECT_TITE_LIMB_0F,
    /* 0x10 */ OBJECT_TITE_LIMB_10,
    /* 0x11 */ OBJECT_TITE_LIMB_11,
    /* 0x12 */ OBJECT_TITE_LIMB_12,
    /* 0x13 */ OBJECT_TITE_LIMB_13,
    /* 0x14 */ OBJECT_TITE_LIMB_14,
    /* 0x15 */ OBJECT_TITE_LIMB_15,
    /* 0x16 */ OBJECT_TITE_LIMB_16,
    /* 0x17 */ OBJECT_TITE_LIMB_17,
    /* 0x18 */ OBJECT_TITE_LIMB_18,
    /* 0x19 */ OBJECT_TITE_LIMB_MAX
} ObjectTiteLimb;

extern s16 object_tite_Anim_0001D4FrameData[];
extern JointIndex object_tite_Anim_0001D4JointIndices[];
extern AnimationHeader object_tite_Anim_0001D4;
extern s16 object_tite_Anim_0004F8FrameData[];
extern JointIndex object_tite_Anim_0004F8JointIndices[];
extern AnimationHeader object_tite_Anim_0004F8;
extern s16 object_tite_Anim_00069CFrameData[];
extern JointIndex object_tite_Anim_00069CJointIndices[];
extern AnimationHeader object_tite_Anim_00069C;
extern s16 object_tite_Anim_00083CFrameData[];
extern JointIndex object_tite_Anim_00083CJointIndices[];
extern AnimationHeader object_tite_Anim_00083C;
extern s16 object_tite_Anim_000A14FrameData[];
extern JointIndex object_tite_Anim_000A14JointIndices[];
extern AnimationHeader object_tite_Anim_000A14;
extern s16 object_tite_Anim_000C70FrameData[];
extern JointIndex object_tite_Anim_000C70JointIndices[];
extern AnimationHeader object_tite_Anim_000C70;
extern s16 object_tite_Anim_000F50FrameData[];
extern JointIndex object_tite_Anim_000F50JointIndices[];
extern AnimationHeader object_tite_Anim_000F50;
extern s16 object_tite_Anim_0012E4FrameData[];
extern JointIndex object_tite_Anim_0012E4JointIndices[];
extern AnimationHeader object_tite_Anim_0012E4;
extern u64 object_tite_Tex_001300[];
extern u64 object_tite_Tex_001700[];
extern u64 object_tite_Tex_001900[];
extern u64 object_tite_Tex_001A00[];
extern u64 object_tite_Tex_001A80[];
extern u64 object_tite_Tex_001B00[];
extern u64 object_tite_Tex_001F00[];
extern u64 object_tite_Tex_002100[];
extern Vtx object_titeVtx_002200[];
extern Gfx object_tite_DL_002FF0[];
extern Gfx object_tite_DL_003160[];
extern Gfx object_tite_DL_003290[];
extern Gfx object_tite_DL_003330[];
extern Gfx object_tite_DL_003460[];
extern Gfx object_tite_DL_003500[];
extern Gfx object_tite_DL_003630[];
extern Gfx object_tite_DL_0036D0[];
extern Gfx object_tite_DL_003800[];
extern StandardLimb object_tite_Standardlimb_0038A0;
extern StandardLimb object_tite_Standardlimb_0038AC;
extern StandardLimb object_tite_Standardlimb_0038B8;
extern StandardLimb object_tite_Standardlimb_0038C4;
extern StandardLimb object_tite_Standardlimb_0038D0;
extern StandardLimb object_tite_Standardlimb_0038DC;
extern StandardLimb object_tite_Standardlimb_0038E8;
extern StandardLimb object_tite_Standardlimb_0038F4;
extern StandardLimb object_tite_Standardlimb_003900;
extern StandardLimb object_tite_Standardlimb_00390C;
extern StandardLimb object_tite_Standardlimb_003918;
extern StandardLimb object_tite_Standardlimb_003924;
extern StandardLimb object_tite_Standardlimb_003930;
extern StandardLimb object_tite_Standardlimb_00393C;
extern StandardLimb object_tite_Standardlimb_003948;
extern StandardLimb object_tite_Standardlimb_003954;
extern StandardLimb object_tite_Standardlimb_003960;
extern StandardLimb object_tite_Standardlimb_00396C;
extern StandardLimb object_tite_Standardlimb_003978;
extern StandardLimb object_tite_Standardlimb_003984;
extern StandardLimb object_tite_Standardlimb_003990;
extern StandardLimb object_tite_Standardlimb_00399C;
extern StandardLimb object_tite_Standardlimb_0039A8;
extern StandardLimb object_tite_Standardlimb_0039B4;
extern void* object_tite_Skel_003A20Limbs[];
extern SkeletonHeader object_tite_Skel_003A20;
#endif
