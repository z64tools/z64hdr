#ifndef Z64_VIEW_H
#define Z64_VIEW_H

#include "global.h"
#include "vt.h"

extern vu32 sLogOnNextViewInit;

s32 View_ApplyPerspective(View*);
s32 View_ApplyOrtho(View*);

void View_ViewportToVp(Vp* dest, Viewport* src);

View* View_New(GraphicsContext* gfxCtx);

void View_Free(View* view);

void View_Init(View* view, GraphicsContext* gfxCtx);

void View_LookAt(View* view, Vec3f* eye, Vec3f* at, Vec3f* up);

/*
 * Unused. View_LookAt is always used instead. This version is similar but
 * is missing the input sanitization and the update to the flags.
 */
void View_LookAtUnsafe(View* view, Vec3f* eye, Vec3f* at, Vec3f* up);

void View_SetScale(View* view, f32 scale);

void View_GetScale(View* view, f32* scale);

void View_SetPerspective(View* view, f32 fovy, f32 zNear, f32 zFar);

void View_GetPerspective(View* view, f32* fovy, f32* zNear, f32* zFar);

void View_SetOrtho(View* view, f32 fovy, f32 zNear, f32 zFar);

/*
 * Identical to View_GetPerspective, and never called.
 * Named as it seems to fit the "set, get" pattern.
 */
void View_GetOrtho(View* view, f32* fovy, f32* zNear, f32* zFar);

void View_SetViewport(View* view, Viewport* viewport);

void View_GetViewport(View* view, Viewport* viewport);

void View_ApplyLetterbox(View* view);

void View_SetDistortionOrientation(View* view, f32 rotX, f32 rotY, f32 rotZ);

void View_SetDistortionScale(View* view, f32 scaleX, f32 scaleY, f32 scaleZ);

s32 View_SetDistortionSpeed(View* view, f32 speed);

void View_InitDistortion(View* view);

void View_ClearDistortion(View* view);

void View_SetDistortion(View* view, Vec3f orientation, Vec3f scale, f32 speed);

s32 View_StepDistortion(View* view, Mtx* projectionMtx);

/**
 * Apply view to POLY_OPA_DISP, POLY_XLU_DISP (and OVERLAY_DISP if ortho)
 */
void View_Apply(View* view, s32 mask);

s32 View_ApplyPerspective(View* view);

s32 View_ApplyOrtho(View* view);

/**
 * Apply scissor, viewport and projection (ortho) to OVERLAY_DISP.
 */
s32 View_ApplyOrthoToOverlay(View* view);

/**
 * Apply scissor, viewport, view and projection (perspective) to OVERLAY_DISP.
 */
s32 View_ApplyPerspectiveToOverlay(View* view);

/**
 * Just updates view's view matrix from its eye/at/up vectors. Opens disps but doesn't use them.
 */
s32 View_UpdateViewingMatrix(View* view);

s32 View_ApplyTo(View* view, s32 mask, Gfx** gfxp);

/**
 * Logs an error and returns nonzero if camera is too far from the origin.
 */
s32 View_ErrorCheckEyePosition(f32 eyeX, f32 eyeY, f32 eyeZ);

#endif
