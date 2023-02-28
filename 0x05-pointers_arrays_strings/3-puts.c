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

	for (len = 0; len < 1000; len++)
	{
		stop = *str;
		if (stop == '\0')
		{
			_putchar('\n');
			break;
		}
		stop = *(str + len);
		_putchar(stop);
	}
}
