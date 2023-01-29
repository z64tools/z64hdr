#ifndef Z64_SKELANIME_H
#define Z64_SKELANIME_H

#include "global.h"
#include "vt.h"

#define ANIM_INTERP 1

s32 LinkAnimation_Loop(PlayState* play, SkelAnime* skelAnime);
s32 LinkAnimation_Once(PlayState* play, SkelAnime* skelAnime);
s32 SkelAnime_LoopFull(SkelAnime* skelAnime);
s32 SkelAnime_Once(SkelAnime* skelAnime);
s32 SkelAnime_LoopPartial(SkelAnime* skelAnime);

extern u32 sDisableAnimQueueFlags;
extern u32 sAnimQueueFlags;

/**
 * Draw a limb of type `LodLimb`
 * Near or far display list is specified via `lod`
 */
void SkelAnime_DrawLimbLod(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable,
                           OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* arg, s32 lod);

/**
 * Draw all limbs of type `LodLimb` in a given skeleton
 * Near or far display list is specified via `lod`
 */
void SkelAnime_DrawLod(PlayState* play, void** skeleton, Vec3s* jointTable, OverrideLimbDrawOpa overrideLimbDraw,
                       PostLimbDrawOpa postLimbDraw, void* arg, s32 lod);

/**
 * Draw a limb of type `LodLimb` contained within a flexible skeleton
 * Near or far display list is specified via `lod`
 */
void SkelAnime_DrawFlexLimbLod(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable,
                               OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* arg, s32 lod,
                               Mtx** mtx);

/**
 * Draws all limbs of type `LodLimb` in a given flexible skeleton
 * Limbs in a flexible skeleton have meshes that can stretch to line up with other limbs.
 * An array of matrices is dynamically allocated so each limb can access any transform to ensure its meshes line up.
 */
void SkelAnime_DrawFlexLod(PlayState* play, void** skeleton, Vec3s* jointTable, s32 dListCount,
                           OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* arg, s32 lod);

/**
 * Draw a limb of type `StandardLimb` to the polyOpa buffer
 */
void SkelAnime_DrawLimbOpa(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable,
                           OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* arg);

/**
 * Draw all limbs of type `StandardLimb` in a given skeleton to the polyOpa buffer
 */
void SkelAnime_DrawOpa(PlayState* play, void** skeleton, Vec3s* jointTable, OverrideLimbDrawOpa overrideLimbDraw,
                       PostLimbDrawOpa postLimbDraw, void* arg);

/**
 * Draw a limb of type `StandardLimb` contained within a flexible skeleton to the polyOpa buffer
 */
void SkelAnime_DrawFlexLimbOpa(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable,
                               OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* arg,
                               Mtx** limbMatrices);

/**
 * Draw all limbs of type `StandardLimb` in a given flexible skeleton to the polyOpa buffer
 * Limbs in a flexible skeleton have meshes that can stretch to line up with other limbs.
 * An array of matrices is dynamically allocated so each limb can access any transform to ensure its meshes line up.
 */
void SkelAnime_DrawFlexOpa(PlayState* play, void** skeleton, Vec3s* jointTable, s32 dListCount,
                           OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* arg);

/**
 * Copies frame data from the frame data table, indexed by the joint index table.
 * Indices below limit are copied from that entry in the static frame data table.
 * Indices above limit are offsets to a frame data array indexed by the frame.
 */
void SkelAnime_GetFrameData(AnimationHeader* animation, s32 frame, s32 limbCount, Vec3s* frameTable);

s16 Animation_GetLength(void* animation);

s16 Animation_GetLastFrame(void* animation);

/**
 * Draw a limb of type `StandardLimb` to the specified display buffer
 */
Gfx* SkelAnime_DrawLimb(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable,
                        OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, void* arg, Gfx* gfx);

/**
 * Draw all limbs of type `StandardLimb` in a given skeleton to the specified display buffer
 */
Gfx* SkelAnime_Draw(PlayState* play, void** skeleton, Vec3s* jointTable, OverrideLimbDraw overrideLimbDraw,
                    PostLimbDraw postLimbDraw, void* arg, Gfx* gfx);

/**
 * Draw a limb of type `StandardLimb` contained within a flexible skeleton to the specified display buffer
 */
Gfx* SkelAnime_DrawFlexLimb(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable,
                            OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, void* arg, Mtx** mtx,
                            Gfx* gfx);

/**
 * Draw all limbs of type `StandardLimb` in a given flexible skeleton to the specified display buffer
 * Limbs in a flexible skeleton have meshes that can stretch to line up with other limbs.
 * An array of matrices is dynamically allocated so each limb can access any transform to ensure its meshes line up.
 */
Gfx* SkelAnime_DrawFlex(PlayState* play, void** skeleton, Vec3s* jointTable, s32 dListCount,
                        OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, void* arg, Gfx* gfx);

/**
 * Unpacks frame data for the animation at the given frame into frameTable
 * Used by the legacy animation format
 */
s32 SkelAnime_GetFrameDataLegacy(LegacyAnimationHeader* animation, s32 frame, Vec3s* frameTable);

/**
 * Used by legacy animation format
 */
s16 Animation_GetLimbCountLegacy(LegacyAnimationHeader* animation);

/**
 * Used by legacy animation format
 */
s16 Animation_GetLengthLegacy(LegacyAnimationHeader* animation);

/**
 * Used by legacy animation format
 */
s16 Animation_GetLastFrameLegacy(LegacyAnimationHeader* animation);

/**
 * Linearly interpolates the start and target frame tables with the given weight, putting the result in dst
 */
void SkelAnime_InterpFrameTable(s32 limbCount, Vec3s* dst, Vec3s* start, Vec3s* target, f32 weight);

/**
 * zeroes out the current request count
 */
void AnimationContext_Reset(AnimationContext* animationCtx);

/**
 * Shifts the queue flag to the next queue
 */
void AnimationContext_SetNextQueue(PlayState* play);

/**
 * Disables the current animation queue. Only load and move actor requests will be processed for that queue.
 */
void AnimationContext_DisableQueue(PlayState* play);

AnimationEntry* AnimationContext_AddEntry(AnimationContext* animationCtx, AnimationType type);

/**
 * Requests loading frame data from the Link animation into frameTable
 */
void AnimationContext_SetLoadFrame(PlayState* play, LinkAnimationHeader* animation, s32 frame, s32 limbCount,
                                   Vec3s* frameTable);

/**
 * Requests copying all vectors from src frame table into dst frame table
 */
void AnimationContext_SetCopyAll(PlayState* play, s32 vecCount, Vec3s* dst, Vec3s* src);

/**
 * Requests interpolating between base and mod frame tables with the given weight, placing the result in base
 */
void AnimationContext_SetInterp(PlayState* play, s32 vecCount, Vec3s* base, Vec3s* mod, f32 weight);

/**
 * Requests copying vectors from src frame table to dst frame table whose copy flag is true
 */
void AnimationContext_SetCopyTrue(PlayState* play, s32 vecCount, Vec3s* dst, Vec3s* src, u8* copyFlag);

/**
 * Requests copying vectors from src frame table to dst frame table whose copy flag is false
 */
void AnimationContext_SetCopyFalse(PlayState* play, s32 vecCount, Vec3s* dst, Vec3s* src, u8* copyFlag);

/**
 * Requests moving an actor according to the translation of its root limb
 */
void AnimationContext_SetMoveActor(PlayState* play, Actor* actor, SkelAnime* skelAnime, f32 arg3);

/**
 * Receives the request for Link's animation frame data
 */
void AnimationContext_LoadFrame(PlayState* play, AnimationEntryData* data);

/**
 * If the entry's queue is enabled, copies all vectors from src frame table to dst frame table
 */
void AnimationContext_CopyAll(PlayState* play, AnimationEntryData* data);

/**
 * If the entry's queue is enabled, interpolates between the base and mod frame tables, placing the result in base
 */
void AnimationContext_Interp(PlayState* play, AnimationEntryData* data);

/**
 * If the entry's queue is enabled, copies all vectors from src frame table to dst frame table whose copy flag is true
 */
void AnimationContext_CopyTrue(PlayState* play, AnimationEntryData* data);

/**
 * If the entry's queue is enabled, copies all vectors from src frame table to dst frame table whose copy flag is false
 */
void AnimationContext_CopyFalse(PlayState* play, AnimationEntryData* data);

/**
 * Moves an actor according to the translation of its root limb
 */
void AnimationContext_MoveActor(PlayState* play, AnimationEntryData* data);

/**
 * Performs all requests in the animation queue, then resets the queue flags.
 */
void AnimationContext_Update(PlayState* play, AnimationContext* animationCtx);

/**
 * Initializes a skeleton to be used with Link animations to a looping animation, dynamically allocating the frame
 * tables if not given.
 */
void SkelAnime_InitLink(PlayState* play, SkelAnime* skelAnime, FlexSkeletonHeader* skeletonHeaderSeg,
                        LinkAnimationHeader* animation, s32 flags, Vec3s* jointTable, Vec3s* morphTable,
                        s32 limbBufCount);

/**
 * Sets the update function of a SkelAnime that uses Link animations based on its mode
 */
void LinkAnimation_SetUpdateFunction(SkelAnime* skelAnime);

/**
 * Advances the current Link animation and updates all frame tables. If the animation plays once, returns true when it
 * finishes.
 */
s32 LinkAnimation_Update(PlayState* play, SkelAnime* skelAnime);

/**
 * Requests an interpolation between the pose in jointTable to the one in morphTable, advancing the morph but not the
 * animation frame
 */
s32 LinkAnimation_Morph(PlayState* play, SkelAnime* skelAnime);

/**
 * Requests a load of the next frame of a Link animation, advances the morph, and requests an interpolation between
 * jointTable and morphTable
 */
void LinkAnimation_AnimateFrame(PlayState* play, SkelAnime* skelAnime);

/**
 * Advances a Link animation that loops over its full length
 */
s32 LinkAnimation_Loop(PlayState* play, SkelAnime* skelAnime);

/**
 * Advances a Link animation that stops at endFrame and returns true when it is reached.
 */
s32 LinkAnimation_Once(PlayState* play, SkelAnime* skelAnime);

/**
 * Sets a new morph and resets the morph weight for the current animation.
 */
void Animation_SetMorph(PlayState* play, SkelAnime* skelAnime, f32 morphFrames);

/**
 * General way to set a new Link animation, allowing choice of playback speed, start frame, end frame, play mode, and
 * number of transition frames. Positive morph frames morph from the current pose to the start pose of the new
 * animation, then start the new animation. Negative morph frames start the new animation immediately, modified by the
 * pose immediately before the animation change.
 */
void LinkAnimation_Change(PlayState* play, SkelAnime* skelAnime, LinkAnimationHeader* animation, f32 playSpeed,
                          f32 startFrame, f32 endFrame, u8 mode, f32 morphFrames);

/**
 * Immediately changes to a Link animation that plays once at the default speed.
 */
void LinkAnimation_PlayOnce(PlayState* play, SkelAnime* skelAnime, LinkAnimationHeader* animation);

/**
 * Immediately changes to a Link animation that plays once at the specified speed.
 */
void LinkAnimation_PlayOnceSetSpeed(PlayState* play, SkelAnime* skelAnime, LinkAnimationHeader* animation,
                                    f32 playSpeed);

/**
 * Immediately changes to a Link animation that loops at the default speed.
 */
void LinkAnimation_PlayLoop(PlayState* play, SkelAnime* skelAnime, LinkAnimationHeader* animation);

/**
 * Immediately changes to a Link animation that loops at the specified speed.
 */
void LinkAnimation_PlayLoopSetSpeed(PlayState* play, SkelAnime* skelAnime, LinkAnimationHeader* animation,
                                    f32 playSpeed);

/**
 * Requests copying jointTable to morphTable
 */
void LinkAnimation_CopyJointToMorph(PlayState* play, SkelAnime* skelAnime);

/**
 * Requests copying morphTable to jointTable
 * unused
 */
void LinkAnimation_CopyMorphToJoint(PlayState* play, SkelAnime* skelAnime);

/**
 * Requests loading frame data from the Link animation into morphTable
 */
void LinkAnimation_LoadToMorph(PlayState* play, SkelAnime* skelAnime, LinkAnimationHeader* animation, f32 frame);

/**
 * Requests loading frame data from the Link animation into jointTable
 */
void LinkAnimation_LoadToJoint(PlayState* play, SkelAnime* skelAnime, LinkAnimationHeader* animation, f32 frame);

/**
 * Requests interpolating between jointTable and morphTable, placing the result in jointTable
 */
void LinkAnimation_InterpJointMorph(PlayState* play, SkelAnime* skelAnime, f32 weight);

/**
 * Requests loading frame data from the Link animations and blending them, placing the result in jointTable
 */
void LinkAnimation_BlendToJoint(PlayState* play, SkelAnime* skelAnime, LinkAnimationHeader* animation1, f32 frame1,
                                LinkAnimationHeader* animation2, f32 frame2, f32 blendWeight, Vec3s* blendTable);

/**
 * Requests loading frame data from the Link animations and blending them, placing the result in morphTable
 */
void LinkAnimation_BlendToMorph(PlayState* play, SkelAnime* skelAnime, LinkAnimationHeader* animation1, f32 frame1,
                                LinkAnimationHeader* animation2, f32 frame2, f32 blendWeight, Vec3s* blendTable);

/**
 * Changes a looping animation to one that stops at the end. Unused
 */
void LinkAnimation_EndLoop(SkelAnime* skelAnime);

/**
 * Checks if the current frame is after frame and the previous frame was before it.
 */
s32 Animation_OnFrameImpl(SkelAnime* skelAnime, f32 frame, f32 updateRate);

/**
 * Checks if the current Link animation has reached the specified frame
 */
s32 LinkAnimation_OnFrame(SkelAnime* skelAnime, f32 frame);

/**
 * Initializes a normal skeleton to a looping animation, dynamically allocating the frame tables if not provided.
 */
BAD_RETURN(s32)
SkelAnime_Init(PlayState* play, SkelAnime* skelAnime, SkeletonHeader* skeletonHeaderSeg, AnimationHeader* animation,
               Vec3s* jointTable, Vec3s* morphTable, s32 limbCount);

/**
 * Initializes a flex skeleton to a looping animation, dynamically allocating the frame tables if not given.
 */
BAD_RETURN(s32)
SkelAnime_InitFlex(PlayState* play, SkelAnime* skelAnime, FlexSkeletonHeader* skeletonHeaderSeg,
                   AnimationHeader* animation, Vec3s* jointTable, Vec3s* morphTable, s32 limbCount);

/**
 * Initializes a skeleton with SkinLimbs to a looping animation, dynamically allocating the frame tables.
 */
BAD_RETURN(s32)
SkelAnime_InitSkin(PlayState* play, SkelAnime* skelAnime, SkeletonHeader* skeletonHeaderSeg,
                   AnimationHeader* animation);

/**
 * Sets the SkelAnime's update function based on its current mode.
 */
void SkelAnime_SetUpdate(SkelAnime* skelAnime);

/**
 * Advances the current animation and updates all frame tables. If the animation plays once, returns true when it
 * finishes.
 */
s32 SkelAnime_Update(SkelAnime* skelAnime);

/**
 * Morphs from the pose in jointTable to the one in morphTable, advancing the morph but not the animation frame
 */
s32 SkelAnime_Morph(SkelAnime* skelAnime);

/**
 * Performs a tapered morph from the pose in jointTable to the one in morphTable, advancing the morph but not the
 * animation frame
 */
s32 SkelAnime_MorphTaper(SkelAnime* skelAnime);

/**
 * Gets frame data for the current frame as modified by morphTable and advances the morph
 */
void SkelAnime_AnimateFrame(SkelAnime* skelAnime);

/**
 * Advances an animation that loops over its full length and updates the frame tables
 */
s32 SkelAnime_LoopFull(SkelAnime* skelAnime);

/**
 * Advances an animation that loops over part of its length and updates the frame tables
 */
s32 SkelAnime_LoopPartial(SkelAnime* skelAnime);

/**
 * Advances an animation that stops at endFrame and returns true when it is reached.
 */
s32 SkelAnime_Once(SkelAnime* skelAnime);

/**
 * Fully general way to set a new animation, allowing choice of playback speed, start frame, end frame, play mode,
 * number of transition frames, and tapering of the transition. Positive morph frames morph from the current pose to the
 * start pose of the new animation, then start the new animation. Negative morph frames start the new animation
 * immediately, modified by the pose immediately before the animation change.
 */
void Animation_ChangeImpl(SkelAnime* skelAnime, AnimationHeader* animation, f32 playSpeed, f32 startFrame, f32 endFrame,
                          u8 mode, f32 morphFrames, s8 taper);

/**
 * General way to set a new animation, allowing choice of playback speed, start frame, end frame, play mode, and number
 * of transition frames. Positive morph frames morph from the current pose to the start pose of the new animation, then
 * start the new animation. Negative morph frames start the new animation immediately, modified by the pose immediately
 * before the animation change.
 */
void Animation_Change(SkelAnime* skelAnime, AnimationHeader* animation, f32 playSpeed, f32 startFrame, f32 endFrame,
                      u8 mode, f32 morphFrames);

/**
 * Immediately changes to an animation that plays once at the default speed.
 */
void Animation_PlayOnce(SkelAnime* skelAnime, AnimationHeader* animation);

/**
 * Smoothly transitions to an animation that plays once at the default speed.
 * Positive morph frames morph from the current pose to the start pose of the new animation, then start the new
 * animation. Negative morph frames start the new animation immediately, modified by the pose immediately before the
 * animation change.
 */
void Animation_MorphToPlayOnce(SkelAnime* skelAnime, AnimationHeader* animation, f32 morphFrames);

/**
 * Immediately changes to an animation that plays once at the specified speed.
 */
void Animation_PlayOnceSetSpeed(SkelAnime* skelAnime, AnimationHeader* animation, f32 playSpeed);

/**
 * Immediately changes to an animation that loops at the default.
 */
void Animation_PlayLoop(SkelAnime* skelAnime, AnimationHeader* animation);

/**
 * Smoothly transitions to a looping animation, specifying the number of frames for the transition.
 * Positive morph frames morph from the current pose to the start pose of the new animation, then start the new
 * animation. Negative morph frames start the new animation immediately, modified by the pose immediately before the
 * animation change.
 */
void Animation_MorphToLoop(SkelAnime* skelAnime, AnimationHeader* animation, f32 morphFrames);

/**
 * Immediately changes to an animation that loops at the specified speed.
 */
void Animation_PlayLoopSetSpeed(SkelAnime* skelAnime, AnimationHeader* animation, f32 playSpeed);

/**
 * Changes a looping animation to one that stops at the end. Unused
 */
void Animation_EndLoop(SkelAnime* skelAnime);

/**
 * Reverses the current animation.
 */
void Animation_Reverse(SkelAnime* skelAnime);

/**
 * Copies the src frame table to the dst frame table if copyFlag for that limb is true.
 * Used only by En_Test
 */
void SkelAnime_CopyFrameTableTrue(SkelAnime* skelAnime, Vec3s* dst, Vec3s* src, u8* copyFlag);

/**
 * Copies the src frame table to the dst frame table if copyFlag for that limb is false.
 * Unused.
 */
void SkelAnime_CopyFrameTableFalse(SkelAnime* skelAnime, Vec3s* dst, Vec3s* src, u8* copyFlag);

/**
 * Updates translation of the root limb and calculates `pos`, the difference between
 * the old and new positions of the root limb as rotated by `angle`. Used to allow
 * animations to change an actor's position.
 */
void SkelAnime_UpdateTranslation(SkelAnime* skelAnime, Vec3f* diff, s16 angle);

/**
 * Checks if the current animation is at the specified frame
 */
s32 Animation_OnFrame(SkelAnime* skelAnime, f32 frame);

/**
 * Frees the frame tables for a skelAnime with dynamically allocated tables.
 */
void SkelAnime_Free(SkelAnime* skelAnime, PlayState* play);

/**
 * Copies the src frame table to the dst frame table.
 */
void SkelAnime_CopyFrameTable(SkelAnime* skelAnime, Vec3s* dst, Vec3s* src);

#endif
