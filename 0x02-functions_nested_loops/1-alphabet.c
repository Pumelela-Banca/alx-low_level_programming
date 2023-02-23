#include "_putchar.c"

/* function prototype with char as argument*/
int _putchar(char);
void print_alphabet(void);

/**
* print_alphabet - Print string using loop.
*
* Return: void, no retturn value.
*/

void print_alphabet(void)
{
	for (int a =  97; a < 123; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
