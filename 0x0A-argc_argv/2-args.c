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
	int g;

	for (g = 0; g < argc; g++)
	{
		printf("%s\n", argv[g]);
	}
	return (1);
}
