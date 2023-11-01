#include "main.h"

/**
 * **alloc_grid - returns a pointer to 2 dimensional array of int
 *
 * @width: the width
 * @height: the height
 *
 * Return: NULL on failure
*/

#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (int i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			// Free previously allocated memory
			for (int j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (int j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
