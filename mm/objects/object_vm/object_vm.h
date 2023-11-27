#ifndef OBJECT_VM_H
#define OBJECT_VM_H 1

typedef enum BeamosLimb {
    /* 0x00 */ BEAMOS_LIMB_NONE,
    /* 0x01 */ BEAMOS_LIMB_ROOT,
    /* 0x02 */ BEAMOS_LIMB_HEAD_ROOT,
    /* 0x03 */ BEAMOS_LIMB_TOP_EYELID_ROOT,
    /* 0x04 */ BEAMOS_LIMB_TOP_EYELID_WRAPPER,
    /* 0x05 */ BEAMOS_LIMB_TOP_EYELID,
    /* 0x06 */ BEAMOS_LIMB_BOTTOM_EYELID_ROOT,
    /* 0x07 */ BEAMOS_LIMB_BOTTOM_EYELID_WRAPPER,
    /* 0x08 */ BEAMOS_LIMB_BOTTEM_EYELID,
    /* 0x09 */ BEAMOS_LIMB_EYE,
    /* 0x0A */ BEAMOS_LIMB_BODY,
    /* 0x0B */ BEAMOS_LIMB_MAX
} BeamosLimb;

extern s16 sBeamosAnimFrameData[];
extern JointIndex sBeamosAnimJointIndices[];
extern AnimationHeader gBeamosAnim;
extern Vtx object_vmVtx_000080[];
extern Gfx gBeamosBodyDL[];
extern Gfx gBeamosTopEyelidDL[];
extern Gfx gBeamosBottomEyelidDL[];
extern Gfx gBeamosEyeDL[];
extern Gfx gBeamosLaserDL[];
extern u64 gBeamosBodyGradientTex[];
extern u64 gBeamosGrayMetalTex[];
extern u64 gBeamosBoltAndMetalTex[];
extern u64 gBeamosInnerEyeLidTex[];
extern u64 gBeamosEyeOutlineTex[];
extern u64 gBeamosEyeTex[];
extern u64 gBeamosBodyTex[];
extern u64 gBeamosLaserTex[];
extern u64 gBeamosTeethTex[];
extern StandardLimb gBeamosRootLimb;
extern StandardLimb gBeamosHeadRootLimb;
extern StandardLimb gBeamosTopEyelidRootLimb;
extern StandardLimb gBeamosTopEyelidWrapperLimb;
extern StandardLimb gBeamosTopEyelidLimb;
extern StandardLimb gBeamosBottomEyelidRootLimb;
extern StandardLimb gBeamosBottomEyelidWrapperLimb;
extern StandardLimb gBeamosBottomEyelidLimb;
extern StandardLimb gBeamosEyeLimb;
extern StandardLimb gBeamosBodyLimb;
extern void* gBeamosSkelLimbs[];
extern SkeletonHeader gBeamosSkel;
#endif
