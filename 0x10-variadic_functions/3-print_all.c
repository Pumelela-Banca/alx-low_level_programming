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
	int i;
	va_list pa;
	char *sep;
	char *str;

	i = 0;
	sep = "";
	if (format == NULL)
		return;
	va_start(pa, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep , va_arg(pa, int));
				break;
			case 'i':
				printf("%s%d", sep , va_arg(pa, int));
				break;
			case 'f':
				printf("%s%f", sep , va_arg(pa, double));
				break;
			case 's':
				str = va_arg(pa, char *);
				if (str == NULL)
					printf("%snil", sep);
				else
					printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(pa);
}
