#include "main.h"
#include <stdio.h>

/**
 * bit_flips_needed - Returns the number of bits to be flipped to get from one number to another
 * @n: The first number
 * @m: The second number we will get
 *
 * Return: Number of bits to be flipped
 */
unsigned int bit_flips_needed(unsigned long int a, unsigned long int b)
{
    unsigned int count = 0;
    unsigned long int c = a ^ b;

    while (c) {
        count += c & 1;
        c >>= 1;
    }
    return count;
}

