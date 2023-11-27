#ifndef OBJECT_BJI_H
#define OBJECT_BJI_H 1

typedef enum ShikashiLimb {
    /* 0x00 */ SHIKASHI_LIMB_NONE,
    /* 0x01 */ SHIKASHI_LIMB_PELVIS,
    /* 0x02 */ SHIKASHI_LIMB_LEFT_THIGH,
    /* 0x03 */ SHIKASHI_LIMB_LEFT_LEG,
    /* 0x04 */ SHIKASHI_LIMB_LEFT_FOOT,
    /* 0x05 */ SHIKASHI_LIMB_RIGHT_THIGH,
    /* 0x06 */ SHIKASHI_LIMB_RIGHT_LEG,
    /* 0x07 */ SHIKASHI_LIMB_RIGHT_FOOT,
    /* 0x08 */ SHIKASHI_LIMB_TORSO,
    /* 0x09 */ SHIKASHI_LIMB_LEFT_ARM,
    /* 0x0A */ SHIKASHI_LIMB_LEFT_FOREARM,
    /* 0x0B */ SHIKASHI_LIMB_LEFT_HAND,
    /* 0x0C */ SHIKASHI_LIMB_RIGHT_ARM,
    /* 0x0D */ SHIKASHI_LIMB_RIGHT_FOREARM,
    /* 0x0E */ SHIKASHI_LIMB_RIGHT_HAND,
    /* 0x0F */ SHIKASHI_LIMB_HEAD,
    /* 0x10 */ SHIKASHI_LIMB_MAX
} ShikashiLimb;

extern s16 object_bji_Anim_00066CFrameData[];
extern JointIndex object_bji_Anim_00066CJointIndices[];
extern AnimationHeader object_bji_Anim_00066C;
extern s16 object_bji_Anim_000AB0FrameData[];
extern JointIndex object_bji_Anim_000AB0JointIndices[];
extern AnimationHeader object_bji_Anim_000AB0;
extern s16 object_bji_Anim_000FDCFrameData[];
extern JointIndex object_bji_Anim_000FDCJointIndices[];
extern AnimationHeader object_bji_Anim_000FDC;
extern Vtx object_bjiVtx_000FF0[];
extern Gfx gShikashiHeadDL[];
extern Gfx gShikashiRightHandDL[];
extern Gfx gShikashiRightForearmDL[];
extern Gfx gShikashiRightArmDL[];
extern Gfx gShikashiLeftHandDL[];
extern Gfx gShikashiLeftForearmDL[];
extern Gfx gShikashiLeftArmDL[];
extern Gfx gShikashiTorsoDL[];
extern Gfx gShikashiRightFootDL[];
extern Gfx gShikashiRightLegDL[];
extern Gfx gShikashiRightThighDL[];
extern Gfx gShikashiLeftFootDL[];
extern Gfx gShikashiLeftLegDL[];
extern Gfx gShikashiLeftThighDL[];
extern Gfx gShikashiPelvisDL[];
extern u64 object_bji_TLUT_003730[];
extern u64 object_bji_TLUT_003930[];
extern u64 object_bji_TLUT_003B30[];
extern u64 object_bji_TLUT_003D30[];
extern u64 object_bji_TLUT_003F30[];
extern u64 object_bji_Tex_004130[];
extern u64 object_bji_TLUT_004330[];
extern u64 object_bji_TLUT_004530[];
extern u64 object_bji_Tex_004730[];
extern u64 object_bji_Tex_004770[];
extern u64 object_bji_Tex_004870[];
extern u64 object_bji_Tex_0048B0[];
extern u64 object_bji_Tex_0049B0[];
extern u64 object_bji_Tex_0049F0[];
extern u64 object_bji_Tex_004DF0[];
extern u64 object_bji_Tex_004E30[];
extern u64 object_bji_Tex_004E70[];
extern u64 object_bji_Tex_005270[];
extern TexturePtr object_bjiTexCycleTexPtrs_005670[];
extern u8 object_bjiTexCycleTexIndices_00567C[];
extern AnimatedMatTexCycleParams gShikashiEyeTexAnimTexCycleParams_005684;
extern AnimatedMaterial gShikashiEyeTexAnim[];
extern StandardLimb gShikashiPelvisLimb;
extern StandardLimb gShikashiLeftThighLimb;
extern StandardLimb gShikashiLeftLegLimb;
extern StandardLimb gShikashiLeftFootLimb;
extern StandardLimb gShikashiRightThighLimb;
extern StandardLimb gShikashiRightLegLimb;
extern StandardLimb gShikashiRightFootLimb;
extern StandardLimb gShikashiTorsoLimb;
extern StandardLimb gShikashiLeftArmLimb;
extern StandardLimb gShikashiLeftForearmLimb;
extern StandardLimb gShikashiLeftHandLimb;
extern StandardLimb gShikashiRightArmLimb;
extern StandardLimb gShikashiRightForearmLimb;
extern StandardLimb gShikashiRightHandLimb;
extern StandardLimb gShikashiHeadLimb;
extern void* gShikashiSkelLimbs[];
extern FlexSkeletonHeader gShikashiSkel;
extern s16 object_bji_Anim_005B58FrameData[];
extern JointIndex object_bji_Anim_005B58JointIndices[];
extern AnimationHeader object_bji_Anim_005B58;
#endif
