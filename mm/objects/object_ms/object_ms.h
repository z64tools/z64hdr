#ifndef OBJECT_MS_H
#define OBJECT_MS_H 1

typedef enum BeanSalesmanLimb {
    /* 0x00 */ BEAN_SALESMAN_LIMB_NONE,
    /* 0x01 */ BEAN_SALESMAN_LIMB_ROOT,
    /* 0x02 */ BEAN_SALESMAN_LIMB_LEFT_UPPER_ARM,
    /* 0x03 */ BEAN_SALESMAN_LIMB_LEFT_FOREARM,
    /* 0x04 */ BEAN_SALESMAN_LIMB_LEFT_HAND,
    /* 0x05 */ BEAN_SALESMAN_LIMB_HEAD,
    /* 0x06 */ BEAN_SALESMAN_LIMB_MOUTH,
    /* 0x07 */ BEAN_SALESMAN_LIMB_BODY,
    /* 0x08 */ BEAN_SALESMAN_LIMB_BEANBAG,
    /* 0x09 */ BEAN_SALESMAN_LIMB_MAX
} BeanSalesmanLimb;

extern s16 sBeanSalesmanEatingAnimFrameData[];
extern JointIndex sBeanSalesmanEatingAnimJointIndices[];
extern AnimationHeader gBeanSalesmanEatingAnim;
extern Vtx object_msVtx_000600[];
extern Gfx gBeanSalesmanBeanbagDL[];
extern Gfx gBeanSalesmanBodyDL[];
extern Gfx gBeanSalesmanHeadDL[];
extern Gfx gBeanSalesmanMouthDL[];
extern Gfx gBeanSalesmanLeftUpperArmDL[];
extern Gfx gBeanSalesmanLeftForearmDL[];
extern Gfx gBeanSalesmanLeftHandDL[];
extern u64 gBeanSalesmanTLUT[];
extern u64 gBeanSalesmanBackOfHandTex[];
extern u64 gBeanSalesmanTattooTex[];
extern u64 gBeanSalesmanMouthTex[];
extern u64 gBeanSalesmanEarTex[];
extern u64 gBeanSalesmanNoseTex[];
extern u64 gBeanSalesmanEyeTex[];
extern u64 gBeanSalesmanPantsTex[];
extern u64 gBeanSalesmanShoeTex[];
extern u64 gBeanSalesmanSkinGradientTex[];
extern u64 gBeanSalesmanBeanbagTex[];
extern StandardLimb gBeanSalesmanRootLimb;
extern StandardLimb gBeanSalesmanLeftUpperArmLimb;
extern StandardLimb gBeanSalesmanLeftForearmLimb;
extern StandardLimb gBeanSalesmanLeftHandLimb;
extern StandardLimb gBeanSalesmanHeadLimb;
extern StandardLimb gBeanSalesmanMouthLimb;
extern StandardLimb gBeanSalesmanBodyLimb;
extern StandardLimb gBeanSalesmanBeanbagLimb;
extern void* gBeanSalesmanSkelLimbs[];
extern FlexSkeletonHeader gBeanSalesmanSkel;
#endif
