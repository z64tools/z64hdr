#ifndef Z_LIGHTS_H
#define Z_LIGHTS_H

#include "global.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define LIGHTS_BUFFER_SIZE 32

typedef struct {
    /* 0x000 */ s32 numOccupied;
    /* 0x004 */ s32 searchIndex;
    /* 0x008 */ LightNode buf[LIGHTS_BUFFER_SIZE];
} LightsBuffer; // size = 0x188

extern LightsBuffer sLightsBuffer;

void Lights_PointSetInfo(LightInfo* info, s16 x, s16 y, s16 z, u8 r, u8 g, u8 b, s16 radius, s32 type);

void Lights_PointNoGlowSetInfo(LightInfo* info, s16 x, s16 y, s16 z, u8 r, u8 g, u8 b, s16 radius);

void Lights_PointGlowSetInfo(LightInfo* info, s16 x, s16 y, s16 z, u8 r, u8 g, u8 b, s16 radius);

void Lights_PointSetColorAndRadius(LightInfo* info, u8 r, u8 g, u8 b, s16 radius);

void Lights_DirectionalSetInfo(LightInfo* info, s8 x, s8 y, s8 z, u8 r, u8 g, u8 b);

// unused
void Lights_Reset(Lights* lights, u8 ambentR, u8 ambentG, u8 ambentB);

/*
 * Draws every light in the provided Lights group
 */
void Lights_Draw(Lights* lights, GraphicsContext* gfxCtx);

Light* Lights_FindSlot(Lights* lights);

void Lights_BindPoint(Lights* lights, LightParams* params, Vec3f* vec);

void Lights_BindDirectional(Lights* lights, LightParams* params, Vec3f* vec);

/**
 * For every light in a provided list, try to find a free slot in the provided Lights group and bind
 * a light to it. Then apply color and positional/directional info for each light
 * based on the parameters supplied by the node.
 *
 * Note: Lights in a given list can only be binded to however many free slots are
 * available in the Lights group. This is at most 7 slots for a new group, but could be less.
 */
void Lights_BindAll(Lights* lights, LightNode* listHead, Vec3f* vec);

LightNode* Lights_FindBufSlot();

// return type must not be void to match
s32 Lights_FreeNode(LightNode* light);

void LightContext_Init(PlayState* play, LightContext* lightCtx);

void LightContext_SetAmbientColor(LightContext* lightCtx, u8 r, u8 g, u8 b);

void LightContext_SetFog(LightContext* lightCtx, u8 r, u8 g, u8 b, s16 fogNear, s16 fogFar);

/**
 * Allocate a new Lights group and initilize the ambient color with that provided by LightContext
 */
Lights* LightContext_NewLights(LightContext* lightCtx, GraphicsContext* gfxCtx);

void LightContext_InitList(PlayState* play, LightContext* lightCtx);

void LightContext_DestroyList(PlayState* play, LightContext* lightCtx);

/**
 * Insert a new light into the list pointed to by LightContext
 *
 * Note: Due to the limited number of slots in a Lights group, inserting too many lights in the
 * list may result in older entries not being bound to a Light when calling Lights_BindAll
 */
LightNode* LightContext_InsertLight(PlayState* play, LightContext* lightCtx, LightInfo* info);

void LightContext_RemoveLight(PlayState* play, LightContext* lightCtx, LightNode* node);

// unused
Lights* Lights_NewAndDraw(GraphicsContext* gfxCtx, u8 ambientR, u8 ambientG, u8 ambientB, u8 numLights, u8 r, u8 g,
                          u8 b, s8 x, s8 y, s8 z);

Lights* Lights_New(GraphicsContext* gfxCtx, u8 ambientR, u8 ambientG, u8 ambientB);

void Lights_GlowCheck(PlayState* play);

void Lights_DrawGlow(PlayState* play);

#endif
