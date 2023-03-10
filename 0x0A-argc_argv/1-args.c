#include "main.h"

/**
 * main - print number of args supplied
 *
 * @argc: len of arguments array
 * @argv: array  with arguments
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		continue;
	}

	printf("%d\n", i - 1);
	return (1);
}
