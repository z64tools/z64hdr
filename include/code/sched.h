#define RSP_DONE_MSG 667
#define RDP_DONE_MSG 668
#define NOTIFY_MSG 670 // original name: ENTRY_MSG

extern vs32 sLogScheduler;
extern OSTime sRSPGFXStartTime;
extern OSTime sRSPAudioStartTime;
extern OSTime sRSPOtherStartTime;
extern OSTime sRDPStartTime;

void Sched_SwapFrameBufferImpl(CfbInfo* cfbInfo);
void Sched_SwapFrameBuffer(Scheduler* sc, CfbInfo* cfbInfo);
void Sched_HandlePreNMI(Scheduler* sc);
void Sched_HandleNMI(Scheduler* sc);
void Sched_QueueTask(Scheduler* sc, OSScTask* task);
void Sched_Yield(Scheduler* sc);
OSScTask* Sched_GfxTaskFramebufferValid(Scheduler* sc, OSScTask* task);
s32 Sched_Schedule(Scheduler* sc, OSScTask** spTaskOut, OSScTask** dpTaskOut, s32 state);
void Sched_SetNextFramebufferFromTask(Scheduler* sc, OSScTask* task);
u32 Sched_TaskComplete(Scheduler* sc, OSScTask* task);
void Sched_RunTask(Scheduler* sc, OSScTask* spTask, OSScTask* dpTask);
void Sched_HandleNotification(Scheduler* sc);
void Sched_HandleRetrace(Scheduler* sc);
void Sched_HandleRSPDone(Scheduler* sc);
void Sched_HandleRDPDone(Scheduler* sc);
void Sched_Notify(Scheduler* sc);
void Sched_ThreadEntry(void* arg);
void Sched_Init(Scheduler* sc, void* stack, OSPri priority, UNK_TYPE arg3, UNK_TYPE arg4, IrqMgr* irqMgr);