#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a, b;
	
	b = 123;
	for (a = 97; a < b; a++)
	{
		if (a == 101 || a == 113)
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
