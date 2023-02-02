#include "main.h"
#include <unistd.h>

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
    write(1, ((n & 1) == 0) ? "0" : "1", 1);
}

