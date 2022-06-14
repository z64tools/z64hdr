#ifndef __Z_LIGHTS__
#define __Z_LIGHTS__

#include "global.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#define LIGHTS_BUFFER_SIZE 32

typedef struct {
    /* 0x000 */ s32 numOccupied;
    /* 0x004 */ s32 searchIndex;
    /* 0x008 */ LightNode buf[LIGHTS_BUFFER_SIZE];
} LightsBuffer;

extern LightsBuffer sLightsBuffer;

Light* Lights_FindSlot(Lights* lights);
void Lights_BindPoint(Lights* lights, LightParams* params, Vec3f* vec);
void Lights_BindDirectional(Lights* lights, LightParams* params, Vec3f* vec);
LightNode* Lights_FindBufSlot();
s32 Lights_FreeNode(LightNode* light);

#endif // __Z_LIGHTS__
