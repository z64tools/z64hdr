#ifndef Z_CAMERA_DATA_H
#define Z_CAMERA_DATA_H

#include "ultra64.h"
#include "global.h"

typedef struct {
    s16 val;
    s16 dataType;
} CameraModeValue;

typedef struct {
    s16 funcIdx;
    s16 valueCnt;
    CameraModeValue* values;
} CameraMode;

typedef struct {
    union {
        u32 unk_00;
        struct {
            u32 unk_bit0 : 1;
            u32 unk_bit1 : 1;
            u32 validModes : 30;
        };
    };
    CameraMode* cameraModes;
} CameraSetting;

/*==================================================================*/
// Data
extern s16 sOREGInit[];

extern s16 sOREGInitCnt;

extern s16 sCamDataRegsInit[CAM_DATA_MAX];

extern s16 sCamDataRegsInitCount;

extern char sCameraSettingNames[][12];

extern char sCameraModeNames[][12];

/**
 *=====================================================================
 *                   General Data: NORMAL0 Setting
 *=====================================================================
 */

extern CameraModeValue sSetNormal0ModeNormalData[];

extern CameraModeValue sSetNormal0ModeTargetData[];

extern CameraModeValue sSetNormal0ModeFollowTargetData[];

extern CameraModeValue sSetNormal0ModeTalkData[];

extern CameraModeValue sSetNormal0ModeBattleData[];

extern CameraModeValue sSetNormal0ModeClimbData[];

extern CameraModeValue sSetNormal0ModeFirstPersonData[];

extern CameraModeValue sSetNormal0ModeBowArrowData[];

extern CameraModeValue sSetNormal0ModeBowArrowZData[];

extern CameraModeValue sSetNormal0ModeHookshotData[];

extern CameraModeValue sSetNormal0ModeBoomerangData[];

extern CameraModeValue sSetNormal0ModeSlingshotData[];

extern CameraModeValue sSetNormal0ModeClimbZData[];

extern CameraModeValue sSetNormal0ModeJumpData[];

extern CameraModeValue sSetNormal0ModeHangData[];

extern CameraModeValue sSetNormal0ModeHangZData[];

extern CameraModeValue sSetNormal0ModeFreeFallData[];

extern CameraModeValue sSetNormal0ModeChargeData[];

extern CameraModeValue sSetNormal0ModeStillData[];

extern CameraModeValue sSetNormal0ModePushPullData[];

extern CameraModeValue sSetNormal0ModeFollowBoomerangData[];

/**
 *=====================================================================
 *                   Custom Data: NORMAL1 Setting
 *=====================================================================
 */

extern CameraModeValue sSetNormal1ModeNormalData[];

extern CameraModeValue sSetNormal1ModeTargetData[];

extern CameraModeValue sSetNormal1ModeFollowTargetData[];

extern CameraModeValue sSetNormal1ModeBattleData[];

extern CameraModeValue sSetNormal1ModeHookshotData[];

extern CameraModeValue sSetNormal1ModeJumpData[];

extern CameraModeValue sSetNormal1ModeFreeFallData[];

extern CameraModeValue sSetNormal1ModeClimbData[];

extern CameraModeValue sSetNormal1ModeClimbZData[];

extern CameraModeValue sSetNormal1ModeChargeData[];

extern CameraModeValue sSetNormal1ModeHangData[];

extern CameraModeValue sSetNormal1ModeHangZData[];

extern CameraModeValue sSetNormal1ModeStillData[];

/**
 *=====================================================================
 *                   Custom Data: DUNGEON0 Setting
 *=====================================================================
 */

extern CameraModeValue sSetDungeon0ModeNormalData[];

extern CameraModeValue sSetDungeon0ModeTargetData[];

extern CameraModeValue sSetDungeon0ModeFollowTargetData[];

extern CameraModeValue sSetDungeon0ModeBattleData[];

extern CameraModeValue sSetDungeon0ModeJumpData[];

extern CameraModeValue sSetDungeon0ModeFreeFallData[];

extern CameraModeValue sSetDungeon0ModeClimbData[];

extern CameraModeValue sSetDungeon0ModeClimbZData[];

extern CameraModeValue sSetDungeon0ModeChargeData[];

extern CameraModeValue sSetDungeon0ModeHangData[];

extern CameraModeValue sSetDungeon0ModeHangZData[];

extern CameraModeValue sSetDungeon0ModeStillData[];

/**
 *=====================================================================
 *                   Custom Data: DUNGEON1 Setting
 *=====================================================================
 */

extern CameraModeValue sSetDungeon1ModeNormalData[];

extern CameraModeValue sSetDungeon1ModeTalkData[];

extern CameraModeValue sSetDungeon1ModeJumpData[];

extern CameraModeValue sSetDungeon1ModeFreeFallData[];

extern CameraModeValue sSetDungeon1ModeClimbData[];

extern CameraModeValue sSetDungeon1ModeClimbZData[];

extern CameraModeValue sSetDungeon1ModeChargeData[];

extern CameraModeValue sSetDungeon1ModeHangData[];

extern CameraModeValue sSetDungeon1ModeHangZData[];

extern CameraModeValue sSetDungeon1ModeStillData[];

extern CameraModeValue sSetDungeon1ModePushPullData[];

/**
 *=====================================================================
 *                   Custom Data: NORMAL3 Setting
 *=====================================================================
 */

extern CameraModeValue sSetNormal3ModeNormalData[];

extern CameraModeValue sSetNormal3ModeTargetData[];

extern CameraModeValue sSetNormal3ModeTalkData[];

/* These values are for when the eye
 * >= OREG(45) units below the surface of the water.
 */
extern CameraModeValue sSetNormal3ModeBoomerangData[];

/**
 *=====================================================================
 *                   Custom Data: HORSE Setting
 *=====================================================================
 */

extern CameraModeValue sSetHorseModeNormalData[];

extern CameraModeValue sSetHorseModeTargetData[];

extern CameraModeValue sSetHorseModeBowArrowData[];

extern CameraModeValue sSetHorseModeFollowTargetData[];

extern CameraModeValue sSetHorseModeTalkData[];

/**
 *=====================================================================
 *                   Custom Data: BOSS_GOHMA Setting
 *=====================================================================
 */

extern CameraModeValue sSetBossGohmaModeNormalData[];

extern CameraModeValue sSetBossGohmaModeBattleData[];

/**
 *=====================================================================
 *                 Custom Data: BOSS_DODONGO Setting
 *=====================================================================
 */

extern CameraModeValue sSetBossDodongoModeNormalData[];

extern CameraModeValue sSetBossDodongoModeBattleData[];

/**
 *=====================================================================
 *                Custom Data: BOSS_BARINADE Setting
 *=====================================================================
 */

extern CameraModeValue sSetBossBarinadeModeNormalData[];

extern CameraModeValue sSetBossBarinadeModeBattleData[];

/**
 *=====================================================================
 *              Custom Data: BOSS_PHANTOM_GANON Setting
 *=====================================================================
 */

extern CameraModeValue sSetBossPhantomGanonModeNormalData[];

extern CameraModeValue sSetBossPhantomGanonModeBattleData[];

/**
 *=====================================================================
 *                Custom Data: BOSS_VOLVAGIA Setting
 *=====================================================================
 */

extern CameraModeValue sSetBossVolvagiaModeNormalData[];

extern CameraModeValue sSetBossVolvagiaModeBattleData[];

/**
 *=====================================================================
 *                   Custom Data: BOSS_BONGO Setting
 *=====================================================================
 */

extern CameraModeValue sSetBossBongoModeNormalData[];

extern CameraModeValue sSetBossBongoModeBattleData[];

extern CameraModeValue sSetBossBongoModeJumpData[];

/**
 *=====================================================================
 *                 Custom Data: BOSS_MORPHA Setting
 *=====================================================================
 */

extern CameraModeValue sSetBossMorphaModeNormalData[];

extern CameraModeValue sSetBossMorphaModeBattleData[];

/**
 *=====================================================================
 *                  Custom Data: TWINROVA Setting
 *=====================================================================
 */

extern CameraModeValue sSetBossTwinrovaPlatformModeNormalData[];

extern CameraModeValue sSetBossTwinrovaModeBattleData[];

extern CameraModeValue sSetBossTwinrovaFloorModeNormalData[];

/**
 *=====================================================================
 *                Custom Data: BOSS_GANONDORF Setting
 *=====================================================================
 */

extern CameraModeValue sSetBossGanondorfModeNormalData[];

extern CameraModeValue sSetBossGanondorfModeChargeData[];

/**
 *=====================================================================
 *                 Custom Data: BOSS_GANON Setting
 *=====================================================================
 */

extern CameraModeValue sSetBossGanonModeNormalData[];

extern CameraModeValue sSetBossGanonModeBattleData[];

/**
 *=====================================================================
 *                 Custom Data: TOWER_CLIMB Setting
 *=====================================================================
 */

extern CameraModeValue sSetTowerClimbModeNormalData[];

extern CameraModeValue sSetTowerClimbModeJumpData[];

/**
 *=====================================================================
 *                Custom Data: TOWER_UNUSED Setting
 *=====================================================================
 */

extern CameraModeValue sSetTowerUnusedModeNormalData[];

extern CameraModeValue sSetTowerUnusedModeJumpData[];

/**
 *=====================================================================
 *                Custom Data: MARKET_BALCONY Setting
 *=====================================================================
 */

extern CameraModeValue sSetMarketBalconyModeNormalData[];

extern CameraModeValue sSetMarketBalconyModeFollowTargetData[];

extern CameraModeValue sSetMarketBalconyModeTalkData[];

/**
 *=====================================================================
 *                 Custom Data: CHU_BOWLING Setting
 *=====================================================================
 */

extern CameraModeValue sSetChuBowlingModeNormalData[];

/**
 *=====================================================================
 *               Custom Data: PIVOT_CRAWLSPACE Setting
 *=====================================================================
 */

extern CameraModeValue sSetPivotCrawlspaceModeNormalData[];

/**
 *=====================================================================
 *              Custom Data: PIVOT_SHOP_BROWSING Setting
 *=====================================================================
 */

extern CameraModeValue sSetPivotShopBrowsingModeNormalData[];

/**
 *=====================================================================
 *          Custom Data: PIVOT_IN_FRONT and PIVOT_FROM_SIDE
 *=====================================================================
 */

extern CameraModeValue sSetPivotInFrontAndFromSideModeNormalData[];

/**
 *=====================================================================
 *                 Custom Data: No data, all flags off
 *=====================================================================
 */

extern CameraModeValue sDataOnlyNullFlags[];

/**
 *=====================================================================
 *                 Custom Data: PREREND_FIXED Setting
 *=====================================================================
 */

extern CameraModeValue sSetPrerendFixedModeFollowTargetData[];

/**
 *=====================================================================
 *                Custom Data: PREREND_PIVOT Setting
 *=====================================================================
 */

extern CameraModeValue sSetPrerendPivotModeNormalData[];

extern CameraModeValue sSetPrerendPivotModeFollowTargetData[];

extern CameraModeValue sSetPrerendPivotModeTalkData[];

/**
 *=====================================================================
 *                   Custom Data: DOOR0 Setting
 *=====================================================================
 */

extern CameraModeValue sSetDoor0ModeNormalData[];

/**
 *=====================================================================
 *                   Custom Data: DOORC Setting
 *=====================================================================
 */

extern CameraModeValue sSetDoorCModeNormalData[];

extern CameraModeValue sSetDoorCModeTargetData[];

/**
 *=====================================================================
 *                   Custom Data: CRAWLSPACE Setting
 *=====================================================================
 */

// Camera_Subj4 only reads one setting which is used for flags
extern CameraModeValue sSetCrawlspaceModeNormalData[];

/**
 *=====================================================================
 *                   Custom Data: START1 Setting
 *=====================================================================
 */

extern CameraModeValue sSetStart1ModeNormalData[];

/**
 *=====================================================================
 *                   Custom Data: FREE0 Setting
 *=====================================================================
 */

extern CameraModeValue sSetFree0ModeNormalData[];

/**
 *=====================================================================
 *                   Custom Data: FREE1 Setting
 *=====================================================================
 */

extern CameraModeValue sSetFree1ModeNormalData[];

/**
 *=====================================================================
 *                 Custom Data: PIVOT_CORNER Setting
 *=====================================================================
 */

extern CameraModeValue sSetPivotCornerModeNormalData[];

/**
 *=====================================================================
 *              Custom Data: PIVOT_WATER_SURFACE Setting
 *=====================================================================
 */

extern CameraModeValue sSetPivotWaterSurfaceModeNormalData[];

extern CameraModeValue sSetPivotWaterSurfaceModeTargetData[];

/**
 *=====================================================================
 *               Custom Data: Various cutscene settings
 *=====================================================================
 */

extern CameraModeValue sDataOnlyInterfaceFlags[];

/**
 *=====================================================================
 *                Custom Data: FOREST_BIRDS_EYE Setting
 *=====================================================================
 */

extern CameraModeValue sSetForestBirdsEyeModeNormalData[];

extern CameraModeValue sSetForestBirdsEyeModeTalkData[];

/**
 *=====================================================================
 *                 Custom Data: SLOW_CHEST_CS Setting
 *=====================================================================
 */

// Also set to but unused by function Demo4
extern CameraModeValue sSetSlowChestCsModeNormalData[];

/**
 *=====================================================================
 *                     Custom Data: CS_3 Setting
 *=====================================================================
 */

extern CameraModeValue sSetCs3ModeNormalData[];

/**
 *=====================================================================
 *                 Custom Data: BEAN_GENERIC Setting
 *=====================================================================
 */

extern CameraModeValue sSetBeanGenericModeNormalData[];

extern CameraModeValue sSetBeanGenericModeTargetData[];

extern CameraModeValue sSetBeanGenericModeJumpData[];

extern CameraModeValue sSetBeanGenericModeHangData[];

extern CameraModeValue sSetBeanGenericModeHangZData[];

extern CameraModeValue sSetBeanGenericModeStillData[];

/**
 *=====================================================================
 *                Custom Data: BEAN_LOST_WOODS Setting
 *=====================================================================
 */

extern CameraModeValue sSetBeanLostWoodsModeNormalData[];

extern CameraModeValue sSetBeanLostWoodsModeTargetData[];

extern CameraModeValue sSetBeanLostWoodsModeJumpData[];

extern CameraModeValue sSetBeanLostWoodsModeHangData[];

extern CameraModeValue sSetBeanLostWoodsModeHangZData[];

extern CameraModeValue sSetBeanLostWoodsModeStillData[];

/**
 *=====================================================================
 *                 Custom Data: SCENE_UNUSED Setting
 *=====================================================================
 */

extern CameraModeValue sSetSceneUnusedModeNormalData[];

/**
 *=====================================================================
 *                Custom Data: SCENE_TRANSITION Setting
 *=====================================================================
 */

extern CameraModeValue sSetSceneTransitionModeNormalData[];

/**
 *=====================================================================
 *                   Custom Data: BIG_OCTO Setting
 *=====================================================================
 */

extern CameraModeValue sSetBigOctoModeNormalData[];

extern CameraModeValue sSetBigOctoModeBattleData[];

extern CameraModeValue sSetBigOctoModeStillData[];

/**
 *=====================================================================
 *               Custom Data: MEADOW_BIRDS_EYE Setting
 *=====================================================================
 */

extern CameraModeValue sSetMeadowBirdsEyeModeNormalData[];

extern CameraModeValue sSetMeadowBirdsEyeModeTargetData[];

extern CameraModeValue sSetMeadowBirdsEyeModeBattleData[];

extern CameraModeValue sSetMeadowBirdsEyeModeClimbData[];

/**
 *=====================================================================
 *                 Custom Data: MEADOW_UNUSED Setting
 *=====================================================================
 */

extern CameraModeValue sSetMeadowUnusedModeNormalData[];

extern CameraModeValue sSetMeadowUnusedModeTargetData[];

extern CameraModeValue sSetMeadowUnusedModeBattleData[];

extern CameraModeValue sSetMeadowUnusedModeClimbData[];

/**
 *=====================================================================
 *                Custom Data: FIRE_BIRDS_EYE Setting
 *=====================================================================
 */

extern CameraModeValue sSetFireBirdsEyeModeNormalData[];

extern CameraModeValue sSetFireBirdsEyeModeTargetData[];

extern CameraModeValue sSetFireBirdsEyeModeBattleData[];

extern CameraModeValue sSetFireBirdsEyeModeClimbData[];

/**
 *=====================================================================
 *                Custom Data: TURN_AROUND Setting
 *=====================================================================
 */

extern CameraModeValue sSetTurnAroundModeNormalData[];

/**
 *=====================================================================
 *                Custom Data: PIVOT_VERTICAL Setting
 *=====================================================================
 */

extern CameraModeValue sSetPivotVerticalModeNormalData[];

/**
 *=====================================================================
 *                 Custom Data: NORMAL2/4 Setting
 *=====================================================================
 */

extern CameraModeValue sSetNormal2and4ModeNormalData[];

/**
 *=====================================================================
 *                   Custom Data: FISHING Setting
 *=====================================================================
 */

extern CameraModeValue sSetFishingModeNormalData[];

extern CameraModeValue sSetFishingModeTargetData[];

extern CameraModeValue sSetFishingModeFollowTargetData[];

extern CameraModeValue sSetFishingModeTalkData[];

extern CameraModeValue sSetFishingModeFirstPersonData[];

extern CameraModeValue sSetFishingModeJumpData[];

extern CameraModeValue sSetFishingModeFreeFallData[];

extern CameraModeValue sSetFishingModeHangData[];

extern CameraModeValue sSetFishingModeHangZData[];

/**
 *=====================================================================
 *                   Custom Data: CS_C Setting
 *=====================================================================
 */

extern CameraModeValue sSetCsCModeNormalData[];

/**
 *=====================================================================
 *                   Custom Data: JABU_TENTACLE Setting
 *=====================================================================
 */

extern CameraModeValue sSetJabuTentacleModeNormalData[];

extern CameraModeValue sSetJabuTentacleModeBattleData[];

/**
 *=====================================================================
 *                   Custom Data: DUNGEON2 Setting
 *=====================================================================
 */

extern CameraModeValue sSetDungeon2ModeNormalData[];

extern CameraModeValue sSetDungeon2ModeTargetData[];

extern CameraModeValue sSetDungeon2ModeBattleData[];

extern CameraModeValue sSetDungeon2ModeJumpData[];

extern CameraModeValue sSetDungeon2ModeFreeFallData[];

extern CameraModeValue sSetDungeon2ModeClimbData[];

extern CameraModeValue sSetDungeon2ModeClimbZData[];

extern CameraModeValue sSetDungeon2ModeHangData[];

extern CameraModeValue sSetDungeon2ModeHangZData[];

extern CameraModeValue sSetDungeon2ModeStillData[];

extern CameraModeValue sSetDungeon2ModePushPullData[];

/**
 *=====================================================================
 *                 Custom Data: DIRECTED_YAW Setting
 *=====================================================================
 */

extern CameraModeValue sSetDirectedYawModeNormalData[];

extern CameraModeValue sSetDirectedYawModeFollowTargetData[];

extern CameraModeValue sSetDirectedYawModeTalkData[];

/**
 *=====================================================================
 *                   Custom Data: NORMAL4 Setting
 *=====================================================================
 */

extern CameraModeValue sNormal4ModeTalkData[];

/**
 * =====================================================================
 *    CAMERA SETTINGS: USAGE OF FUNCTIONS AND DATA FOR SPECIFIC MODES
 * =====================================================================
 */

#define CAM_SETTING_MODE_ENTRY(func, data) \
    { func, ARRAY_COUNT(data), data }

extern CameraMode sCamSetNormal0Modes[];

extern CameraMode sCamSetNormal1Modes[];

extern CameraMode sCamSetDungeon0Modes[];

extern CameraMode sCamSetDungeon1Modes[];

extern CameraMode sCamSetNormal3Modes[];

extern CameraMode sCamSetHorseModes[];

extern CameraMode sCamSetBossGohmaModes[];

extern CameraMode sCamSetBossDodongoModes[];

extern CameraMode sCamSetBossBarinadeModes[];

extern CameraMode sCamSetBossPhantomGanonModes[];

extern CameraMode sCamSetBossVolvagiaModes[];

extern CameraMode sCamSetBossBongoModes[];

extern CameraMode sCamSetBossMorphaModes[];

extern CameraMode sCamSetBossTwinrovaPlatformModes[];

extern CameraMode sCamSetBossTwinrovaFloorModes[];

extern CameraMode sCamSetBossGanondorfModes[];

extern CameraMode sCamSetBossGanonModes[];

extern CameraMode sCamSetTowerClimbModes[];

extern CameraMode sCamSetTowerUnusedModes[];

extern CameraMode sCamSetMarketBalconyModes[];

extern CameraMode sCamSetChuBowlingModes[];

extern CameraMode sCamSetPivotCrawlspaceModes[];

extern CameraMode sCamSetPivotShopBrowsingModes[];

extern CameraMode sCamSetPivotInFrontModes[];

extern CameraMode sCamSetPreRendFixedModes[];

extern CameraMode sCamSetPreRendPivotModes[];

extern CameraMode sCamSetPreRendSideScrollModes[];

extern CameraMode sCamSetDoor0Modes[];

extern CameraMode sCamSetDoorCModes[];

extern CameraMode sCamSetCrawlspaceModes[];

extern CameraMode sCamSetStart0Modes[];

extern CameraMode sCamSetStart1Modes[];

extern CameraMode sCamSetFree0Modes[];

extern CameraMode sCamSetFree1Modes[];

extern CameraMode sCamSetPivotCornerModes[];

extern CameraMode sCamSetPivotDivingModes[];

extern CameraMode sCamSetCs0Modes[];

extern CameraMode sCamSetCsTwistedHallwayModes[];

extern CameraMode sCamSetForestBirdsEyeModes[];

extern CameraMode sCamSetSlowChestCsModes[];

extern CameraMode sCamSetItemUnusedModes[];

extern CameraMode sCamSetCs3Modes[];

extern CameraMode sCamSetCsAttentionModes[];

extern CameraMode sCamSetBeanGenericModes[];

extern CameraMode sCamSetBeanLostWoodsModes[];

extern CameraMode sCamSetSceneUnusedModes[];

extern CameraMode sCamSetSceneTransitionModes[];

extern CameraMode sCamSetFirePlatformModes[];

extern CameraMode sCamSetFireStaircaseModes[];

extern CameraMode sCamSetForestUnusedModes[];

extern CameraMode sCamSetForestDefeatPoeModes[];

extern CameraMode sCamSetBigOctoModes[];

extern CameraMode sCamSetMeadowBirdsEyeModes[];

extern CameraMode sCamSetMeadowUnusedModes[];

extern CameraMode sCamSetFireBirdsEyeModes[];

extern CameraMode sCamSetTurnAroundModes[];

extern CameraMode sCamSetPivotVerticalModes[];

extern CameraMode sCamSetNorm2Modes[];

extern CameraMode sCamSetFishingModes[];

extern CameraMode sCamSetCsCModes[];

extern CameraMode sCamSetJabuTentacleModes[];

extern CameraMode sCamSetDungeon2Modes[];

extern CameraMode sCamSetDirectedYawModes[];

extern CameraMode sCamSetPivotFromSideModes[];

extern CameraMode sCamSetNormal4Modes[];

extern CameraSetting sCameraSettings[];

s32 Camera_Normal0(Camera* camera);
s32 Camera_Normal1(Camera* camera);
s32 Camera_Normal2(Camera* camera);
s32 Camera_Normal3(Camera* camera);
s32 Camera_Normal4(Camera* camera);
s32 Camera_Parallel0(Camera* camera);
s32 Camera_Parallel1(Camera* camera);
s32 Camera_Parallel2(Camera* camera);
s32 Camera_Parallel3(Camera* camera);
s32 Camera_Parallel4(Camera* camera);
s32 Camera_KeepOn0(Camera* camera);
s32 Camera_KeepOn1(Camera* camera);
s32 Camera_KeepOn2(Camera* camera);
s32 Camera_KeepOn3(Camera* camera);
s32 Camera_KeepOn4(Camera* camera);
s32 Camera_Subj0(Camera* camera);
s32 Camera_Subj1(Camera* camera);
s32 Camera_Subj2(Camera* camera);
s32 Camera_Subj3(Camera* camera);
s32 Camera_Subj4(Camera* camera);
s32 Camera_Jump0(Camera* camera);
s32 Camera_Jump1(Camera* camera);
s32 Camera_Jump2(Camera* camera);
s32 Camera_Jump3(Camera* camera);
s32 Camera_Jump4(Camera* camera);
s32 Camera_Battle0(Camera* camera);
s32 Camera_Battle1(Camera* camera);
s32 Camera_Battle2(Camera* camera);
s32 Camera_Battle3(Camera* camera);
s32 Camera_Battle4(Camera* camera);
s32 Camera_Fixed0(Camera* camera);
s32 Camera_Fixed1(Camera* camera);
s32 Camera_Fixed2(Camera* camera);
s32 Camera_Fixed3(Camera* camera);
s32 Camera_Fixed4(Camera* camera);
s32 Camera_Data0(Camera* camera);
s32 Camera_Data1(Camera* camera);
s32 Camera_Data2(Camera* camera);
s32 Camera_Data3(Camera* camera);
s32 Camera_Data4(Camera* camera);
s32 Camera_Unique0(Camera* camera);
s32 Camera_Unique1(Camera* camera);
s32 Camera_Unique2(Camera* camera);
s32 Camera_Unique3(Camera* camera);
s32 Camera_Unique4(Camera* camera);
s32 Camera_Unique5(Camera* camera);
s32 Camera_Unique6(Camera* camera);
s32 Camera_Unique7(Camera* camera);
s32 Camera_Unique8(Camera* camera);
s32 Camera_Unique9(Camera* camera);
s32 Camera_Demo0(Camera* camera);
s32 Camera_Demo1(Camera* camera);
s32 Camera_Demo2(Camera* camera);
s32 Camera_Demo3(Camera* camera);
s32 Camera_Demo4(Camera* camera);
s32 Camera_Demo5(Camera* camera);
s32 Camera_Demo6(Camera* camera);
s32 Camera_Demo7(Camera* camera);
s32 Camera_Demo8(Camera* camera);
s32 Camera_Demo9(Camera* camera);
s32 Camera_Special0(Camera* camera);
s32 Camera_Special1(Camera* camera);
s32 Camera_Special2(Camera* camera);
s32 Camera_Special3(Camera* camera);
s32 Camera_Special4(Camera* camera);
s32 Camera_Special5(Camera* camera);
s32 Camera_Special6(Camera* camera);
s32 Camera_Special7(Camera* camera);
s32 Camera_Special8(Camera* camera);
s32 Camera_Special9(Camera* camera);

extern s32 (*sCameraFunctions[])(Camera*);

extern s32 sInitRegs;

extern s32 gDbgCamEnabled;
extern s32 sDbgModeIdx;
extern s16 sNextUID;

extern s32 sCameraInterfaceFlags;

extern s32 sCameraInterfaceAlpha;
extern s32 sCameraShrinkWindowVal;
extern s32 D_8011D3AC;

extern s16 D_8011D3B0[];

extern s16 D_8011D3CC[];

extern s32 sUpdateCameraDirection;
extern s32 D_8011D3EC;
extern s32 D_8011D3F0;

extern s32 sDemo5PrevAction12Frame;

extern char sCameraFunctionNames[][8];

extern VecSph D_8011D658[];

extern Vec3f D_8011D678[];

/*******************************************************
 * OnePoint initalization values for Demo5
 ********************************************************/
extern s32 sDemo5PrevSfxFrame;

// target is player, far from eye
extern OnePointCsFull D_8011D6AC[];

// target is player close to current eye
extern OnePointCsFull D_8011D724[];

// target is close to player
extern OnePointCsFull D_8011D79C[];

// target is within 300 units of eye, and player is within 30 units of eye
extern OnePointCsFull D_8011D83C[];

// target is within 700 units of eye, angle between player/eye and target/eye is less than
// 76.9 degrees.  The x/y coordinates of the target on screen is between (21, 41) and (300, 200),
// and the player is farther than 30 units of the eye
extern OnePointCsFull D_8011D88C[];

// same as above, but the target is NOT within the screen area.
extern OnePointCsFull D_8011D8DC[];

// target is a door.
extern OnePointCsFull D_8011D954[];

// otherwise
extern OnePointCsFull D_8011D9F4[];

extern Vec3f D_8011DA6C[];

extern Vec3f D_8011DA9C[];

extern f32 D_8011DACC[];

extern f32 D_8011DADC[];

extern s16 D_8011DAEC[];

extern s16 D_8011DAFC[];

extern PlayState* D_8015BD7C;
extern DbCamera D_8015BD80;
extern CollisionPoly* playerFloorPoly;

#endif
