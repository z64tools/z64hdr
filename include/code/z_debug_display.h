typedef struct {
	/* 0x00 */ s16   drawType; // indicates which draw function to use when displaying the object
	/* 0x04 */ void* drawArg; // segment address (display list or texture) passed to the draw function when called
} DebugDispObjectInfo;

typedef void (* DebugDispObject_DrawFunc)(DebugDispObject*, void*, PlayState*);

void DebugDisplay_DrawSpriteI8(DebugDispObject* dispObj, void* texture, PlayState* play);
void DebugDisplay_DrawPolygon(DebugDispObject* dispObj, void* dlist, PlayState* play);
extern Lights1 sDebugObjectLights;
void DebugDisplay_DrawSpriteI8(DebugDispObject* dispObj, void* texture, PlayState* play);
void DebugDisplay_DrawPolygon(DebugDispObject* dispObj, void* dlist, PlayState* play);