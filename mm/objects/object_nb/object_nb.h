#ifndef OBJECT_NB_H
#define OBJECT_NB_H 1

typedef enum NbLimb {
    /* 0x00 */ NB_LIMB_NONE,
    /* 0x01 */ NB_LIMB_WHEELCHAIR,
    /* 0x02 */ NB_LIMB_TORSO,
    /* 0x03 */ NB_LIMB_ARMS_BOOK,
    /* 0x04 */ NB_LIMB_NECK,
    /* 0x05 */ NB_LIMB_HEAD,
    /* 0x06 */ NB_LIMB_LEFT_WHEEL,
    /* 0x07 */ NB_LIMB_RIGHT_WHEEL,
    /* 0x08 */ NB_LIMB_MAX
} NbLimb;

extern s16 sNbTalkAnimFrameData[];
extern JointIndex sNbTalkAnimJointIndices[];
extern AnimationHeader gNbTalkAnim;
extern s16 sNbAngryAnimFrameData[];
extern JointIndex sNbAngryAnimJointIndices[];
extern AnimationHeader gNbAngryAnim;
extern s16 sNbRelievedAnimFrameData[];
extern JointIndex sNbRelievedAnimJointIndices[];
extern AnimationHeader gNbRelievedAnim;
extern s16 sNbIdleAnimFrameData[];
extern JointIndex sNbIdleAnimJointIndices[];
extern AnimationHeader gNbIdleAnim;
extern Vtx object_nbVtx_0009A0[];
extern Gfx gNbWheelchairDL[];
extern Gfx gNbRightWheelDL[];
extern Gfx gNbLeftWheelDL[];
extern Gfx gNbTorsoDL[];
extern Gfx gNbNeckDL[];
extern Gfx gNbHeadDL[];
extern Gfx gNbArmsBookDL[];
extern u64 object_nb_TLUT_006910[];
extern u64 object_nb_TLUT_006B10[];
extern u64 gNbTigerTLUT[];
extern u64 gNbSkinTex[];
extern u64 gNbEarTex[];
extern u64 object_nb_Tex_007050[];
extern u64 gNbUpperEyelidTex[];
extern u64 gNbHairTex[];
extern u64 gNbEyeTex[];
extern u64 gNbLowerEyelidTex[];
extern u64 object_nb_Tex_0074D0[];
extern u64 object_nb_Tex_007550[];
extern u64 object_nb_Tex_007650[];
extern u64 object_nb_Tex_007750[];
extern u64 object_nb_Tex_0077D0[];
extern u64 object_nb_Tex_0078D0[];
extern u64 object_nb_Tex_0079D0[];
extern u64 gNbBookCoverTex[];
extern u64 gNbSkirtTex[];
extern u64 gNbBookPageTex[];
extern u64 gNbFingersTex[];
extern u64 gNbTigerTex[];
extern u64 object_nb_Tex_0087D0[];
extern StandardLimb gNbWheelchairLimb;
extern StandardLimb gNbTorsoLimb;
extern StandardLimb gNbArmsBookLimb;
extern StandardLimb gNbNeckLimb;
extern StandardLimb gNbHeadLimb;
extern StandardLimb gNbLeftWheelLimb;
extern StandardLimb gNbRightWheelLimb;
extern void* gNbSkelLimbs[];
extern FlexSkeletonHeader gNbSkel;
#endif
