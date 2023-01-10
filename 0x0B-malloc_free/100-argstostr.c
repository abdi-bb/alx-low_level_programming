#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: Argument count, numbers of argument.
 * @av: Argument vector, array of arguments.
 *
 * Return: Returns a pointer to new string.
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j, arrindex = 0, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	arr = malloc(sizeof(char) * size + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			arr[arrindex++] = av[i][j];

		arr[arrindex++] = '\n';
	}

	arr[size] = '\0';

	return (arr);
}

