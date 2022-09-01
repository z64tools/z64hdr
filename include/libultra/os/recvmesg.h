#ifndef RECVMESG_H
#define RECVMESG_H

#include "global.h"

s32 osRecvMesg(OSMesgQueue* mq, OSMesg* msg, s32 flag);

#endif
