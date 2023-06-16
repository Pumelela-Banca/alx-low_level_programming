#include "main.h"

void _print_rev_recursion(char *s)
{
        if (*s++ != '\0')
        {
                _print_rev_recursion(s);
                putchar(*s);
        }
}

int main()
{


    char r[] = "012345678";
	_print_rev_recursion("012345678");
	return 0;
}
