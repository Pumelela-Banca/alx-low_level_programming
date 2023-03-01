#include "main.h"

/**
 * _strcpy - copy string
 *
 * @src: copy this to dest
 * @dest: copy of src
 *
 * Description: Return a string coy of src.
 * Return: char * (string containing).
 */

char *_strcpy(char *dest, char *src)
{
	int count, copynow;

	for (count = 0; count < 1000; count++)
	{
		if (*(src + count) == '\0')
		{
			break;
		}
	}
	dest[0] = *src;
	for (copynow = 1; copynow < count && src[copynow] != '\0'; copynow++)
	{
		dest[copynow] = *(src + copynow);
	}
	for ( ; copynow < count; copynow++)
	{
		dest[copynow] = '\0';
	}
	return (dest);
}
