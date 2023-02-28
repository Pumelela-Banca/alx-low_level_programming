#include "main.h"

/**
 * _puts - print string
 *
 * @str: string to be printed
 *
 * Return: lenght of string
 */

void _puts(char *str)
{
	int len, stop;

	for (len = 0; len < 1000000; len++)
	{
		if (len == 0 && *str == '\0')
		{
			_putchar('\n');
			break;
		}
		if (*(str + len) == '\0')
		{
			_putchar('\n');
			break;
		}
		else if (len > 0)
		{
			stop = *(str + len);
			_putchar(stop);
		}
	}
}
