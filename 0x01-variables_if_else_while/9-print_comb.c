#include<stdio.h>

/**
* main - Entry point
*
* Write all possible combinations
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a, b;

	b = 58;

	for (a = 48; a < b; a++)
	{
		putchar(a);

		if (a == 57)
		{
			putchar('\n');
			break;
		}
		putchar(' ');
		putchar(',');
	}
	return (0);
}
