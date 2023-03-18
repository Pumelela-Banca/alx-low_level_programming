#include <stdio.h>
#include "main.h"
#include "_putchar.c"


void main(void)
{
    for (int c = 0; c < 21; c++)
        printf("%d-%d\n", c % 9, c);
    pr_tm(1, 3, 6, 1);

}

void pr_tm(int i, int j, int c, int k)
{
        _putchar('0' + i);
        _putchar('0' + j);
        _putchar(':');
        _putchar('0' + c);
        _putchar('0' + k);
        _putchar('\n');
}