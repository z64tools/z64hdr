extern volatile OSTime sIrqMgrResetTime;
extern u32 sIrqMgrRetraceCount;

#define IRQ_RETRACE_MSG 666
#define IRQ_PRENMI_MSG 669
#define IRQ_PRENMI450_MSG 671
#define IRQ_PRENMI480_MSG 672
#define IRQ_PRENMI500_MSG 673

void IrqMgr_AddClient(IrqMgr* irqMgr, IrqMgrClient* client, OSMesgQueue* msgQueue);
void IrqMgr_RemoveClient(IrqMgr* irqMgr, IrqMgrClient* client);
void IrqMgr_SendMesgToClients(IrqMgr* irqMgr, OSMesg msg);
void IrqMgr_JamMesgToClients(IrqMgr* irqMgr, OSMesg msg);
void IrqMgr_HandlePreNMI(IrqMgr* irqMgr);
void IrqMgr_CheckStacks(void);
void IrqMgr_HandlePreNMI450(IrqMgr* irqMgr);
void IrqMgr_HandlePreNMI480(IrqMgr* irqMgr);
void IrqMgr_HandlePreNMI500(IrqMgr* irqMgr);
void IrqMgr_HandleRetrace(IrqMgr* irqMgr);
void IrqMgr_ThreadEntry(void* arg);
void IrqMgr_Init(IrqMgr* irqMgr, void* stack, OSPri pri, u8 retraceCount);