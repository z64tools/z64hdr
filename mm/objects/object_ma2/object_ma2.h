#ifndef OBJECT_MA2_H
#define OBJECT_MA2_H 1

typedef enum CremiaLimb {
    /* 0x00 */ CREMIA_LIMB_NONE,
    /* 0x01 */ CREMIA_LIMB_ROOT,
    /* 0x02 */ CREMIA_LIMB_TORSO,
    /* 0x03 */ CREMIA_LIMB_LEFT_UPPER_ARM,
    /* 0x04 */ CREMIA_LIMB_LEFT_FOREARM,
    /* 0x05 */ CREMIA_LIMB_LEFT_HAND,
    /* 0x06 */ CREMIA_LIMB_RIGHT_UPPER_ARM,
    /* 0x07 */ CREMIA_LIMB_RIGHT_FOREARM,
    /* 0x08 */ CREMIA_LIMB_RIGHT_HAND,
    /* 0x09 */ CREMIA_LIMB_HEAD,
    /* 0x0A */ CREMIA_LIMB_HAIR_END,
    /* 0x0B */ CREMIA_LIMB_PELVIS,
    /* 0x0C */ CREMIA_LIMB_LEFT_THIGH,
    /* 0x0D */ CREMIA_LIMB_LEFT_SHIN,
    /* 0x0E */ CREMIA_LIMB_LEFT_FOOT,
    /* 0x0F */ CREMIA_LIMB_RIGHT_THIGH,
    /* 0x10 */ CREMIA_LIMB_RIGHT_SHIN,
    /* 0x11 */ CREMIA_LIMB_RIGHT_FOOT,
    /* 0x12 */ CREMIA_LIMB_DRESS_1,
    /* 0x13 */ CREMIA_LIMB_DRESS_2,
    /* 0x14 */ CREMIA_LIMB_DRESS_3,
    /* 0x15 */ CREMIA_LIMB_DRESS_4,
    /* 0x16 */ CREMIA_LIMB_MAX
} CremiaLimb;

extern s16 sCremiaSpreadArmsLoopAnimFrameData[];
extern JointIndex sCremiaSpreadArmsLoopAnimJointIndices[];
extern AnimationHeader gCremiaSpreadArmsLoopAnim;
extern s16 sCremiaHugStartAnimFrameData[];
extern JointIndex sCremiaHugStartAnimJointIndices[];
extern AnimationHeader gCremiaHugStartAnim;
extern s16 sCremiaHugLoopAnimFrameData[];
extern JointIndex sCremiaHugLoopAnimJointIndices[];
extern AnimationHeader gCremiaHugLoopAnim;
extern s16 sCremiaSittingLookDownAnimFrameData[];
extern JointIndex sCremiaSittingLookDownAnimJointIndices[];
extern AnimationHeader gCremiaSittingLookDownAnim;
extern s16 sCremiaClapAnimFrameData[];
extern JointIndex sCremiaClapAnimJointIndices[];
extern AnimationHeader gCremiaClapAnim;
extern s16 sCremiaThinkAnimFrameData[];
extern JointIndex sCremiaThinkAnimJointIndices[];
extern AnimationHeader gCremiaThinkAnim;
extern Vtx object_ma2Vtx_005330[];
extern Gfx gCremiaWoodenBoxDL[];
extern u64 gCremiaWoodenBoxTex[];
extern s16 sCremiaSittingAnimFrameData[];
extern JointIndex sCremiaSittingAnimJointIndices[];
extern AnimationHeader gCremiaSittingAnim;
extern s16 sCremiaSittingPetCowAnimFrameData[];
extern JointIndex sCremiaSittingPetCowAnimJointIndices[];
extern AnimationHeader gCremiaSittingPetCowAnim;
extern s16 sCremiaPetCowAnimFrameData[];
extern JointIndex sCremiaPetCowAnimJointIndices[];
extern AnimationHeader gCremiaPetCowAnim;
extern s16 sCremiaIdleAnimFrameData[];
extern JointIndex sCremiaIdleAnimJointIndices[];
extern AnimationHeader gCremiaIdleAnim;
extern s16 sCremiaSpreadArmsStartAnimFrameData[];
extern JointIndex sCremiaSpreadArmsStartAnimJointIndices[];
extern AnimationHeader gCremiaSpreadArmsStartAnim;
extern Vtx object_ma2Vtx_00AF90[];
extern Gfx gCremiaDress1DL[];
extern Gfx gCremiaDress2DL[];
extern Gfx gCremiaDress3DL[];
extern Gfx gCremiaDress4DL[];
extern Gfx gCremiaPelvisDL[];
extern Gfx gCremiaRightThighDL[];
extern Gfx gCremiaRightShinDL[];
extern Gfx gCremiaRightFootDL[];
extern Gfx gCremiaLeftThighDL[];
extern Gfx gCremiaLeftShinDL[];
extern Gfx gCremiaLeftFootDL[];
extern Gfx gCremiaTorsoDL[];
extern Gfx gCremiaHeadDL[];
extern Gfx gCremiaHairEndDL[];
extern Gfx gCremiaRightUpperArmDL[];
extern Gfx gCremiaRightForearmDL[];
extern Gfx gCremiaRightHandDL[];
extern Gfx gCremiaLeftUpperArmDL[];
extern Gfx gCremiaLeftForearmDL[];
extern Gfx gCremiaLeftHandDL[];
extern u64 gCremiaTLUT[];
extern u64 gCremiaSkinArmsTex[];
extern u64 gCremiaSkinHeadTex[];
extern u64 gCremiaBootTex[];
extern u64 gCremiaEarTex[];
extern u64 gCremiaHairTex[];
extern u64 gCremiaShawlTex[];
extern u64 gCremiaBroochTex[];
extern u64 gCremiaShirtTex[];
extern u64 gCremiaSleevesTex[];
extern u64 gCremiaBeltTex[];
extern u64 gCremiaDressPatternTex[];
extern u64 gCremiaDressTex[];
extern u64 gCremiaApronTex[];
extern u64 gCremiaHandTex[];
extern u64 gCremiaEyeOpenTex[];
extern u64 gCremiaEyeHalfTex[];
extern u64 gCremiaEyeClosedTex[];
extern u64 gCremiaEyeHappyTex[];
extern u64 gCremiaEyeAngryTex[];
extern u64 gCremiaEyeSadTex[];
extern u64 gCremiaMouthNormalTex[];
extern u64 gCremiaMouthSlightSmileTex[];
extern u64 gCremiaMouthFrownTex[];
extern u64 gCremiaMouthHangingOpenTex[];
extern StandardLimb gCremiaRootLimb;
extern StandardLimb gCremiaTorsoLimb;
extern StandardLimb gCremiaLeftUpperArmLimb;
extern StandardLimb gCremiaLeftForearmLimb;
extern StandardLimb gCremiaLeftHandLimb;
extern StandardLimb gCremiaRightUpperArmLimb;
extern StandardLimb gCremiaRightForearmLimb;
extern StandardLimb gCremiaRightHandLimb;
extern StandardLimb gCremiaHeadLimb;
extern StandardLimb gCremiaHairEndLimb;
extern StandardLimb gCremiaPelvisLimb;
extern StandardLimb gCremiaLeftThighLimb;
extern StandardLimb gCremiaLeftShinLimb;
extern StandardLimb gCremiaLeftFootLimb;
extern StandardLimb gCremiaRightThighLimb;
extern StandardLimb gCremiaRightShinLimb;
extern StandardLimb gCremiaRightFootLimb;
extern StandardLimb gCremiaDress1Limb;
extern StandardLimb gCremiaDress2Limb;
extern StandardLimb gCremiaDress3Limb;
extern StandardLimb gCremiaDress4Limb;
extern void* gCremiaSkelLimbs[];
extern FlexSkeletonHeader gCremiaSkel;
extern s16 sCremiaWalkAnimFrameData[];
extern JointIndex sCremiaWalkAnimJointIndices[];
extern AnimationHeader gCremiaWalkAnim;
#endif
