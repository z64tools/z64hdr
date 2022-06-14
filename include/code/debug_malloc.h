#ifndef __DEBUG_MALLOC__
#define __DEBUG_MALLOC__

#include "global.h"
#define LOG_SEVERITY_NOLOG 0
#define LOG_SEVERITY_ERROR 2
#define LOG_SEVERITY_VERBOSE 3

extern s32 gDebugArenaLogSeverity;
extern Arena sDebugArena;

#endif // __DEBUG_MALLOC__
