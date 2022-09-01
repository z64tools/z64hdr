#ifndef Z_DEBUG_DISPLAY_H
#define Z_DEBUG_DISPLAY_H

#include "global.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

typedef struct {
    /* 0x00 */ s16 drawType;  // indicates which draw function to use when displaying the object
    /* 0x04 */ void* drawArg; // segment address (display list or texture) passed to the draw function when called
} DebugDispObjectInfo;        // size = 0x8

typedef void (*DebugDispObject_DrawFunc)(DebugDispObject*, void*, PlayState*);

void DebugDisplay_DrawSpriteI8(DebugDispObject* dispObj, void* texture, PlayState* play);
void DebugDisplay_DrawPolygon(DebugDispObject* dispObj, void* dlist, PlayState* play);

extern DebugDispObject_DrawFunc sDebugObjectDrawFuncTable[];

extern DebugDispObjectInfo sDebugObjectInfoTable[];

extern Lights1 sDebugObjectLights;

extern DebugDispObject* sDebugObjectListHead;

void DebugDisplay_Init(void);

DebugDispObject* DebugDisplay_AddObject(f32 posX, f32 posY, f32 posZ, s16 rotX, s16 rotY, s16 rotZ, f32 scaleX,
                                        f32 scaleY, f32 scaleZ, u8 red, u8 green, u8 blue, u8 alpha, s16 type,
                                        GraphicsContext* gfxCtx);

void DebugDisplay_DrawObjects(PlayState* play);

void DebugDisplay_DrawSpriteI8(DebugDispObject* dispObj, void* texture, PlayState* play);

void DebugDisplay_DrawPolygon(DebugDispObject* dispObj, void* dlist, PlayState* play);

#endif
