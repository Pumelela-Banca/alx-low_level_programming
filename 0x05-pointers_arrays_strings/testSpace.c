#include "main.h"
#include <stdio.h>

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
    count++;
	for (copynow = 0; copynow < count && src[copynow] != '\0'; copynow++)
	{
		dest[copynow] = *(src + copynow);
	}
	for ( ; copynow < count; copynow++)
	{
		dest[copynow] = '\0';
	}
	return (dest);
}




/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
