#ifndef Z64___OSMEMMOVE_H
#define Z64___OSMEMMOVE_H

#include "global.h"

/**
 * memmove: copies `len` bytes from memory starting at `src` to memory starting at `dest`.
 *
 * Unlike memcpy(), the regions of memory may overlap.
 *
 * @param dest address of start of buffer to write to
 * @param src address of start of buffer to read from
 * @param len number of bytes to copy.
 *
 * @return dest
 */
void* __osMemmove(void* dest, const void* src, size_t len);

#endif
