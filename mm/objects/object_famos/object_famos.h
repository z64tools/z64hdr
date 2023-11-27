#ifndef OBJECT_FAMOS_H
#define OBJECT_FAMOS_H 1

typedef enum FamosLimb {
    /* 0x00 */ FAMOS_LIMB_NONE,
    /* 0x01 */ FAMOS_LIMB_BODY,
    /* 0x02 */ FAMOS_LIMB_EMBLEM,
    /* 0x03 */ FAMOS_LIMB_SWORD,
    /* 0x04 */ FAMOS_LIMB_SHIELD,
    /* 0x05 */ FAMOS_LIMB_HEAD,
    /* 0x06 */ FAMOS_LIMB_MAX
} FamosLimb;

extern s16 sFamosShakeAnimFrameData[];
extern JointIndex sFamosShakeAnimJointIndices[];
extern AnimationHeader gFamosShakeAnim;
extern Vtx object_famosVtx_000110[];
extern Gfx gFamosHelmetDL[];
extern Gfx gFamosMainBodyDL[];
extern Gfx gFamosShieldDL[];
extern Gfx gFamosSwordDL[];
extern Gfx gFamosLightSwitchDL[];
extern u64 gFamosBodyTLUT[];
extern u64 gFamosBottomTLUT[];
extern u64 gFamosShieldTLUT[];
extern u64 gFamosSwordHiltTLUT[];
extern u64 gFamosMainBodyTex[];
extern u64 gFamosBottomTex[];
extern u64 gFamosShieldTex[];
extern u64 gFamosSwordHiltTex[];
extern u64 gFamosLightSwitchTex[];
extern StandardLimb gFamosBodyLimb;
extern StandardLimb gFamosEmblemLimb;
extern StandardLimb gFamosSwordLimb;
extern StandardLimb gFamosShieldLimb;
extern StandardLimb gFamosHeadLimb;
extern void* gFamosSkelLimbs[];
extern SkeletonHeader gFamosSkel;
extern s16 sFamosIdleAnimFrameData[];
extern JointIndex sFamosIdleAnimJointIndices[];
extern AnimationHeader gFamosIdleAnim;
extern F3DPrimColor object_famosTexColorChangingPrimColors_003DE0[];
extern F3DEnvColor object_famosTexColorChangingEnvColors_003DF0[];
extern F3DEnvColor object_famosTexColorChangingEnvColors_003DFC[];
extern u16 object_famosTexColorChangingFrameData_003E08[];
extern AnimatedMatColorParams gFamosNormalGlowingEmblemTexAnimColorParams_003E10;
extern AnimatedMatColorParams gFamosFlippedGlowingEmblemTexAnimColorParams_003E20;
extern AnimatedMaterial gFamosNormalGlowingEmblemTexAnim[];
extern AnimatedMaterial gFamosFlippedGlowingEmblemTexAnim[];
#endif
