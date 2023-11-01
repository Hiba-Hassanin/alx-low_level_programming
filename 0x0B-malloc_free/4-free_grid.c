#include "main.h"

/**
 * free_grid - frees 2 dimensional grid
 *             previously created alloc_grid
 *
 * @grid: the grid
 * @height: the height
 *
 * Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
