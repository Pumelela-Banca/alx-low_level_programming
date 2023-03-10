#include "main.h"

/**
 * main - print all args recieved
 *
 * @argc: len of arguments array
 * @argv: array  with arguments
 *
 * Return: 1 for complete
 */

int main(int argc, char *argv[])
{
	while (argc --)
	{
		printf("%s\n", argv[argc]);
	}
	return (1);
}
