#include "_putchar.c"

/**
 * main - entry point
 * 
 * Return: Int 
 */

int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if (a % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if (a % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else
		{
			_putchar('0' + a);
			_putchar(' ');
		}
	}
	_putchar('\n');
	return(1);
}
