#ifndef __Z_DEBUG_DISPLAY__
#define __Z_DEBUG_DISPLAY__

#include "global.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

typedef struct {
    /* 0x00 */ s16 drawType;  // indicates which draw function to use when displaying the object
    /* 0x04 */ void* drawArg; // segment address (display list or texture) passed to the draw function when called
} DebugDispObjectInfo;

typedef void (*DebugDispObject_DrawFunc)(DebugDispObject*, void*, PlayState*);

void DebugDisplay_DrawSpriteI8(DebugDispObject* dispObj, void* texture, PlayState* play);
void DebugDisplay_DrawPolygon(DebugDispObject* dispObj, void* dlist, PlayState* play);
static Lights1 sDebugObjectLights = gdSPDefLights1(128, 128, 128, 255, 255, 255, 73, 73, 73);
void DebugDisplay_DrawSpriteI8(DebugDispObject* dispObj, void* texture, PlayState* play);
void DebugDisplay_DrawPolygon(DebugDispObject* dispObj, void* dlist, PlayState* play);

#endif // __Z_DEBUG_DISPLAY__
