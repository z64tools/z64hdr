#ifndef OBJECT_BG_H
#define OBJECT_BG_H 1

typedef enum TreasureChestShopGalLimb {
    /* 0x00 */ TREASURE_CHEST_SHOP_GAL_LIMB_NONE,
    /* 0x01 */ TREASURE_CHEST_SHOP_GAL_LIMB_ROOT,
    /* 0x02 */ TREASURE_CHEST_SHOP_GAL_LIMB_HIPS,
    /* 0x03 */ TREASURE_CHEST_SHOP_GAL_LIMB_TORSO,
    /* 0x04 */ TREASURE_CHEST_SHOP_GAL_LIMB_NECK,
    /* 0x05 */ TREASURE_CHEST_SHOP_GAL_LIMB_HEAD,
    /* 0x06 */ TREASURE_CHEST_SHOP_GAL_LIMB_LEFT_ARM_ROOT,
    /* 0x07 */ TREASURE_CHEST_SHOP_GAL_LIMB_LEFT_UPPER_ARM,
    /* 0x08 */ TREASURE_CHEST_SHOP_GAL_LIMB_LEFT_FOREARM,
    /* 0x09 */ TREASURE_CHEST_SHOP_GAL_LIMB_LEFT_HAND,
    /* 0x0A */ TREASURE_CHEST_SHOP_GAL_LIMB_RIGHT_ARM_ROOT,
    /* 0x0B */ TREASURE_CHEST_SHOP_GAL_LIMB_RIGHT_UPPER_ARM,
    /* 0x0C */ TREASURE_CHEST_SHOP_GAL_LIMB_RIGHT_FOREARM,
    /* 0x0D */ TREASURE_CHEST_SHOP_GAL_LIMB_RIGHT_HAND,
    /* 0x0E */ TREASURE_CHEST_SHOP_GAL_LIMB_RIGHT_LEG_ROOT,
    /* 0x0F */ TREASURE_CHEST_SHOP_GAL_LIMB_RIGHT_THIGH,
    /* 0x10 */ TREASURE_CHEST_SHOP_GAL_LIMB_RIGHT_SHIN,
    /* 0x11 */ TREASURE_CHEST_SHOP_GAL_LIMB_RIGHT_FOOT_ROOT,
    /* 0x12 */ TREASURE_CHEST_SHOP_GAL_LIMB_RIGHT_FOOT,
    /* 0x13 */ TREASURE_CHEST_SHOP_GAL_LIMB_LEFT_LEG_ROOT,
    /* 0x14 */ TREASURE_CHEST_SHOP_GAL_LIMB_LEFT_THIGH,
    /* 0x15 */ TREASURE_CHEST_SHOP_GAL_LIMB_LEFT_SHIN,
    /* 0x16 */ TREASURE_CHEST_SHOP_GAL_LIMB_LEFT_FOOT_ROOT,
    /* 0x17 */ TREASURE_CHEST_SHOP_GAL_LIMB_LEFT_FOOT,
    /* 0x18 */ TREASURE_CHEST_SHOP_GAL_LIMB_MAX
} TreasureChestShopGalLimb;

typedef enum ObjectBg2Limb {
    /* 0x00 */ OBJECT_BG_2_LIMB_NONE,
    /* 0x01 */ OBJECT_BG_2_LIMB_01,
    /* 0x02 */ OBJECT_BG_2_LIMB_02,
    /* 0x03 */ OBJECT_BG_2_LIMB_03,
    /* 0x04 */ OBJECT_BG_2_LIMB_04,
    /* 0x05 */ OBJECT_BG_2_LIMB_05,
    /* 0x06 */ OBJECT_BG_2_LIMB_06,
    /* 0x07 */ OBJECT_BG_2_LIMB_07,
    /* 0x08 */ OBJECT_BG_2_LIMB_08,
    /* 0x09 */ OBJECT_BG_2_LIMB_09,
    /* 0x0A */ OBJECT_BG_2_LIMB_0A,
    /* 0x0B */ OBJECT_BG_2_LIMB_0B,
    /* 0x0C */ OBJECT_BG_2_LIMB_0C,
    /* 0x0D */ OBJECT_BG_2_LIMB_0D,
    /* 0x0E */ OBJECT_BG_2_LIMB_0E,
    /* 0x0F */ OBJECT_BG_2_LIMB_0F,
    /* 0x10 */ OBJECT_BG_2_LIMB_10,
    /* 0x11 */ OBJECT_BG_2_LIMB_11,
    /* 0x12 */ OBJECT_BG_2_LIMB_12,
    /* 0x13 */ OBJECT_BG_2_LIMB_13,
    /* 0x14 */ OBJECT_BG_2_LIMB_14,
    /* 0x15 */ OBJECT_BG_2_LIMB_15,
    /* 0x16 */ OBJECT_BG_2_LIMB_16,
    /* 0x17 */ OBJECT_BG_2_LIMB_17,
    /* 0x18 */ OBJECT_BG_2_LIMB_MAX
} ObjectBg2Limb;

extern s16 object_bg_Anim_000968FrameData[];
extern JointIndex object_bg_Anim_000968JointIndices[];
extern AnimationHeader object_bg_Anim_000968;
extern s16 object_bg_Anim_000A00FrameData[];
extern JointIndex object_bg_Anim_000A00JointIndices[];
extern AnimationHeader object_bg_Anim_000A00;
extern s16 object_bg_Anim_001384FrameData[];
extern JointIndex object_bg_Anim_001384JointIndices[];
extern AnimationHeader object_bg_Anim_001384;
extern Vtx object_bgVtx_0013A0[];
extern Gfx gTreasureChestShopGalHeadDL[];
extern Gfx gTreasureChestShopGalNeckDL[];
extern Gfx gTreasureChestShopGalLeftHandDL[];
extern Gfx gTreasureChestShopGalLeftForearmDL[];
extern Gfx gTreasureChestShopGalLeftUpperArmDL[];
extern Gfx gTreasureChestShopGalRightHandDL[];
extern Gfx gTreasureChestShopGalRightForearmDL[];
extern Gfx gTreasureChestShopGalRightUpperArmDL[];
extern Gfx gTreasureChestShopGalTorsoDL[];
extern Gfx gTreasureChestShopGalLeftFootDL[];
extern Gfx gTreasureChestShopGalLeftShinDL[];
extern Gfx gTreasureChestShopGalLeftThighDL[];
extern Gfx gTreasureChestShopGalRightFootDL[];
extern Gfx gTreasureChestShopGalRightShinDL[];
extern Gfx gTreasureChestShopGalRightThighDL[];
extern Gfx gTreasureChestShopGalHipsDL[];
extern u64 gTreasureChestShopGalTLUT[];
extern u64 gTreasureChestShopGalHairTex[];
extern u64 gTreasureChestShopGalHair2Tex[];
extern u64 gTreasureChestShopGalEyeOpenUpTex[];
extern u64 gTreasureChestShopGalEyeHalfUpTex[];
extern u64 gTreasureChestShopGalEyeClosedTex[];
extern u64 gTreasureChestShopGalEyeOpenDownTex[];
extern u64 gTreasureChestShopGalEyeHalfDownTex[];
extern u64 gTreasureChestShopGalMouthTex[];
extern u64 gTreasureChestShopGalEarAndBellyButtonTex[];
extern u64 gTreasureChestShopGalSkinTex[];
extern u64 gTreasureChestShopGalClothesTex[];
extern u64 gTreasureChestShopGalFingersTex[];
extern StandardLimb gTreasureChestShopGalRootLimb;
extern StandardLimb gTreasureChestShopGalHipsLimb;
extern StandardLimb gTreasureChestShopGalTorsoLimb;
extern StandardLimb gTreasureChestShopGalNeckLimb;
extern StandardLimb gTreasureChestShopGalHeadLimb;
extern StandardLimb gTreasureChestShopGalLeftArmRootLimb;
extern StandardLimb gTreasureChestShopGalLeftUpperArmLimb;
extern StandardLimb gTreasureChestShopGalLeftForearmLimb;
extern StandardLimb gTreasureChestShopGalLeftHandLimb;
extern StandardLimb gTreasureChestShopGalRightArmRootLimb;
extern StandardLimb gTreasureChestShopGalRightUpperArmLimb;
extern StandardLimb gTreasureChestShopGalRightForearmLimb;
extern StandardLimb gTreasureChestShopGalRightHandLimb;
extern StandardLimb gTreasureChestShopGalRightLegRootLimb;
extern StandardLimb gTreasureChestShopGalRightThighLimb;
extern StandardLimb gTreasureChestShopGalRightShinLimb;
extern StandardLimb gTreasureChestShopGalRightFootRootLimb;
extern StandardLimb gTreasureChestShopGalRightFootLimb;
extern StandardLimb gTreasureChestShopGalLeftLegRootLimb;
extern StandardLimb gTreasureChestShopGalLeftThighLimb;
extern StandardLimb gTreasureChestShopGalLeftShinLimb;
extern StandardLimb gTreasureChestShopGalLeftFootRootLimb;
extern StandardLimb gTreasureChestShopGalLeftFootLimb;
extern void* gTreasureChestShopGalSkelLimbs[];
extern FlexSkeletonHeader gTreasureChestShopGalSkel;
extern s16 object_bg_Anim_009890FrameData[];
extern JointIndex object_bg_Anim_009890JointIndices[];
extern AnimationHeader object_bg_Anim_009890;
extern s16 object_bg_Anim_009F20FrameData[];
extern JointIndex object_bg_Anim_009F20JointIndices[];
extern AnimationHeader object_bg_Anim_009F20;
extern s16 object_bg_Anim_00A280FrameData[];
extern JointIndex object_bg_Anim_00A280JointIndices[];
extern AnimationHeader object_bg_Anim_00A280;
extern s16 object_bg_Anim_00AD98FrameData[];
extern JointIndex object_bg_Anim_00AD98JointIndices[];
extern AnimationHeader object_bg_Anim_00AD98;
extern s16 object_bg_Anim_00B19CFrameData[];
extern JointIndex object_bg_Anim_00B19CJointIndices[];
extern AnimationHeader object_bg_Anim_00B19C;
extern Vtx object_bgVtx_00B1B0[];
extern Gfx object_bg_DL_00D5E0[];
extern Gfx object_bg_DL_00D780[];
extern Gfx object_bg_DL_00DB38[];
extern Gfx object_bg_DL_00DCD8[];
extern Gfx object_bg_DL_00E1C0[];
extern Gfx object_bg_DL_00E3F8[];
extern Gfx object_bg_DL_00E580[];
extern Gfx object_bg_DL_00E758[];
extern Gfx object_bg_DL_00E990[];
extern Gfx object_bg_DL_00EB18[];
extern Gfx object_bg_DL_00ECF0[];
extern Gfx object_bg_DL_00EE50[];
extern Gfx object_bg_DL_00EFE8[];
extern Gfx object_bg_DL_00F1F0[];
extern Gfx object_bg_DL_00F350[];
extern Gfx object_bg_DL_00F4E8[];
extern u64 object_bg_TLUT_00F6F0[];
extern u64 object_bg_Tex_00F8F0[];
extern u64 object_bg_Tex_00FCF0[];
extern u64 object_bg_Tex_0100F0[];
extern u64 object_bg_Tex_0104F0[];
extern u64 object_bg_Tex_0106F0[];
extern u64 object_bg_Tex_0107F0[];
extern u64 object_bg_Tex_010FF0[];
extern u64 object_bg_Tex_0110F0[];
extern u64 object_bg_Tex_0114F0[];
extern u64 object_bg_Tex_0115F0[];
extern StandardLimb object_bg_Standardlimb_0119F0;
extern StandardLimb object_bg_Standardlimb_0119FC;
extern StandardLimb object_bg_Standardlimb_011A08;
extern StandardLimb object_bg_Standardlimb_011A14;
extern StandardLimb object_bg_Standardlimb_011A20;
extern StandardLimb object_bg_Standardlimb_011A2C;
extern StandardLimb object_bg_Standardlimb_011A38;
extern StandardLimb object_bg_Standardlimb_011A44;
extern StandardLimb object_bg_Standardlimb_011A50;
extern StandardLimb object_bg_Standardlimb_011A5C;
extern StandardLimb object_bg_Standardlimb_011A68;
extern StandardLimb object_bg_Standardlimb_011A74;
extern StandardLimb object_bg_Standardlimb_011A80;
extern StandardLimb object_bg_Standardlimb_011A8C;
extern StandardLimb object_bg_Standardlimb_011A98;
extern StandardLimb object_bg_Standardlimb_011AA4;
extern StandardLimb object_bg_Standardlimb_011AB0;
extern StandardLimb object_bg_Standardlimb_011ABC;
extern StandardLimb object_bg_Standardlimb_011AC8;
extern StandardLimb object_bg_Standardlimb_011AD4;
extern StandardLimb object_bg_Standardlimb_011AE0;
extern StandardLimb object_bg_Standardlimb_011AEC;
extern StandardLimb object_bg_Standardlimb_011AF8;
extern void* object_bg_Skel_011B60Limbs[];
extern FlexSkeletonHeader object_bg_Skel_011B60;
#endif
