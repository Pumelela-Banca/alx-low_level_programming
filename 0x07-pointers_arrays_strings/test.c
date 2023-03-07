#include <stdio.h>
#include "main.h"


/**
 * _strpbrk- search string for any set of bytes
 *
 * @s: searchfrom this string
 * @acceppt: search  these words
 *
 * Return: string containing all found chars
 */


char *_strpbrk(char *s, char *accept)
{
	int i, c, posi1;
    char *new;


	posi1 = 100000;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (c =  0; s[c] != '\0'; c++)
		{
			if (accept[i] == s[c] && posi1 > c)
				posi1 = c;
		}
	}
	if (posi1 < 100000)
	{
        new[0] = *(s + posi1); 
		for (i = 1; s[posi1] != '\0'; i++)
		{
            posi1++;
			new[i] = *(s + posi1);
		}
		return (new);
	}
	return ('\0');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
