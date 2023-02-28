#include "main.h"

/**
 * print_array - print array fromgiven inputs
 *
 * @a : array values.
 * @n : number to be printed
 *
 */

void print_array(int *a, int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		if (start == (n - 1))
		{
			printf("%d\n", a[start]);
			break;
		}
		printf("%d, ", a[start]);
	}
}
