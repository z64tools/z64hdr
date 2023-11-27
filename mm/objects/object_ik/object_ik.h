#ifndef OBJECT_IK_H
#define OBJECT_IK_H 1

typedef enum IronKnuckleLimb {
    /* 0x00 */ IRON_KNUCKLE_LIMB_NONE,
    /* 0x01 */ IRON_KNUCKLE_LIMB_ROOT,
    /* 0x02 */ IRON_KNUCKLE_LIMB_TASSET_CENTER,
    /* 0x03 */ IRON_KNUCKLE_LIMB_TASSET_RIGHT,
    /* 0x04 */ IRON_KNUCKLE_LIMB_RIGHT_LEG,
    /* 0x05 */ IRON_KNUCKLE_LIMB_RIGHT_FOOT,
    /* 0x06 */ IRON_KNUCKLE_LIMB_TASSET_LEFT,
    /* 0x07 */ IRON_KNUCKLE_LIMB_LEFT_LEG,
    /* 0x08 */ IRON_KNUCKLE_LIMB_LEFT_FOOT,
    /* 0x09 */ IRON_KNUCKLE_LIMB_UPPER_BODY_ROOT,
    /* 0x0A */ IRON_KNUCKLE_LIMB_UNK_ROOT,
    /* 0x0B */ IRON_KNUCKLE_LIMB_HEAD_ROOT,
    /* 0x0C */ IRON_KNUCKLE_LIMB_HELMET_ARMOR,
    /* 0x0D */ IRON_KNUCKLE_LIMB_HEAD,
    /* 0x0E */ IRON_KNUCKLE_LIMB_RIGHT_UPPER_ARM,
    /* 0x0F */ IRON_KNUCKLE_LIMB_RIGHT_FOREARM,
    /* 0x10 */ IRON_KNUCKLE_LIMB_AXE_ROOT,
    /* 0x11 */ IRON_KNUCKLE_LIMB_AXE,
    /* 0x12 */ IRON_KNUCKLE_LIMB_RIGHT_HAND,
    /* 0x13 */ IRON_KNUCKLE_LIMB_LEFT_UPPER_ARM,
    /* 0x14 */ IRON_KNUCKLE_LIMB_LEFT_FOREARM,
    /* 0x15 */ IRON_KNUCKLE_LIMB_LEFT_HAND,
    /* 0x16 */ IRON_KNUCKLE_LIMB_UPPER_LEFT_PAULDRON,
    /* 0x17 */ IRON_KNUCKLE_LIMB_LOWER_LEFT_PAULDRON,
    /* 0x18 */ IRON_KNUCKLE_LIMB_UPPER_RIGHT_PAULDRON,
    /* 0x19 */ IRON_KNUCKLE_LIMB_LOWER_RIGHT_PAULDRON,
    /* 0x1A */ IRON_KNUCKLE_LIMB_CHEST_ARMOR_FRONT,
    /* 0x1B */ IRON_KNUCKLE_LIMB_CHEST_ARMOR_BACK,
    /* 0x1C */ IRON_KNUCKLE_LIMB_TORSO,
    /* 0x1D */ IRON_KNUCKLE_LIMB_WAIST,
    /* 0x1E */ IRON_KNUCKLE_LIMB_MAX
} IronKnuckleLimb;

extern s16 sIronKnuckleVerticalAttackAnimFrameData[];
extern JointIndex sIronKnuckleVerticalAttackAnimJointIndices[];
extern AnimationHeader gIronKnuckleVerticalAttackAnim;
extern s16 sIronKnuckleRecoverVerticalAttackAnimFrameData[];
extern JointIndex sIronKnuckleRecoverVerticalAttackAnimJointIndices[];
extern AnimationHeader gIronKnuckleRecoverVerticalAttackAnim;
extern s16 sIronKnuckleEndVerticalAttackAnimFrameData[];
extern JointIndex sIronKnuckleEndVerticalAttackAnimJointIndices[];
extern AnimationHeader gIronKnuckleEndVerticalAttackAnim;
extern s16 sIronKnuckleHorizontalAttackAnimFrameData[];
extern JointIndex sIronKnuckleHorizontalAttackAnimJointIndices[];
extern AnimationHeader gIronKnuckleHorizontalAttackAnim;
extern s16 sIronKnuckleEndHorizontalAttackAnimFrameData[];
extern JointIndex sIronKnuckleEndHorizontalAttackAnimJointIndices[];
extern AnimationHeader gIronKnuckleEndHorizontalAttackAnim;
extern s16 sIronKnuckleBackHitAnimFrameData[];
extern JointIndex sIronKnuckleBackHitAnimJointIndices[];
extern AnimationHeader gIronKnuckleBackHitAnim;
extern s16 sIronKnuckleBlockAnimFrameData[];
extern JointIndex sIronKnuckleBlockAnimJointIndices[];
extern AnimationHeader gIronKnuckleBlockAnim;
extern s16 sIronKnuckleDeathAnimFrameData[];
extern JointIndex sIronKnuckleDeathAnimJointIndices[];
extern AnimationHeader gIronKnuckleDeathAnim;
extern s16 sIronKnuckleFrontHitAnimFrameData[];
extern JointIndex sIronKnuckleFrontHitAnimJointIndices[];
extern AnimationHeader gIronKnuckleFrontHitAnim;
extern s16 sIronKnuckleRunAnimFrameData[];
extern JointIndex sIronKnuckleRunAnimJointIndices[];
extern AnimationHeader gIronKnuckleRunAnim;
extern s16 sIronKnuckleWalkAnimFrameData[];
extern JointIndex sIronKnuckleWalkAnimJointIndices[];
extern AnimationHeader gIronKnuckleWalkAnim;
extern Vtx object_ikVtx_0062B0[];
extern Vtx gObjectIkVtx_009740[];
extern Vtx object_ikVtx_009110[];
extern Vtx object_ikVtx_009580[];
extern Gfx gIronKnuckleArmorFrontDL[];
extern Gfx gIronKnuckleArmorBackDL[];
extern Gfx gIronKnuckleAxeDL[];
extern Gfx gIronKnuckleRightHandDL[];
extern Gfx gIronKnuckleLowerRightPauldronDL[];
extern Gfx gIronKnuckleLeftHandDL[];
extern Gfx gIronKnuckleLowerLeftPauldronDL[];
extern Gfx gIronKnuckleUpperRightPauldronDL[];
extern Gfx gIronKnuckleUpperLeftPauldronDL[];
extern Gfx gIronKnuckleFrontTorsoArmorMarkingDL[];
extern Gfx gIronKnuckleRearTorsoArmorMarkingDL[];
extern Gfx gIronKnuckleRivetsMarking1DL[];
extern Gfx gIronKnuckleRivetsMarking2DL[];
extern Vtx object_ikVtx_00A8C0[];
extern Gfx gIronKnuckleBasMarkingDL[];
extern Gfx gIronKnuckleGerudoHeadDL[];
extern Gfx gIronKnuckleHelmetMarkingDL[];
extern Gfx gIronKnuckleTanArmorMaterialDL[];
extern Gfx gIronKnuckleBronzeArmorMaterialDL[];
extern Gfx gIronKnuckleSilverArmorMaterialDL[];
extern Gfx gIronKnuckleBlackArmorMaterialDL[];
extern Gfx gIronKnuckleBrownArmorMaterialDL[];
extern Gfx gIronKnuckleWhiteArmorMaterialDL[];
extern Gfx gIronKnuckleGoldArmorMaterialDL[];
extern Vtx object_ikVtx_00D0E0[];
extern Gfx gIronKnuckleTorsoDL[];
extern Gfx gIronKnuckleVambraceLeftDL[];
extern Gfx gIronKnuckleArmLeftDL[];
extern Gfx gIronKnuckleVambraceRightDL[];
extern Gfx gIronKnuckleArmRightDL[];
extern Gfx gIronKnuckleHandDL[];
extern Gfx gIronKnuckleWaistDL[];
extern Gfx gIronKnucklePauldronLeftDL[];
extern Gfx gIronKnuckleBootTipLeftDL[];
extern Gfx gIronKnuckleWaistArmorLeftDL[];
extern Gfx gIronKnucklePauldronRightDL[];
extern Gfx gIronKnuckleBootTipRightDL[];
extern Gfx gIronKnuckleWaistArmorRightDL[];
extern u64 gIronKnuckleChainMailTLUT[];
extern u64 gIronKnuckleRivet1Tex[];
extern u64 gIronKnuckleHair1Tex[];
extern u64 gIronKnuckleAxePomelJewel1Tex[];
extern u64 gIronKnuckleAxeTLUT[];
extern u64 gIronKnuckleFireTex[];
extern u64 gIronKnuckleRivet2Tex[];
extern u64 gIronKnuckleBlockPatternTex[];
extern u64 gIronKnuckleChainMailTex[];
extern u64 gIronKnuckleArmorEmblemTex[];
extern u64 gIronKnuckleGerudoEyeTex[];
extern u64 gIronKnuckleChestJewelTex[];
extern u64 gIronKnuckleArmorRivet2Tex[];
extern u64 gIronKnuckleArmorTLUT[];
extern u64 gIronKnuckleForeheadJewelTex[];
extern u64 gIronKnuckleGerudoSkinTex[];
extern u64 gIronKnuckleHair2Tex[];
extern u64 gIronKnuckleEarTex[];
extern u64 gIronKnuckleForeheadDecal1Tex[];
extern u64 gIronKnuckleForeheadDecal2Tex[];
extern StandardLimb gIronKnuckleRootLimb;
extern StandardLimb gIronKnuckleTassetCenterLimb;
extern StandardLimb gIronKnuckleTassetRightLimb;
extern StandardLimb gIronKnuckleRightLegLimb;
extern StandardLimb gIronKnuckleRightFootLimb;
extern StandardLimb gIronKnuckleTassetLeftLimb;
extern StandardLimb gIronKnuckleLeftLegLimb;
extern StandardLimb gIronKnuckleLeftFootLimb;
extern StandardLimb gIronKnuckleUpperBodyRoot;
extern StandardLimb gIronKnuckleUnkRootLimb;
extern StandardLimb gIronKnuckleHeadRootLimb;
extern StandardLimb gIronKnuckleHelmetArmorLimb;
extern StandardLimb gIronKnuckleHeadLimb;
extern StandardLimb gIronKnuckleRightUpperArmLimb;
extern StandardLimb gIronKnuckleRightForearmLimb;
extern StandardLimb gIronKnuckleAxeRootLimb;
extern StandardLimb gIronKnuckleAxeLimb;
extern StandardLimb gIronKnuckleRightHandLimb;
extern StandardLimb gIronKnuckleLeftUpperArmLimb;
extern StandardLimb gIronKnuckleLeftForearmLimb;
extern StandardLimb gIronKnuckleLeftHandLimb;
extern StandardLimb gIronKnuckleUpperLeftPauldronLimb;
extern StandardLimb gIronKnuckleLowerLeftPauldronLimb;
extern StandardLimb gIronKnuckleUpperRightPauldronLimb;
extern StandardLimb gIronKnuckleLowerRightPauldronLimb;
extern StandardLimb gIronKnuckleChestArmorFrontLimb;
extern StandardLimb gIronKnuckleChestArmorBackLimb;
extern StandardLimb gIronKnuckleTorsoLimb;
extern StandardLimb gIronKnuckleWaistLimb;
extern void* gIronKnuckleSkelLimbs[];
extern FlexSkeletonHeader gIronKnuckleSkel;
#endif
