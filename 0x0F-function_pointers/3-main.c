#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main- clalculator interface
 *
 * @argc: len of arguments
 * @argv: array of all arguments
 *
 * Return: int for  exit status
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(strcmp(argv[2], "+") != 0 || strcmp(argv[2], "-") != 0 || 
			(strcmp(argv[2], "*") != 0) || (strcmp(argv[2], "/") != 0)
			|| (strcmp(argv[2], "%") != 0)))
	{
		printf("Error\n");
		exit(99);
	}
	if (((atoi(argv[3]) == 0) && (strcmp(argv[2], "/") == 0)) || 
			((atoi(argv[3]) == 0) && (strcmp(argv[2], "%") == 0)))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (1);
}
