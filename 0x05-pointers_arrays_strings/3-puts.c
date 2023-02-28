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

	for (len = 1; len < 1000; len++)
	{
		stop = *(str + len);
		if (stop == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(stop);
	}
}
