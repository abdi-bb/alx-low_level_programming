#include "main.h"

/**
 * clear_bit - Sets the value of bit to 0 at a given index
 * @n: A pointer to a string of chars of bits
 * @index: The index at which to be setted to 0
 *
 * Return: 1 if worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}

