#ifndef __GRAPH__
#define __GRAPH__

#include "global.h"
#include "vt.h"
#define GFXPOOL_HEAD_MAGIC 0x1234
#define GFXPOOL_TAIL_MAGIC 0x5678

extern OSTime sGraphUpdateTime;
extern OSTime sGraphSetTaskTime;
extern FaultClient sGraphFaultClient;
extern CfbInfo sGraphCfbInfos[3];
extern FaultClient sGraphUcodeFaultClient;
extern UCodeInfo D_8012D230[3];
extern UCodeInfo D_8012D248[3];

#endif // __GRAPH__
