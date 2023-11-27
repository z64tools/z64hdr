#ifndef OBJECT_KAMEJIMA_H
#define OBJECT_KAMEJIMA_H 1

typedef enum TurtleLimb {
    /* 0x00 */ TURTLE_LIMB_NONE,
    /* 0x01 */ TURTLE_LIMB_ROOT,
    /* 0x02 */ TURTLE_LIMB_SHELL,
    /* 0x03 */ TURTLE_LIMB_NECK_HEAD_ROOT,
    /* 0x04 */ TURTLE_LIMB_NECK,
    /* 0x05 */ TURTLE_LIMB_HEAD,
    /* 0x06 */ TURTLE_LIMB_UPPER_MOUTH,
    /* 0x07 */ TURTLE_LIMB_LOWER_MOUTH_ROOT,
    /* 0x08 */ TURTLE_LIMB_LOWER_MOUTH,
    /* 0x09 */ TURTLE_LIMB_BACK_LEFT_FLIPPER_ROOT,
    /* 0x0A */ TURTLE_LIMB_BACK_LEFT_FLIPPER,
    /* 0x0B */ TURTLE_LIMB_BACK_RIGHT_FLIPPER_ROOT,
    /* 0x0C */ TURTLE_LIMB_BACK_RIGHT_FLIPPER,
    /* 0x0D */ TURTLE_TAIL_ROOT_LIMB,
    /* 0x0E */ TURTLE_TAIL_LIMB,
    /* 0x0F */ TURTLE_TAIL_END_ROOT_LIMB,
    /* 0x10 */ TURTLE_LIMB_FRONT_LEFT_FLIPPER_ROOT,
    /* 0x11 */ TURTLE_LIMB_FRONT_LEFT_UPPER_FLIPPER,
    /* 0x12 */ TURTLE_LIMB_FRONT_LEFT_LOWER_FLIPPER,
    /* 0x13 */ TURTLE_LIMB_FRONT_LEFT_END_FLIPPER,
    /* 0x14 */ TURTLE_LIMB_FRONT_RIGHT_FLIPPER_ROOT,
    /* 0x15 */ TURTLE_LIMB_FRONT_RIGHT_UPPER_FLIPPER,
    /* 0x16 */ TURTLE_LIMB_FRONT_RIGHT_LOWER_FLIPPER,
    /* 0x17 */ TURTLE_LIMB_FRONT_RIGHT_END_FLIPPER,
    /* 0x18 */ TURTLE_LIMB_MAX
} TurtleLimb;

extern Vtx gTurtleWaveVtx[];
extern Gfx gTurtleWaveDL[];
extern u64 gTurtleWaveUnusedTex[];
extern u64 gTurtleWaveTex[];
extern AnimatedMatTexScrollParams gTurtleWaveTexAnimTexScrollParams_001AE0[];
extern AnimatedMatTexScrollParams gTurtleWaveTexAnimTexScrollParams_001AE8[];
extern AnimatedMaterial gTurtleWaveTexAnim[];
extern CamData gTurtleZoraCapeAsleepColCamDataList[];
extern SurfaceType gTurtleZoraCapeAsleepColSurfaceType[];
extern CollisionPoly gTurtleZoraCapeAsleepColPolygons[];
extern Vec3s gTurtleZoraCapeAsleepColVertices[];
extern CollisionHeader gTurtleZoraCapeAsleepCol;
extern AnimatedMaterial gTurtleEmptyTexAnim[];
extern CamData gTurtleZoraCapeAwakeColCamDataList[];
extern SurfaceType gTurtleZoraCapeAwakeColSurfaceType[];
extern CollisionPoly gTurtleZoraCapeAwakeColPolygons[];
extern Vec3s gTurtleZoraCapeAwakeColVertices[];
extern CollisionHeader gTurtleZoraCapeAwakeCol;
extern CamData gTurtleUnusedColCamDataList[];
extern SurfaceType gTurtleUnusedColSurfaceType[];
extern CollisionPoly gTurtleUnusedColPolygons[];
extern Vec3s gTurtleUnusedColVertices[];
extern CollisionHeader gTurtleUnusedCol;
extern s16 sTurtleGlitchy1AnimFrameData[];
extern JointIndex sTurtleGlitchy1AnimJointIndices[];
extern AnimationHeader gTurtleGlitchy1Anim;
extern s16 sTurtleCoughAnimFrameData[];
extern JointIndex sTurtleCoughAnimJointIndices[];
extern AnimationHeader gTurtleCoughAnim;
extern s16 sTurtleIdleAnimFrameData[];
extern JointIndex sTurtleIdleAnimJointIndices[];
extern AnimationHeader gTurtleIdleAnim;
extern Vtx object_kamejimaVtx_0048C0[];
extern Gfx gTurtleAsleepDL[];
extern u64 gTurtleAsleepTLUT[];
extern u64 gTurtleAsleepGrassTex[];
extern u64 gTurtleAsleepGrassDirtTex[];
extern s16 sTurtleSwimAnimFrameData[];
extern JointIndex sTurtleSwimAnimJointIndices[];
extern AnimationHeader gTurtleSwimAnim;
extern Vtx object_kamejimaVtx_006990[];
extern Gfx gTurtleShellDL[];
extern Gfx gTurtleFrontLeftUpperFlipperDL[];
extern Gfx gTurtleFrontLeftLowerFlipperDL[];
extern Gfx gTurtleFrontLeftEndFlipperDL[];
extern Gfx gTurtleFrontRightUpperFlipperDL[];
extern Gfx gTurtleFrontRightLowerFlipperDL[];
extern Gfx gTurtleFrontRightEndFlipperDL[];
extern Gfx gTurtleBackRightFlipperDL[];
extern Gfx gTurtleBackLeftFlipperDL[];
extern Gfx gTurtleTailDL[];
extern Gfx gTurtleNeckDL[];
extern Gfx gTurtleHeadDL[];
extern Gfx gTurtleUpperMouthDL[];
extern Gfx gTurtleLowerMouthDL[];
extern u64 gTurtleSkinTLUT[];
extern u64 gTurtleTLUT[];
extern u64 gTurtleNostrilTex[];
extern u64 gTurtleInsideUpperMouthTex[];
extern u64 gTurtleInsideLowerMouthTex[];
extern u64 gTurtleSpottedSkinTex[];
extern u64 gTurtleSkinTex[];
extern u64 gTurtleEyeOpenStraightTex[];
extern u64 gTurtleEyeHalfStraightTex[];
extern u64 gTurtleEyeClosedTex[];
extern u64 gTurtleEyeHalfLeftTex[];
extern u64 gTurtleEyeOpenRightTex[];
extern u64 gTurtleEyeOpenLeftTex[];
extern u64 gTurtleHeadTex[];
extern u64 gTurtleShellGrassTex[];
extern u64 gTurtleShellScutesTex[];
extern u64 gTurtleShellBottomTex[];
extern StandardLimb gTurtleRootLimb;
extern StandardLimb gTurtleShellLimb;
extern StandardLimb gTurtleNeckHeadRootLimb;
extern StandardLimb gTurtleNeckLimb;
extern StandardLimb gTurtleHeadLimb;
extern StandardLimb gTurtleUpperMouthLimb;
extern StandardLimb gTurtleLowerMouthRootLimb;
extern StandardLimb gTurtleLowerMouthLimb;
extern StandardLimb gTurtleBackLeftFlipperRootLimb;
extern StandardLimb gTurtleBackLeftFlipperLimb;
extern StandardLimb gTurtleBackRightFlipperRootLimb;
extern StandardLimb gTurtleBackRightFlipperLimb;
extern StandardLimb gTurtleTailRootLimb;
extern StandardLimb gTurtleTailLimb;
extern StandardLimb gTurtleTailEndRootLimb;
extern StandardLimb gTurtleFrontLeftFlipperRootLimb;
extern StandardLimb gTurtleFrontLeftUpperFlipperLimb;
extern StandardLimb gTurtleFrontLeftLowerFlipperLimb;
extern StandardLimb gTurtleFrontLeftEndFlipperLimb;
extern StandardLimb gTurtleFrontRightFlipperRootLimb;
extern StandardLimb gTurtleFrontRightUpperFlipperLimb;
extern StandardLimb gTurtleFrontRightLowerFlipperLimb;
extern StandardLimb gTurtleFrontRightEndFlipperLimb;
extern void* gTurtleSkelLimbs[];
extern FlexSkeletonHeader gTurtleSkel;
extern s16 sTurtleGlitchy2AnimFrameData[];
extern JointIndex sTurtleGlitchy2AnimJointIndices[];
extern AnimationHeader gTurtleGlitchy2Anim;
extern s16 sTurtleSpeak1AnimFrameData[];
extern JointIndex sTurtleSpeak1AnimJointIndices[];
extern AnimationHeader gTurtleSpeak1Anim;
extern s16 sTurtleGlitchyRaiseHeadAnimFrameData[];
extern JointIndex sTurtleGlitchyRaiseHeadAnimJointIndices[];
extern AnimationHeader gTurtleGlitchyRaiseHeadAnim;
extern s16 sTurtleSpeak2AnimFrameData[];
extern JointIndex sTurtleSpeak2AnimJointIndices[];
extern AnimationHeader gTurtleSpeak2Anim;
extern s16 sTurtleFloatAnimFrameData[];
extern JointIndex sTurtleFloatAnimJointIndices[];
extern AnimationHeader gTurtleFloatAnim;
extern s16 sTurtleGlitchyLookAroundAnimFrameData[];
extern JointIndex sTurtleGlitchyLookAroundAnimJointIndices[];
extern AnimationHeader gTurtleGlitchyLookAroundAnim;
extern s16 sTurtleYawnAnimFrameData[];
extern JointIndex sTurtleYawnAnimJointIndices[];
extern AnimationHeader gTurtleYawnAnim;
#endif
