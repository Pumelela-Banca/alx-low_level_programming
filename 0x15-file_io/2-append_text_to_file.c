#include "main.h"
#include <fcntl.h>
#include <stdio.h>

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
	int file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a");
	if (file == -1)
		return (-1);
	close(file);
	return (1);
}
