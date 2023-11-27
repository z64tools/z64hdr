#ifndef OBJECT_ZOS_H
#define OBJECT_ZOS_H 1

typedef enum EvanLimb {
    /* 0x00 */ EVAN_LIMB_NONE,
    /* 0x01 */ EVAN_LIMB_PELVIS,
    /* 0x02 */ EVAN_LIMB_LEFT_THIGH,
    /* 0x03 */ EVAN_LIMB_LEFT_SHIN,
    /* 0x04 */ EVAN_LIMB_LEFT_FOOT,
    /* 0x05 */ EVAN_LIMB_RIGHT_THIGH,
    /* 0x06 */ EVAN_LIMB_RIGHT_SHIN,
    /* 0x07 */ EVAN_LIMB_RIGHT_FOOT,
    /* 0x08 */ EVAN_LIMB_TORSO,
    /* 0x09 */ EVAN_LIMB_HEAD,
    /* 0x0A */ EVAN_LIMB_UPPER_HEAD_FIN,
    /* 0x0B */ EVAN_LIMB_LOWER_HEAD_FIN,
    /* 0x0C */ EVAN_LIMB_LEFT_UPPER_ARM,
    /* 0x0D */ EVAN_LIMB_LEFT_FOREARM,
    /* 0x0E */ EVAN_LIMB_LEFT_HAND,
    /* 0x0F */ EVAN_LIMB_RIGHT_UPPER_ARM,
    /* 0x10 */ EVAN_LIMB_RIGHT_FOREARM,
    /* 0x11 */ EVAN_LIMB_RIGHT_HAND,
    /* 0x12 */ EVAN_LIMB_MAX
} EvanLimb;

extern s16 sEvanSlowPlayAnimFrameData[];
extern JointIndex sEvanSlowPlayAnimJointIndices[];
extern AnimationHeader gEvanSlowPlayAnim;
extern s16 sEvanInspiredAnimFrameData[];
extern JointIndex sEvanInspiredAnimJointIndices[];
extern AnimationHeader gEvanInspiredAnim;
extern s16 sEvanPlayRightAnimFrameData[];
extern JointIndex sEvanPlayRightAnimJointIndices[];
extern AnimationHeader gEvanPlayRightAnim;
extern s16 sEvanPlayLeftAnimFrameData[];
extern JointIndex sEvanPlayLeftAnimJointIndices[];
extern AnimationHeader gEvanPlayLeftAnim;
extern s16 sEvanTalkFootTapAnimFrameData[];
extern JointIndex sEvanTalkFootTapAnimJointIndices[];
extern AnimationHeader gEvanTalkFootTapAnim;
extern s16 sEvanTalkLookDownAnimFrameData[];
extern JointIndex sEvanTalkLookDownAnimJointIndices[];
extern AnimationHeader gEvanTalkLookDownAnim;
extern s16 sEvanTalkArmsOutAnimFrameData[];
extern JointIndex sEvanTalkArmsOutAnimJointIndices[];
extern AnimationHeader gEvanTalkArmsOutAnim;
extern s16 sEvanTalkHandsOnHipsAnimFrameData[];
extern JointIndex sEvanTalkHandsOnHipsAnimJointIndices[];
extern AnimationHeader gEvanTalkHandsOnHipsAnim;
extern s16 sEvanLeanOnKeyboardAnimFrameData[];
extern JointIndex sEvanLeanOnKeyboardAnimJointIndices[];
extern AnimationHeader gEvanLeanOnKeyboardAnim;
extern Vtx object_zosVtx_00A180[];
extern Gfx gEvanPelvisDL[];
extern Gfx gEvanTorsoDL[];
extern Gfx gEvanRightUpperArmDL[];
extern Gfx gEvanRightForearmDL[];
extern Gfx gEvanRightHandDL[];
extern Gfx gEvanLeftUpperArmDL[];
extern Gfx gEvanLeftForearmDL[];
extern Gfx gEvanLeftHandDL[];
extern Gfx gEvanHeadDL[];
extern Gfx gEvanUpperHeadFinDL[];
extern Gfx gEvanLowerHeadFinDL[];
extern Gfx gEvanRightThighDL[];
extern Gfx gEvanRightShinDL[];
extern Gfx gEvanRightFootDL[];
extern Gfx gEvanLeftThighDL[];
extern Gfx gEvanLeftShinDL[];
extern Gfx gEvanLeftFootDL[];
extern u64 gEvanFingersTLUT[];
extern u64 gEvanSpottedSkinTex[];
extern u64 gEvanFingersTex[];
extern u64 gEvanMouthEdgeTex[];
extern u64 gEvanMouthAndFinsTex[];
extern u64 gEvanSkinTex[];
extern u64 gEvanHeadphoneClamTex[];
extern u64 gEvanHeadphoneBoneTex[];
extern u64 gEvanArmbandTex[];
extern u64 gEvanEyeOpenTex[];
extern u64 gEvanEyeHalfTex[];
extern u64 gEvanEyeClosedTex[];
extern Vtx object_zosVtx_012118[];
extern Gfx gEvanKeyboardDL[];
extern Gfx gEvanUnknownWhiteTriangleDL[];
extern u64 gEvanKeyboardRibKeysTex[];
extern u64 gEvanKeyboardSkullTex[];
extern u64 gEvanKeyboardBoneTex[];
extern u64 gEvanKeyboardOtherKeysTex[];
extern StandardLimb gEvanPelvisLimb;
extern StandardLimb gEvanLeftThighLimb;
extern StandardLimb gEvanLeftShinLimb;
extern StandardLimb gEvanLeftFootLimb;
extern StandardLimb gEvanRightThighLimb;
extern StandardLimb gEvanRightShinLimb;
extern StandardLimb gEvanRightFootLimb;
extern StandardLimb gEvanTorsoLimb;
extern StandardLimb gEvanHeadLimb;
extern StandardLimb gEvanUpperHeadFinLimb;
extern StandardLimb gEvanLowerHeadFinLimb;
extern StandardLimb gEvanLeftUpperArmLimb;
extern StandardLimb gEvanLeftForearmLimb;
extern StandardLimb gEvanLeftHandLimb;
extern StandardLimb gEvanRightUpperArmLimb;
extern StandardLimb gEvanRightForearmLimb;
extern StandardLimb gEvanRightHandLimb;
extern void* gEvanSkelLimbs[];
extern FlexSkeletonHeader gEvanSkel;
extern s16 sEvanLeanOnKeyboardAndSighAnimFrameData[];
extern JointIndex sEvanLeanOnKeyboardAndSighAnimJointIndices[];
extern AnimationHeader gEvanLeanOnKeyboardAndSighAnim;
extern s16 sEvanHandsOnHipsAnimFrameData[];
extern JointIndex sEvanHandsOnHipsAnimJointIndices[];
extern AnimationHeader gEvanHandsOnHipsAnim;
#endif
