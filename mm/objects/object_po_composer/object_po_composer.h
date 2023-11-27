#ifndef OBJECT_PO_COMPOSER_H
#define OBJECT_PO_COMPOSER_H 1

typedef enum PoeComposerLimb {
    /* 0x00 */ POE_COMPOSER_LIMB_NONE,
    /* 0x01 */ POE_COMPOSER_LIMB_UPPER_BODY,
    /* 0x02 */ POE_COMPOSER_LIMB_LEFT_SHOULDER,
    /* 0x03 */ POE_COMPOSER_LIMB_LEFT_ARM,
    /* 0x04 */ POE_COMPOSER_LIMB_LEFT_HAND,
    /* 0x05 */ POE_COMPOSER_LIMB_CONDUCTOR_BATON,
    /* 0x06 */ POE_COMPOSER_LIMB_RIGHT_SHOULDER,
    /* 0x07 */ POE_COMPOSER_LIMB_RIGHT_ARM,
    /* 0x08 */ POE_COMPOSER_LIMB_RIGHT_HAND,
    /* 0x09 */ POE_COMPOSER_LIMB_LANTERN,
    /* 0x0A */ POE_COMPOSER_LIMB_HEAD,
    /* 0x0B */ POE_COMPOSER_LIMB_LOWER_BODY,
    /* 0x0C */ POE_COMPOSER_LIMB_MAX
} PoeComposerLimb;

extern s16 sPoeComposerAttackAnimFrameData[];
extern JointIndex sPoeComposerAttackAnimJointIndices[];
extern AnimationHeader gPoeComposerAttackAnim;
extern s16 sPoeComposerRaiseArmsAnimFrameData[];
extern JointIndex sPoeComposerRaiseArmsAnimJointIndices[];
extern AnimationHeader gPoeComposerRaiseArmsAnim;
extern s16 sPoeComposerBeginPlayAnimFrameData[];
extern JointIndex sPoeComposerBeginPlayAnimJointIndices[];
extern AnimationHeader gPoeComposerBeginPlayAnim;
extern s16 sPoeComposerPlayAnimFrameData[];
extern JointIndex sPoeComposerPlayAnimJointIndices[];
extern AnimationHeader gPoeComposerPlayAnim;
extern s16 sPoeComposerFleeAnimFrameData[];
extern JointIndex sPoeComposerFleeAnimJointIndices[];
extern AnimationHeader gPoeComposerFleeAnim;
extern s16 sPoeComposerIdleAnimFrameData[];
extern JointIndex sPoeComposerIdleAnimJointIndices[];
extern AnimationHeader gPoeComposerIdleAnim;
extern s16 sPoeComposerArmsRaisedAnimFrameData[];
extern JointIndex sPoeComposerArmsRaisedAnimJointIndices[];
extern AnimationHeader gPoeComposerArmsRaisedAnim;
extern s16 sPoeComposerLowerArmsAnimFrameData[];
extern JointIndex sPoeComposerLowerArmsAnimJointIndices[];
extern AnimationHeader gPoeComposerLowerArmsAnim;
extern s16 sPoeComposerLookDownAnimFrameData[];
extern JointIndex sPoeComposerLookDownAnimJointIndices[];
extern AnimationHeader gPoeComposerLookDownAnim;
extern s16 sPoeComposerBeginRollAnimFrameData[];
extern JointIndex sPoeComposerBeginRollAnimJointIndices[];
extern AnimationHeader gPoeComposerBeginRollAnim;
extern s16 sPoeComposerRollAnimFrameData[];
extern JointIndex sPoeComposerRollAnimJointIndices[];
extern AnimationHeader gPoeComposerRollAnim;
extern s16 sPoeComposerAppearDisappearAnimFrameData[];
extern JointIndex sPoeComposerAppearDisappearAnimJointIndices[];
extern AnimationHeader gPoeComposerAppearDisappearAnim;
extern s16 sPoeComposerStillAnimFrameData[];
extern JointIndex sPoeComposerStillAnimJointIndices[];
extern AnimationHeader gPoeComposerStillAnim;
extern u64 gPoeComposerSoulTex[];
extern Vtx object_po_composerVtx_0045C0[];
extern Gfx object_po_composer_DL_004600[];
extern Vtx object_po_composerVtx_0046C0[];
extern Gfx gPoeComposerUpperBodyLimbDL_0052E0[];
extern Gfx gPoeComposerLowerBodyLimbDL_0054E0[];
extern Gfx gPoeComposerRightShoulderLimbDL_0055D0[];
extern Gfx gPoeComposerRightArmLimbDL_005898[];
extern Gfx gPoeComposerRightHandLimbDL_005948[];
extern Gfx gPoeComposerLeftShoulderLimbDL_005A00[];
extern Gfx gPoeComposerLeftArmLimbDL_005CB8[];
extern Gfx gPoeComposerLeftHandLimbDL_005D68[];
extern Vtx object_po_composerVtx_005E70[];
extern Gfx gPoeComposerSharpHeadDL[];
extern Gfx object_po_composer_DL_006D80[];
extern Gfx gPoeComposerLanternBaseDL[];
extern Gfx gPoeComposerLanternTopDL[];
extern Gfx gPoeComposerLanternGlassDL[];
extern Gfx gPoeComposerFlatHeadDL[];
extern Vtx object_po_composerVtx_0073D0[];
extern Gfx gPoeComposerBurnDL[];
extern u64 object_po_composer_Tex_007E80[];
extern u64 object_po_composer_Tex_008080[];
extern u64 object_po_composer_Tex_008280[];
extern u64 object_po_composer_Tex_008480[];
extern u64 object_po_composer_Tex_008680[];
extern u64 object_po_composer_Tex_008A80[];
extern u64 object_po_composer_Tex_008C80[];
extern u64 object_po_composer_Tex_008E80[];
extern u64 object_po_composer_Tex_009080[];
extern u64 object_po_composer_Tex_009280[];
extern u64 object_po_composer_Tex_009480[];
extern u64 object_po_composer_Tex_009680[];
extern StandardLimb gPoeComposerUpperBodyLimb;
extern StandardLimb gPoeComposerLeftShoulderLimb;
extern StandardLimb gPoeComposerLeftArmLimb;
extern StandardLimb gPoeComposerLeftHandLimb;
extern StandardLimb gPoeComposerConductorBatonLimb;
extern StandardLimb gPoeComposerRightShoulderLimb;
extern StandardLimb gPoeComposerRightArmLimb;
extern StandardLimb gPoeComposerRightHandLimb;
extern StandardLimb gPoeComposerLanternLimb;
extern StandardLimb gPoeComposerHeadLimb;
extern StandardLimb gPoeComposerLowerBodyLimb;
extern void* gPoeComposerSkelLimbs[];
extern FlexSkeletonHeader gPoeComposerSkel;
#endif
