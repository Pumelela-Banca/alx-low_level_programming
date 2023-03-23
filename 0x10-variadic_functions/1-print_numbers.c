#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: string to separate numbers with
 * @n: number of ints passed to function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (n == 0)
		return;

	va_start(nums, n);

	if (separator ==  NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, int));
		}
	}
	else
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d", va_arg(nums, int));
			printf("%s", separator);
		}
		printf("%d", va_arg(nums, int));
	}
	va_end(nums);
	printf("\n");
}
