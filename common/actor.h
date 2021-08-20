#ifndef _ACTOR_ADDITIONAL_H_
#define _ACTOR_ADDITIONAL_H_

#include "z64.h"

#define ACTORFLAG_TARGET        (1)
#define ACTORFLAG_UNK_02        (1 << 2)
#define ACTORFLAG_UNK_03        (1 << 3)
#define ACTORFLAG_UPDATE        (1 << 4) // Keeps updating no matter what
#define ACTORFLAG_DRAW          (1 << 5) // Keeps drawing no matter what
#define ACTORFLAG_UNK_06        (1 << 6)
#define ACTORFLAG_UNK_07        (1 << 7)
#define ACTORFLAG_UNK_08        (1 << 8)
#define ACTORFLAG_UNK_09        (1 << 9)
#define ACTORFLAG_UNK_10        (1 << 10)
#define ACTORFLAG_UNK_11        (1 << 11)
#define ACTORFLAG_UNK_12        (1 << 12)
#define ACTORFLAG_UNK_13        (1 << 13)
#define ACTORFLAG_UNK_14        (1 << 14)
#define ACTORFLAG_UNK_15        (1 << 15)
#define ACTORFLAG_UNK_16        (1 << 16)
#define ACTORFLAG_UNK_17        (1 << 17)
#define ACTORFLAG_UNK_18        (1 << 18)
#define ACTORFLAG_UNK_19        (1 << 19)
#define ACTORFLAG_UNK_20        (1 << 20)
#define ACTORFLAG_UNK_21        (1 << 21)
#define ACTORFLAG_NO_LIGHT_BIND (1 << 22) // Prevents light binding for actor

// The decomp's ActorInit struct with a padding member made explicit
typedef struct {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 category; // Classifies actor and determines when it will update or draw
    /* 0x04 */ u32 flags;
    /* 0x08 */ s16 objectId;
    /* 0x0A */ u16 padding; // Padding exists, but must be named for DEAD BEEF algorithm for zzrtl and friends
    /* 0x0C */ u32 instanceSize;
    /* 0x10 */ ActorFunc init; // Constructor
    /* 0x14 */ ActorFunc destroy; // Destructor
    /* 0x18 */ ActorFunc update; // Update Function
    /* 0x1C */ ActorFunc draw; // Draw function
} ActorInitExplPad; // size = 0x20

#endif
