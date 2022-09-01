#ifndef Z64_SCHED_H
#define Z64_SCHED_H

/**
 * @file sched.c
 *
 * This file implements a cooperative scheduler for managing tasks that run on the RSP and RDP
 * asynchronously such as graphics and audio processing. Tasks are prepared and sent to it from
 * other threads, where it is placed in a queue until the necessary resources are available. Tasks
 * are usually ran in the order they are received, with one exception described below. Tasks can
 * also request, through flags, whether the scheduler should swap the active framebuffer once the
 * task completes.
 * Together with irqmgr.c, these systems implement the libultra video and task scheduling model from
 * the libultra "sched" module. Notably, the original sched module supports a wider range of ways to
 * communicate with the RDP, while the Zelda 64 implementation only allows the RSP microcode to send
 * commands to the RDP. The Zelda 64 implementation also has more complex behavior involving the
 * framebuffers.
 *
 * There are four task types supported:
 *
 * M_NULTASK
 *  "NULL" tasks.
 *  Tasks of this type don't perform any operations, it can be used to "flush" the task queue. Threads
 *  can wait for this task to complete to ensure there are no more tasks queued in the scheduler.
 *
 * M_GFXTASK
 *  Graphics Processing tasks.
 *  Only these tasks can make use of the RDP.
 *
 * M_AUDTASK
 *  Audio Processing tasks.
 *  These tasks have a higher "priority" than other tasks. If an audio task is enqueued and another
 *  task is currently running, the scheduler will signal to the running task that it should "yield"
 *  the RSP to the audio task. The running task will save its current state and stop running, allowing
 *  the scheduler to send the audio task. This ensures that audio data is always available to be consumed
 *  by the audio DAC even if another task such as graphics is running slow, avoiding undesirable sound
 *  artifacts. This is the meaning of "cooperative" scheduler, the current task must acknowledge the
 *  yield request rather than be immediately interrupted as it would be in a preemptive scheduler.
 *
 * M_NJPEGTASK
 *  JPEG to RGBA16 decoding tasks.
 *
 * @see irqmgr.c
 */
#include "global.h"

#define RSP_DONE_MSG 667
#define RDP_DONE_MSG 668
#define NOTIFY_MSG 670 // original name: ENTRY_MSG

extern vs32 sLogScheduler;

extern OSTime sRSPGFXStartTime;
extern OSTime sRSPAudioStartTime;
extern OSTime sRSPOtherStartTime;
extern OSTime sRDPStartTime;

/**
 * Set the current framebuffer to the swapbuffer pointed to by the provided cfb
 */
void Sched_SwapFrameBufferImpl(CfbInfo* cfbInfo);

void Sched_SwapFrameBuffer(Scheduler* sc, CfbInfo* cfbInfo);

void Sched_HandlePreNMI(Scheduler* sc);

void Sched_HandleNMI(Scheduler* sc);

/**
 * Enqueue a task to either the audio task list or the gfx task list
 */
void Sched_QueueTask(Scheduler* sc, OSScTask* task);

void Sched_Yield(Scheduler* sc);

/**
 * Check if the framebuffer the gfx task wants to use is allowed
 */
OSScTask* Sched_GfxTaskFramebufferValid(Scheduler* sc, OSScTask* task);

/**
 * Schedules the next tasks to run on the RSP and RDP
 *
 * @param sc Scheduler
 * @param spTaskOut Next task to run on the RSP
 * @param dpTaskOut Next task to run on the RDP
 * @param state Bits containing whether the RSP and RDP are currently in use
 * @return Bits containing whether the RSP and RDP will be in use after starting the next tasks
 */
s32 Sched_Schedule(Scheduler* sc, OSScTask** spTaskOut, OSScTask** dpTaskOut, s32 state);

/**
 * Sets the next framebuffer to the framebuffer associated to `task`.
 * If there is no current buffer or it is time to swap, this buffer will be swapped to
 * immediately, otherwise it will be swapped to later in Sched_HandleRetrace.
 *
 * @see Sched_HandleRetrace
 */
void Sched_SetNextFramebufferFromTask(Scheduler* sc, OSScTask* task);

/**
 * Checks if the task is done, i.e. it is no longer running on either the RSP or RDP.
 * If so, send a message to the task's message queue if there is one, and swap the framebuffer
 * if required.
 */
u32 Sched_TaskComplete(Scheduler* sc, OSScTask* task);

/**
 * Runs the next tasks. The scheduler doesn't support running RDP tasks without
 * passthrough via the RSP, if there is no RSP task to run then the RDP task will
 * also do nothing.
 */
void Sched_RunTask(Scheduler* sc, OSScTask* spTask, OSScTask* dpTask);

/**
 * Runs when the scheduler has received a notification, either from another thread or
 * on VI Retrace. Tasks that have been sent to it will be enqueued onto the audio or
 * gfx task queue and one may be ran if the RSP is available.
 */
void Sched_HandleNotification(Scheduler* sc);

void Sched_HandleRetrace(Scheduler* sc);

/**
 * RSP has signalled that the task has either completed or yielded.
 */
void Sched_HandleRSPDone(Scheduler* sc);

/**
 * RDP has signalled task done upon reaching a DPFullSync command
 */
void Sched_HandleRDPDone(Scheduler* sc);

/**
 * Called by other threads in order to wake the scheduler up immediately to enqueue and
 * possibly run a task that has been sent to the task queue. Otherwise, any pending tasks
 * will be enqueued on next vertical retrace.
 *
 * Original name: osScKickEntryMsg
 */
void Sched_Notify(Scheduler* sc);

void Sched_ThreadEntry(void* arg);

void Sched_Init(Scheduler* sc, void* stack, OSPri priority, UNK_TYPE arg3, UNK_TYPE arg4, IrqMgr* irqMgr);

#endif
