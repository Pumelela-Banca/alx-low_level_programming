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
	char *boy;
	int *t;
	int i, j, k, l, m;

	if (ac == 0 || av[ac - 1] == '\0')
	{
		return ('\0');
	}
	k = 1;
	t = malloc(ac * sizeof(*t));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[j] != '\0'; j++)
		{
			k++;
		}
		t[i] = j + 1;
	}
	boy = malloc(k * sizeof(*boy));

	for (l = 0; t[l] != '\0'; l++)
	{
		for (m = 0; m < t[l]; m++)
		{
			boy[l] = av[l][m];
		}
		boy[l] = '\n';
	}
	free(t);
	return (boy);
}
