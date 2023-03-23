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
				printf("nil");
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
			nul_not(nn);
			printf("%s", separator);
		}
		nn = va_arg(ap, char *);
		nul_not(nn);
	}
	printf("\n");
	va_end(ap);
}

/**
 * nul_not - prints input strings
 * @s1: first string
 *
 * Returns: void
 */

void nul_not(char *s1)
{
	if (s1[0] == '\0')
	{
		printf("nil");
	}
	else
	{
		printf("%s", s1);
	}
}
