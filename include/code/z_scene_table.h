#ifndef Z_SCENE_TABLE_H
#define Z_SCENE_TABLE_H

#include "global.h"

#include "assets/scenes/overworld/spot00/spot00_scene.h"
#include "assets/scenes/overworld/spot00/spot00_room_0.h"
#include "assets/scenes/overworld/spot01/spot01_scene.h"
#include "assets/scenes/overworld/spot07/spot07_scene.h"
#include "assets/scenes/overworld/spot12/spot12_scene.h"
#include "assets/scenes/overworld/spot16/spot16_scene.h"
#include "assets/scenes/overworld/spot16/spot16_room_0.h"
#include "assets/scenes/overworld/spot18/spot18_scene.h"
#include "assets/scenes/overworld/spot20/spot20_scene.h"
#include "assets/scenes/overworld/souko/souko_scene.h"

#include "assets/scenes/dungeons/men/men_scene.h"
#include "assets/scenes/dungeons/ddan/ddan_scene.h"
#include "assets/scenes/dungeons/ydan/ydan_scene.h"
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"
#include "assets/scenes/dungeons/gerudoway/gerudoway_scene.h"
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"
#include "assets/scenes/indoors/miharigoya/miharigoya_scene.h"
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"

#include "overlays/actors/ovl_Bg_Dodoago/z_bg_dodoago.h"

// Entrance Table definition
#define DEFINE_ENTRANCE(_0, scene, spawn, continueBgm, displayTitleCard, fadeIn, fadeOut) \
    { scene, spawn,                                                                       \
      ((continueBgm & 1) << 15) | ((displayTitleCard & 1) << 14) | ((fadeIn & 0x7F) << 7) | (fadeOut & 0x7F) },

extern EntranceInfo gEntranceTable[];

#undef DEFINE_ENTRANCE

// Linker symbol declarations (used in the table below)
#define DEFINE_SCENE(name, title, _2, _3, _4, _5) \
    DECLARE_ROM_SEGMENT(name)                     \
    DECLARE_ROM_SEGMENT(title)

// #include "tables/..."

#undef DEFINE_SCENE

// Scene Table definition
#define DEFINE_SCENE(name, title, _2, drawConfig, unk_10, unk_12) \
    { ROM_FILE(name), ROM_FILE(title), unk_10, drawConfig, unk_12, 0 },

// Handle `none` as a special case for scenes without a title card
#define _noneSegmentRomStart NULL
#define _noneSegmentRomEnd NULL

extern SceneTableEntry gSceneTable[];

#undef _noneSegmentRomStart
#undef _noneSegmentRomEnd

#undef DEFINE_SCENE

extern Gfx sDefaultDisplayList[];

void Scene_SetTransitionForNextEntrance(PlayState* play);

void Scene_DrawConfigDefault(PlayState* play);

extern void* D_8012A2F8[];

void Scene_DrawConfigYdan(PlayState* play);

void Scene_DrawConfigYdanBoss(PlayState* play);

extern void* gDCEntranceTextures[];
extern void* sDCLavaFloorTextures[];

void Scene_DrawConfigDdan(PlayState* play);

void Scene_DrawConfigTokinoma(PlayState* play);

void Scene_DrawConfigKakusiana(PlayState* play);

void Scene_DrawConfigKenjyanoma(PlayState* play);

void Scene_DrawConfigGreatFairyFountain(PlayState* play);

void Scene_DrawConfigGraveExitLightShining(PlayState* play);

void Scene_DrawConfigFairyFountain(PlayState* play);

void Scene_DrawConfigHakadan(PlayState* play);

extern void* sThievesHideoutEntranceTextures[];

void Scene_DrawConfigGerudoway(PlayState* play);

extern void* D_8012A330[];

void Scene_DrawConfigMizusin(PlayState* play);

void Scene_DrawConfigMizusinBs(PlayState* play);

void Scene_DrawConfigSyatekijyou(PlayState* play);

void Scene_DrawConfigHairalNiwa(PlayState* play);

void Scene_DrawConfigGanonCastleExterior(PlayState* play);

// Screen Shake for Ganon's Tower Collapse
void func_8009BEEC(PlayState* play);

void Scene_DrawConfigGanonFinal(PlayState* play);

extern void* sIceCavernEntranceTextures[];

void Scene_DrawConfigIceDoukuto(PlayState* play);

void Scene_DrawConfigHakaanaOuke(PlayState* play);

void Scene_DrawConfigHyliaLabo(PlayState* play);

void Scene_DrawConfigCalmWater(PlayState* play);

extern void* sGTGEntranceTextures[];

void Scene_DrawConfigMen(PlayState* play);

Gfx* Gfx_TwoTexScrollPrimColor(GraphicsContext* gfxCtx, s32 tile1, u32 x1, u32 y1, s32 width1, s32 height1, s32 tile2,
                               u32 x2, u32 y2, s32 width2, s32 height2, s32 r, s32 g, s32 b, s32 a);

void Scene_DrawConfigTuribori(PlayState* play);

void Scene_DrawConfigBowling(PlayState* play);

extern void* sLonLonHouseEntranceTextures[];

void Scene_DrawConfigSouko(PlayState* play);

extern void* sGuardHouseView2Textures[];
extern void* sGuardHouseView1Textures[];

void Scene_DrawConfigMiharigoya(PlayState* play);

void Scene_DrawConfigMahouya(PlayState* play);

extern void* sForestTempleEntranceTextures[];

void Scene_DrawConfigBmori1(PlayState* play);

extern void* sSpiritTempleEntranceTextures[];

void Scene_DrawConfigJyasinzou(PlayState* play);

void Scene_DrawConfigSpot00(PlayState* play);

extern void* sKakarikoWindowTextures[];

void Scene_DrawConfigSpot01(PlayState* play);

void Scene_DrawConfigSpot03(PlayState* play);

void Scene_DrawConfigSpot04(PlayState* play);

void Scene_DrawConfigSpot06(PlayState* play);

extern void* sZorasDomainEntranceTextures[];

void Scene_DrawConfigSpot07(PlayState* play);

void Scene_DrawConfigSpot08(PlayState* play);

void Scene_DrawConfigSpot09(PlayState* play);

void Scene_DrawConfigSpot10(PlayState* play);

void Scene_DrawConfigSpot11(PlayState* play);

extern void* D_8012A380[];

void Scene_DrawConfigSpot12(PlayState* play);

void Scene_DrawConfigSpot13(PlayState* play);

void Scene_DrawConfigSpot15(PlayState* play);

void Scene_DrawConfigSpot16(PlayState* play);

void Scene_DrawConfigSpot17(PlayState* play);

extern void* sGoronCityEntranceTextures[];

void Scene_DrawConfigSpot18(PlayState* play);

extern void* sLonLonRanchWindowTextures[];

void Scene_DrawConfigSpot20(PlayState* play);

void Scene_DrawConfigHidan(PlayState* play);

extern f32 D_8012A398;

void Scene_DrawConfigBdan(PlayState* play);

void Scene_DrawConfigGanontika(PlayState* play);

void Scene_DrawConfigGanontikaSonogo(PlayState* play);

void Scene_DrawConfigGanonSonogo(PlayState* play);

void Scene_DrawConfigBesitu(PlayState* play);

extern void (*sSceneDrawConfigs[SDC_MAX])(PlayState*);

void Scene_Draw(PlayState* play);

#endif
