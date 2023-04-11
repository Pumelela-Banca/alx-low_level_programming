#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 *
 * @filename: name of input file
 * @letters: characters to read and print
 *
 * Return: the number of letters that could be read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char c;
	size_t count;

	if (filename == NULL)
		return (0);
	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);
	c = fgetc(fptr);
	count = 0;
	while (c != EOF)
	{
		if (letters == count)
			break;
		count += _putchar(c);
		c = fgetc(fptr);
	}
	if (count != letters)
	{
		fclose(fptr);
		return (0);
	}
	fclose(fptr);
	return (count);
}
