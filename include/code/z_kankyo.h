#ifndef Z64_KANKYO_H
#define Z64_KANKYO_H

#include "global.h"
#include "ultra64.h"
#include "vt.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/objects/gameplay_field_keep/gameplay_field_keep.h"

typedef enum {
    /* 0x00 */ LIGHTNING_BOLT_START,
    /* 0x01 */ LIGHTNING_BOLT_WAIT,
    /* 0x02 */ LIGHTNING_BOLT_DRAW,
    /* 0xFF */ LIGHTNING_BOLT_INACTIVE = 0xFF
} LightningBoltState;

typedef struct {
    /* 0x00 */ s32 mantissa;
    /* 0x04 */ s32 exponent;
} ZBufValConversionEntry; // size = 0x8

extern ZBufValConversionEntry sZBufValConversionTable[1 << 3];

extern u8 gWeatherMode; // "E_wether_flg"

extern u8 gLightConfigAfterUnderwater;

extern u8 gInterruptSongOfStorms;

// Indicates whether the skybox is changing to a different index of the same config (based on time)
extern u8 gSkyboxIsChanging;

// how many units of time that pass every update
extern u16 gTimeSpeed;

extern u16 sSunScreenDepth;

typedef struct {
    /* 0x00 */ u16 startTime;
    /* 0x02 */ u16 endTime;
    /* 0x04 */ u8 lightSetting;
    /* 0x05 */ u8 nextLightSetting;
} TimeBasedLightEntry; // size = 0x6

extern TimeBasedLightEntry sTimeBasedLightConfigs[][7];

extern TimeBasedSkyboxEntry gTimeBasedSkyboxConfigs[][9];

extern SkyboxFile gNormalSkyFiles[];

extern u8 sSandstormColorIndex;
extern u8 sNextSandstormColorIndex;
extern f32 sSandstormLerpScale;

extern u8 gCustomLensFlareOn;
extern Vec3f gCustomLensFlarePos;
extern s16 gLensFlareUnused;
extern s16 gLensFlareScale;
extern f32 gLensFlareColorIntensity;
extern s16 gLensFlareGlareStrength;

typedef struct {
    /* 0x00 */ u8 state;
    /* 0x04 */ Vec3f offset;
    /* 0x10 */ Vec3f pos;
    /* 0x1C */ s8 pitch;
    /* 0x1D */ s8 roll;
    /* 0x1E */ u8 textureIndex;
    /* 0x1F */ u8 delayTimer;
} LightningBolt; // size = 0x20

extern LightningBolt sLightningBolts[3];

extern LightningStrike gLightningStrike;

extern s16 sLightningFlashAlpha;

extern s16 sSunDepthTestX;
extern s16 sSunDepthTestY;

extern LightNode* sNGameOverLightNode;
extern LightInfo sNGameOverLightInfo;
extern LightNode* sSGameOverLightNode;
extern LightInfo sSGameOverLightInfo;
extern u8 sGameOverLightsIntensity;
extern u16 sSandstormScroll;

#define ZBUFVAL_EXPONENT(v) (((v) >> 15) & 7)
#define ZBUFVAL_MANTISSA(v) (((v) >> 4) & 0x7FF)

/**
 * Convert an 18-bits Z buffer value to a fixed point 15.3 value
 *
 * zBufferVal is 18 bits:
 *   3: Exponent of z value
 *  11: Mantissa of z value
 *   4: dz value (unused)
 */
s32 Environment_ZBufValToFixedPoint(s32 zBufferVal);

u16 Environment_GetPixelDepth(s32 x, s32 y);

void Environment_GraphCallback(GraphicsContext* gfxCtx, void* param);

void Environment_Init(PlayState* play2, EnvironmentContext* envCtx, s32 unused);

u8 Environment_SmoothStepToU8(u8* pvalue, u8 target, u8 scale, u8 step, u8 minStep);

u8 Environment_SmoothStepToS8(s8* pvalue, s8 target, u8 scale, u8 step, u8 minStep);

f32 Environment_LerpWeight(u16 max, u16 min, u16 val);

f32 Environment_LerpWeightAccelDecel(u16 endFrame, u16 startFrame, u16 curFrame, u16 accelDuration, u16 decelDuration);

void Environment_UpdateStorm(EnvironmentContext* envCtx, u8 unused);

void Environment_UpdateSkybox(u8 skyboxId, EnvironmentContext* envCtx, SkyboxContext* skyboxCtx);

void Environment_EnableUnderwaterLights(PlayState* play, s32 waterLightsIndex);

void Environment_DisableUnderwaterLights(PlayState* play);

void Environment_PrintDebugInfo(PlayState* play, Gfx** gfx);

void Environment_PlayTimeBasedSequence(PlayState* play);
void Environment_UpdateRain(PlayState* play);

void Environment_Update(PlayState* play, EnvironmentContext* envCtx, LightContext* lightCtx, PauseContext* pauseCtx,
                        MessageContext* msgCtx, GameOverContext* gameOverCtx, GraphicsContext* gfxCtx);

void Environment_DrawSunAndMoon(PlayState* play);

void Environment_DrawSunLensFlare(PlayState* play, EnvironmentContext* envCtx, View* view, GraphicsContext* gfxCtx,
                                  Vec3f pos, s32 unused);

extern f32 sLensFlareScales[];

typedef enum {
    /* 0 */ LENS_FLARE_CIRCLE0,
    /* 1 */ LENS_FLARE_CIRCLE1,
    /* 2 */ LENS_FLARE_RING
} LensFlareType;

void Environment_DrawLensFlare(PlayState* play, EnvironmentContext* envCtx, View* view, GraphicsContext* gfxCtx,
                               Vec3f pos, s32 unused, s16 scale, f32 colorIntensity, s16 glareStrength, u8 isSun);

f32 Environment_RandCentered(void);

void Environment_DrawRain(PlayState* play, View* view, GraphicsContext* gfxCtx);

void Environment_ChangeLightSetting(PlayState* play, u32 lightSetting);

/**
 * Draw color filters over the skybox. There are two filters.
 * The first uses the global fog color, and an alpha calculated with `fogNear`.
 * This filter draws unconditionally for skybox 29 at full alpha.
 * (note: skybox 29 is unused in the original game)
 * For the rest of the skyboxes it will draw if fogNear is less than 980.
 *
 * The second filter uses a custom color specified in `skyboxFilterColor`
 * and can be enabled with `customSkyboxFilter`.
 *
 * An example usage of a filter is to dim the skybox in cloudy conditions.
 */
void Environment_DrawSkyboxFilters(PlayState* play);

void Environment_DrawLightningFlash(PlayState* play, u8 red, u8 green, u8 blue, u8 alpha);

void Environment_UpdateLightningStrike(PlayState* play);

/**
 * Request the number of lightning bolts specified by `num`
 * Note: only 3 lightning bolts can be active at the same time.
 */
void Environment_AddLightningBolts(PlayState* play, u8 num);

/**
 * Draw any active lightning bolt entries contained in `sLightningBolts`
 */
void Environment_DrawLightning(PlayState* play, s32 unused);

void Environment_PlaySceneSequence(PlayState* play);

void Environment_PlayTimeBasedSequence(PlayState* play);

void Environment_DrawCustomLensFlare(PlayState* play);

void Environment_InitGameOverLights(PlayState* play);

void Environment_FadeInGameOverLights(PlayState* play);

void Environment_FadeOutGameOverLights(PlayState* play);

void Environment_UpdateRain(PlayState* play);

void Environment_FillScreen(GraphicsContext* gfxCtx, u8 red, u8 green, u8 blue, u8 alpha, u8 drawFlags);

extern Color_RGB8 sSandstormPrimColors[];

extern Color_RGB8 sSandstormEnvColors[];

void Environment_DrawSandstorm(PlayState* play, u8 sandstormState);

void Environment_AdjustLights(PlayState* play, f32 arg1, f32 arg2, f32 arg3, f32 arg4);

s32 Environment_GetBgsDayCount(void);

void Environment_ClearBgsDayCount(void);

s32 Environment_GetTotalDays(void);

void Environment_ForcePlaySequence(u16 seqId);

s32 Environment_IsForcedSequenceDisabled(void);

void Environment_PlayStormNatureAmbience(PlayState* play);

void Environment_StopStormNatureAmbience(PlayState* play);

void Environment_WarpSongLeave(PlayState* play);

#endif
