#ifndef __Z_SCENE__
#define __Z_SCENE__

#include "global.h"
#include "vt.h"

extern RomFile sNaviMsgFiles[];

void* func_800982FC(ObjectContext* objectCtx, s32 bankIndex, s16 objectId);
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
void Scene_CommandMiscSettings(PlayState* play, SceneCmd* cmd);

extern RomFile sNaviMsgFiles[3];

extern u32 gObjectTableSize;

#endif // __Z_SCENE__
