#ifndef OBJECT_DEKUBABA_H
#define OBJECT_DEKUBABA_H 1

typedef enum DekuBabaLimb {
    /* 0x00 */ DEKUBABA_LIMB_NONE,
    /* 0x01 */ DEKUBABA_LIMB_ROOT,
    /* 0x02 */ DEKUBABA_LIMB_UPPER_JAW_ROOT,
    /* 0x03 */ DEKUBABA_LIMB_UPPER_JAW_WRAPPER,
    /* 0x04 */ DEKUBABA_LIMB_UPPER_JAW,
    /* 0x05 */ DEKUBABA_LIMB_LOWER_JAW_ROOT,
    /* 0x06 */ DEKUBABA_LIMB_LOWER_JAW_WRAPPER,
    /* 0x07 */ DEKUBABA_LIMB_LOWER_JAW,
    /* 0x08 */ DEKUBABA_LIMB_MAX
} DekuBabaLimb;

extern s16 sDekuBabaPauseChompAnimFrameData[];
extern JointIndex sDekuBabaPauseChompAnimJointIndices[];
extern AnimationHeader gDekuBabaPauseChompAnim;
extern s16 sDekuBabaFastChompAnimFrameData[];
extern JointIndex sDekuBabaFastChompAnimJointIndices[];
extern AnimationHeader gDekuBabaFastChompAnim;
extern Vtx object_dekubabaVtx_0002D0[];
extern Gfx gDekuBabaLowerJawDL[];
extern Vtx object_dekubabaVtx_0006A8[];
extern Gfx gDekuBabaUpperJawDL[];
extern Vtx object_dekubabaVtx_000D00[];
extern Gfx gDekuBabaBaseLeavesDL[];
extern Vtx object_dekubabaVtx_001230[];
extern Gfx gDekuBabaStemTopDL[];
extern Vtx object_dekubabaVtx_0013E8[];
extern Gfx gDekuBabaStemMiddleDL[];
extern Vtx object_dekubabaVtx_001728[];
extern Gfx gDekuBabaStemBaseDL[];
extern u64 gDekuBabaJawOuterTex[];
extern u64 gDekuBabaJawInnerTex[];
extern u64 gDekuBabaLeafTex[];
extern u64 gDekuBabaBulbTex[];
extern u64 gDekuBabaStemTex[];
extern StandardLimb gDekuBabaRootLimb;
extern StandardLimb gDekuBabaUpperJawRootLimb;
extern StandardLimb gDekuBabaUpperJawRooWrappertLimb;
extern StandardLimb gDekuBabaUpperJawLimb;
extern StandardLimb gDekuBabaLowerJawRootLimb;
extern StandardLimb gDekuBabaLowerJawWrapperLimb;
extern StandardLimb gDekuBabaLowerJawLimb;
extern void* gDekuBabaSkelLimbs[];
extern SkeletonHeader gDekuBabaSkel;
extern Vtx object_dekubabaVtx_002A50[];
extern Gfx gDekuBabaStickDropDL[];
extern u64 gDekuBabaStickDropTex[];
#endif
