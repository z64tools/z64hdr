#ifndef OBJECT_AN1_H
#define OBJECT_AN1_H 1

typedef enum Anju1Limb {
    /* 0x00 */ ANJU1_LIMB_NONE,
    /* 0x01 */ ANJU1_LIMB_ROOT,
    /* 0x02 */ ANJU1_LIMB_TORSO,
    /* 0x03 */ ANJU1_LIMB_LEFT_UPPER_ARM,
    /* 0x04 */ ANJU1_LIMB_LEFT_FOREARM,
    /* 0x05 */ ANJU1_LIMB_LEFT_HAND,
    /* 0x06 */ ANJU1_LIMB_RIGHT_UPPER_ARM,
    /* 0x07 */ ANJU1_LIMB_RIGHT_FOREARM,
    /* 0x08 */ ANJU1_LIMB_RIGHT_HAND,
    /* 0x09 */ ANJU1_LIMB_HEAD,
    /* 0x0A */ ANJU1_LIMB_PELVIS,
    /* 0x0B */ ANJU1_LIMB_RIGHT_THIGH,
    /* 0x0C */ ANJU1_LIMB_RIGHT_SHIN,
    /* 0x0D */ ANJU1_LIMB_RIGHT_FOOT,
    /* 0x0E */ ANJU1_LIMB_LEFT_THIGH,
    /* 0x0F */ ANJU1_LIMB_LEFT_SHIN,
    /* 0x10 */ ANJU1_LIMB_LEFT_FOOT,
    /* 0x11 */ ANJU1_LIMB_SKIRT1,
    /* 0x12 */ ANJU1_LIMB_SKIRT2,
    /* 0x13 */ ANJU1_LIMB_SKIRT3,
    /* 0x14 */ ANJU1_LIMB_SKIRT4,
    /* 0x15 */ ANJU1_LIMB_MAX
} Anju1Limb;

extern s16 sAnju1TasteAnimFrameData[];
extern JointIndex sAnju1TasteAnimJointIndices[];
extern AnimationHeader gAnju1TasteAnim;
extern s16 sAnju1TasteEndAnimFrameData[];
extern JointIndex sAnju1TasteEndAnimJointIndices[];
extern AnimationHeader gAnju1TasteEndAnim;
extern s16 sAnju1LookUpRelievedAnimFrameData[];
extern JointIndex sAnju1LookUpRelievedAnimJointIndices[];
extern AnimationHeader gAnju1LookUpRelievedAnim;
extern s16 sAnju1SurprisedAnimFrameData[];
extern JointIndex sAnju1SurprisedAnimJointIndices[];
extern AnimationHeader gAnju1SurprisedAnim;
extern s16 sAnju1WaitWithTrayAnimFrameData[];
extern JointIndex sAnju1WaitWithTrayAnimJointIndices[];
extern AnimationHeader gAnju1WaitWithTrayAnim;
extern s16 sAnju1WalkWithTrayAnimFrameData[];
extern JointIndex sAnju1WalkWithTrayAnimJointIndices[];
extern AnimationHeader gAnju1WalkWithTrayAnim;
extern s16 sAnju1BowAnimFrameData[];
extern JointIndex sAnju1BowAnimJointIndices[];
extern AnimationHeader gAnju1BowAnim;
extern s16 sAnju1CookAnimFrameData[];
extern JointIndex sAnju1CookAnimJointIndices[];
extern AnimationHeader gAnju1CookAnim;
extern s16 sAnju1SitAnimFrameData[];
extern JointIndex sAnju1SitAnimJointIndices[];
extern AnimationHeader gAnju1SitAnim;
extern s16 sAnju1SittingInDisbeliefAnimFrameData[];
extern JointIndex sAnju1SittingInDisbeliefAnimJointIndices[];
extern AnimationHeader gAnju1SittingInDisbeliefAnim;
extern s16 sAnju1IdleAnimFrameData[];
extern JointIndex sAnju1IdleAnimJointIndices[];
extern AnimationHeader gAnju1IdleAnim;
extern Vtx object_an1Vtx_008B80[];
extern Gfx gAnju1Skirt4DL[];
extern Gfx gAnju1Skirt3DL[];
extern Gfx gAnju1Skirt2DL[];
extern Gfx gAnju1Skirt1DL[];
extern Gfx gAnju1LeftFootDL[];
extern Gfx gAnju1LeftShinDL[];
extern Gfx gAnju1LeftThighDL[];
extern Gfx gAnju1RightFootDL[];
extern Gfx gAnju1RightShinDL[];
extern Gfx gAnju1RightThighDL[];
extern Gfx gAnju1PelvisDL[];
extern Gfx gAnju1HeadDL[];
extern Gfx gAnju1RightHandDL[];
extern Gfx gAnju1RightForearmDL[];
extern Gfx gAnju1RightUpperArmDL[];
extern Gfx gAnju1LeftHandDL[];
extern Gfx gAnju1LeftForearmDL[];
extern Gfx gAnju1LeftUpperArmDL[];
extern Gfx gAnju1TorsoDL[];
extern u64 gAnju1TLUT[];
extern u64 gAnju1EyesTLUT[];
extern u64 gAnju1MouthTLUT[];
extern u64 gAnju1SkinTex[];
extern u64 gAnju1HairTex[];
extern u64 gAnju1EyeOpenTex[];
extern u64 gAnju1EarTex[];
extern u64 gAnju1MouthClosedTex[];
extern u64 gAnju1ShirtButtonTex[];
extern u64 gAnju1HandTex[];
extern u64 gAnju1SkirtTex[];
extern u64 gAnju1ShirtTex[];
extern u64 gAnju1SleeveTex[];
extern u64 gAnju1EyeHalfTex[];
extern u64 gAnju1EyeClosedTex[];
extern u64 gAnju1MouthHappyTex[];
extern u64 gAnju1EyeSadTex[];
extern u64 gAnju1EyeComfortTex[];
extern u64 gAnju1MouthOpenTex[];
extern u64 gAnju1EyeRelievedClosedTex[];
extern Vtx object_an1Vtx_0107A0[];
extern Gfx gAnju1EmptyDL[];
extern Gfx gAnju1FoodTrayDL[];
extern u64 gAnju1PlateTex[];
extern u64 gAnju1Food1Tex[];
extern u64 gAnju1Food2Tex[];
extern u64 gAnju1CircleTex[];
extern u64 gAnju1Steam1Tex[];
extern u64 gAnju1Steam2Tex[];
extern Vtx object_an1Vtx_0123B8[];
extern Gfx gAnju1ChopsticksDL[];
extern StandardLimb gAnju1RootLimb;
extern StandardLimb gAnju1TorsoLimb;
extern StandardLimb gAnju1LeftUpperArmLimb;
extern StandardLimb gAnju1LeftForearmLimb;
extern StandardLimb gAnju1LeftHandLimb;
extern StandardLimb gAnju1RightUpperArmLimb;
extern StandardLimb gAnju1RightForearmLimb;
extern StandardLimb gAnju1RightHandLimb;
extern StandardLimb gAnju1HeadLimb;
extern StandardLimb gAnju1PelvisLimb;
extern StandardLimb gAnju1RightThighLimb;
extern StandardLimb gAnju1RightShinLimb;
extern StandardLimb gAnju1RightFootLimb;
extern StandardLimb gAnju1LeftThighLimb;
extern StandardLimb gAnju1LeftShinLimb;
extern StandardLimb gAnju1LeftFootLimb;
extern StandardLimb gAnju1Skirt1Limb;
extern StandardLimb gAnju1Skirt2Limb;
extern StandardLimb gAnju1Skirt3Limb;
extern StandardLimb gAnju1Skirt4Limb;
extern void* gAnju1SkelLimbs[];
extern FlexSkeletonHeader gAnju1Skel;
extern s16 sAnju1WalkAnimFrameData[];
extern JointIndex sAnju1WalkAnimJointIndices[];
extern AnimationHeader gAnju1WalkAnim;
extern s16 sAnju1HoldHandsAnimFrameData[];
extern JointIndex sAnju1HoldHandsAnimJointIndices[];
extern AnimationHeader gAnju1HoldHandsAnim;
#endif
