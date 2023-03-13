#include "main.h"

/**
 * change - giv change back
 *
 * @amount: amount to be brocken
 *
 * Return: sum of coins
 */

int change(int c)
{
	if (c == 0)
	{
		return (0);
	}
	else
	{
		if (c >= 25)
		{
			return ( 1 + change(c - 25));
		}
		else if (c >= 10)
		{
			return (1 + change(c - 10));
		}
		else if (c >= 5)
		{
			return (1 + change(c - 5));
		}
		else if (c >= 2)
		{
			return (1 + change(c - 2));
		}
		else
		{
			return (1 + change(c - 1));
		}
	}
}

/**
 * main - enter the number
 *
 * @argc: len of arguments array
 * @argv: array  with arguments
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int val;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}
	val = change(atoi(argv[1]));
	printf("%d\n", val);
	return (1);
}
