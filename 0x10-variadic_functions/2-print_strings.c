#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings- prints strings followed by a new line
 *
 * @separator: char separator
 * @n: number of inputs
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *nn;

	if (n == 0)
		return;

	va_start(ap, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			nn = va_arg(ap, char *);
			if (nn == NULL)
				printf("(nil)");
			else
			{
				printf("%s", nn);
			}
		}
	}
	else
	{
		for (i = 0; i < (n - 1); i++)
		{
			nn = va_arg(ap, char *);
			if (nn == NULL)
			{
				printf("(nil)");
				printf("%s", separator);
			}
			else
			{
				printf("%s", nn);
				printf("%s", separator);
			}
		}
		printf("%s", va_arg(ap, char *));
	}
	printf("\n");
}
