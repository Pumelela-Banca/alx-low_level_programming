#include "_putchar.c"
#include "1-alphabet.c"

/* Prototype _putchar */

int _putchar(char);

/* prototype print_alphabet */

void print_alphabet(void);

/**
 * print_alphabet_x10 - Print alphabet 10X
 *
 * Return: void, no return
 */

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int a = 10;

	while (a > 0)
	{
		print_alphabet();
		a--;
	}
}
