#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int u;

	for (u = 0; u < height; u++)
	{
		free(grid[u]);
	}
	free(grid);
}
