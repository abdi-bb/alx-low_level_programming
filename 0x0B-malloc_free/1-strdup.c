#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to newly allocated
 *	space in memory.
 * @str: The string given as a parameter.
 *
 * Return: NULL if str = NULL or for insufficient memory, returns a pointer to
 *	the duplicated string on success.
 */
char *_strdup(char *str)
{
	char *dup;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	
	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
