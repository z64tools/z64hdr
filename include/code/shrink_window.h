#ifndef Z64_SHRINK_WINDOW_H
#define Z64_SHRINK_WINDOW_H

#include "global.h"

typedef enum {
    /* 0 */ LETTERBOX_STATE_IDLE,
    /* 1 */ LETTERBOX_STATE_GROWING,
    /* 2 */ LETTERBOX_STATE_SHRINKING
} LetterboxState;

extern s32 sLetterboxState;

extern s32 sLetterboxSizeTarget;
extern s32 sLetterboxSize;

void Letterbox_SetSizeTarget(s32 target);

u32 Letterbox_GetSizeTarget(void);

void Letterbox_SetSize(s32 size);

u32 Letterbox_GetSize(void);

void Letterbox_Init(void);

void Letterbox_Destroy(void);

void Letterbox_Update(s32 updateRate);

#endif
