#ifndef Z64_IRQMGR_H
#define Z64_IRQMGR_H

/**
 * @file irqmgr.c
 *
 * This file implements a manager for forwarding three key system interrupt events to
 * registered clients.
 * Together with sched.c, these systems implement the libultra video and task scheduling
 * model from the libultra "sched" module, with improved functionality in the handling of
 * Pre-NMI related events.
 *
 * The interrupts the IRQ manager deals with are:
 *  - Vertical Retrace
 *      This event is sent to the IRQ manager by the OS VI manager which only supports
 *      the forwarding of VI events to a single message queue. The IRQ manager will
 *      forward these events to every registered client. Vertical retrace events are
 *      received when the Video Interface has reached the start of the vertical blanking
 *      interval, happening at approximately 60Hz on NTSC and 50Hz on PAL. Many threads
 *      sit idle until a vertical retrace event wakes them up, at which point they will
 *      perform their task and then return to idle to await the next retrace.
 *
 *  - Pre-NMI
 *      This event is sent to the IRQ manager by the OS Interrupt Handler when the reset
 *      button on the N64 control deck is pressed. This event is forwarded to clients to
 *      inform them that a reset will occur in at least 0.5s / 500ms so they may begin any
 *      shutdown procedures.
 *
 *  - NMI
 *      This event is sent at 450ms into the Pre-NMI phase, informing clients that the
 *      mandatory 0.5s of Pre-NMI is almost over and a reset may be imminent. This event
 *      is not to be confused with the hardware NMI interrupt signalled when the CPU is
 *      to fully reset, as by the time that interrupt is received there is no time left
 *      to do anything.
 *
 * @see sched.c
 */
#include "global.h"
#include "vt.h"

extern vu32 gIrqMgrResetStatus;
volatile OSTime sIrqMgrResetTime;
volatile OSTime gIrqMgrRetraceTime;
extern u32 sIrqMgrRetraceCount;

// Internal messages
#define IRQ_RETRACE_MSG 666
#define IRQ_PRENMI_MSG 669
#define IRQ_PRENMI450_MSG 671
#define IRQ_PRENMI480_MSG 672
#define IRQ_PRENMI500_MSG 673

/**
 * Registers a client and an associated message queue with the IRQ manager. When an
 * interrupt event is received by the IRQ manager, these clients will be notified of
 * the event.
 *
 * @param irqMgr the IrqMgr instance to register with.
 * @param client client to register.
 * @param msgQueue message queue to send notifications of interrupts to, associated with the client.
 */
void IrqMgr_AddClient(IrqMgr* irqMgr, IrqMgrClient* client, OSMesgQueue* msgQueue);

void IrqMgr_RemoveClient(IrqMgr* irqMgr, IrqMgrClient* client);

/**
 * Send `msg` to every registered client if the message queue is not full. The message is
 * appended to the back of the queue.
 */
void IrqMgr_SendMesgToClients(IrqMgr* irqMgr, OSMesg msg);

/**
 * Send `msg` to every registered client if the message queue is not full. This appears to be for
 * high-priority messages that should be jammed to the front of the queue, however a bug prevents
 * this from working in this way and the message is appended to the back of the queue as in
 * `IrqMgr_SendMesgToClients`.
 *
 * @see IrqMgr_SendMesgToClients
 */
void IrqMgr_JamMesgToClients(IrqMgr* irqMgr, OSMesg msg);

/**
 * Runs when the Pre-NMI OS Event is received. This indicates that the console will reset in at least
 * 0.5s / 500ms. Updates the reset status and time before forwarding the Pre-NMI message to registered
 * clients so they may begin shutting down in advance of the reset.
 */
void IrqMgr_HandlePreNMI(IrqMgr* irqMgr);

void IrqMgr_CheckStacks(void);

void IrqMgr_HandlePreNMI450(IrqMgr* irqMgr);

void IrqMgr_HandlePreNMI480(IrqMgr* irqMgr);

void IrqMgr_HandlePreNMI500(IrqMgr* irqMgr);

/**
 * Runs on each vertical retrace
 *
 * Measures the time elapsed between the first and second vertical retrace and
 * dispatches vertical retrace messages to each registered Irq Client
 */
void IrqMgr_HandleRetrace(IrqMgr* irqMgr);

void IrqMgr_ThreadEntry(void* arg);

void IrqMgr_Init(IrqMgr* irqMgr, void* stack, OSPri pri, u8 retraceCount);

#endif
