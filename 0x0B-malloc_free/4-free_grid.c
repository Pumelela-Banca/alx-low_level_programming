#include "main.h"

/**
 * free_grid - free memory prviously ooccupied
 *
 * @grid: 2d array initialized to 0.
 * @height: lenght of array inside.
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int width;

	for (width = 0; width < height; width++)
	{
		free(grid[width]);
		grid[width] = NULL;
	}
	free(grid);
	grid = NULL;
}
