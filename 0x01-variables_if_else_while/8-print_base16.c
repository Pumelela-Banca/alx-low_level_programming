#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a, b;

	b = 120;

	for (a = 10; a < b; a++)
	{
		if (a > 47 && a < 58)
		{
			putchar(a);
		}
		else if (a > 96 && a < 103)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);

}
