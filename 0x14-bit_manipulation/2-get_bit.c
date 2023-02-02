#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The string
 * @index: The index of the string starting from 0
 *
 * Return: Value of bit at the given index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return -1;
    return (n >> index) & 1;
}

