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

	
		for (h = 0; grid[h] != '\0'; h++)
		{
			free(grid[h]);
			grid[h] = NULL;
		}
		free(grid);
		grid = NULL;
	
}
