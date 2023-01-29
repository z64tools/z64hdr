#ifndef Z64_PATH_H
#define Z64_PATH_H

#include "global.h"

Path* Path_GetByIndex(PlayState* play, s16 index, s16 max);

f32 Path_OrientAndGetDistSq(Actor* actor, Path* path, s16 waypoint, s16* yaw);

void Path_CopyLastPoint(Path* path, Vec3f* dest);

#endif
