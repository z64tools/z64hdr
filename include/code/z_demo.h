#ifndef __Z_DEMO__
#define __Z_DEMO__

#include "global.h"
#include "z64camera.h"
#include "assets/scenes/indoors/tokinoma/tokinoma_scene.h"
#include "assets/scenes/overworld/spot00/spot00_scene.h"
#include "assets/scenes/overworld/spot01/spot01_scene.h"
#include "assets/scenes/overworld/spot02/spot02_scene.h"
#include "assets/scenes/overworld/spot04/spot04_scene.h"
#include "assets/scenes/overworld/spot05/spot05_scene.h"
#include "assets/scenes/overworld/spot06/spot06_scene.h"
#include "assets/scenes/overworld/spot07/spot07_scene.h"
#include "assets/scenes/overworld/spot08/spot08_scene.h"
#include "assets/scenes/overworld/spot09/spot09_scene.h"
#include "assets/scenes/overworld/spot11/spot11_scene.h"
#include "assets/scenes/overworld/spot12/spot12_scene.h"
#include "assets/scenes/overworld/spot15/spot15_scene.h"
#include "assets/scenes/overworld/spot16/spot16_scene.h"
#include "assets/scenes/overworld/spot17/spot17_scene.h"
#include "assets/scenes/overworld/spot18/spot18_scene.h"
#include "assets/scenes/overworld/spot20/spot20_scene.h"
#include "assets/scenes/dungeons/bdan/bdan_scene.h"
#include "assets/scenes/dungeons/ddan/ddan_scene.h"
#include "assets/scenes/dungeons/ydan/ydan_scene.h"
#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"
#include "assets/scenes/dungeons/ganon_tou/ganon_tou_scene.h"
#include "assets/scenes/dungeons/jyasinboss/jyasinboss_scene.h"
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"
#include "assets/scenes/misc/hakaana_ouke/hakaana_ouke_scene.h"

extern u16 D_8011E1C0;
extern u16 D_8011E1C4;

typedef void (*CutsceneStateHandler)(PlayState*, CutsceneContext*);

void func_80064720(PlayState* play, CutsceneContext* csCtx);
void func_80064760(PlayState* play, CutsceneContext* csCtx);
void func_800647C0(PlayState* play, CutsceneContext* csCtx);
void func_80068C3C(PlayState* play, CutsceneContext* csCtx);
void func_80068D84(PlayState* play, CutsceneContext* csCtx);
void func_80068DC0(PlayState* play, CutsceneContext* csCtx);

extern CutsceneStateHandler sCsStateHandlers1[5];
extern CutsceneStateHandler sCsStateHandlers2[5];
extern u8 sTitleCsState;
extern EntranceCutscene sEntranceCutsceneTable[34];
extern void* D_8011E304[6];
extern s16 sReturnToCamId;
extern s16 sQuakeIndex;
extern u16 D_8015FCCC;
extern char D_8015FCD0[20];
extern u8 D_8015FCE4;

void func_80068ECC(PlayState* play, CutsceneContext* csCtx);
void Cutscene_DrawDebugInfo(PlayState* play, Gfx** dlist, CutsceneContext* csCtx);
void func_80064720(PlayState* play, CutsceneContext* csCtx);
u32 func_8006472C(PlayState* play, CutsceneContext* csCtx, f32 target);
void func_80064760(PlayState* play, CutsceneContext* csCtx);
void func_800647C0(PlayState* play, CutsceneContext* csCtx);
void func_80064824(PlayState* play, CutsceneContext* csCtx, CsCmdBase* cmd);
void Cutscene_Command_SetLighting(PlayState* play, CutsceneContext* csCtx, CsCmdEnvLighting* cmd);
void Cutscene_Command_PlayBGM(PlayState* play, CutsceneContext* csCtx, CsCmdMusicChange* cmd);
void Cutscene_Command_StopBGM(PlayState* play, CutsceneContext* csCtx, CsCmdMusicChange* cmd);
void Cutscene_Command_FadeBGM(PlayState* play, CutsceneContext* csCtx, CsCmdMusicFade* cmd);
void Cutscene_Command_09(PlayState* play, CutsceneContext* csCtx, CsCmdUnknown9* cmd);
void func_80065134(PlayState* play, CutsceneContext* csCtx, CsCmdDayTime* cmd);
void Cutscene_Command_Terminator(PlayState* play, CutsceneContext* csCtx, CsCmdBase* cmd);
void Cutscene_Command_TransitionFX(PlayState* play, CutsceneContext* csCtx, CsCmdBase* cmd);
s32 Cutscene_Command_CameraEyePoints(PlayState* play, CutsceneContext* csCtx, u8* cmd, u8 relativeToLink);
s32 Cutscene_Command_CameraLookAtPoints(PlayState* play, CutsceneContext* csCtx, u8* cmd, u8 relativeToLink);
s32 Cutscene_Command_07(PlayState* play, CutsceneContext* csCtx, u8* cmd, u8 unused);
s32 Cutscene_Command_08(PlayState* play, CutsceneContext* csCtx, u8* cmd, u8 unused);
void Cutscene_Command_Textbox(PlayState* play, CutsceneContext* csCtx, CsCmdTextbox* cmd);
void Cutscene_ProcessCommands(PlayState* play, CutsceneContext* csCtx, u8* cutscenePtr);
void func_80068C3C(PlayState* play, CutsceneContext* csCtx);
void func_80068D84(PlayState* play, CutsceneContext* csCtx);
void func_80068DC0(PlayState* play, CutsceneContext* csCtx);
void func_80068ECC(PlayState* play, CutsceneContext* csCtx);
void func_80069048(PlayState* play);
void func_8006907C(PlayState* play);

#endif // __Z_DEMO__
