#ifndef OBJECT_DNQ_H
#define OBJECT_DNQ_H 1

typedef enum DekuPrincessLimb {
    /* 0x00 */ DEKU_PRINCESS_LIMB_NONE,
    /* 0x01 */ DEKU_PRINCESS_LIMB_ROOT,
    /* 0x02 */ DEKU_PRINCESS_LIMB_DRESS,
    /* 0x03 */ DEKU_PRINCESS_LIMB_DRESS_TRAIN,
    /* 0x04 */ DEKU_PRINCESS_LIMB_TORSO,
    /* 0x05 */ DEKU_PRINCESS_LIMB_LEFT_UPPER_ARM,
    /* 0x06 */ DEKU_PRINCESS_LIMB_LEFT_FOREARM,
    /* 0x07 */ DEKU_PRINCESS_LIMB_LEFT_SLEEVE_END,
    /* 0x08 */ DEKU_PRINCESS_LIMB_RIGHT_UPPER_ARM,
    /* 0x09 */ DEKU_PRINCESS_LIMB_RIGHT_FOREARM,
    /* 0x0A */ DEKU_PRINCESS_LIMB_RIGHT_SLEEVE_END,
    /* 0x0B */ DEKU_PRINCESS_LIMB_NECK,
    /* 0x0C */ DEKU_PRINCESS_LIMB_HEAD,
    /* 0x0D */ DEKU_PRINCESS_LIMB_LEFT_EARRING,
    /* 0x0E */ DEKU_PRINCESS_LIMB_RIGHT_EARRING,
    /* 0x0F */ DEKU_PRINCESS_LIMB_SNOUT,
    /* 0x10 */ DEKU_PRINCESS_LIMB_HAIR_1,
    /* 0x11 */ DEKU_PRINCESS_LIMB_HAIR_2,
    /* 0x12 */ DEKU_PRINCESS_LIMB_HAIR_3,
    /* 0x13 */ DEKU_PRINCESS_LIMB_HAIR_4,
    /* 0x14 */ DEKU_PRINCESS_LIMB_HAIR_5,
    /* 0x15 */ DEKU_PRINCESS_LIMB_HAIR_6,
    /* 0x16 */ DEKU_PRINCESS_LIMB_HAIR_7,
    /* 0x17 */ DEKU_PRINCESS_LIMB_HAIR_8,
    /* 0x18 */ DEKU_PRINCESS_LIMB_HAIR_9,
    /* 0x19 */ DEKU_PRINCESS_LIMB_EYES,
    /* 0x1A */ DEKU_PRINCESS_LIMB_MAX
} DekuPrincessLimb;

extern s16 sDekuPrincessJumpKickAnimFrameData[];
extern JointIndex sDekuPrincessJumpKickAnimJointIndices[];
extern AnimationHeader gDekuPrincessJumpKickAnim;
extern s16 sDekuPrincessJumpAnimFrameData[];
extern JointIndex sDekuPrincessJumpAnimJointIndices[];
extern AnimationHeader gDekuPrincessJumpAnim;
extern s16 sDekuPrincessBounceStartAnimFrameData[];
extern JointIndex sDekuPrincessBounceStartAnimJointIndices[];
extern AnimationHeader gDekuPrincessBounceStartAnim;
extern s16 sDekuPrincessBounceLoopAnimFrameData[];
extern JointIndex sDekuPrincessBounceLoopAnimJointIndices[];
extern AnimationHeader gDekuPrincessBounceLoopAnim;
extern s16 sDekuPrincessHurryAnimFrameData[];
extern JointIndex sDekuPrincessHurryAnimJointIndices[];
extern AnimationHeader gDekuPrincessHurryAnim;
extern s16 sDekuPrincessHurryEndAnimFrameData[];
extern JointIndex sDekuPrincessHurryEndAnimJointIndices[];
extern AnimationHeader gDekuPrincessHurryEndAnim;
extern s16 sDekuPrincessScoldAnimFrameData[];
extern JointIndex sDekuPrincessScoldAnimJointIndices[];
extern AnimationHeader gDekuPrincessScoldAnim;
extern s16 sDekuPrincessGlareStartAnimFrameData[];
extern JointIndex sDekuPrincessGlareStartAnimJointIndices[];
extern AnimationHeader gDekuPrincessGlareStartAnim;
extern s16 sDekuPrincessGlareLoopAnimFrameData[];
extern JointIndex sDekuPrincessGlareLoopAnimJointIndices[];
extern AnimationHeader gDekuPrincessGlareLoopAnim;
extern s16 sDekuPrincessThinkLoopAnimFrameData[];
extern JointIndex sDekuPrincessThinkLoopAnimJointIndices[];
extern AnimationHeader gDekuPrincessThinkLoopAnim;
extern s16 sDekuPrincessArmsTogetherLoopAnimFrameData[];
extern JointIndex sDekuPrincessArmsTogetherLoopAnimJointIndices[];
extern AnimationHeader gDekuPrincessArmsTogetherLoopAnim;
extern s16 sDekuPrincessLaughStartAnimFrameData[];
extern JointIndex sDekuPrincessLaughStartAnimJointIndices[];
extern AnimationHeader gDekuPrincessLaughStartAnim;
extern s16 sDekuPrincessLaughLoopAnimFrameData[];
extern JointIndex sDekuPrincessLaughLoopAnimJointIndices[];
extern AnimationHeader gDekuPrincessLaughLoopAnim;
extern s16 sDekuPrincessTurnAroundAnimFrameData[];
extern JointIndex sDekuPrincessTurnAroundAnimJointIndices[];
extern AnimationHeader gDekuPrincessTurnAroundAnim;
extern s16 sDekuPrincessAngryStartAnimFrameData[];
extern JointIndex sDekuPrincessAngryStartAnimJointIndices[];
extern AnimationHeader gDekuPrincessAngryStartAnim;
extern s16 sDekuPrincessAngryLoopAnimFrameData[];
extern JointIndex sDekuPrincessAngryLoopAnimJointIndices[];
extern AnimationHeader gDekuPrincessAngryLoopAnim;
extern s16 sDekuPrincessBowAnimFrameData[];
extern JointIndex sDekuPrincessBowAnimJointIndices[];
extern AnimationHeader gDekuPrincessBowAnim;
extern s16 sDekuPrincessRunAnimFrameData[];
extern JointIndex sDekuPrincessRunAnimJointIndices[];
extern AnimationHeader gDekuPrincessRunAnim;
extern s16 sDekuPrincessIdleAnimFrameData[];
extern JointIndex sDekuPrincessIdleAnimJointIndices[];
extern AnimationHeader gDekuPrincessIdleAnim;
extern s16 sDekuPrincessThinkStartAnimFrameData[];
extern JointIndex sDekuPrincessThinkStartAnimJointIndices[];
extern AnimationHeader gDekuPrincessThinkStartAnim;
extern s16 sDekuPrincessArmsTogetherStartAnimFrameData[];
extern JointIndex sDekuPrincessArmsTogetherStartAnimJointIndices[];
extern AnimationHeader gDekuPrincessArmsTogetherStartAnim;
extern Vtx object_dnqVtx_00BAF0[];
extern Gfx gDekuPrincessHeadDL[];
extern Gfx gDekuPrincessEyesDL[];
extern Gfx gDekuPrincessHair9DL[];
extern Gfx gDekuPrincessHair8DL[];
extern Gfx gDekuPrincessHair7DL[];
extern Gfx gDekuPrincessHair6DL[];
extern Gfx gDekuPrincessHair5DL[];
extern Gfx gDekuPrincessHair4DL[];
extern Gfx gDekuPrincessHair3DL[];
extern Gfx gDekuPrincessHair2DL[];
extern Gfx gDekuPrincessHair1DL[];
extern Gfx gDekuPrincessSnoutDL[];
extern Gfx gDekuPrincessRightEarringDL[];
extern Gfx gDekuPrincessLeftEarringDL[];
extern Gfx gDekuPrincessNeckDL[];
extern Gfx gDekuPrincessTorsoDL[];
extern Gfx gDekuPrincessRightSleeveEndDL[];
extern Gfx gDekuPrincessRightForearmDL[];
extern Gfx gDekuPrincessRightUpperArmDL[];
extern Gfx gDekuPrincessLeftSleeveEndDL[];
extern Gfx gDekuPrincessLeftForearmDL[];
extern Gfx gDekuPrincessLeftUpperArmDL[];
extern Gfx gDekuPrincessDressDL[];
extern Gfx gDekuPrincessDressTrainDL[];
extern u64 gDekuPrincessPetalTex[];
extern u64 gDekuPrincessHairLeafTex[];
extern u64 gDekuPrincessHeadTex[];
extern u64 gDekuPrincessMouthTex[];
extern u64 gDekuPrincessFaceTex[];
extern u64 gDekuPrincessDressTex[];
extern u64 gDekuPrincessSleeveTex[];
extern u64 gDekuPrincessEyeOpenTex[];
extern u64 gDekuPrincessEyeHalfTex[];
extern u64 gDekuPrincessEyeClosedTex[];
extern u64 gDekuPrincessEyeAngryTex[];
extern StandardLimb gDekuPrincessRootLimb;
extern StandardLimb gDekuPrincessDressLimb;
extern StandardLimb gDekuPrincessDressTrainLimb;
extern StandardLimb gDekuPrincessTorsoLimb;
extern StandardLimb gDekuPrincessLeftUpperArmLimb;
extern StandardLimb gDekuPrincessLeftForearmLimb;
extern StandardLimb gDekuPrincessLeftSleeveEndLimb;
extern StandardLimb gDekuPrincessRightUpperArmLimb;
extern StandardLimb gDekuPrincessRightForearmLimb;
extern StandardLimb gDekuPrincessRightSleeveEndLimb;
extern StandardLimb gDekuPrincessNeckLimb;
extern StandardLimb gDekuPrincessHeadLimb;
extern StandardLimb gDekuPrincessLeftEarringLimb;
extern StandardLimb gDekuPrincessRightEarringLimb;
extern StandardLimb gDekuPrincessSnoutLimb;
extern StandardLimb gDekuPrincessHair1Limb;
extern StandardLimb gDekuPrincessHair2Limb;
extern StandardLimb gDekuPrincessHair3Limb;
extern StandardLimb gDekuPrincessHair4Limb;
extern StandardLimb gDekuPrincessHair5Limb;
extern StandardLimb gDekuPrincessHair6Limb;
extern StandardLimb gDekuPrincessHair7Limb;
extern StandardLimb gDekuPrincessHair8Limb;
extern StandardLimb gDekuPrincessHair9Limb;
extern StandardLimb gDekuPrincessEyesLimb;
extern void* gDekuPrincessSkelLimbs[];
extern FlexSkeletonHeader gDekuPrincessSkel;
extern s16 sDekuPrincessWalkAnimFrameData[];
extern JointIndex sDekuPrincessWalkAnimJointIndices[];
extern AnimationHeader gDekuPrincessWalkAnim;
extern s16 sDekuPrincessGreetingAnimFrameData[];
extern JointIndex sDekuPrincessGreetingAnimJointIndices[];
extern AnimationHeader gDekuPrincessGreetingAnim;
#endif
