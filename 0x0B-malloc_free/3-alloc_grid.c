#include "main.h"

/**
 * alloc_grid - retuns a pointer to a two dimentional array
 * @width: array width
 * @height: array height
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **new;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	new = malloc(height * sizeof(int *));
	if (new == NULL)
		free(new);

	for (w = 0; w < width; w++)
	{
		new[w] = malloc(width * sizeof(int));
		if (new[w] == NULL)
		{
			free(new);
			new = NULL;
			while (w > -1)
			{
				free(new[w]);
				new[w] = NULL;
				w--;
			}
			return (0);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			new[h][w] = 0;
		}
	}
	return (new);
}
