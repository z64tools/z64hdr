#ifndef BOOT_MAIN_H
#define BOOT_MAIN_H

#include "global.h"
#include "boot.h"

extern StackEntry sBootThreadInfo;
extern OSThread sIdleThread;
STACK(sIdleThreadStack, 0x400);
extern StackEntry sIdleThreadInfo;
STACK(sBootThreadStack, BOOT_STACK_SIZE);

void cleararena(void);

void bootproc(void);

#endif
