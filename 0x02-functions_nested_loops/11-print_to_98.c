#include<stdio.h>

/**
 * print_to_98 - Print  numbers to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	int scope;

	if (n < 98)
	{
		for(n; n == 97; n++)
		{
			printf("%d, ",n)
		}
		printf("98\n")
	}
	else if (n > 98)
	{
		for(n; n == 99; n--)
                {
                        printf("%d, ",n)
                }
                printf("98\n")
	}
	else
	{
		printf("98\n")
	}
}
