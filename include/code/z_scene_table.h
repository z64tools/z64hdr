extern Gfx sDefaultDisplayList[24];

void Scene_DrawConfigDefault(PlayState* play);

extern void* D_8012A2F8[2];

void Scene_DrawConfigYdan(PlayState* play);
void Scene_DrawConfigYdanBoss(PlayState* play);

extern void* gDCEntranceTextures[2];
extern void* sDCLavaFloorTextures[8];

void Scene_DrawConfigDdan(PlayState* play);
void Scene_DrawConfigTokinoma(PlayState* play);
void Scene_DrawConfigKakusiana(PlayState* play);
void Scene_DrawConfigKenjyanoma(PlayState* play);
void Scene_DrawConfigGreatFairyFountain(PlayState* play);
void Scene_DrawConfigGraveExitLightShining(PlayState* play);
void Scene_DrawConfigFairyFountain(PlayState* play);
void Scene_DrawConfigHakadan(PlayState* play);

extern void* sThievesHideoutEntranceTextures[2];

void Scene_DrawConfigGerudoway(PlayState* play);

extern void* D_8012A330[2];

void Scene_DrawConfigMizusin(PlayState* play);
void Scene_DrawConfigMizusinBs(PlayState* play);
void Scene_DrawConfigSyatekijyou(PlayState* play);
void Scene_DrawConfigHairalNiwa(PlayState* play);
void Scene_DrawConfigGanonCastleExterior(PlayState* play);
void func_8009BEEC(PlayState* play);
void Scene_DrawConfigGanonFinal(PlayState* play);

extern void* sIceCavernEntranceTextures[2];

void Scene_DrawConfigIceDoukuto(PlayState* play);
void Scene_DrawConfigHakaanaOuke(PlayState* play);
void Scene_DrawConfigHyliaLabo(PlayState* play);
void Scene_DrawConfigCalmWater(PlayState* play);

extern void* sGTGEntranceTextures[2];

void Scene_DrawConfigMen(PlayState* play);
Gfx* Gfx_TwoTexScrollPrimColor(GraphicsContext* gfxCtx, s32 tile1, u32 x1, u32 y1, s32 width1, s32 height1, s32 tile2, u32 x2, u32 y2, s32 width2, s32 height2, s32 r, s32 g, s32 b, s32 a);
void Scene_DrawConfigTuribori(PlayState* play);
void Scene_DrawConfigBowling(PlayState* play);

extern void* sLonLonHouseEntranceTextures[2];

void Scene_DrawConfigSouko(PlayState* play);

extern void* sGuardHouseView2Textures[2];
extern void* sGuardHouseView1Textures[2];

void Scene_DrawConfigMiharigoya(PlayState* play);
void Scene_DrawConfigMahouya(PlayState* play);

extern void* sForestTempleEntranceTextures[2];

void Scene_DrawConfigBmori1(PlayState* play);

extern void* sSpiritTempleEntranceTextures[2];

void Scene_DrawConfigJyasinzou(PlayState* play);
void Scene_DrawConfigSpot00(PlayState* play);

extern void* sKakarikoWindowTextures[2];

void Scene_DrawConfigSpot01(PlayState* play);
void Scene_DrawConfigSpot03(PlayState* play);
void Scene_DrawConfigSpot04(PlayState* play);
void Scene_DrawConfigSpot06(PlayState* play);

extern void* sZorasDomainEntranceTextures[2];

void Scene_DrawConfigSpot07(PlayState* play);
void Scene_DrawConfigSpot08(PlayState* play);
void Scene_DrawConfigSpot09(PlayState* play);
void Scene_DrawConfigSpot10(PlayState* play);
void Scene_DrawConfigSpot11(PlayState* play);

extern void* D_8012A380[2];

void Scene_DrawConfigSpot12(PlayState* play);
void Scene_DrawConfigSpot13(PlayState* play);
void Scene_DrawConfigSpot15(PlayState* play);
void Scene_DrawConfigSpot16(PlayState* play);
void Scene_DrawConfigSpot17(PlayState* play);

extern void* sGoronCityEntranceTextures[2];

void Scene_DrawConfigSpot18(PlayState* play);

extern void* sLonLonRanchWindowTextures[2];

void Scene_DrawConfigSpot20(PlayState* play);
void Scene_DrawConfigHidan(PlayState* play);

extern f32 D_8012A398;

void Scene_DrawConfigBdan(PlayState* play);
void Scene_DrawConfigGanontika(PlayState* play);
void Scene_DrawConfigGanontikaSonogo(PlayState* play);
void Scene_DrawConfigGanonSonogo(PlayState* play);
void Scene_DrawConfigBesitu(PlayState* play);

extern void (*sSceneDrawConfigs[SDC_MAX]);