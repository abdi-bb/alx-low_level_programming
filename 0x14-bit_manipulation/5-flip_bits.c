#include "main.h"
#include <stdio.h>

/**
 * bit_flips_needed - Returns the number of bits to be flipped
 * @n: The first number
 * @m: The second number we will get
 *
 * Return: Number of bits to be flipped
 */
unsigned int bit_flips_needed(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int c = n ^ m;

	while (c > 0)
	{
		count += c & 1;
		c >>= 1;
	}
	return (count);
}

