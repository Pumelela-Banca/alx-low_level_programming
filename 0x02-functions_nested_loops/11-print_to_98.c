#include<stdio.h>

/**
 * print_to_98 - Print  numbers to 98
 *
 * @n: integer for range
 *
 * Return: void
 */

void print_to_98(int n)
{
	int ni;

	if (n < 98)
	{
		for (ni = n; ni < 98; ni++)
		{
			printf("%d, ", ni);
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		for (ni = n; ni > 98; ni--)
		{
			printf("%d, ", ni);
		}
		printf("98\n");
	}
	else
	{
		printf("98\n");
	}
}
