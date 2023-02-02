#include "main.h"
#include <stdio.h>

/**
 * bit_flips_needed - Returns the number of bits to be flipped
 * @a: The first number
 * @b: The second number we will get
 *
 * Return: Number of bits to be flipped
 */
unsigned int bit_flips_needed(unsigned long int a, unsigned long int b)
{
	unsigned int count = 0;
	unsigned long int c = a ^ b;

	while (c > 0)
	{
		count += c & 1;
		c >>= 1;
	}
	return (count);
}

