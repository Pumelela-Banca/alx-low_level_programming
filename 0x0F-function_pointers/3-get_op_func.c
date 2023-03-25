#include "3-calc.h"
#include <string.h>

/**
 *
 * get_op_func - Select correct function to perfom action
 *
 * @s: operand to use
 *
 * Return: IInt value.
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	i = 0;
	while ( i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	}
	return (0);
}
