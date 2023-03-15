#include "main.h"

/**
 * free_grid - free memory prviously ooccupied
 *
 * @grid: 2d array initialized to 0.
 * @height: lenght of array inside.
 *
 * Return: Nothing void.
 */

void free_grid(int **grid, int height)
{
	int h, last, i;

	if (height > 1)
	{
		last = 0;
		while (grid[height - 1][last] != '\0')
		{
			last++;
		}
		last++;
		for (h = 0; h < height; h++)
		{
			for (i = 0; i < last; i++)
			{
				free(grid[h][i]);
				grid[h][i] = NULL;
			}
		}
	}

	for (h = 0; grid[h] != '\0'; h++)
	{
		free(grid[h]);
		grid[h] = NULL;
	}
	free(grid);
	grid = NULL;
}
