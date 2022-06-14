typedef enum {
    /* 0x00 */ LIGHTNING_BOLT_START,
    /* 0x01 */ LIGHTNING_BOLT_WAIT,
    /* 0x02 */ LIGHTNING_BOLT_DRAW,
    /* 0xFF */ LIGHTNING_BOLT_INACTIVE = 0xFF
} LightningBoltState;

typedef struct {
    /* 0x00 */ s32 mantissa;
    /* 0x04 */ s32 exponent;
} ZBufValConversionEntry;

extern ZBufValConversionEntry sZBufValConversionTable[1];

extern u16 sSunScreenDepth;

typedef struct {
    /* 0x00 */ u16 startTime;
    /* 0x02 */ u16 endTime;
    /* 0x04 */ u8 lightSetting;
    /* 0x05 */ u8 nextLightSetting;
} TimeBasedLightEntry;

extern TimeBasedLightEntry sTimeBasedLightConfigs[5][7];
extern u8 sSandstormColorIndex;
extern u8 sNextSandstormColorIndex;
extern f32 sSandstormLerpScale;
extern s16 gLensFlareUnused;

typedef struct {
    /* 0x00 */ u8 state;
    /* 0x04 */ Vec3f offset;
    /* 0x10 */ Vec3f pos;
    /* 0x1C */ s8 pitch;
    /* 0x1D */ s8 roll;
    /* 0x1E */ u8 textureIndex;
    /* 0x1F */ u8 delayTimer;
} LightningBolt;

extern LightningBolt sLightningBolts[3];
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

void Environment_UpdateStorm(EnvironmentContext* envCtx, u8 unused);
void Environment_PrintDebugInfo(PlayState* play, Gfx** gfx);
void Environment_PlayTimeBasedSequence(PlayState* play);
void Environment_UpdateRain(PlayState* play);

extern f32 sLensFlareScales[10];

typedef enum {
    /* 0 */ LENS_FLARE_CIRCLE0,
    /* 1 */ LENS_FLARE_CIRCLE1,
    /* 2 */ LENS_FLARE_RING
} LensFlareType;

f32 Environment_RandCentered(void);
void Environment_DrawLightningFlash(PlayState* play, u8 red, u8 green, u8 blue, u8 alpha);
void Environment_PlayTimeBasedSequence(PlayState* play);
void Environment_UpdateRain(PlayState* play);