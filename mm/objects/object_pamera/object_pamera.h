#ifndef OBJECT_PAMERA_H
#define OBJECT_PAMERA_H 1

typedef enum PamelaLimb {
    /* 0x00 */ PAMELA_LIMB_NONE,
    /* 0x01 */ PAMELA_LIMB_ROOT,
    /* 0x02 */ PAMELA_LIMB_UPPER_BODY_ROOT,
    /* 0x03 */ PAMELA_LIMB_LEFT_UPPER_ARM,
    /* 0x04 */ PAMELA_LIMB_LEFT_FOREARM,
    /* 0x05 */ PAMELA_LIMB_LEFT_HAND,
    /* 0x06 */ PAMELA_LIMB_RIGHT_UPPER_ARM,
    /* 0x07 */ PAMELA_LIMB_RIGHT_FOREARM,
    /* 0x08 */ PAMELA_LIMB_RIGHT_HAND,
    /* 0x09 */ PAMELA_LIMB_HEAD,
    /* 0x0A */ PAMELA_LIMB_HAIR_END,
    /* 0x0B */ PAMELA_LIMB_CHEST,
    /* 0x0C */ PAMELA_LIMB_NECK,
    /* 0x0D */ PAMELA_LIMB_LEFT_THIGH,
    /* 0x0E */ PAMELA_LIMB_LEFT_LEG,
    /* 0x0F */ PAMELA_LIMB_LEFT_FOOT,
    /* 0x10 */ PAMELA_LIMB_RIGHT_THIGH,
    /* 0x11 */ PAMELA_LIMB_RIGHT_LEG,
    /* 0x12 */ PAMELA_LIMB_RIGHT_FOOT,
    /* 0x13 */ PAMELA_LIMB_FRONT_DRESS,
    /* 0x14 */ PAMELA_LIMB_BACK_DRESS,
    /* 0x15 */ PAMELA_LIMB_ABDOMEN,
    /* 0x16 */ PAMELA_LIMB_PELVIS,
    /* 0x17 */ PAMELA_LIMB_MAX
} PamelaLimb;

extern s16 object_pamera_Anim_0005BCFrameData[];
extern JointIndex object_pamera_Anim_0005BCJointIndices[];
extern AnimationHeader object_pamera_Anim_0005BC;
extern Vtx object_pameraVtx_0005D0[];
extern Gfx gPamelaAbdomenDL[];
extern Gfx gPamelaPelvisDL[];
extern Gfx gPamelaNeckDL[];
extern Gfx gPamelaChestDL[];
extern Gfx gPamelaLeftUpperArmDL[];
extern Gfx gPamelaLeftForearmDL[];
extern Gfx gPamelaLeftHandDL[];
extern Gfx gPamelaRightUpperArmDL[];
extern Gfx gPamelaRightForearmDL[];
extern Gfx gPamelaRightHandDL[];
extern Gfx gPamelaHeadDL[];
extern Gfx gPamelaHairEndDL[];
extern Gfx gPamelaBackDressDL[];
extern Gfx gPamelaFrontDressDL[];
extern Gfx gPamelaLeftThighDL[];
extern Gfx gPamelaLeftLegDL[];
extern Gfx gPamelaLeftFootDL[];
extern Gfx gPamelaRightThighDL[];
extern Gfx gPamelaRightLegDL[];
extern Gfx gPamelaRightFootDL[];
extern u64 object_pamera_TLUT_0060E8[];
extern u64 object_pamera_Tex_0062E8[];
extern u64 object_pamera_Tex_0063E8[];
extern u64 object_pamera_Tex_0064E8[];
extern u64 object_pamera_Tex_0065E8[];
extern u64 object_pamera_Tex_0066E8[];
extern u64 object_pamera_Tex_006AE8[];
extern u64 object_pamera_Tex_006EE8[];
extern u64 object_pamera_Tex_0072E8[];
extern u64 object_pamera_Tex_0073E8[];
extern u64 object_pamera_Tex_0074E8[];
extern u64 object_pamera_Tex_0078E8[];
extern u64 object_pamera_Tex_007CE8[];
extern u64 object_pamera_Tex_007DE8[];
extern u64 object_pamera_Tex_007FE8[];
extern u64 object_pamera_Tex_0080E8[];
extern u64 object_pamera_Tex_0081E8[];
extern StandardLimb gPamelaRootLimb;
extern StandardLimb gPamelaUpperBodyRootLimb;
extern StandardLimb gPamelaLeftUpperArmLimb;
extern StandardLimb gPamelaLeftForearmLimb;
extern StandardLimb gPamelaLeftHandLimb;
extern StandardLimb gPamelaRightUpperArmLimb;
extern StandardLimb gPamelaRightForearmLimb;
extern StandardLimb gPamelaRightHandLimb;
extern StandardLimb gPamelaHeadLimb;
extern StandardLimb gPamelaHairEndLimb;
extern StandardLimb gPamelaChestLimb;
extern StandardLimb gPamelaNeckLimb;
extern StandardLimb gPamelaLeftThighLimb;
extern StandardLimb gPamelaLeftLegLimb;
extern StandardLimb gPamelaLeftFootLimb;
extern StandardLimb gPamelaRightThighLimb;
extern StandardLimb gPamelaRightLegLimb;
extern StandardLimb gPamelaRightFootLimb;
extern StandardLimb gPamelaFrontDressLimb;
extern StandardLimb gPamelaBackDressLimb;
extern StandardLimb gPamelaAbdomenLimb;
extern StandardLimb gPamelaPelvisLimb;
extern void* gPamelaSkelLimbs[];
extern FlexSkeletonHeader gPamelaSkel;
extern s16 object_pamera_Anim_008AE0FrameData[];
extern JointIndex object_pamera_Anim_008AE0JointIndices[];
extern AnimationHeader object_pamera_Anim_008AE0;
extern s16 object_pamera_Anim_008E38FrameData[];
extern JointIndex object_pamera_Anim_008E38JointIndices[];
extern AnimationHeader object_pamera_Anim_008E38;
extern s16 object_pamera_Anim_009870FrameData[];
extern JointIndex object_pamera_Anim_009870JointIndices[];
extern AnimationHeader object_pamera_Anim_009870;
extern s16 object_pamera_Anim_009F54FrameData[];
extern JointIndex object_pamera_Anim_009F54JointIndices[];
extern AnimationHeader object_pamera_Anim_009F54;
extern s16 object_pamera_Anim_00A844FrameData[];
extern JointIndex object_pamera_Anim_00A844JointIndices[];
extern AnimationHeader object_pamera_Anim_00A844;
extern s16 object_pamera_Anim_00B0C4FrameData[];
extern JointIndex object_pamera_Anim_00B0C4JointIndices[];
extern AnimationHeader object_pamera_Anim_00B0C4;
extern s16 object_pamera_Anim_00B5B0FrameData[];
extern JointIndex object_pamera_Anim_00B5B0JointIndices[];
extern AnimationHeader object_pamera_Anim_00B5B0;
extern s16 object_pamera_Anim_00BCC4FrameData[];
extern JointIndex object_pamera_Anim_00BCC4JointIndices[];
extern AnimationHeader object_pamera_Anim_00BCC4;
extern s16 object_pamera_Anim_00C9F4FrameData[];
extern JointIndex object_pamera_Anim_00C9F4JointIndices[];
extern AnimationHeader object_pamera_Anim_00C9F4;
extern s16 object_pamera_Anim_00D0F0FrameData[];
extern JointIndex object_pamera_Anim_00D0F0JointIndices[];
extern AnimationHeader object_pamera_Anim_00D0F0;
extern s16 object_pamera_Anim_00D9DCFrameData[];
extern JointIndex object_pamera_Anim_00D9DCJointIndices[];
extern AnimationHeader object_pamera_Anim_00D9DC;
extern s16 object_pamera_Anim_00E16CFrameData[];
extern JointIndex object_pamera_Anim_00E16CJointIndices[];
extern AnimationHeader object_pamera_Anim_00E16C;
#endif
