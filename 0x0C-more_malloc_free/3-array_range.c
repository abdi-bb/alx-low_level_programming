#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: The first element of the array.
 * @max: The last element of the array.
 *
 * Return: The pointer tob the newly created array,
 *	Returns NULL for failure.
 */
int *array_range(int min, int max)
{
	int *r, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	r = malloc(sizeof(int) * size);

	if (r == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
			r[i] = min++;


	return (r);
}

