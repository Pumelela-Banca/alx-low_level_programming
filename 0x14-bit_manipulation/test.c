#include <stdio.h>
#include "_putchar.c"

int main()
{
    int i;

    for (i = 47; i < 58; i++)
    {
        printf("--%d--%c\n", i, i);
    }
    return 0;
}
