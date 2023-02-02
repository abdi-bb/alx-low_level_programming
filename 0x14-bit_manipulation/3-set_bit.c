#include "main.h"

/**
 * set_bit - Sets the value of bitbto 1 at a given index
 * @n: A pointer to unsigned long int
 * @index: The index at which to set to 1
 *
 * Return: 1 if it worked, or -1 if an error occuted
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1UL << index;

	return (1);
}

