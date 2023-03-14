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
	if (width == 0 || height == 0)
		return ('\0');

	

