#include "main.h"

/**
 * _strcpy - copy string
 *
 * @src : copy this to dest
 * @dest : copy of src
 * 
 * Description: Return a string coy of src.
 * Return : srting value.
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
	for (copynow = 1; copynow < count; copynow++)
	{
		dest[0] = *(src + count);
	}
	return (dest);
}
