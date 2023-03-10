#include "main.h"
#include <stdlib.h>

/**
 * main - entry point to add function
 *
 * @argc: len of arguments array
 * @argv: array  with arguments
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int sum, top;

	sum = 0;
	top = 1;

	if (argc < 1)
		return (0);

	while (top < argc)
	{
		if (atoi(argv[top]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[top]);
		top++;
	}
	printf("%d\n", sum);
	return (1);
}
