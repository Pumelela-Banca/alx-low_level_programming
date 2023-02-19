#include<stdio.h>

/**
* main - Entry point
*
* Print alphabet
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	int b;

	b = 430;

	for (a = 95; a < b; a++)
	{
		if (a > 96 && a < 123)
		{
			putchar(a);
		}
		else if (a > 320 && a < 347)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
