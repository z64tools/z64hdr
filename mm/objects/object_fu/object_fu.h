#ifndef OBJECT_FU_H
#define OBJECT_FU_H 1

typedef enum GuruGuruLimb {
    /* 0x00 */ GURU_GURU_LIMB_NONE,
    /* 0x01 */ GURU_GURU_LIMB_TORSO,
    /* 0x02 */ GURU_GURU_LIMB_LEFT_THIGH,
    /* 0x03 */ GURU_GURU_LIMB_LEFT_LEG,
    /* 0x04 */ GURU_GURU_LIMB_LEFT_FOOT,
    /* 0x05 */ GURU_GURU_LIMB_RIGHT_THIGH,
    /* 0x06 */ GURU_GURU_LIMB_RIGHT_LEG,
    /* 0x07 */ GURU_GURU_LIMB_RIGHT_FOOT,
    /* 0x08 */ GURU_GURU_LIMB_CHEST_AND_MUSIC_BOX_PIPE,
    /* 0x09 */ GURU_GURU_LIMB_LEFT_ARM_AND_MUSIC_BOX,
    /* 0x0A */ GURU_GURU_LIMB_TRIANGLE,
    /* 0x0B */ GURU_GURU_LIMB_RIGHT_SHOULDER,
    /* 0x0C */ GURU_GURU_LIMB_RIGHT,
    /* 0x0D */ GURU_GURU_LIMB_RIGHT_HAND_AND_CRANK,
    /* 0x0E */ GURU_GURU_LIMB_HEAD,
    /* 0x0F */ GURU_GURU_LIMB_HORN,
    /* 0x10 */ GURU_GURU_LIMB_MAX
} GuruGuruLimb;

extern s16 sGuruGuruPlayAndMoveHeadAnimFrameData[];
extern JointIndex sGuruGuruPlayAndMoveHeadAnimJointIndices[];
extern AnimationHeader gGuruGuruPlayAndMoveHeadAnim;
extern s16 sGuruGuruPlayStillAnimFrameData[];
extern JointIndex sGuruGuruPlayStillAnimJointIndices[];
extern AnimationHeader gGuruGuruPlayStillAnim;
extern Vtx object_fuVtx_000B20[];
extern Gfx gGuruGuruHornDL[];
extern Gfx gGuruGuruChestAndMusicBoxPipeDL[];
extern Gfx gGuruGuruHeadDL[];
extern Gfx gGuruGuruRightShoulderDL[];
extern Gfx gGuruGuruRightArmDL[];
extern Gfx gGuruGuruRightHandAndCrankDL[];
extern Gfx gGuruGuruLeftArmAndMusicBoxDL[];
extern Gfx gGuruGuruBlueTriangleDL[];
extern Gfx gGuruGuruTorsoDL[];
extern Gfx gGuruGuruRightThighDL[];
extern Gfx gGuruGuruRightLegDL[];
extern Gfx gGuruGuruRightFootDL[];
extern Gfx gGuruGuruLeftThighDL[];
extern Gfx gGuruGuruLeftLegDL[];
extern Gfx gGuruGuruLeftFootDL[];
extern u64 gGuruGuruClothesTLUT[];
extern u64 gGuruGuruSkinTLUT[];
extern u64 gGuruGuruPantsTex[];
extern u64 gGuruGuruHeadSkinTex[];
extern u64 gGuruGuruMusicBoxTex[];
extern u64 gGuruGuruFingersAndToesTex[];
extern u64 gGuruGuruEarTex[];
extern u64 gGuruGuruUpperHornAndCrankTex[];
extern u64 gGuruGuruShirtTex[];
extern u64 gGuruGuruHornAndPipeTex[];
extern u64 gGuruGuruEyeClosedTex[];
extern u64 gGuruGuruEyeAngryTex[];
extern u64 gGuruGuruMouthOpenTex[];
extern u64 gGuruGuruMouthAngryTex[];
extern u64 gGuruGuruHairTex[];
extern StandardLimb gGuruGuruTorsoLimb;
extern StandardLimb gGuruGuruLeftThighLimb;
extern StandardLimb gGuruGuruLeftLegLimb;
extern StandardLimb gGuruGuruLeftFootLimb;
extern StandardLimb gGuruGuruRightThighLimb;
extern StandardLimb gGuruGuruRightLegLimb;
extern StandardLimb gGuruGuruRightFootLimb;
extern StandardLimb gGuruGuruChestAndMusicBoxPipeLimb;
extern StandardLimb gGuruGuruLeftArmAndMusicBoxLimb;
extern StandardLimb gGuruGuruTriangleLimb;
extern StandardLimb gGuruGuruRightShoulderLimb;
extern StandardLimb gGuruGuruRightArmLimb;
extern StandardLimb gGuruGuruRightHandAndCrankLimb;
extern StandardLimb gGuruGuruHeadLimb;
extern StandardLimb gGuruGuruHornLimb;
extern void* gGuruGuruSkelLimbs[];
extern FlexSkeletonHeader gGuruGuruSkel;
#endif
