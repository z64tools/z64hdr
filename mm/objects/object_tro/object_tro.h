#ifndef OBJECT_TRO_H
#define OBJECT_TRO_H 1

typedef enum KoumeKioskLimb {
    /* 0x00 */ KOUME_KIOSK_LIMB_NONE,
    /* 0x01 */ KOUME_KIOSK_LIMB_HEAD,
    /* 0x02 */ KOUME_KIOSK_LIMB_MAX
} KoumeKioskLimb;

extern s16 sKoumeKioskHeadMovingAnimFrameData[];
extern JointIndex sKoumeKioskHeadMovingAnimJointIndices[];
extern AnimationHeader gKoumeKioskHeadMovingAnim;
extern Vtx object_troVtx_0000B0[];
extern Gfx gKoumeKioskDL[];
extern u64 gKoumeKioskNoseTLUT[];
extern u64 gKoumeKioskNostrilsTLUT[];
extern u64 gKoumeKioskShadowedSkinTex[];
extern u64 gKoumeKioskNoseTex[];
extern u64 gKoumeKioskJewelHolderTex[];
extern u64 gKoumeKioskJewelTex[];
extern u64 gKoumeKioskNostrilsTex[];
extern u64 gKoumeKioskEyeOpenTex[];
extern u64 gKoumeKioskEyeHalfTex[];
extern u64 gKoumeKioskEyeClosedTex[];
extern StandardLimb gKoumeKioskHeadLimb;
extern void* gKoumeKioskSkelLimbs[];
extern SkeletonHeader gKoumeKioskSkel;
#endif
