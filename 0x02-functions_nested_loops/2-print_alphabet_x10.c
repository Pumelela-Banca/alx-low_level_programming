#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10X
 *
 * Return: void, no return
 */

void print_alphabet_x10(void)
{
	int a = 10;

	while (a > 0)
	{
		print_alphabet();
		a--;
	}
}

/**
* print_alphabet - Print string using loop.
*
* Return: void, no retturn value.
*/

void print_alphabet(void)
{
	int a;
	for (a =  97; a < 123; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
