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

int create_file(const char *filename, char *text_content)
{
	unsigned int bytwrttn;
	int file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	bytwrttn = write(file, text_content, sizeof(text_content) - 1);
	if (bytwrttn < sizeof(text_content) - 1)
		return (-1);
	close(file);
	return (1);
}
