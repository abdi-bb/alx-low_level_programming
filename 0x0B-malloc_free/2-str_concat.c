#include "main.h"
#include <stdlib>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string to be appended upon s1.
 *
 * Return: Returns pointer to newly allocated space on success,
 *		NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *str3;
	int i, s3i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	s3 = malloc((len) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[s3i++] == s1[i];

	for (i = 0; s2[i]; i++)
		s3[s3i++] == s2[i];

	return (s3);
}
