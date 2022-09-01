#ifndef Z_DEMO_H
#define Z_DEMO_H

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

extern CutsceneStateHandler sCsStateHandlers1[];

extern CutsceneStateHandler sCsStateHandlers2[];

extern u8 sTitleCsState;

extern EntranceCutscene sEntranceCutsceneTable[];

// Unused, seems to be an early list of dungeon entrance cutscene locations
extern void* D_8011E304[];

extern u16 D_8015FCC0;
extern u16 D_8015FCC2;
extern u16 D_8015FCC4;
extern s16 sReturnToCamId;
extern u8 D_8015FCC8;
extern s16 sQuakeIndex;
extern u16 D_8015FCCC;      // only written to, never read
extern char D_8015FCD0[20]; // unreferenced
extern u8 D_8015FCE4;       // only written to, never read

void func_80068ECC(PlayState* play, CutsceneContext* csCtx);

void Cutscene_DrawDebugInfo(PlayState* play, Gfx** dlist, CutsceneContext* csCtx);

void func_8006450C(PlayState* play, CutsceneContext* csCtx);

void func_80064520(PlayState* play, CutsceneContext* csCtx);

void func_80064534(PlayState* play, CutsceneContext* csCtx);

void func_80064558(PlayState* play, CutsceneContext* csCtx);

void func_800645A0(PlayState* play, CutsceneContext* csCtx);

void func_80064720(PlayState* play, CutsceneContext* csCtx);

u32 func_8006472C(PlayState* play, CutsceneContext* csCtx, f32 target);

void func_80064760(PlayState* play, CutsceneContext* csCtx);

void func_800647C0(PlayState* play, CutsceneContext* csCtx);

// Command 3: Misc. Actions
void func_80064824(PlayState* play, CutsceneContext* csCtx, CsCmdBase* cmd);

// Command 4: Set Environment Lighting
void Cutscene_Command_SetLighting(PlayState* play, CutsceneContext* csCtx, CsCmdEnvLighting* cmd);

// Command 0x56: Play Background Music
void Cutscene_Command_PlayBGM(PlayState* play, CutsceneContext* csCtx, CsCmdMusicChange* cmd);

// Command 0x57: Stop Background Music
void Cutscene_Command_StopBGM(PlayState* play, CutsceneContext* csCtx, CsCmdMusicChange* cmd);

// Command 0x7C: Fade Background Music over duration
void Cutscene_Command_FadeBGM(PlayState* play, CutsceneContext* csCtx, CsCmdMusicFade* cmd);

// Command 9: ?
void Cutscene_Command_09(PlayState* play, CutsceneContext* csCtx, CsCmdUnknown9* cmd);

// Command 0x8C: Set Time of Day & Environment Time
void func_80065134(PlayState* play, CutsceneContext* csCtx, CsCmdDayTime* cmd);

// Command 0x3E8: Code Execution (& Terminates Cutscene?)
void Cutscene_Command_Terminator(PlayState* play, CutsceneContext* csCtx, CsCmdBase* cmd);

// Command 0x2D: Transition Effects
void Cutscene_Command_TransitionFX(PlayState* play, CutsceneContext* csCtx, CsCmdBase* cmd);

// Command 0x1 & 0x5: Camera Eye Points
s32 Cutscene_Command_CameraEyePoints(PlayState* play, CutsceneContext* csCtx, u8* cmd, u8 relativeToLink);

// Command 0x2 & 0x6: Camera At Points
s32 Cutscene_Command_CameraLookAtPoints(PlayState* play, CutsceneContext* csCtx, u8* cmd, u8 relativeToLink);

// Command 0x7: ? (Related to camera positons)
s32 Cutscene_Command_07(PlayState* play, CutsceneContext* csCtx, u8* cmd, u8 unused);

// Command 0x8: ? (Related to camera focus points)
s32 Cutscene_Command_08(PlayState* play, CutsceneContext* csCtx, u8* cmd, u8 unused);

// Command 0x13: Textbox
void Cutscene_Command_Textbox(PlayState* play, CutsceneContext* csCtx, CsCmdTextbox* cmd);

void Cutscene_ProcessCommands(PlayState* play, CutsceneContext* csCtx, u8* cutscenePtr);

void func_80068C3C(PlayState* play, CutsceneContext* csCtx);

void func_80068D84(PlayState* play, CutsceneContext* csCtx);

void func_80068DC0(PlayState* play, CutsceneContext* csCtx);

void func_80068ECC(PlayState* play, CutsceneContext* csCtx);

void func_80069048(PlayState* play);

void func_8006907C(PlayState* play);

void Cutscene_HandleEntranceTriggers(PlayState* play);

void Cutscene_HandleConditionalTriggers(PlayState* play);

void Cutscene_SetSegment(PlayState* play, void* segment);

#endif
