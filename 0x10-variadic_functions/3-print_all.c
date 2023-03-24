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
	int j, i; char *names; float f; int in; char ll; char *str;
	char *sep;

	va_list pa;

	if (format == NULL)
		return;

	va_start(pa, format);
	sep = "";
	j = 0;
	names = "cifs";
	while (format[j] != '\0')
	{
		i = 0;
		while (names[i] != '\0')
		{
			if (format[j] == names[i])
			{
				switch (names[i])
				{
					case 'f':
						f = va_arg(pa, double);
						printf("%s%f", sep , f);
						break;
					case 'i':
						in = va_arg(pa, int);
						printf("%s%d", sep , in);
						break;
					case 'c':
						ll = va_arg(pa, int);
						printf("%s%c", sep , ll);
						break;
					case 's':
						str = va_arg(pa, char *);
						if (str == NULL)
							printf("%snil", sep);
						else
							printf("%s%s", sep, str);
						break;
				}
				sep = ", ";
				break;
			}
			i++;
		}
		j++;
	}
	va_end(pa);
	printf("\n");
}
