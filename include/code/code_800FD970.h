#ifndef Z64_CODE_800FD970_H
#define Z64_CODE_800FD970_H

#include "global.h"

// The latest generated random number, used to generate the next number in the sequence.
extern u32 sRandInt;

// Space to store a value to be re-interpreted as a float.
extern u32 sRandFloat;

/**
 * Gets the next integer in the sequence of pseudo-random numbers.
 */
u32 Rand_Next(void);

/**
 * Seeds the pseudo-random number generator by providing a starting value.
 */
void Rand_Seed(u32 seed);

/**
 * Returns a pseudo-random floating-point number between 0.0f and 1.0f, by generating
 * the next integer and masking it to an IEEE-754 compliant floating-point number
 * between 1.0f and 2.0f, returning the result subtract 1.0f.
 */
f32 Rand_ZeroOne(void);

/**
 * Returns a pseudo-random floating-point number between -0.5f and 0.5f by the same
 * manner in which Rand_ZeroOne generates its result.
 */
f32 Rand_Centered(void);

/**
 * Seeds a pseudo-random number at rndNum with a provided seed.
 */
void Rand_Seed_Variable(u32* rndNum, u32 seed);

/**
 * Generates the next pseudo-random integer from the provided rndNum.
 */
u32 Rand_Next_Variable(u32* rndNum);

/**
 * Generates the next pseudo-random floating-point number between 0.0f and
 * 1.0f from the provided rndNum.
 */
f32 Rand_ZeroOne_Variable(u32* rndNum);

/**
 * Generates the next pseudo-random floating-point number between -0.5f and
 * 0.5f from the provided rndNum.
 */
f32 Rand_Centered_Variable(u32* rndNum);

#endif
