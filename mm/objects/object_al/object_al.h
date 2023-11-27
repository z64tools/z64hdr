#ifndef OBJECT_AL_H
#define OBJECT_AL_H 1

typedef enum MadameAromaLimb {
    /* 0x00 */ MADAME_AROMA_LIMB_NONE,
    /* 0x01 */ MADAME_AROMA_LIMB_ROOT,
    /* 0x02 */ MADAME_AROMA_LIMB_UPPER_BODY,
    /* 0x03 */ MADAME_AROMA_LIMB_SHAWL_MIDDLE,
    /* 0x04 */ MADAME_AROMA_LIMB_NECKLACE,
    /* 0x05 */ MADAME_AROMA_LIMB_RIGHT_SHOULDER,
    /* 0x06 */ MADAME_AROMA_LIMB_RIGHT_ARM,
    /* 0x07 */ MADAME_AROMA_LIMB_RIGHT_HAND,
    /* 0x08 */ MADAME_AROMA_LIMB_LEFT_SHOULDER,
    /* 0x09 */ MADAME_AROMA_LIMB_LEFT_ARM,
    /* 0x0A */ MADAME_AROMA_LIMB_LEFT_HAND,
    /* 0x0B */ MADAME_AROMA_LIMB_SHAWL_UPPER,
    /* 0x0C */ MADAME_AROMA_LIMB_SHAWL_LEFT_LOWER_MIDDLE,
    /* 0x0D */ MADAME_AROMA_LIMB_SHAWL_LEFT_LOWER,
    /* 0x0E */ MADAME_AROMA_LIMB_SHAWL_RIGHT_LOWER_MIDDLE,
    /* 0x0F */ MADAME_AROMA_LIMB_SHAWL_RIGHT_LOWER,
    /* 0x10 */ MADAME_AROMA_LIMB_HEAD,
    /* 0x11 */ MADAME_AROMA_LIMB_HAIR_LOOP,
    /* 0x12 */ MADAME_AROMA_LIMB_LEFT_HAIR,
    /* 0x13 */ MADAME_AROMA_LIMB_LEFT_HAIR_EDGE,
    /* 0x14 */ MADAME_AROMA_LIMB_RIGHT_HAIR,
    /* 0x15 */ MADAME_AROMA_LIMB_RIGHT_HAIR_EDGE,
    /* 0x16 */ MADAME_AROMA_LIMB_MIDDLE_BODY,
    /* 0x17 */ MADAME_AROMA_LIMB_LOWER_BODY,
    /* 0x18 */ MADAME_AROMA_LIMB_LEGS,
    /* 0x19 */ MADAME_AROMA_LIMB_LEFT_FOOT,
    /* 0x1A */ MADAME_AROMA_LIMB_RIGHT_FOOT,
    /* 0x1B */ MADAME_AROMA_LIMB_MAX
} MadameAromaLimb;

extern s16 object_al_Anim_000C54FrameData[];
extern JointIndex object_al_Anim_000C54JointIndices[];
extern AnimationHeader object_al_Anim_000C54;
extern Vtx object_alVtx_000C70[];
extern Gfx gMadameAromaRightFootDL[];
extern Gfx gMadameAromaLeftFootDL[];
extern Gfx gMadameAromaLegsDL[];
extern Gfx gMadameAromaLowerBodyDL[];
extern Gfx gMadameAromaMiddleBodyDL[];
extern Gfx gMadameAromaRightHairEdgeDL[];
extern Gfx gMadameAromaRightHairDL[];
extern Gfx gMadameAromaLeftHairEdgeDL[];
extern Gfx gMadameAromaLeftHairDL[];
extern Gfx gMadameAromaHairLoopDL[];
extern Gfx gMadameAromaHeadDL[];
extern Gfx gMadameAromaShawlRightLowerDL[];
extern Gfx gMadameAromaShawlRightLowerMiddleDL[];
extern Gfx gMadameAromaShawlLeftLowerDL[];
extern Gfx gMadameAromaShawlLeftLowerMiddleDL[];
extern Gfx gMadameAromaShawlUpperDL[];
extern Gfx gMadameAromaLeftHandDL[];
extern Gfx gMadameAromaLeftArmDL[];
extern Gfx gMadameAromaLeftShoulderDL[];
extern Gfx gMadameAromaRightHandDL[];
extern Gfx gMadameAromaRightArmDL[];
extern Gfx gMadameAromaRightShoulderDL[];
extern Gfx gMadameAromaUpperBodyDL[];
extern Gfx gMadameAromaNecklaceDL[];
extern Gfx gMadameAromaShawlMiddleDL[];
extern u64 gMadameAromaTLUT[];
extern u64 gMadameAromaSkinBlotchTex[];
extern u64 gMadameAromaEarsTex[];
extern u64 gMadameAromaHairToSkinTex[];
extern u64 gMadameAromaMouthTex[];
extern u64 gMadameAromaEyesTex[];
extern u64 gMadameAromaShoeTex[];
extern u64 gMadameAromaDressLowerTex[];
extern u64 gMadameAromaHairHolderTex[];
extern u64 gMadameAromaFingersTex[];
extern u64 gMadameAromaChestTex[];
extern u64 gMadameAromaEarringsTex[];
extern u64 gMadameAromaRingTex[];
extern StandardLimb gMadameAromaRootLimb;
extern StandardLimb gMadameAromaUpperBodyLimb;
extern StandardLimb gMadameAromaShawlMiddleLimb;
extern StandardLimb gMadameAromaNecklaceLimb;
extern StandardLimb gMadameAromaRightShoulderLimb;
extern StandardLimb gMadameAromaRightArmLimb;
extern StandardLimb gMadameAromaRightHandLimb;
extern StandardLimb gMadameAromaLeftShoulderLimb;
extern StandardLimb gMadameAromaLeftArmLimb;
extern StandardLimb gMadameAromaLeftHandLimb;
extern StandardLimb gMadameAromaShawlUpperLimb;
extern StandardLimb gMadameAromaShawlLeftLowerMiddleLimb;
extern StandardLimb gMadameAromaShawlLeftLowerLimb;
extern StandardLimb gMadameAromaShawlRightLowerMiddleLimb;
extern StandardLimb gMadameAromaShawlRightLowerLimb;
extern StandardLimb gMadameAromaHeadLimb;
extern StandardLimb gMadameAromaHairLoopLimb;
extern StandardLimb gMadameAromaLeftHairLimb;
extern StandardLimb gMadameAromaLeftHairEdgeLimb;
extern StandardLimb gMadameAromaRightHairLimb;
extern StandardLimb gMadameAromaRightHairEdgeLimb;
extern StandardLimb gMadameAromaMiddleBodyLimb;
extern StandardLimb gMadameAromaLowerBodyLimb;
extern StandardLimb gMadameAromaLegsLimb;
extern StandardLimb gMadameAromaLeftFootLimb;
extern StandardLimb gMadameAromaRightFootLimb;
extern void* gMadameAromaSkelLimbs[];
extern FlexSkeletonHeader gMadameAromaSkel;
extern s16 object_al_Anim_00A764FrameData[];
extern JointIndex object_al_Anim_00A764JointIndices[];
extern AnimationHeader object_al_Anim_00A764;
extern s16 object_al_Anim_00ACA0FrameData[];
extern JointIndex object_al_Anim_00ACA0JointIndices[];
extern AnimationHeader object_al_Anim_00ACA0;
extern s16 object_al_Anim_00BCA4FrameData[];
extern JointIndex object_al_Anim_00BCA4JointIndices[];
extern AnimationHeader object_al_Anim_00BCA4;
extern s16 object_al_Anim_00CA28FrameData[];
extern JointIndex object_al_Anim_00CA28JointIndices[];
extern AnimationHeader object_al_Anim_00CA28;
extern s16 object_al_Anim_00DBE0FrameData[];
extern JointIndex object_al_Anim_00DBE0JointIndices[];
extern AnimationHeader object_al_Anim_00DBE0;
#endif
