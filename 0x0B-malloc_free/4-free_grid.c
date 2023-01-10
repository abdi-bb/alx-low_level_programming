#include "main.h"
#include <stdlib.h>

/**
 * free_grid - To free a 2 dimensional array
 * @grid: The array to be freed.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

