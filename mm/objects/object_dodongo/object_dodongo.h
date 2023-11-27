#ifndef OBJECT_DODONGO_H
#define OBJECT_DODONGO_H 1

typedef enum ObjectDodongoLimb {
    /* 0x00 */ OBJECT_DODONGO_LIMB_NONE,
    /* 0x01 */ OBJECT_DODONGO_LIMB_01,
    /* 0x02 */ OBJECT_DODONGO_LIMB_02,
    /* 0x03 */ OBJECT_DODONGO_LIMB_03,
    /* 0x04 */ OBJECT_DODONGO_LIMB_04,
    /* 0x05 */ OBJECT_DODONGO_LIMB_05,
    /* 0x06 */ OBJECT_DODONGO_LIMB_06,
    /* 0x07 */ OBJECT_DODONGO_LIMB_07,
    /* 0x08 */ OBJECT_DODONGO_LIMB_08,
    /* 0x09 */ OBJECT_DODONGO_LIMB_09,
    /* 0x0A */ OBJECT_DODONGO_LIMB_0A,
    /* 0x0B */ OBJECT_DODONGO_LIMB_0B,
    /* 0x0C */ OBJECT_DODONGO_LIMB_0C,
    /* 0x0D */ OBJECT_DODONGO_LIMB_0D,
    /* 0x0E */ OBJECT_DODONGO_LIMB_0E,
    /* 0x0F */ OBJECT_DODONGO_LIMB_0F,
    /* 0x10 */ OBJECT_DODONGO_LIMB_10,
    /* 0x11 */ OBJECT_DODONGO_LIMB_11,
    /* 0x12 */ OBJECT_DODONGO_LIMB_12,
    /* 0x13 */ OBJECT_DODONGO_LIMB_13,
    /* 0x14 */ OBJECT_DODONGO_LIMB_14,
    /* 0x15 */ OBJECT_DODONGO_LIMB_15,
    /* 0x16 */ OBJECT_DODONGO_LIMB_16,
    /* 0x17 */ OBJECT_DODONGO_LIMB_17,
    /* 0x18 */ OBJECT_DODONGO_LIMB_18,
    /* 0x19 */ OBJECT_DODONGO_LIMB_19,
    /* 0x1A */ OBJECT_DODONGO_LIMB_1A,
    /* 0x1B */ OBJECT_DODONGO_LIMB_1B,
    /* 0x1C */ OBJECT_DODONGO_LIMB_1C,
    /* 0x1D */ OBJECT_DODONGO_LIMB_1D,
    /* 0x1E */ OBJECT_DODONGO_LIMB_1E,
    /* 0x1F */ OBJECT_DODONGO_LIMB_MAX
} ObjectDodongoLimb;

extern s16 object_dodongo_Anim_0013C4FrameData[];
extern JointIndex object_dodongo_Anim_0013C4JointIndices[];
extern AnimationHeader object_dodongo_Anim_0013C4;
extern s16 object_dodongo_Anim_0015F4FrameData[];
extern JointIndex object_dodongo_Anim_0015F4JointIndices[];
extern AnimationHeader object_dodongo_Anim_0015F4;
extern s16 object_dodongo_Anim_001A44FrameData[];
extern JointIndex object_dodongo_Anim_001A44JointIndices[];
extern AnimationHeader object_dodongo_Anim_001A44;
extern s16 object_dodongo_Anim_001F44FrameData[];
extern JointIndex object_dodongo_Anim_001F44JointIndices[];
extern AnimationHeader object_dodongo_Anim_001F44;
extern s16 object_dodongo_Anim_0028F0FrameData[];
extern JointIndex object_dodongo_Anim_0028F0JointIndices[];
extern AnimationHeader object_dodongo_Anim_0028F0;
extern s16 object_dodongo_Anim_003088FrameData[];
extern JointIndex object_dodongo_Anim_003088JointIndices[];
extern AnimationHeader object_dodongo_Anim_003088;
extern s16 object_dodongo_Anim_003368FrameData[];
extern JointIndex object_dodongo_Anim_003368JointIndices[];
extern AnimationHeader object_dodongo_Anim_003368;
extern s16 object_dodongo_Anim_003B14FrameData[];
extern JointIndex object_dodongo_Anim_003B14JointIndices[];
extern AnimationHeader object_dodongo_Anim_003B14;
extern s16 object_dodongo_Anim_0042C4FrameData[];
extern JointIndex object_dodongo_Anim_0042C4JointIndices[];
extern AnimationHeader object_dodongo_Anim_0042C4;
extern s16 object_dodongo_Anim_004C20FrameData[];
extern JointIndex object_dodongo_Anim_004C20JointIndices[];
extern AnimationHeader object_dodongo_Anim_004C20;
extern Vtx object_dodongoVtx_004C30[];
extern Gfx object_dodongo_DL_006640[];
extern Gfx object_dodongo_DL_006750[];
extern Gfx object_dodongo_DL_006860[];
extern Gfx object_dodongo_DL_006960[];
extern Gfx object_dodongo_DL_006AA0[];
extern Gfx object_dodongo_DL_006BA8[];
extern Gfx object_dodongo_DL_006CA8[];
extern Gfx object_dodongo_DL_006D88[];
extern Gfx object_dodongo_DL_006FD8[];
extern Gfx object_dodongo_DL_007198[];
extern Gfx object_dodongo_DL_007298[];
extern Gfx object_dodongo_DL_0073A8[];
extern u64 object_dodongo_Tex_0074B8[];
extern u64 object_dodongo_Tex_0076B8[];
extern u64 object_dodongo_Tex_0077B8[];
extern u64 object_dodongo_Tex_0078B8[];
extern u64 object_dodongo_Tex_007CB8[];
extern u64 object_dodongo_Tex_0080B8[];
extern StandardLimb object_dodongo_Standardlimb_008138;
extern StandardLimb object_dodongo_Standardlimb_008144;
extern StandardLimb object_dodongo_Standardlimb_008150;
extern StandardLimb object_dodongo_Standardlimb_00815C;
extern StandardLimb object_dodongo_Standardlimb_008168;
extern StandardLimb object_dodongo_Standardlimb_008174;
extern StandardLimb object_dodongo_Standardlimb_008180;
extern StandardLimb object_dodongo_Standardlimb_00818C;
extern StandardLimb object_dodongo_Standardlimb_008198;
extern StandardLimb object_dodongo_Standardlimb_0081A4;
extern StandardLimb object_dodongo_Standardlimb_0081B0;
extern StandardLimb object_dodongo_Standardlimb_0081BC;
extern StandardLimb object_dodongo_Standardlimb_0081C8;
extern StandardLimb object_dodongo_Standardlimb_0081D4;
extern StandardLimb object_dodongo_Standardlimb_0081E0;
extern StandardLimb object_dodongo_Standardlimb_0081EC;
extern StandardLimb object_dodongo_Standardlimb_0081F8;
extern StandardLimb object_dodongo_Standardlimb_008204;
extern StandardLimb object_dodongo_Standardlimb_008210;
extern StandardLimb object_dodongo_Standardlimb_00821C;
extern StandardLimb object_dodongo_Standardlimb_008228;
extern StandardLimb object_dodongo_Standardlimb_008234;
extern StandardLimb object_dodongo_Standardlimb_008240;
extern StandardLimb object_dodongo_Standardlimb_00824C;
extern StandardLimb object_dodongo_Standardlimb_008258;
extern StandardLimb object_dodongo_Standardlimb_008264;
extern StandardLimb object_dodongo_Standardlimb_008270;
extern StandardLimb object_dodongo_Standardlimb_00827C;
extern StandardLimb object_dodongo_Standardlimb_008288;
extern StandardLimb object_dodongo_Standardlimb_008294;
extern void* object_dodongo_Skel_008318Limbs[];
extern SkeletonHeader object_dodongo_Skel_008318;
extern s16 object_dodongo_Anim_008B1CFrameData[];
extern JointIndex object_dodongo_Anim_008B1CJointIndices[];
extern AnimationHeader object_dodongo_Anim_008B1C;
extern s16 object_dodongo_Anim_008DE0FrameData[];
extern JointIndex object_dodongo_Anim_008DE0JointIndices[];
extern AnimationHeader object_dodongo_Anim_008DE0;
extern s16 object_dodongo_Anim_009088FrameData[];
extern JointIndex object_dodongo_Anim_009088JointIndices[];
extern AnimationHeader object_dodongo_Anim_009088;
extern u64 gDodongoFire0Tex[];
extern u64 gDodongoFire1Tex[];
extern u64 gDodongoFire2Tex[];
extern u64 gDodongoFire3Tex[];
extern Gfx gDodongoFireDL[];
extern Vtx object_dodongoVtx_009900[];
#endif
