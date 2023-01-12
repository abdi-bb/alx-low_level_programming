#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of memory to be allocated.
 *
 * Return: On success, returns a pointer to the allocated memory,
 * 	on failure, normal termination with status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *m;
       
	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}

