#ifndef OBJECT_PST_H
#define OBJECT_PST_H 1

typedef enum PostboxLimb {
    /* 0x00 */ POSTBOX_LIMB_NONE,
    /* 0x01 */ POSTBOX_LIMB_FRAME,
    /* 0x02 */ POSTBOX_LIMB_MAIL_SLOT,
    /* 0x03 */ POSTBOX_LIMB_MAX
} PostboxLimb;

extern s16 sPostboxOpenSlotAnimFrameData[];
extern JointIndex sPostboxOpenSlotAnimJointIndices[];
extern AnimationHeader gPostboxOpenSlotAnim;
extern Vtx object_pstVtx_000030[];
extern Gfx gPostboxFrameDL[];
extern Gfx gPostboxMailSlotDL[];
extern u64 gPostboxWoodRoofTex[];
extern u64 gPostboxWoodBodyTex[];
extern u64 gPostboxMetalTex[];
extern u64 gPostboxSlotHoleTex[];
extern StandardLimb gPostboxFrameLimb;
extern StandardLimb gPostboxMailSlotLimb;
extern void* gPostboxSkelLimbs[];
extern FlexSkeletonHeader gPostboxSkel;
#endif
