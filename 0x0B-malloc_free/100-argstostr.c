#include "main.h"

/**
 * argstostr- concatenates all the arguments
 *
 * @ac: number of arguments
 * @av: all the arguments
 *
 * Return: char string with all arguments
 */

char *argstostr(int ac, char **av)
{
	char *boy, *t;
	int i, j, k;

	if (ac == 0 || av == '\0')
	{
		return ('\0');
	}
	boy = malloc(ac * sizeof(*boy));

	i = 0;
	while (i < ac)
	{
		for (j = 1; av[j] != '\0'; j++)
			continue;
		boy[i] = malloc((j + 1) * sizeof(boy[i]));
		t[]
		for (k = 0; k < j; k++)
		{
			boy[i]= av[k];
		}
		boy[i][k] = '\n';
		i++;
	}
	return (boy);
}
