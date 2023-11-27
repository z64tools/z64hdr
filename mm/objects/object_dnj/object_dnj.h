#ifndef OBJECT_DNJ_H
#define OBJECT_DNJ_H 1

typedef enum DekuButlerLimb {
    /* 0x00 */ DEKU_BUTLER_LIMB_NONE,
    /* 0x01 */ DEKU_BUTLER_LIMB_ROOT,
    /* 0x02 */ DEKU_BUTLER_LIMB_PELVIS,
    /* 0x03 */ DEKU_BUTLER_LIMB_RIGHT_THIGH,
    /* 0x04 */ DEKU_BUTLER_LIMB_RIGHT_SHIN,
    /* 0x05 */ DEKU_BUTLER_LIMB_RIGHT_FOOT,
    /* 0x06 */ DEKU_BUTLER_LIMB_LEFT_THIGH,
    /* 0x07 */ DEKU_BUTLER_LIMB_LEFT_SHIN,
    /* 0x08 */ DEKU_BUTLER_LIMB_LEFT_FOOT,
    /* 0x09 */ DEKU_BUTLER_LIMB_EYES,
    /* 0x0A */ DEKU_BUTLER_LIMB_RIGHT_UPPER_ARM,
    /* 0x0B */ DEKU_BUTLER_LIMB_RIGHT_FOREARM,
    /* 0x0C */ DEKU_BUTLER_LIMB_RIGHT_HAND,
    /* 0x0D */ DEKU_BUTLER_LIMB_PARASOL_HANDLE,
    /* 0x0E */ DEKU_BUTLER_LIMB_PARASOL_UPPER_PETALS,
    /* 0x0F */ DEKU_BUTLER_LIMB_PARASOL_LOWER_PETALS,
    /* 0x10 */ DEKU_BUTLER_LIMB_PARASOL_MIDDLE_PETALS,
    /* 0x11 */ DEKU_BUTLER_LIMB_SNOUT,
    /* 0x12 */ DEKU_BUTLER_LIMB_LEFT_MUSTACHE_BASE,
    /* 0x13 */ DEKU_BUTLER_LIMB_LEFT_MUSTACHE_CURL,
    /* 0x14 */ DEKU_BUTLER_LIMB_RIGHT_MUSTACHE_BASE,
    /* 0x15 */ DEKU_BUTLER_LIMB_RIGHT_MUSTACHE_CURL,
    /* 0x16 */ DEKU_BUTLER_LIMB_LEFT_UPPER_ARM,
    /* 0x17 */ DEKU_BUTLER_LIMB_LEFT_FOREARM,
    /* 0x18 */ DEKU_BUTLER_LIMB_LEFT_HAND,
    /* 0x19 */ DEKU_BUTLER_LIMB_CANDLE,
    /* 0x1A */ DEKU_BUTLER_LIMB_CANDLE_WICK,
    /* 0x1B */ DEKU_BUTLER_LIMB_UPPER_BODY,
    /* 0x1C */ DEKU_BUTLER_LIMB_MAX
} DekuButlerLimb;

extern s16 sDekuButlerStartRaceStartAnimFrameData[];
extern JointIndex sDekuButlerStartRaceStartAnimJointIndices[];
extern AnimationHeader gDekuButlerStartRaceStartAnim;
extern s16 sDekuButlerStartRaceEndAnimFrameData[];
extern JointIndex sDekuButlerStartRaceEndAnimJointIndices[];
extern AnimationHeader gDekuButlerStartRaceEndAnim;
extern s16 sDekuButlerFlyAnimFrameData[];
extern JointIndex sDekuButlerFlyAnimJointIndices[];
extern AnimationHeader gDekuButlerFlyAnim;
extern s16 sDekuButlerFarewellAnimFrameData[];
extern JointIndex sDekuButlerFarewellAnimJointIndices[];
extern AnimationHeader gDekuButlerFarewellAnim;
extern s16 sDekuButlerGreetingAnimFrameData[];
extern JointIndex sDekuButlerGreetingAnimJointIndices[];
extern AnimationHeader gDekuButlerGreetingAnim;
extern s16 sDekuButlerGreetingWithCandleAnimFrameData[];
extern JointIndex sDekuButlerGreetingWithCandleAnimJointIndices[];
extern AnimationHeader gDekuButlerGreetingWithCandleAnim;
extern s16 sDekuButlerPrayerLoopAnimFrameData[];
extern JointIndex sDekuButlerPrayerLoopAnimJointIndices[];
extern AnimationHeader gDekuButlerPrayerLoopAnim;
extern s16 sDekuButlerCloseParasolAnimFrameData[];
extern JointIndex sDekuButlerCloseParasolAnimJointIndices[];
extern AnimationHeader gDekuButlerCloseParasolAnim;
extern s16 sDekuButlerOpenParasolAnimFrameData[];
extern JointIndex sDekuButlerOpenParasolAnimJointIndices[];
extern AnimationHeader gDekuButlerOpenParasolAnim;
extern s16 sDekuButlerShockStartAnimFrameData[];
extern JointIndex sDekuButlerShockStartAnimJointIndices[];
extern AnimationHeader gDekuButlerShockStartAnim;
extern s16 sDekuButlerShockLoopAnimFrameData[];
extern JointIndex sDekuButlerShockLoopAnimJointIndices[];
extern AnimationHeader gDekuButlerShockLoopAnim;
extern s16 sDekuButlerImploreLoopAnimFrameData[];
extern JointIndex sDekuButlerImploreLoopAnimJointIndices[];
extern AnimationHeader gDekuButlerImploreLoopAnim;
extern s16 sDekuButlerImploreEndAnimFrameData[];
extern JointIndex sDekuButlerImploreEndAnimJointIndices[];
extern AnimationHeader gDekuButlerImploreEndAnim;
extern s16 sDekuButlerGrieveAnimFrameData[];
extern JointIndex sDekuButlerGrieveAnimJointIndices[];
extern AnimationHeader gDekuButlerGrieveAnim;
extern s16 sDekuButlerTalkAnimFrameData[];
extern JointIndex sDekuButlerTalkAnimJointIndices[];
extern AnimationHeader gDekuButlerTalkAnim;
extern s16 sDekuButlerTalkWithParasolAndCandleAnimFrameData[];
extern JointIndex sDekuButlerTalkWithParasolAndCandleAnimJointIndices[];
extern AnimationHeader gDekuButlerTalkWithParasolAndCandleAnim;
extern s16 sDekuButlerIdleAnimFrameData[];
extern JointIndex sDekuButlerIdleAnimJointIndices[];
extern AnimationHeader gDekuButlerIdleAnim;
extern s16 sDekuButlerIdleWithCandleAnimFrameData[];
extern JointIndex sDekuButlerIdleWithCandleAnimJointIndices[];
extern AnimationHeader gDekuButlerIdleWithCandleAnim;
extern s16 sDekuButlerPrayerStartAnimFrameData[];
extern JointIndex sDekuButlerPrayerStartAnimJointIndices[];
extern AnimationHeader gDekuButlerPrayerStartAnim;
extern s16 sDekuButlerImploreStartAnimFrameData[];
extern JointIndex sDekuButlerImploreStartAnimJointIndices[];
extern AnimationHeader gDekuButlerImploreStartAnim;
extern Vtx object_dnjVtx_009110[];
extern Gfx gDekuButlerEyesDL[];
extern Gfx gDekuButlerUpperBodyDL[];
extern Gfx gDekuButlerLeftForearmDL[];
extern Gfx gDekuButlerLeftHandDL[];
extern Gfx gDekuButlerCandleDL[];
extern Gfx gDekuButlerCandleWickDL[];
extern Gfx gDekuButlerLeftUpperArmDL[];
extern Gfx gDekuButlerSnoutDL[];
extern Gfx gDekuButlerRightMustacheCurlDL[];
extern Gfx gDekuButlerRightMustacheBaseDL[];
extern Gfx gDekuButlerLeftMustacheCurlDL[];
extern Gfx gDekuButlerLeftMustacheBaseDL[];
extern Gfx gDekuButlerRightForearmDL[];
extern Gfx gDekuButlerRightHandDL[];
extern Gfx gDekuButlerParasolUpperPetalsDL[];
extern Gfx gDekuButlerParasolMiddlePetalsDL[];
extern Gfx gDekuButlerParasolLowerPetalsDL[];
extern Gfx gDekuButlerParasolHandleDL[];
extern Gfx gDekuButlerRightUpperArmDL[];
extern Gfx gDekuButlerPelvisDL[];
extern Gfx gDekuButlerLeftShinDL[];
extern Gfx gDekuButlerLeftFootDL[];
extern Gfx gDekuButlerLeftThighDL[];
extern Gfx gDekuButlerRightShinDL[];
extern Gfx gDekuButlerRightFootDL[];
extern Gfx gDekuButlerRightThighDL[];
extern u64 gDekuButlerEyeTex[];
extern u64 gDekuButlerBodyAndCandleHolderTex[];
extern u64 gDekuButlerMouthTex[];
extern u64 gDekuButlerLeafTex[];
extern u64 gDekuButlerParasolPetalTex[];
extern u64 gDekuButlerCandleTex[];
extern u64 gDekuButlerHairTex[];
extern u64 gDekuButlerBowtieCenterTex[];
extern StandardLimb gDekuButlerRootLimb;
extern StandardLimb gDekuButlerPelvisLimb;
extern StandardLimb gDekuButlerRightThighLimb;
extern StandardLimb gDekuButlerRightShinLimb;
extern StandardLimb gDekuButlerRightFootLimb;
extern StandardLimb gDekuButlerLeftThighLimb;
extern StandardLimb gDekuButlerLeftShinLimb;
extern StandardLimb gDekuButlerLeftFootLimb;
extern StandardLimb gDekuButlerEyesLimb;
extern StandardLimb gDekuButlerRightUpperArmLimb;
extern StandardLimb gDekuButlerRightForearmLimb;
extern StandardLimb gDekuButlerRightHandLimb;
extern StandardLimb gDekuButlerParasolHandleLimb;
extern StandardLimb gDekuButlerParasolUpperPetalsLimb;
extern StandardLimb gDekuButlerParasolLowerPetalsLimb;
extern StandardLimb gDekuButlerParasolMiddlePetalsLimb;
extern StandardLimb gDekuButlerSnoutLimb;
extern StandardLimb gDekuButlerLeftMustacheBaseLimb;
extern StandardLimb gDekuButlerLeftMustacheCurlLimb;
extern StandardLimb gDekuButlerRightMustacheBaseLimb;
extern StandardLimb gDekuButlerRightMustacheCurlLimb;
extern StandardLimb gDekuButlerLeftUpperArmLimb;
extern StandardLimb gDekuButlerLeftForearmLimb;
extern StandardLimb gDekuButlerLeftHandLimb;
extern StandardLimb gDekuButlerCandleLimb;
extern StandardLimb gDekuButlerCandleWickLimb;
extern StandardLimb gDekuButlerUpperBodyLimb;
extern void* gDekuButlerSkelLimbs[];
extern FlexSkeletonHeader gDekuButlerSkel;
#endif
