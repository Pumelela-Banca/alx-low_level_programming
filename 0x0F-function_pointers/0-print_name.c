#include "function_pointers.h"

/**
 * print_name - prints a function name
 *
 * @name: chars to print
 * @f: function pointer
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name[0] == '\0')
		return;
	f(name);
}
