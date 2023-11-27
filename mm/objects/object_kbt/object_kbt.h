#ifndef OBJECT_KBT_H
#define OBJECT_KBT_H 1

typedef enum ObjectKbtLimb {
    /* 0x00 */ OBJECT_KBT_LIMB_NONE,
    /* 0x01 */ OBJECT_KBT_LIMB_01,
    /* 0x02 */ OBJECT_KBT_LIMB_02,
    /* 0x03 */ OBJECT_KBT_LIMB_03,
    /* 0x04 */ OBJECT_KBT_LIMB_04,
    /* 0x05 */ OBJECT_KBT_LIMB_05,
    /* 0x06 */ OBJECT_KBT_LIMB_06,
    /* 0x07 */ OBJECT_KBT_LIMB_07,
    /* 0x08 */ OBJECT_KBT_LIMB_08,
    /* 0x09 */ OBJECT_KBT_LIMB_09,
    /* 0x0A */ OBJECT_KBT_LIMB_0A,
    /* 0x0B */ OBJECT_KBT_LIMB_0B,
    /* 0x0C */ OBJECT_KBT_LIMB_0C,
    /* 0x0D */ OBJECT_KBT_LIMB_0D,
    /* 0x0E */ OBJECT_KBT_LIMB_0E,
    /* 0x0F */ OBJECT_KBT_LIMB_0F,
    /* 0x10 */ OBJECT_KBT_LIMB_10,
    /* 0x11 */ OBJECT_KBT_LIMB_11,
    /* 0x12 */ OBJECT_KBT_LIMB_12,
    /* 0x13 */ OBJECT_KBT_LIMB_13,
    /* 0x14 */ OBJECT_KBT_LIMB_MAX
} ObjectKbtLimb;

extern s16 object_kbt_Anim_000670FrameData[];
extern JointIndex object_kbt_Anim_000670JointIndices[];
extern AnimationHeader object_kbt_Anim_000670;
extern s16 object_kbt_Anim_000FE8FrameData[];
extern JointIndex object_kbt_Anim_000FE8JointIndices[];
extern AnimationHeader object_kbt_Anim_000FE8;
extern s16 object_kbt_Anim_001674FrameData[];
extern JointIndex object_kbt_Anim_001674JointIndices[];
extern AnimationHeader object_kbt_Anim_001674;
extern s16 object_kbt_Anim_001940FrameData[];
extern JointIndex object_kbt_Anim_001940JointIndices[];
extern AnimationHeader object_kbt_Anim_001940;
extern s16 object_kbt_Anim_001BF4FrameData[];
extern JointIndex object_kbt_Anim_001BF4JointIndices[];
extern AnimationHeader object_kbt_Anim_001BF4;
extern s16 object_kbt_Anim_002084FrameData[];
extern JointIndex object_kbt_Anim_002084JointIndices[];
extern AnimationHeader object_kbt_Anim_002084;
extern s16 object_kbt_Anim_002710FrameData[];
extern JointIndex object_kbt_Anim_002710JointIndices[];
extern AnimationHeader object_kbt_Anim_002710;
extern s16 object_kbt_Anim_002DE0FrameData[];
extern JointIndex object_kbt_Anim_002DE0JointIndices[];
extern AnimationHeader object_kbt_Anim_002DE0;
extern s16 object_kbt_Anim_003414FrameData[];
extern JointIndex object_kbt_Anim_003414JointIndices[];
extern AnimationHeader object_kbt_Anim_003414;
extern s16 object_kbt_Anim_003D24FrameData[];
extern JointIndex object_kbt_Anim_003D24JointIndices[];
extern AnimationHeader object_kbt_Anim_003D24;
extern s16 object_kbt_Anim_004274FrameData[];
extern JointIndex object_kbt_Anim_004274JointIndices[];
extern AnimationHeader object_kbt_Anim_004274;
extern Vtx object_kbtVtx_004290[];
extern Gfx object_kbt_DL_007550[];
extern Gfx object_kbt_DL_0076F8[];
extern Gfx object_kbt_DL_0077E0[];
extern Gfx object_kbt_DL_007940[];
extern Gfx object_kbt_DL_007AE8[];
extern Gfx object_kbt_DL_007C68[];
extern Gfx object_kbt_DL_007D50[];
extern Gfx object_kbt_DL_007E38[];
extern Gfx object_kbt_DL_008150[];
extern Gfx object_kbt_DL_008738[];
extern Gfx object_kbt_DL_008810[];
extern Gfx object_kbt_DL_0088E8[];
extern Gfx object_kbt_DL_008A60[];
extern Gfx object_kbt_DL_008C48[];
extern Gfx object_kbt_DL_008D20[];
extern Gfx object_kbt_DL_008E98[];
extern u64 object_kbt_TLUT_009078[];
extern u64 object_kbt_Tex_009278[];
extern u64 object_kbt_Tex_009378[];
extern u64 object_kbt_Tex_009478[];
extern u64 object_kbt_Tex_009678[];
extern u64 object_kbt_Tex_009E78[];
extern u64 object_kbt_Tex_009EB8[];
extern u64 object_kbt_Tex_009EF8[];
extern u64 object_kbt_Tex_009F78[];
extern u64 object_kbt_Tex_00A078[];
extern u64 object_kbt_Tex_00A0F8[];
extern u64 object_kbt_Tex_00A1F8[];
extern u64 object_kbt_Tex_00A2F8[];
extern u64 object_kbt_Tex_00A338[];
extern u64 object_kbt_Tex_00A3B8[];
extern u64 object_kbt_Tex_00A5B8[];
extern u64 object_kbt_Tex_00ADB8[];
extern u64 object_kbt_Tex_00B5B8[];
extern u64 object_kbt_Tex_00BDB8[];
extern u64 object_kbt_Tex_00C5B8[];
extern u64 object_kbt_Tex_00CDB8[];
extern u64 object_kbt_Tex_00D5B8[];
extern StandardLimb object_kbt_Standardlimb_00DDB8;
extern StandardLimb object_kbt_Standardlimb_00DDC4;
extern StandardLimb object_kbt_Standardlimb_00DDD0;
extern StandardLimb object_kbt_Standardlimb_00DDDC;
extern StandardLimb object_kbt_Standardlimb_00DDE8;
extern StandardLimb object_kbt_Standardlimb_00DDF4;
extern StandardLimb object_kbt_Standardlimb_00DE00;
extern StandardLimb object_kbt_Standardlimb_00DE0C;
extern StandardLimb object_kbt_Standardlimb_00DE18;
extern StandardLimb object_kbt_Standardlimb_00DE24;
extern StandardLimb object_kbt_Standardlimb_00DE30;
extern StandardLimb object_kbt_Standardlimb_00DE3C;
extern StandardLimb object_kbt_Standardlimb_00DE48;
extern StandardLimb object_kbt_Standardlimb_00DE54;
extern StandardLimb object_kbt_Standardlimb_00DE60;
extern StandardLimb object_kbt_Standardlimb_00DE6C;
extern StandardLimb object_kbt_Standardlimb_00DE78;
extern StandardLimb object_kbt_Standardlimb_00DE84;
extern StandardLimb object_kbt_Standardlimb_00DE90;
extern void* object_kbt_Skel_00DEE8Limbs[];
extern FlexSkeletonHeader object_kbt_Skel_00DEE8;
extern s16 object_kbt_Anim_00E7BCFrameData[];
extern JointIndex object_kbt_Anim_00E7BCJointIndices[];
extern AnimationHeader object_kbt_Anim_00E7BC;
extern s16 object_kbt_Anim_00F0C8FrameData[];
extern JointIndex object_kbt_Anim_00F0C8JointIndices[];
extern AnimationHeader object_kbt_Anim_00F0C8;
#endif
