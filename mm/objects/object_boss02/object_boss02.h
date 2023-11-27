#ifndef OBJECT_BOSS02_H
#define OBJECT_BOSS02_H 1

typedef enum TwinmoldHeadLimb {
    /* 0x00 */ TWINMOLD_HEAD_LIMB_NONE,
    /* 0x01 */ TWINMOLD_HEAD_LIMB_ROOT,
    /* 0x02 */ TWINMOLD_HEAD_LIMB_HEAD,
    /* 0x03 */ TWINMOLD_HEAD_LIMB_RIGHT_MANDIBLE_ROOT,
    /* 0x04 */ TWINMOLD_HEAD_LIMB_RIGHT_MANDIBLE,
    /* 0x05 */ TWINMOLD_HEAD_LIMB_LEFT_MANDIBLE_ROOT,
    /* 0x06 */ TWINMOLD_HEAD_LIMB_LEFT_MANDIBLE,
    /* 0x07 */ TWINMOLD_HEAD_LIMB_RIGHT_ANTENNA_ROOT,
    /* 0x08 */ TWINMOLD_HEAD_LIMB_RIGHT_ANTENNA_BACK,
    /* 0x09 */ TWINMOLD_HEAD_LIMB_RIGHT_ANTENNA_FRONT,
    /* 0x0A */ TWINMOLD_HEAD_LIMB_LEFT_ANTENNA_ROOT,
    /* 0x0B */ TWINMOLD_HEAD_LIMB_LEFT_ANTENNA_BACK,
    /* 0x0C */ TWINMOLD_HEAD_LIMB_LEFT_ANTENNA_FRONT,
    /* 0x0D */ TWINMOLD_HEAD_LIMB_MAX
} TwinmoldHeadLimb;

typedef enum TwinmoldBodyLimb {
    /* 0x00 */ TWINMOLD_BODY_LIMB_NONE,
    /* 0x01 */ TWINMOLD_BODY_LIMB_ROOT,
    /* 0x02 */ TWINMOLD_BODY_LIMB_SEGMENT_1,
    /* 0x03 */ TWINMOLD_BODY_LIMB_SEGMENT_2,
    /* 0x04 */ TWINMOLD_BODY_LIMB_SEGMENT_3,
    /* 0x05 */ TWINMOLD_BODY_LIMB_SEGMENT_4,
    /* 0x06 */ TWINMOLD_BODY_LIMB_SEGMENT_5,
    /* 0x07 */ TWINMOLD_BODY_LIMB_SEGMENT_6,
    /* 0x08 */ TWINMOLD_BODY_LIMB_SEGMENT_7,
    /* 0x09 */ TWINMOLD_BODY_LIMB_SEGMENT_8,
    /* 0x0A */ TWINMOLD_BODY_LIMB_SEGMENT_9,
    /* 0x0B */ TWINMOLD_BODY_LIMB_SEGMENT_10,
    /* 0x0C */ TWINMOLD_BODY_LIMB_SEGMENT_11,
    /* 0x0D */ TWINMOLD_BODY_LIMB_SEGMENT_12,
    /* 0x0E */ TWINMOLD_BODY_LIMB_SEGMENT_13,
    /* 0x0F */ TWINMOLD_BODY_LIMB_SEGMENT_14,
    /* 0x10 */ TWINMOLD_BODY_LIMB_SEGMENT_15,
    /* 0x11 */ TWINMOLD_BODY_LIMB_SEGMENT_16,
    /* 0x12 */ TWINMOLD_BODY_LIMB_SEGMENT_17,
    /* 0x13 */ TWINMOLD_BODY_LIMB_SEGMENT_18,
    /* 0x14 */ TWINMOLD_BODY_LIMB_SEGMENT_19,
    /* 0x15 */ TWINMOLD_BODY_LIMB_SEGMENT_20,
    /* 0x16 */ TWINMOLD_BODY_LIMB_SEGMENT_21,
    /* 0x17 */ TWINMOLD_BODY_LIMB_TAIL,
    /* 0x18 */ TWINMOLD_BODY_LIMB_MAX
} TwinmoldBodyLimb;

extern u64 gTwinmoldDustMaskTex[];
extern Vtx object_boss02Vtx_000200[];
extern Gfx gTwinmoldDustMaterialDL[];
extern Gfx gTwinmoldDustModelDL[];
extern u64 gTwinmoldSkinTLUT[];
extern u64 gTwinmoldSnoutTLUT[];
extern u64 gTwinmoldVeinsTLUT[];
extern u64 gTwinmoldUndersideTLUT[];
extern u64 gTwinmoldSpikeAndMandibleTLUT[];
extern u64 gTwinmoldRedSkinTex[];
extern u64 gTwinmoldEyeTex[];
extern u64 gTwinmoldSnoutTex[];
extern u64 gTwinmoldVeinsTex[];
extern u64 gTwinmoldTeethTex[];
extern u64 gTwinmoldUndersideTex[];
extern u64 gTwinmoldSpikeAndMandibleTex[];
extern u64 gTwinmoldAntennaTex[];
extern u64 gTwinmoldTailGemTex[];
extern u64 gTwinmoldBlueSkinTex[];
extern s16 sTwinmoldHeadStationaryAnimFrameData[];
extern JointIndex sTwinmoldHeadStationaryAnimJointIndices[];
extern AnimationHeader gTwinmoldHeadStationaryAnim;
extern Vtx object_boss02Vtx_004A30[];
extern Gfx gTwinmoldHeadDL[];
extern Gfx gTwinmoldHeadLeftAntennaBackDL[];
extern Gfx gTwinmoldHeadLeftAntennaFrontDL[];
extern Gfx gTwinmoldHeadRightAntennaBackDL[];
extern Gfx gTwinmoldHeadRightAntennaFrontDL[];
extern Gfx gTwinmoldHeadLeftMandibleDL[];
extern Gfx gTwinmoldHeadRightMandibleDL[];
extern Vtx object_boss02Vtx_006E10[];
extern Gfx gTwinmoldRuinPyramidDL[];
extern u64 gTwinmoldRuinPyramidTLUT[];
extern u64 gTwinmoldRuinPyramidTex[];
extern Vtx object_boss02Vtx_007978[];
extern Gfx gRuinFragmentDL[];
extern Vtx object_boss02Vtx_007B58[];
extern Gfx gTwinmoldRuinPillarDL[];
extern u64 gTwinmoldRuinPillarTLUT[];
extern u64 gTwinmoldRuinPillarTex[];
extern u64 gTwinmoldTitleCardTex[];
extern StandardLimb gTwinmoldHeadRootLimb;
extern StandardLimb gTwinmoldHeadLimb;
extern StandardLimb gTwinmoldHeadRightMandibleRootLimb;
extern StandardLimb gTwinmoldHeadRightMandibleLimb;
extern StandardLimb gTwinmoldHeadLeftMandibleRootLimb;
extern StandardLimb gTwinmoldHeadLeftMandibleLimb;
extern StandardLimb gTwinmoldHeadRightAntennaRootLimb;
extern StandardLimb gTwinmoldHeadRightAntennaBackLimb;
extern StandardLimb gTwinmoldHeadRightAntennaFrontLimb;
extern StandardLimb gTwinmoldHeadLeftAntennaRootLimb;
extern StandardLimb gTwinmoldHeadLeftAntennaBackLimb;
extern StandardLimb gTwinmoldHeadLeftAntennaFrontLimb;
extern void* gTwinmoldHeadSkelLimbs[];
extern SkeletonHeader gTwinmoldHeadSkel;
extern s16 sTwinmoldHeadFlyAnimFrameData[];
extern JointIndex sTwinmoldHeadFlyAnimJointIndices[];
extern AnimationHeader gTwinmoldHeadFlyAnim;
extern AnimatedMaterial gTwinmoldUnusedTexAnim[];
extern Vtx object_boss02Vtx_009CA0[];
extern Gfx gTwinmoldBodySegment1DL[];
extern Gfx gTwinmoldBodySegment2DL[];
extern Gfx gTwinmoldBodySegment3DL[];
extern Gfx gTwinmoldBodySegment4DL[];
extern Gfx gTwinmoldBodySegment5DL[];
extern Gfx gTwinmoldBodySegment6DL[];
extern Gfx gTwinmoldBodySegment7DL[];
extern Gfx gTwinmoldBodySegment8DL[];
extern Gfx gTwinmoldBodySegment9DL[];
extern Gfx gTwinmoldBodySegment10DL[];
extern Gfx gTwinmoldBodySegment11DL[];
extern Gfx gTwinmoldBodySegment12DL[];
extern Gfx gTwinmoldBodySegment13DL[];
extern Gfx gTwinmoldBodySegment14DL[];
extern Gfx gTwinmoldBodySegment15DL[];
extern Gfx gTwinmoldBodySegment16DL[];
extern Gfx gTwinmoldBodySegment17DL[];
extern Gfx gTwinmoldBodySegment18DL[];
extern Gfx gTwinmoldBodySegment19DL[];
extern Gfx gTwinmoldBodySegment20DL[];
extern Gfx gTwinmoldBodySegment21DL[];
extern Gfx gTwinmoldBodyTailDL[];
extern StandardLimb gTwinmoldBodyRootLimb;
extern StandardLimb gTwinmoldBodySegment1Limb;
extern StandardLimb gTwinmoldBodySegment2Limb;
extern StandardLimb gTwinmoldBodySegment3Limb;
extern StandardLimb gTwinmoldBodySegment4Limb;
extern StandardLimb gTwinmoldBodySegment5Limb;
extern StandardLimb gTwinmoldBodySegment6Limb;
extern StandardLimb gTwinmoldBodySegment7Limb;
extern StandardLimb gTwinmoldBodySegment8Limb;
extern StandardLimb gTwinmoldBodySegment9Limb;
extern StandardLimb gTwinmoldBodySegment10Limb;
extern StandardLimb gTwinmoldBodySegment11Limb;
extern StandardLimb gTwinmoldBodySegment12Limb;
extern StandardLimb gTwinmoldBodySegment13Limb;
extern StandardLimb gTwinmoldBodySegment14Limb;
extern StandardLimb gTwinmoldBodySegment15Limb;
extern StandardLimb gTwinmoldBodySegment16Limb;
extern StandardLimb gTwinmoldBodySegment17Limb;
extern StandardLimb gTwinmoldBodySegment18Limb;
extern StandardLimb gTwinmoldBodySegment19Limb;
extern StandardLimb gTwinmoldBodySegment20Limb;
extern StandardLimb gTwinmoldBodySegment21Limb;
extern StandardLimb gTwinmoldBodyTailLimb;
extern void* gTwinmoldBodySkelLimbs[];
extern FlexSkeletonHeader gTwinmoldBodySkel;
#endif
