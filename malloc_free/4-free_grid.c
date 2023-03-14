#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid function
 * @grid: parameter
 * @height: size parameter
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if(grid != NULL || height > 0)
	{
		for (i = 0 ; i < height ; i++)
		{
			free(grid[i]);
		}

		free(grid);
	}
}
