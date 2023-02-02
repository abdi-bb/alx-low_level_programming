#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *p = (char *) &num;

	return (p[0] == 1);
}

