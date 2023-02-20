#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a, b;

	b = 352;
	for (a = 378; a > b; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
