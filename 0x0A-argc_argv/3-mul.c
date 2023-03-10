#include "main.h"

/**
 * main - multiply two numbers given
 *
 * @argc: len of arguments array
 * @argv: array with arguments
 *
 * Return: 1 for safe run
 */

int main(int argc, char *argv[])
{
	if (argc > 3 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (1);
}
