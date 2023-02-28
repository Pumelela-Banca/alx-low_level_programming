#include "main.h"

/** 
 * puts2 - prits every other chr
 *
 * @str: str for pointer
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 ==  0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
