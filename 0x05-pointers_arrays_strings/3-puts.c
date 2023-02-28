#include "main.h"

/**
 * _puts - print string
 *
 * @s: string to be printed
 *
 * Return: lenght of string
 */

void _puts(char *str)
{
	int len, stop;

	for (len = 0; len < 1000; len++)
	{
		if (*str == '\0')
		{
			_putchar('\n');
			break;
		}

		stop = *(str + len);
		_putchar(stop);
	}
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}