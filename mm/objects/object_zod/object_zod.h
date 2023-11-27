#ifndef OBJECT_ZOD_H
#define OBJECT_ZOD_H 1

typedef enum TijoLimb {
    /* 0x00 */ TIJO_LIMB_NONE,
    /* 0x01 */ TIJO_LIMB_BODY_CHAIR,
    /* 0x02 */ TIJO_LIMB_UPPER_BODY,
    /* 0x03 */ TIJO_LIMB_HEAD,
    /* 0x04 */ TIJO_LIMB_LEFT_ARM,
    /* 0x05 */ TIJO_LIMB_LEFT_FOREARM,
    /* 0x06 */ TIJO_LIMB_LEFT_HAND,
    /* 0x07 */ TIJO_LIMB_RIGHT_ARM,
    /* 0x08 */ TIJO_LIMB_RIGHT_FOREARM,
    /* 0x09 */ TIJO_LIMB_RIGHT_HAND,
    /* 0x0A */ TIJO_LIMB_MAX
} TijoLimb;

extern s16 sTijoPlayingVivaceAnimFrameData[];
extern JointIndex sTijoPlayingVivaceAnimJointIndices[];
extern AnimationHeader gTijoPlayingVivaceAnim;
extern s16 sTijoReadyToPlayAnimFrameData[];
extern JointIndex sTijoReadyToPlayAnimJointIndices[];
extern AnimationHeader gTijoReadyToPlayAnim;
extern s16 sTijoArmsFoldedAnimFrameData[];
extern JointIndex sTijoArmsFoldedAnimJointIndices[];
extern AnimationHeader gTijoArmsFoldedAnim;
extern s16 sTijoPlayingLentoAnimFrameData[];
extern JointIndex sTijoPlayingLentoAnimJointIndices[];
extern AnimationHeader gTijoPlayingLentoAnim;
extern Vtx object_zodVtx_000DB0[];
extern Gfx gTijoLowerBodyChairDL[];
extern Gfx gTijoUpperBodyDL[];
extern Gfx gTijoRightArmDL[];
extern Gfx gTijoRightForearmDL[];
extern Gfx gTijoRightHandDL[];
extern Gfx gTijoLeftArmDL[];
extern Gfx gTijoLeftForearmDL[];
extern Gfx gTijoLeftHandDL[];
extern Gfx gTijoHeadDL[];
extern u64 gTijoSkinTex[];
extern u64 gTijoChairTex[];
extern u64 gTijoHandTex[];
extern u64 gTijoNoseTex[];
extern u64 gTijoSkinSpotsTex[];
extern u64 gTijoEyesOpenTex[];
extern u64 gTijoEyesHalfOpenTex[];
extern u64 gTijoEyesClosedTex[];
extern u64 gTijoMouthClosedTex[];
extern u64 gTijoMouthOpenTex[];
extern Vtx object_zodVtx_008650[];
extern Gfx gTijoDrumFrameDL[];
extern Gfx gTijoRideCymbalDL[];
extern Gfx gTijoCrashCymbalDL[];
extern Gfx gTijoHiHatDL[];
extern Gfx gTijoDrum1DL[];
extern Gfx gTijoDrum2DL[];
extern Gfx gTijoDrum3DL[];
extern Gfx gTijoDrum4DL[];
extern Gfx gTijoDrum5DL[];
extern Gfx gTijoBassDrumDL[];
extern u64 gTijoDrumFrameTex[];
extern u64 gTijoCymbalHiHatTex[];
extern u64 gTijoDrumsSkinTex[];
extern u64 gTijoDrumsEyesTex[];
extern u64 gTijoDrumsMouthTex[];
extern u64 gTijoDrumsHairTex[];
extern StandardLimb gTijoLowerBodyChairLimb;
extern StandardLimb gTijoUpperBodyLimb;
extern StandardLimb gTijoHeadLimb;
extern StandardLimb gTijoLeftArmLimb;
extern StandardLimb gTijoLeftForearmLimb;
extern StandardLimb gTijoLeftHandLimb;
extern StandardLimb gTijoRightArmLimb;
extern StandardLimb gTijoRightForearmLimb;
extern StandardLimb gTijoRightHandLimb;
extern void* gTijoSkelLimbs[];
extern FlexSkeletonHeader gTijoSkel;
extern s16 sTijoPlayingAndantinoAnimFrameData[];
extern JointIndex sTijoPlayingAndantinoAnimJointIndices[];
extern AnimationHeader gTijoPlayingAndantinoAnim;
#endif
