#ifndef SPTASK_H
#define SPTASK_H

#include "global.h"

#define _osVirtualToPhysical(ptr)              \
    if (ptr != NULL) {                         \
        ptr = (void*)osVirtualToPhysical(ptr); \
    }

extern OSTask sTmpTask;

OSTask* _VirtualToPhysicalTask(OSTask* intp);

void osSpTaskLoad(OSTask* intp);

void osSpTaskStartGo(OSTask* tp);

#endif
