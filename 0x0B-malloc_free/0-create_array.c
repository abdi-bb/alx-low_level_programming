#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars and intializes
 *	with a specific char.
 * @size: Size of the array to be created.
 * @c: A specific character for intialization.
 *
 * Return: Returns a pointer to the array or returns NULL
 *	for 0 size or for failur
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(c));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

