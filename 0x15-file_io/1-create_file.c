#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

/**
 * create_file - creates a file
 *
 * @filename: name of file
 * @text_content: things innside the file
 *
 * Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fptr;
	int i;

	if (filename == NULL)
		return (-1);
	fptr = fopen(filename, "w");
	if (fptr == NULL)
		return (-1);
	if (fptr == NULL)
		i = fputs("", fptr);
	else
	{
		i = fputs(text_content, fptr);
	}
	if (i < 0)
		return (-1);
	fclose(fptr);
	chmod(filename, S_IRUSR | S_IWUSR);
	return (1);
}
