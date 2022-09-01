#ifndef Z64_AUDIOMGR_H
#define Z64_AUDIOMGR_H

#include "global.h"

void func_800C3C80(AudioMgr* audioMgr);

void AudioMgr_HandleRetrace(AudioMgr* audioMgr);

void AudioMgr_HandlePreNMI(AudioMgr* audioMgr);

void AudioMgr_ThreadEntry(void* arg0);

void AudioMgr_Unlock(AudioMgr* audioMgr);

void AudioMgr_Init(AudioMgr* audioMgr, void* stack, OSPri pri, OSId id, Scheduler* sched, IrqMgr* irqMgr);

#endif
