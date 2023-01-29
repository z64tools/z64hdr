#ifndef Z64_NULLTASK_H
#define Z64_NULLTASK_H

#include "global.h"

/**
 * Blocks the current thread until all queued scheduler tasks have completed.
 */
void Sched_FlushTaskQueue(void);

#endif
