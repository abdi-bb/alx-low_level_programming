#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it.
 * @nmemb: Number of elements of the array.
 * @size: Number of bytes of each element.
 *
 * Return: Returns a pointer to the allocated memory,
 *	Returns NULL upon failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	char *d;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
		return (NULL);

	d = c;

	for (i = 0; i < (nmemb * size); i++)
		d[i] = '\0';

	return (c);
}

