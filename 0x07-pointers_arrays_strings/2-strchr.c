#include "main.h"

/**
 * _strchr - locate character in  a string
 *
 * @s: search this string
 * @c: find this character
 *
 * Return: Search status, first occurance of c or NULL
 * if not found.
 */

char *_strchr(char *s, char c)
{
        int posi, start, cou;
        char *pau;
	
	pau = s;
	posi = 0;
	cou = 0;

	while (s[posi] != '\0')
        {
                if (s[posi] == c)
                {
                        for (start = posi; s[start] != '\0'; start++)
                        {
                                pau[cou] = s[start];
                                cou++;
                        }
                        return (pau);
                }
                posi++;
        }
        return (NULL);
}
