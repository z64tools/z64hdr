#ifndef OBJECT_RB_H
#define OBJECT_RB_H 1

typedef enum LeeverLimb {
    /* 0x00 */ LEEVER_LIMB_NONE,
    /* 0x01 */ OBJECT_RB_LIMB_01,
    /* 0x02 */ OBJECT_RB_LIMB_02,
    /* 0x03 */ OBJECT_RB_LIMB_03,
    /* 0x04 */ LEEVER_LIMB_TOP_HALF,
    /* 0x05 */ OBJECT_RB_LIMB_05,
    /* 0x06 */ OBJECT_RB_LIMB_06,
    /* 0x07 */ LEEVER_LIMB_SPIKE_1,
    /* 0x08 */ OBJECT_RB_LIMB_08,
    /* 0x09 */ OBJECT_RB_LIMB_09,
    /* 0x0A */ LEEVER_LIMB_SPIKE_2,
    /* 0x0B */ OBJECT_RB_LIMB_0B,
    /* 0x0C */ OBJECT_RB_LIMB_0C,
    /* 0x0D */ LEEVER_LIMB_SPIKE_3,
    /* 0x0E */ OBJECT_RB_LIMB_0E,
    /* 0x0F */ OBJECT_RB_LIMB_0F,
    /* 0x10 */ LEEVER_LIMB_SPIKE_4,
    /* 0x11 */ LEEVER_LIMB_BOTTOM_HALF,
    /* 0x12 */ LEEVER_LIMB_MAX
} LeeverLimb;

extern s16 sLeeverSpinAnimFrameData[];
extern JointIndex sLeeverSpinAnimJointIndices[];
extern AnimationHeader gLeeverSpinAnim;
extern Gfx gLeeverBottomHalfDL[];
extern Gfx gLeeverBottomHalfWrapper2DL[];
extern Gfx gLeeverBottomHalfWrapper1DL[];
extern Vtx object_rbVtx_0002F0[];
extern Gfx gLeeverTopHalfDL[];
extern Gfx gLeeverTopHalfWrapper2DL[];
extern Gfx gLeeverTopHalfWrapper1DL[];
extern Vtx object_rbVtx_000590[];
extern Gfx gLeeverSpike1DL[];
extern Gfx gLeeverSpike1Wrapper2DL[];
extern Gfx gLeeverSpike1Wrapper1DL[];
extern Vtx object_rbVtx_000818[];
extern Gfx gLeeverSpike2DL[];
extern Gfx gLeeverSpike2Wrapper2DL[];
extern Gfx gLeeverSpike2Wrapper1DL[];
extern Vtx object_rbVtx_000970[];
extern Gfx gLeeverSpike3DL[];
extern Gfx gLeeverSpike3Wrapper2DL[];
extern Gfx gLeeverSpike3Wrapper1DL[];
extern Vtx object_rbVtx_000AD0[];
extern Gfx gLeeverSpike4DL[];
extern Gfx gLeeverSpike4Wrapper2DL[];
extern Gfx gLeeverSpike4Wrapper1DL[];
extern Vtx object_rbVtx_000C38[];
extern u64 gLeeverSpikeTex[];
extern u64 gLeeverSideTex[];
extern u64 gLeeverFlowerTex[];
extern StandardLimb object_rb_Standardlimb_001DD8;
extern StandardLimb object_rb_Standardlimb_001DE4;
extern StandardLimb object_rb_Standardlimb_001DF0;
extern StandardLimb gLeeverTopHalfLimb;
extern StandardLimb object_rb_Standardlimb_001E08;
extern StandardLimb object_rb_Standardlimb_001E14;
extern StandardLimb gLeeverSpike1Limb;
extern StandardLimb object_rb_Standardlimb_001E2C;
extern StandardLimb object_rb_Standardlimb_001E38;
extern StandardLimb gLeeverSpike2Limb;
extern StandardLimb object_rb_Standardlimb_001E50;
extern StandardLimb object_rb_Standardlimb_001E5C;
extern StandardLimb gLeeverSpike3Limb;
extern StandardLimb object_rb_Standardlimb_001E74;
extern StandardLimb object_rb_Standardlimb_001E80;
extern StandardLimb gLeeverSpike4Limb;
extern StandardLimb gLeeverBottomHalfLimb;
extern void* gLeeverSkelLimbs[];
extern SkeletonHeader gLeeverSkel;
#endif
