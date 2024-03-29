#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 *
 * @grid: memory allocator
 * @height: height of array.
 *
 * Return: returns free arrayy.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}

}
