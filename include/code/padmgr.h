#ifndef Z64_PADMGR_H
#define Z64_PADMGR_H

/**
 * @file padmgr.c
 *
 * This file implements communicating with joybus devices at a high level and serving the results to other threads.
 *
 * Any device that can be plugged into one of the four controller ports such as a standard N64 controller is a joybus
 * device. Some joybus devices are also located inside the cartridge such as EEPROM for save data or the Real-Time
 * Clock, however neither of these are used in Zelda64 and so this type of communication is unimplemented. Of the
 * possible devices that can be plugged into the controller ports, the only device that padmgr will recognize and
 * attempt to communicate with is the standard N64 controller.
 *
 * Communicating with these devices is broken down into various layers:
 *
 * Other threads                    : The rest of the program that will use the polled data
 *  |
 * PadMgr                           : Manages devices, submits polling commands at vertical retrace
 *  |
 * Libultra osCont* routines        : Interface for building commands and safely using the Serial Interface
 *  |
 * Serial Interface                 : Hardware unit for sending joybus commands and receiving data via DMA
 *  |
 * PIF                              : Forwards joybus commands and receives response data from the devices
 *  |---¬---¬---¬-------¬
 *  1   2   3   4       5           : The joybus devices plugged into the four controller ports or on the cartridge
 *
 * Joybus communication is handled on another thread as polling and receiving controller data is a slow process; the
 * N64 programming manual section 26.2.4.1 quotes 2 milliseconds as the expected delay from calling
 * `osContStartReadData` to receiving the data. By running this on a separate thread to the game state, work can be
 * done while waiting for this operation to complete.
 */
#include "global.h"
#include "vt.h"

#define PADMGR_LOG(controllerNo, msg)                                    \
    if (1) {                                                             \
        osSyncPrintf(VT_FGCOL(YELLOW));                                  \
        /* padmgr: Controller %d: %s */                                  \
        osSyncPrintf("padmgr: %dコン: %s\n", (controllerNo) + 1, (msg)); \
        osSyncPrintf(VT_RST);                                            \
    }                                                                    \
    (void)0

#define LOG_SEVERITY_NOLOG 0
#define LOG_SEVERITY_CRITICAL 1
#define LOG_SEVERITY_ERROR 2
#define LOG_SEVERITY_VERBOSE 3

extern s32 gPadMgrLogSeverity;

/**
 * Acquires exclusive access to the serial event queue.
 *
 * When a DMA to/from PIF RAM completes, an SI interrupt is generated to notify the process that the DMA has completed
 * and a message is posted to the serial event queue. If multiple processes are trying to use the SI at the same time
 * it becomes ambiguous as to which DMA has completed, so a locking system is required to arbitrate access to the SI.
 *
 * Once the task requiring the serial event queue is complete, it should be released with a call to
 * `PadMgr_ReleaseSerialEventQueue()`.
 *
 * If another process tries to acquire the event queue, the current thread will be blocked until the event queue is
 * released. Note the possibility for a deadlock, if the thread that already holds the serial event queue attempts to
 * acquire it again it will block forever.
 *
 * @return The message queue to which SI interrupt events are posted.
 *
 * @see PadMgr_ReleaseSerialEventQueue
 */
OSMesgQueue* PadMgr_AcquireSerialEventQueue(PadMgr* padMgr);

/**
 * Relinquishes access to the serial message queue, allowing another process to acquire and use it.
 *
 * @param serialEventQueue The serial message queue acquired by `PadMgr_AcquireSerialEventQueue`
 *
 * @see PadMgr_AcquireSerialEventQueue
 */
void PadMgr_ReleaseSerialEventQueue(PadMgr* padMgr, OSMesgQueue* serialEventQueue);

/**
 * Locks controller input data while padmgr is reading new inputs or another thread is using the current inputs.
 * This prevents new inputs overwriting the current inputs while they are in use.
 *
 * @see PadMgr_UnlockPadData
 */
void PadMgr_LockPadData(PadMgr* padMgr);

/**
 * Unlocks controller input data, allowing padmgr to read new inputs or another thread to access the most recently
 * polled inputs.
 *
 * @see PadMgr_LockPadData
 */
void PadMgr_UnlockPadData(PadMgr* padMgr);

/**
 * Activates the rumble pak for all controllers it is enabled on, stops it for all controllers it is disabled on and
 * attempts to initialize it for a controller if it is not already initialized.
 */
void PadMgr_UpdateRumble(PadMgr* padMgr);

/**
 * Immediately stops rumble on all controllers
 */
void PadMgr_RumbleStop(PadMgr* padMgr);

/**
 * Prevents rumble for 3 VI, ~0.05 seconds at 60 VI/sec
 */
void PadMgr_RumbleReset(PadMgr* padMgr);

/**
 * Enables or disables rumble on controller port `port` for 240 VI,
 * ~4 seconds at 60 VI/sec and ~4.8 seconds at 50 VI/sec
 */
void PadMgr_RumbleSetSingle(PadMgr* padMgr, u32 port, u32 rumble);

/**
 * Enables or disables rumble on all controller ports for 240 VI,
 * ~4 seconds at 60 VI/sec and ~4.8 seconds at 50 VI/sec
 *
 * @param enable Array of u8 of length MAXCONTROLLERS containing either true or false to enable or disable rumble
 *               for that controller
 */
void PadMgr_RumbleSet(PadMgr* padMgr, u8* enable);

/**
 * Updates `padMgr->inputs` based on the error response of each controller
 */
void PadMgr_UpdateInputs(PadMgr* padMgr);

void PadMgr_HandleRetrace(PadMgr* padMgr);

void PadMgr_HandlePreNMI(PadMgr* padMgr);

/**
 * Fetches the most recently polled inputs from padmgr
 *
 * @param inputs   Array of Input of length MAXCONTROLLERS to copy inputs into
 * @param gamePoll True if polling inputs for updating the game state
 */
void PadMgr_RequestPadData(PadMgr* padMgr, Input* inputs, s32 gameRequest);

void PadMgr_ThreadEntry(PadMgr* padMgr);

void PadMgr_Init(PadMgr* padMgr, OSMesgQueue* serialEventQueue, IrqMgr* irqMgr, OSId id, OSPri priority, void* stack);

#endif
