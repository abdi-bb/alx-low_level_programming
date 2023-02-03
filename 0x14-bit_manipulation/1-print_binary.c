#include "main.h"

/**
 * print_binary - Prints a binary representation of a number
 * @n: The number to be represented in a binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if ((n & 1) == 0)
        _putchar('0');
    else
        _putchar('1');
}

