#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - append text to end of file
 *
 * @filename: name of file
 * @text_content: append text
 *
 * Return: 1 for success and -1 for faliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fptr = fopen(filename, "a");
	if (fptr == NULL)
		return (-1);
	fclose(fptr);
	return (1);
}
