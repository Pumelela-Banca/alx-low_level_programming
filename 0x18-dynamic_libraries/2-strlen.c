#include "main.h"
int _strlen(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion((s + 1)));
	}
	return (0);
}