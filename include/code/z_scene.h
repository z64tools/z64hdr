#ifndef Z_SCENE_H
#define Z_SCENE_H

#include "global.h"
#include "vt.h"

extern RomFile sNaviMsgFiles[];

s32 Object_Spawn(ObjectContext* objectCtx, s16 objectId);

void Object_InitBank(PlayState* play, ObjectContext* objectCtx);

void Object_UpdateBank(ObjectContext* objectCtx);

s32 Object_GetIndex(ObjectContext* objectCtx, s16 objectId);

s32 Object_IsLoaded(ObjectContext* objectCtx, s32 bankIndex);

void func_800981B8(ObjectContext* objectCtx);

void* func_800982FC(ObjectContext* objectCtx, s32 bankIndex, s16 objectId);

s32 Scene_ExecuteCommands(PlayState* play, SceneCmd* sceneCmd);

void Scene_CommandSpawnList(PlayState* play, SceneCmd* cmd);

void Scene_CommandActorList(PlayState* play, SceneCmd* cmd);

void Scene_CommandUnused2(PlayState* play, SceneCmd* cmd);

void Scene_CommandCollisionHeader(PlayState* play, SceneCmd* cmd);

void Scene_CommandRoomList(PlayState* play, SceneCmd* cmd);

void Scene_CommandEntranceList(PlayState* play, SceneCmd* cmd);

void Scene_CommandSpecialFiles(PlayState* play, SceneCmd* cmd);

void Scene_CommandRoomBehavior(PlayState* play, SceneCmd* cmd);

void Scene_CommandMeshHeader(PlayState* play, SceneCmd* cmd);

void Scene_CommandObjectList(PlayState* play, SceneCmd* cmd);

void Scene_CommandLightList(PlayState* play, SceneCmd* cmd);

void Scene_CommandPathList(PlayState* play, SceneCmd* cmd);

void Scene_CommandTransitionActorList(PlayState* play, SceneCmd* cmd);

void TransitionActor_InitContext(GameState* state, TransitionActorContext* transiActorCtx);

void Scene_CommandLightSettingsList(PlayState* play, SceneCmd* cmd);

void Scene_CommandSkyboxSettings(PlayState* play, SceneCmd* cmd);

void Scene_CommandSkyboxDisables(PlayState* play, SceneCmd* cmd);

void Scene_CommandTimeSettings(PlayState* play, SceneCmd* cmd);

void Scene_CommandWindSettings(PlayState* play, SceneCmd* cmd);

void Scene_CommandExitList(PlayState* play, SceneCmd* cmd);

void Scene_CommandUndefined9(PlayState* play, SceneCmd* cmd);

void Scene_CommandSoundSettings(PlayState* play, SceneCmd* cmd);

void Scene_CommandEchoSettings(PlayState* play, SceneCmd* cmd);

void Scene_CommandAlternateHeaderList(PlayState* play, SceneCmd* cmd);

void Scene_CommandCutsceneData(PlayState* play, SceneCmd* cmd);

// Camera & World Map Area
void Scene_CommandMiscSettings(PlayState* play, SceneCmd* cmd);

extern void (*gSceneCmdHandlers[SCENE_CMD_ID_MAX])(PlayState*, SceneCmd*);

extern RomFile sNaviMsgFiles[];

extern s16 gLinkObjectIds[];

extern u32 gObjectTableSize;

// Object linker symbol declarations (used in the table below)
#define DEFINE_OBJECT(name, _1) DECLARE_ROM_SEGMENT(name)
#define DEFINE_OBJECT_NULL(_0, _1)
#define DEFINE_OBJECT_UNSET(_0)

// #include "tables/..."

#undef DEFINE_OBJECT
#undef DEFINE_OBJECT_NULL
#undef DEFINE_OBJECT_UNSET

// Object Table definition
#define DEFINE_OBJECT(name, _1) ROM_FILE(name),
#define DEFINE_OBJECT_NULL(name, _1) ROM_FILE_EMPTY(name),
#define DEFINE_OBJECT_UNSET(_0) { 0 },

extern RomFile gObjectTable[];

#undef DEFINE_OBJECT
#undef DEFINE_OBJECT_NULL
#undef DEFINE_OBJECT_UNSET

#endif
