#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - That returns a pointer to a 2 dimensional arry.
 * @width: Grid width.
 * @height: Grid height.
 *
 * Return: Returns a pointer to a 2 dimensional array on success,
 *		Returns NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **f;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	f = (int **)malloc(sizeof(int *) * height);

	if (f == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		f[i] = (int *)malloc(sizeof(int) * width);

		if (f[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(f[j]);
			}
			free(f);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			f[i][j] = 0;

	return (f);
}
