#ifndef OBJECT_RS_H
#define OBJECT_RS_H 1

typedef enum BombShopkeeperLimb {
    /* 0x00 */ BOMB_SHOPKEEPER_LIMB_NONE,
    /* 0x01 */ BOMB_SHOPKEEPER_LIMB_PELVIS,
    /* 0x02 */ BOMB_SHOPKEEPER_LIMB_LEFT_THIGH,
    /* 0x03 */ BOMB_SHOPKEEPER_LIMB_LEFT_SHIN,
    /* 0x04 */ BOMB_SHOPKEEPER_LIMB_LEFT_FOOT,
    /* 0x05 */ BOMB_SHOPKEEPER_LIMB_RIGHT_THIGH,
    /* 0x06 */ BOMB_SHOPKEEPER_LIMB_RIGHT_SHIN,
    /* 0x07 */ BOMB_SHOPKEEPER_LIMB_RIGHT_FOOT,
    /* 0x08 */ BOMB_SHOPKEEPER_LIMB_TORSO,
    /* 0x09 */ BOMB_SHOPKEEPER_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ BOMB_SHOPKEEPER_LIMB_LEFT_FOREARM,
    /* 0x0B */ BOMB_SHOPKEEPER_LIMB_LEFT_HAND,
    /* 0x0C */ BOMB_SHOPKEEPER_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ BOMB_SHOPKEEPER_LIMB_RIGHT_FOREARM,
    /* 0x0E */ BOMB_SHOPKEEPER_LIMB_RIGHT_HAND,
    /* 0x0F */ BOMB_SHOPKEEPER_LIMB_HEAD,
    /* 0x10 */ BOMB_SHOPKEEPER_LIMB_MAX
} BombShopkeeperLimb;

extern Vtx object_rsVtx_000000[];
extern Gfx gBombShopkeeperBombDL[];
extern u64 gBombShopkeeperBombFuseTex[];
extern Vtx object_rsVtx_001010[];
extern Gfx gBombShopkeeperPelvisDL[];
extern Gfx gBombShopkeeperTorsoDL[];
extern Gfx gBombShopkeeperHeadDL[];
extern Gfx gBombShopkeeperRightUpperArmDL[];
extern Gfx gBombShopkeeperRightForearmDL[];
extern Gfx gBombShopkeeperRightHandDL[];
extern Gfx gBombShopkeeperLeftUpperArmDL[];
extern Gfx gBombShopkeeperLeftForearmDL[];
extern Gfx gBombShopkeeperLeftHandDL[];
extern Gfx gBombShopkeeperRightThighDL[];
extern Gfx gBombShopkeeperRightShinDL[];
extern Gfx gBombShopkeeperRightFootDL[];
extern Gfx gBombShopkeeperLeftThighDL[];
extern Gfx gBombShopkeeperLeftShinDL[];
extern Gfx gBombShopkeeperLeftFootDL[];
extern u64 gBombShopkeeperTLUT[];
extern u64 gBombShopkeeperEarTex[];
extern u64 gBombShopkeeperSkinTex[];
extern u64 gBombShopkeeperTorsoTex[];
extern u64 gBombShopkeeperFingersTex[];
extern u64 gBombShopkeeperEyeTex[];
extern u64 gBombShopkeeperTatooTex[];
extern u64 gBombShopkeeperShortsTex[];
extern u64 gBombShopkeeperSandalsTex[];
extern u64 gBombShopkeeperVestTex[];
extern u64 gBombShopkeeperToesTex[];
extern u64 gBombShopkeeperWristBandTex[];
extern s16 sBombShopkeeperSwayAnimFrameData[];
extern JointIndex sBombShopkeeperSwayAnimJointIndices[];
extern AnimationHeader gBombShopkeeperSwayAnim;
extern s16 sBombShopkeeperSitAtCounterStartAnimFrameData[];
extern JointIndex sBombShopkeeperSitAtCounterStartAnimJointIndices[];
extern AnimationHeader gBombShopkeeperSitAtCounterStartAnim;
extern s16 sBombShopkeeperSitAtCounterLoopAnimFrameData[];
extern JointIndex sBombShopkeeperSitAtCounterLoopAnimJointIndices[];
extern AnimationHeader gBombShopkeeperSitAtCounterLoopAnim;
extern s16 sBombShopkeeperWalkAnimFrameData[];
extern JointIndex sBombShopkeeperWalkAnimJointIndices[];
extern AnimationHeader gBombShopkeeperWalkAnim;
extern StandardLimb gBombShopkeeperPelvisLimb;
extern StandardLimb gBombShopkeeperLeftThighLimb;
extern StandardLimb gBombShopkeeperLeftShinLimb;
extern StandardLimb gBombShopkeeperLeftFootLimb;
extern StandardLimb gBombShopkeeperRightThighLimb;
extern StandardLimb gBombShopkeeperRightShinLimb;
extern StandardLimb gBombShopkeeperRightFootLimb;
extern StandardLimb gBombShopkeeperTorsoLimb;
extern StandardLimb gBombShopkeeperLeftUpperArmLimb;
extern StandardLimb gBombShopkeeperLeftForearmLimb;
extern StandardLimb gBombShopkeeperLeftHandLimb;
extern StandardLimb gBombShopkeeperRightUpperArmLimb;
extern StandardLimb gBombShopkeeperRightForearmLimb;
extern StandardLimb gBombShopkeeperRightHandLimb;
extern StandardLimb gBombShopkeeperHeadLimb;
extern void* gBombShopkeeperSkelLimbs[];
extern FlexSkeletonHeader gBombShopkeeperSkel;
#endif
