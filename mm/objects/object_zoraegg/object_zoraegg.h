#ifndef OBJECT_ZORAEGG_H
#define OBJECT_ZORAEGG_H 1

typedef enum ZoraBabyLimb {
    /* 0x00 */ ZORA_BABY_LIMB_NONE,
    /* 0x01 */ ZORA_BABY_LIMB_HEAD,
    /* 0x02 */ ZORA_BABY_LIMB_TAIL1,
    /* 0x03 */ ZORA_BABY_LIMB_TAIL2,
    /* 0x04 */ ZORA_BABY_LIMB_TAIL_FIN,
    /* 0x05 */ ZORA_BABY_LIMB_RIGHT_PECTORAL_FIN,
    /* 0x06 */ ZORA_BABY_LIMB_LEFT_PECTORAL_FIN,
    /* 0x07 */ ZORA_BABY_LIMB_MAX
} ZoraBabyLimb;

extern s16 sZoraBabySwimUpAnimFrameData[];
extern JointIndex sZoraBabySwimUpAnimJointIndices[];
extern AnimationHeader gZoraBabySwimUpAnim;
extern s16 sZoraBabyHatchAnimFrameData[];
extern JointIndex sZoraBabyHatchAnimJointIndices[];
extern AnimationHeader gZoraBabyHatchAnim;
extern Vtx object_zoraeggVtx_001E20[];
extern Gfx gZoraBabyHeadDL[];
extern Gfx gZoraBabyTail1DL[];
extern Gfx gZoraBabyTail2DL[];
extern Gfx gZoraBabyTailFinDL[];
extern Gfx gZoraBabyRightPectoralFinDL[];
extern Gfx gZoraBabyLeftPectoralFinDL[];
extern u64 gZoraBabyTLUT[];
extern u64 gZoraBabyTailFinTex[];
extern u64 gZoraBabySkinTex[];
extern u64 gZoraBabyEyeOpenTex[];
extern u64 gZoraBabySkinPatternTex[];
extern u64 gZoraBabyPectoralFinTex[];
extern u64 gZoraBabyEyeHalfTex[];
extern u64 gZoraBabyEyeClosedTex[];
extern StandardLimb gZoraBabyHeadLimb;
extern StandardLimb gZoraBabyTail1Limb;
extern StandardLimb gZoraBabyTail2Limb;
extern StandardLimb gZoraBabyTailFinLimb;
extern StandardLimb gZoraBabyRightPectoralFinLimb;
extern StandardLimb gZoraBabyLeftPectoralFinLimb;
extern void* gZoraBabySkelLimbs[];
extern FlexSkeletonHeader gZoraBabySkel;
extern s16 sZoraBabyFormNoteAnimFrameData[];
extern JointIndex sZoraBabyFormNoteAnimJointIndices[];
extern AnimationHeader gZoraBabyFormNoteAnim;
extern s16 sZoraBabySongLearnedAnimFrameData[];
extern JointIndex sZoraBabySongLearnedAnimJointIndices[];
extern AnimationHeader gZoraBabySongLearnedAnim;
extern s16 sZoraBabyNoteAnimFrameData[];
extern JointIndex sZoraBabyNoteAnimJointIndices[];
extern AnimationHeader gZoraBabyNoteAnim;
extern s16 sZoraBabySwimAnimFrameData[];
extern JointIndex sZoraBabySwimAnimJointIndices[];
extern AnimationHeader gZoraBabySwimAnim;
extern Vtx object_zoraeggVtx_0050B0[];
extern Gfx gZoraEggDL[];
extern u64 gZoraEggTLUT[];
extern u64 gZoraEggTex[];
#endif
