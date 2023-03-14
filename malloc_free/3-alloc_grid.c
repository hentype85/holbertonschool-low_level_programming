#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - return a pointer to a two dimensional array of integer
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to a two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		grid[i] = (int *)malloc(sizeof(int *));

		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				free(grid[i]);
				i--;
			}
		}

		for (j = 0; j < width ; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
