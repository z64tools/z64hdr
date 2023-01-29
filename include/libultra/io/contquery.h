#ifndef Z64_CONTQUERY_H
#define Z64_CONTQUERY_H

#include "global.h"

/**
 * osContStartQuery:
 * Starts to read the values for SI device status and type which are connected to the controller port and joyport
 * connector.
 */
s32 osContStartQuery(OSMesgQueue* mq);

/**
 * osContGetQuery:
 * Returns the values from osContStartQuery to status. Both functions must be paired for use.
 */
void osContGetQuery(OSContStatus* data);

#endif
