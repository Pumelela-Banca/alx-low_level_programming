#include "variadic_functions.h"
#include <stdarg.h>

/**
 * void print_all - print anything
 *
 * @format: list of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, j; float f; char *str; char c;
	const char *names;
	char *sep;

	va_list pa;

	va_start(pa, format);
	sep = "";
	names = format;
	j = 0;
	while (names[j] != '\0')
	{
		switch (names[j])
		{
			case 'f':
				f = va_arg(pa, double);
				printf("%s%f", sep , f);
				break;
			case 'd':
				i = va_arg(pa, int);
				printf("%s%d", sep , i);
				break;
			case 'c':
				c = va_arg(pa, int);
				printf("%s%c", sep ,c);
				break;
			case 's':
				str = va_arg(pa, char *);
				if (str == NULL)
				{
					str = "nil";
				}
				printf("%s%s", sep, str);
		}
		sep = ", ";
		j++;
	}
	va_end(pa);
	printf("\n");
}
