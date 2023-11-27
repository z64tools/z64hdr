#ifndef OBJECT_EG_H
#define OBJECT_EG_H 1

typedef enum EyegoreLimb {
    /* 0x00 */ EYEGORE_LIMB_NONE,
    /* 0x01 */ EYEGORE_LIMB_ROOT,
    /* 0x02 */ EYEGORE_LIMB_TORSO,
    /* 0x03 */ EYEGORE_LIMB_HEAD,
    /* 0x04 */ EYEGORE_LIMB_LEFT_SHOULDER,
    /* 0x05 */ EYEGORE_LIMB_LEFT_ARM,
    /* 0x06 */ EYEGORE_LIMB_LEFT_HAND,
    /* 0x07 */ EYEGORE_LIMB_RIGHT_SHOULDER,
    /* 0x08 */ EYEGORE_LIMB_RIGHT_ARM,
    /* 0x09 */ EYEGORE_LIMB_RIGHT_HAND,
    /* 0x0A */ EYEGORE_LIMB_UPPER_EYELID,
    /* 0x0B */ EYEGORE_LIMB_LOWER_EYELID,
    /* 0x0C */ EYEGORE_LIMB_PUPIL,
    /* 0x0D */ EYEGORE_LIMB_LASER_ATTACH,
    /* 0x0E */ EYEGORE_LIMB_EYE_COLLIDER,
    /* 0x0F */ EYEGORE_LIMB_EYEBALL,
    /* 0x10 */ EYEGORE_LIMB_HIPS,
    /* 0x11 */ EYEGORE_LIMB_LEFT_THIGH,
    /* 0x12 */ EYEGORE_LIMB_LEFT_SHIN,
    /* 0x13 */ EYEGORE_LIMB_LEFT_FOOT,
    /* 0x14 */ EYEGORE_LIMB_RIGHT_THIGH,
    /* 0x15 */ EYEGORE_LIMB_RIGHT_SHIN,
    /* 0x16 */ EYEGORE_LIMB_RIGHT_FOOT,
    /* 0x17 */ EYEGORE_LIMB_FAULDS,
    /* 0x18 */ EYEGORE_LIMB_MAX
} EyegoreLimb;

extern Vtx object_egVtx_000000[];
extern Gfx gEyegoreEffectImpactDL[];
extern u64 gEyegoreEffectImpactTex[];
extern AnimatedMaterial gEyegoreEmpty1TexAnim[];
extern Vtx object_egVtx_0010D0[];
extern Gfx gEyegoreEffectLargeBodyPieceDL[];
extern u64 gEyegoreEffectLargeBodyPieceTex[];
extern Vtx object_egVtx_001310[];
extern Gfx gEyegoreEffectSmallBodyPieceDL[];
extern u64 gEyegoreEffectSmallBodyPieceTex[];
extern Vtx object_egVtx_001550[];
extern Gfx gEyegoreEmpty1DL[];
extern Gfx gEyegoreBlockDL[];
extern CamData gEyegoreBlockColCamDataList[];
extern SurfaceType gEyegoreBlockColSurfaceType[];
extern CollisionPoly gEyegoreBlockColPolygons[];
extern Vec3s gEyegoreBlockColVertices[];
extern CollisionHeader gEyegoreBlockCol;
extern Vtx object_egVtx_001850[];
extern Gfx gEyegoreEmpty2DL[];
extern Gfx gEyegoreEffectSolidDebrisDL[];
extern u64 gEyegoreEffectSolidDebrisTex[];
extern AnimatedMaterial gEyegoreEmpty2TexAnim[];
extern Vtx object_egVtx_001BC0[];
extern Gfx gEyegoreEmpty3DL[];
extern Gfx gEyegoreEffectFlatDebrisDL[];
extern u64 gEyegoreEffectFlatDebrisTex[];
extern AnimatedMaterial gEyegoreEmpty3TexAnim[];
extern s16 sEyegoreSlamAnimFrameData[];
extern JointIndex sEyegoreSlamAnimJointIndices[];
extern AnimationHeader gEyegoreSlamAnim;
extern Vtx gEyegoreUnusedVtx[];
extern Vtx object_egVtx_004170[];
extern Gfx gEyegoreLaserDL[];
extern u64 gEyegoreBeamosBodyGradientTex[];
extern u64 gEyegoreBeamosGrayMetalTex[];
extern u64 gEyegoreBeamosBoltAndMetalTex[];
extern u64 gEyegoreBeamosInnerEyeLidTex[];
extern u64 gEyegoreBeamosEyeOutlineTex[];
extern u64 gEyegoreBeamosEyeTex[];
extern u64 gEyegoreBeamosBodyTex[];
extern u64 gEyegoreLaserTex[];
extern u64 gEyegoreBeamosTeethTex[];
extern Vtx object_egVtx_005980[];
extern Gfx gEyegoreHipsDL[];
extern Gfx gEyegoreFauldsDL[];
extern Gfx gEyegoreRightShinDL[];
extern Gfx gEyegoreRightFootDL[];
extern Gfx gEyegoreRightThighDL[];
extern Gfx gEyegoreLeftShinDL[];
extern Gfx gEyegoreLeftFootDL[];
extern Gfx gEyegoreLeftThighDL[];
extern Gfx gEyegoreHeadDL[];
extern Gfx gEyegoreEyeballDL[];
extern Gfx gEyegoreEyeColliderLimbDL[];
extern Gfx gEyegoreLaserAttachLimbDL[];
extern Gfx gEyegorePupilDL[];
extern Gfx gEyegoreLowerEyelidDL[];
extern Gfx gEyegoreUpperEyelidDL[];
extern Gfx gEyegoreRightHandDL[];
extern Gfx gEyegoreRightShoulderDL[];
extern Gfx gEyegoreRightArmDL[];
extern Gfx gEyegoreLeftHandDL[];
extern Gfx gEyegoreLeftShoulderDL[];
extern Gfx gEyegoreLeftArmDL[];
extern Gfx gEyegoreTorsoDL[];
extern F3DPrimColor object_egTexColorChangingPrimColors_0094B8[];
extern F3DEnvColor object_egTexColorChangingEnvColors_0094C4[];
extern AnimatedMatColorParams gEyegoreEyeLaserTexAnimColorParams_0094CC;
extern AnimatedMatTexScrollParams gEyegoreEyeLaserTexAnimTexScrollParams_0094DC[];
extern AnimatedMaterial gEyegoreEyeLaserTexAnim[];
extern StandardLimb gEyegoreRootLimb;
extern StandardLimb gEyegoreTorsoLimb;
extern StandardLimb gEyegoreHeadLimb;
extern StandardLimb gEyegoreLeftShoulderLimb;
extern StandardLimb gEyegoreLeftArmLimb;
extern StandardLimb gEyegoreLeftHandLimb;
extern StandardLimb gEyegoreRightShoulderLimb;
extern StandardLimb gEyegoreRightArmLimb;
extern StandardLimb gEyegoreRightHandLimb;
extern StandardLimb gEyegoreUpperEyelidLimb;
extern StandardLimb gEyegoreLowerEyelidLimb;
extern StandardLimb gEyegorePupilLimb;
extern StandardLimb gEyegoreLaserAttachLimb;
extern StandardLimb gEyegoreEyeColliderLimb;
extern StandardLimb gEyegoreEyeballLimb;
extern StandardLimb gEyegoreHipsLimb;
extern StandardLimb gEyegoreLeftThighLimb;
extern StandardLimb gEyegoreLeftShinLimb;
extern StandardLimb gEyegoreLeftFootLimb;
extern StandardLimb gEyegoreRightThighLimb;
extern StandardLimb gEyegoreRightShinLimb;
extern StandardLimb gEyegoreRightFootLimb;
extern StandardLimb gEyegoreFauldsLimb;
extern void* gEyegoreSkelLimbs[];
extern FlexSkeletonHeader gEyegoreSkel;
extern s16 sEyegoreSlamWaitAnimFrameData[];
extern JointIndex sEyegoreSlamWaitAnimJointIndices[];
extern AnimationHeader gEyegoreSlamWaitAnim;
extern s16 sEyegoreSlamEndAnimFrameData[];
extern JointIndex sEyegoreSlamEndAnimJointIndices[];
extern AnimationHeader gEyegoreSlamEndAnim;
extern s16 sEyegoreLaserAnimFrameData[];
extern JointIndex sEyegoreLaserAnimJointIndices[];
extern AnimationHeader gEyegoreLaserAnim;
extern s16 sEyegoreUnusedLaserEndAnimFrameData[];
extern JointIndex sEyegoreUnusedLaserEndAnimJointIndices[];
extern AnimationHeader gEyegoreUnusedLaserEndAnim;
extern s16 sEyegoreDamagedAnimFrameData[];
extern JointIndex sEyegoreDamagedAnimJointIndices[];
extern AnimationHeader gEyegoreDamagedAnim;
extern s16 sEyegoreDeathAnimFrameData[];
extern JointIndex sEyegoreDeathAnimJointIndices[];
extern AnimationHeader gEyegoreDeathAnim;
extern s16 sEyegoreRetreatAnimFrameData[];
extern JointIndex sEyegoreRetreatAnimJointIndices[];
extern AnimationHeader gEyegoreRetreatAnim;
extern s16 sEyegoreLeftPunchAnimFrameData[];
extern JointIndex sEyegoreLeftPunchAnimJointIndices[];
extern AnimationHeader gEyegoreLeftPunchAnim;
extern s16 sEyegoreRightPunchAnimFrameData[];
extern JointIndex sEyegoreRightPunchAnimJointIndices[];
extern AnimationHeader gEyegoreRightPunchAnim;
extern s16 sEyegoreStunnedAnimFrameData[];
extern JointIndex sEyegoreStunnedAnimJointIndices[];
extern AnimationHeader gEyegoreStunnedAnim;
extern s16 sEyegoreStunEndAnimFrameData[];
extern JointIndex sEyegoreStunEndAnimJointIndices[];
extern AnimationHeader gEyegoreStunEndAnim;
extern s16 sEyegoreSitAnimFrameData[];
extern JointIndex sEyegoreSitAnimJointIndices[];
extern AnimationHeader gEyegoreSitAnim;
extern Vtx object_egVtx_00D3F0[];
extern Gfx gEyegoreUnusedStoneDL[];
extern u64 gEyegoreUnusedStoneTex[];
extern s16 sEyegoreUnusedChaseAnimFrameData[];
extern JointIndex sEyegoreUnusedChaseAnimJointIndices[];
extern AnimationHeader gEyegoreUnusedChaseAnim;
extern s16 sEyegoreStandAnimFrameData[];
extern JointIndex sEyegoreStandAnimJointIndices[];
extern AnimationHeader gEyegoreStandAnim;
extern s16 sEyegoreUnusedWalkAnimFrameData[];
extern JointIndex sEyegoreUnusedWalkAnimJointIndices[];
extern AnimationHeader gEyegoreUnusedWalkAnim;
extern s16 sEyegoreUnusedIdleAnimFrameData[];
extern JointIndex sEyegoreUnusedIdleAnimJointIndices[];
extern AnimationHeader gEyegoreUnusedIdleAnim;
extern s16 sEyegoreWalkAnimFrameData[];
extern JointIndex sEyegoreWalkAnimJointIndices[];
extern AnimationHeader gEyegoreWalkAnim;
extern Vtx object_egVtx_0100D0[];
extern Gfx gEyegoreStoneDL[];
extern u64 gEyegoreStoneTex[];
extern u64 gEyegoreDuplicateEffectImpactTex[];
extern u64 gEyegoreDarkBodyTex[];
extern u64 gEyegoreBlockTex[];
extern u64 gEyegoreClawTex[];
extern u64 gEyegoreLightBodyTex[];
extern u64 gEyegoreArmorTex[];
extern u64 gEyegoreHeadTex[];
extern u64 gEyegorePupilTex[];
extern u64 gEyegoreDuplicateStoneTex[];
extern u64 gEyegoreEyeballTex[];
#endif
