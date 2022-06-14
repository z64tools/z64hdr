typedef struct {
    /* 0x00 */ OSPiHandle piHandle;
    /* 0x74 */ OSIoMesg ioMesg;
    /* 0x8C */ OSMesgQueue msgQueue;
} SsSramContext;

extern SsSramContext sSsSramContext;