#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a, b;

	b = 354;
	for (a = 379; a > b; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
