#ifndef OBJECT_AOB_H
#define OBJECT_AOB_H 1

typedef enum MamamuYanLimb {
    /* 0x00 */ MAMAMU_YAN_LIMB_NONE,
    /* 0x01 */ MAMAMU_YAN_LIMB_DRESS,
    /* 0x02 */ MAMAMU_YAN_LIMB_LEFT_THIGH,
    /* 0x03 */ MAMAMU_YAN_LIMB_LEFT_SHIN,
    /* 0x04 */ MAMAMU_YAN_LIMB_LEFT_FOOT,
    /* 0x05 */ MAMAMU_YAN_LIMB_RIGHT_THIGH,
    /* 0x06 */ MAMAMU_YAN_LIMB_RIGHT_SHIN,
    /* 0x07 */ MAMAMU_YAN_LIMB_RIGHT_FOOT,
    /* 0x08 */ MAMAMU_YAN_LIMB_TORSO,
    /* 0x09 */ MAMAMU_YAN_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ MAMAMU_YAN_LIMB_LEFT_FOREARM,
    /* 0x0B */ MAMAMU_YAN_LIMB_LEFT_HAND,
    /* 0x0C */ MAMAMU_YAN_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ MAMAMU_YAN_LIMB_RIGHT_FOREARM,
    /* 0x0E */ MAMAMU_YAN_LIMB_RIGHT_HAND,
    /* 0x0F */ MAMAMU_YAN_LIMB_HEAD,
    /* 0x10 */ MAMAMU_YAN_LIMB_MAX
} MamamuYanLimb;

extern s16 sMamamuYanUnusedIdleAnimFrameData[];
extern JointIndex sMamamuYanUnusedIdleAnimJointIndices[];
extern AnimationHeader gMamamuYanUnusedIdleAnim;
extern StandardLimb gMamamuYanDressLimb;
extern StandardLimb gMamamuYanLeftThighLimb;
extern StandardLimb gMamamuYanLeftShinLimb;
extern StandardLimb gMamamuYanLeftFootLimb;
extern StandardLimb gMamamuYanRightThighLimb;
extern StandardLimb gMamamuYanRightShinLimb;
extern StandardLimb gMamamuYanRightFootLimb;
extern StandardLimb gMamamuYanTorsoLimb;
extern StandardLimb gMamamuYanLeftUpperArmLimb;
extern StandardLimb gMamamuYanLeftForearmLimb;
extern StandardLimb gMamamuYanLeftHandLimb;
extern StandardLimb gMamamuYanRightUpperArmLimb;
extern StandardLimb gMamamuYanRightForearmLimb;
extern StandardLimb gMamamuYanRightHandLimb;
extern StandardLimb gMamamuYanHeadLimb;
extern void* gMamamuYanSkelLimbs[];
extern FlexSkeletonHeader gMamamuYanSkel;
extern u64 gMamamuYanTLUT[];
extern u64 gMamamuYanHairTex[];
extern u64 gMamamuYanSkinTex[];
extern u64 gMamamuYanEarTex[];
extern u64 gMamamuYanLipsTex[];
extern u64 gMamamuYanNostrilTex[];
extern u64 gMamamuYanEyeOpenTex[];
extern u64 gMamamuYanEyeHalfTex[];
extern u64 gMamamuYanEyeClosedTex[];
extern u64 gMamamuYanFingersTex[];
extern u64 gMamamuYanSleevesTex[];
extern u64 gMamamuYanDressTex[];
extern Vtx object_aobVtx_001FD8[];
extern Gfx gMamamuYanHeadDL[];
extern Gfx gMamamuYanRightHandDL[];
extern Gfx gMamamuYanRightForearmDL[];
extern Gfx gMamamuYanRightUpperArmDL[];
extern Gfx gMamamuYanLeftHandDL[];
extern Gfx gMamamuYanLeftForearmDL[];
extern Gfx gMamamuYanLeftUpperArmDL[];
extern Gfx gMamamuYanTorsoDL[];
extern Gfx gMamamuYanRightFootDL[];
extern Gfx gMamamuYanRightShinDL[];
extern Gfx gMamamuYanRightThighDL[];
extern Gfx gMamamuYanLeftFootDL[];
extern Gfx gMamamuYanLeftShinDL[];
extern Gfx gMamamuYanLeftThighDL[];
extern Gfx gMamamuYanDressDL[];
extern s16 sMamamuYanSurpriseStartAnimFrameData[];
extern JointIndex sMamamuYanSurpriseStartAnimJointIndices[];
extern AnimationHeader gMamamuYanSurpriseStartAnim;
extern s16 sMamamuYanSurpriseLoopAnimFrameData[];
extern JointIndex sMamamuYanSurpriseLoopAnimJointIndices[];
extern AnimationHeader gMamamuYanSurpriseLoopAnim;
extern s16 sMamamuYanLaughStartAnimFrameData[];
extern JointIndex sMamamuYanLaughStartAnimJointIndices[];
extern AnimationHeader gMamamuYanLaughStartAnim;
extern s16 sMamamuYanLaughLoopAnimFrameData[];
extern JointIndex sMamamuYanLaughLoopAnimJointIndices[];
extern AnimationHeader gMamamuYanLaughLoopAnim;
extern s16 sMamamuYanIdleAnimFrameData[];
extern JointIndex sMamamuYanIdleAnimJointIndices[];
extern AnimationHeader gMamamuYanIdleAnim;
#endif
