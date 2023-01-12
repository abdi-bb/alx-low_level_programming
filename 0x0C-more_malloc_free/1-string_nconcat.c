#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: Number of first n bytes of s2 to be concatenated on s1.
 *
 * Return: For success returns pointer pointing to a newly allocated memory,
 *	for failure returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, is3 = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; i < s1[i] + n; i++)
		len++;

	s3 = malloc(sizeof(*s3) * len + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[is3++] = s1[i];

	for (i = 0; i < n; i++)
		s3[is3++] = s2[i];

	s3[len] = '\0';

	return (s3);
}

