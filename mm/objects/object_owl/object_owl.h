#ifndef OBJECT_OWL_H
#define OBJECT_OWL_H 1

typedef enum OwlFlyingLimb {
    /* 0x00 */ OWL_FLYING_LIMB_NONE,
    /* 0x01 */ OWL_FLYING_LIMB_LOWER_BODY,
    /* 0x02 */ OWL_FLYING_LIMB_UPPER_BODY,
    /* 0x03 */ OWL_FLYING_LIMB_HEAD,
    /* 0x04 */ OWL_FLYING_LIMB_RIGHT_EYEBROW,
    /* 0x05 */ OWL_FLYING_LIMB_LEFT_EYEBROW,
    /* 0x06 */ OWL_FLYING_LIMB_LOWER_LEFT_WING,
    /* 0x07 */ OWL_FLYING_LIMB_MIDDLE_LEFT_WING_1,
    /* 0x08 */ OWL_FLYING_LIMB_MIDDLE_LEFT_WING_2,
    /* 0x09 */ OWL_FLYING_LIMB_UPPER_LEFT_WING,
    /* 0x0A */ OWL_FLYING_LIMB_LOWER_RIGHT_WING,
    /* 0x0B */ OWL_FLYING_LIMB_MIDDLE_RIGHT_WING_1,
    /* 0x0C */ OWL_FLYING_LIMB_MIDDLE_RIGHT_WING_2,
    /* 0x0D */ OWL_FLYING_LIMB_UPPER_RIGHT_WING,
    /* 0x0E */ OWL_FLYING_LIMB_UPPER_RIGHT_LEG,
    /* 0x0F */ OWL_FLYING_LIMB_LOWER_RIGHT_LEG,
    /* 0x10 */ OWL_FLYING_LIMB_RIGHT_TALON,
    /* 0x11 */ OWL_FLYING_LIMB_UPPER_LEFT_LEG,
    /* 0x12 */ OWL_FLYING_LIMB_LOWER_LEFT_LEG,
    /* 0x13 */ OWL_FLYING_LIMB_LEFT_TALON,
    /* 0x14 */ OWL_FLYING_LIMB_TAIL,
    /* 0x15 */ OWL_FLYING_LIMB_MAX
} OwlFlyingLimb;

typedef enum OwlPerchingLimb {
    /* 0x00 */ OWL_PERCHING_LIMB_NONE,
    /* 0x01 */ OWL_PERCHING_LIMB_ROOT,
    /* 0x02 */ OWL_PERCHING_LIMB_UPPER_BODY,
    /* 0x03 */ OWL_PERCHING_LIMB_HEAD,
    /* 0x04 */ OWL_PERCHING_LIMB_RIGHT_EYEBROW,
    /* 0x05 */ OWL_PERCHING_LIMB_LEFT_EYEBROW,
    /* 0x06 */ OWL_PERCHING_LIMB_LOWER_BODY,
    /* 0x07 */ OWL_PERCHING_LIMB_RIGHT_WING,
    /* 0x08 */ OWL_PERCHING_LIMB_LEFT_WING,
    /* 0x09 */ OWL_PERCHING_LIMB_UPPER_LEFT_LEG,
    /* 0x0A */ OWL_PERCHING_LIMB_LOWER_LEFT_LEG,
    /* 0x0B */ OWL_PERCHING_LIMB_LEFT_TALON,
    /* 0x0C */ OWL_PERCHING_LIMB_UPPER_RIGHT_LEG,
    /* 0x0D */ OWL_PERCHING_LIMB_LOWER_RIGHT_LEG,
    /* 0x0E */ OWL_PERCHING_LIMB_RIGHT_TALON,
    /* 0x0F */ OWL_PERCHING_LIMB_TAIL,
    /* 0x10 */ OWL_PERCHING_LIMB_MAX
} OwlPerchingLimb;

extern s16 sOwlTakeoffAnimFrameData[];
extern JointIndex sOwlTakeoffAnimJointIndices[];
extern AnimationHeader gOwlTakeoffAnim;
extern Vtx object_owlVtx_001180[];
extern Gfx gOwlFeatherDL[];
extern u64 gOwlFeatherTex[];
extern s16 sOwlFlyAnimFrameData[];
extern JointIndex sOwlFlyAnimJointIndices[];
extern AnimationHeader gOwlFlyAnim;
extern Vtx object_owlVtx_001AF0[];
extern Gfx gOwlFlyingLowerBodyDL[];
extern Gfx gOwlFlyingUpperBodyDL[];
extern Gfx gOwlFlyingHeadDL[];
extern Gfx gOwlFlyingRightEyebrowDL[];
extern Gfx gOwlFlyingLeftEyebrowDL[];
extern Gfx gOwlFlyingUpperRightLegDL[];
extern Gfx gOwlFlyingLowerRightLegDL[];
extern Gfx gOwlFlyingRightTalonDL[];
extern Gfx gOwlFlyingLowerLeftWingDL[];
extern Gfx gOwlFlyingMiddleLeftWing1DL[];
extern Gfx gOwlFlyingMiddleLeftWing2DL[];
extern Gfx gOwlFlyingUpperLeftWingDL[];
extern Gfx gOwlFlyingLowerRightWingDL[];
extern Gfx gOwlFlyingMiddleRightWing1DL[];
extern Gfx gOwlFlyingMiddleRightWing2DL[];
extern Gfx gOwlFlyingUpperRightWingDL[];
extern Gfx gOwlFlyingTailDL[];
extern Gfx gOwlFlyingUpperLeftLegDL[];
extern Gfx gOwlFlyingLowerLeftLegDL[];
extern Gfx gOwlFlyingLeftTalonDL[];
extern u64 gOwlPerchingEyeTLUT[];
extern u64 gOwlFlyingEyeTLUT[];
extern u64 gOwlChinMarking1Tex[];
extern u64 gOwlForeheadMarkingTex[];
extern u64 gOwlBeakTex[];
extern u64 gOwlEyeOpenTex[];
extern u64 gOwlEyeHalfTex[];
extern u64 gOwlEyeClosedTex[];
extern u64 gOwlChinMarking2Tex[];
extern u64 gOwlFeathersTex[];
extern u64 gOwlEyebrowTex[];
extern u64 gOwlFlightFeathers1Tex[];
extern u64 gOwlFlightFeathers2Tex[];
extern StandardLimb gOwlFlyingLowerBodyLimb;
extern StandardLimb gOwlFlyingUpperBodyLimb;
extern StandardLimb gOwlFlyingHeadLimb;
extern StandardLimb gOwlFlyingRightEyebrowLimb;
extern StandardLimb gOwlFlyingLeftEyebrowLimb;
extern StandardLimb gOwlFlyingLowerLeftWingLimb;
extern StandardLimb gOwlFlyingMiddleLeftWing1Limb;
extern StandardLimb gOwlFlyingMiddleLeftWing2Limb;
extern StandardLimb gOwlFlyingUpperLeftWingLimb;
extern StandardLimb gOwlFlyingLowerRightWingLimb;
extern StandardLimb gOwlFlyingMiddleRightWing1Limb;
extern StandardLimb gOwlFlyingMiddleRightWing2Limb;
extern StandardLimb gOwlFlyingUpperRightWingLimb;
extern StandardLimb gOwlFlyingUpperRightLegLimb;
extern StandardLimb gOwlFlyingLowerRightLegLimb;
extern StandardLimb gOwlFlyingRightTalonLimb;
extern StandardLimb gOwlFlyingUpperLeftLegLimb;
extern StandardLimb gOwlFlyingLowerLeftLegLimb;
extern StandardLimb gOwlFlyingLeftTalonLimb;
extern StandardLimb gOwlFlyingTailLimb;
extern void* gOwlFlyingSkelLimbs[];
extern FlexSkeletonHeader gOwlFlyingSkel;
extern s16 sOwlGlideAnimFrameData[];
extern JointIndex sOwlGlideAnimJointIndices[];
extern AnimationHeader gOwlGlideAnim;
extern s16 sOwlUnfoldWingsAnimFrameData[];
extern JointIndex sOwlUnfoldWingsAnimJointIndices[];
extern AnimationHeader gOwlUnfoldWingsAnim;
extern s16 sOwlPerchAnimFrameData[];
extern JointIndex sOwlPerchAnimJointIndices[];
extern AnimationHeader gOwlPerchAnim;
extern Vtx object_owlVtx_00CDC0[];
extern Gfx gOwlPerchingLeftWingDL[];
extern Gfx gOwlPerchingRightWingDL[];
extern Gfx gOwlPerchingTailDL[];
extern Gfx gOwlPerchingLowerBodyDL[];
extern Gfx gOwlPerchingUpperBodyDL[];
extern Gfx gOwlPerchingHeadDL[];
extern Gfx gOwlPerchingRightEyebrowDL[];
extern Gfx gOwlPerchingLeftEyebrowDL[];
extern Gfx gOwlPerchingUpperLeftLegDL[];
extern Gfx gOwlPerchingLowerLeftLegDL[];
extern Gfx gOwlPerchingLeftTalonDL[];
extern Gfx gOwlPerchingUpperRightLegDL[];
extern Gfx gOwlPerchingLowerRightLegDL[];
extern Gfx gOwlPerchingRightTalonDL[];
extern StandardLimb gOwlPerchingRootLimb;
extern StandardLimb gOwlPerchingUpperBodyLimb;
extern StandardLimb gOwlPerchingHeadLimb;
extern StandardLimb gOwlPerchingRightEyebrowLimb;
extern StandardLimb gOwlPerchingLeftEyebrowLimb;
extern StandardLimb gOwlPerchingLowerBodyLimb;
extern StandardLimb gOwlPerchingRightWingLimb;
extern StandardLimb gOwlPerchingLeftWingLimb;
extern StandardLimb gOwlPerchingUpperLeftLegLimb;
extern StandardLimb gOwlPerchingLowerLeftLegLimb;
extern StandardLimb gOwlPerchingLeftTalonLimb;
extern StandardLimb gOwlPerchingUpperRightLegLimb;
extern StandardLimb gOwlPerchingLowerRightLegLimb;
extern StandardLimb gOwlPerchingRightTalonLimb;
extern StandardLimb gOwlPerchingTailLimb;
extern void* gOwlPerchingSkelLimbs[];
extern FlexSkeletonHeader gOwlPerchingSkel;
#endif
