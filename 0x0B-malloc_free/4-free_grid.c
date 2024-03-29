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
	int h, i;

	if (height > 1)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
	else
	{
		for (h = 0; h < height; h++)
		{
			free(grid[h]);
			grid[h] = NULL;
		}
		free(grid);
		grid = NULL;
	}
}
