#include <stdio.h>
#include "main.h"
#include "_putchar.c"


void main(void)
{
    pri_in(15);
    _putchar('\n');
    pri_in(11);
    _putchar('\n');
    pri_in(12);
    _putchar('\n');
}

void pri_in(int i)
{
        int z, c, k, l;
        int si[2];

        c = 1;
        k = i;
        l = 0;

        while (k > 9)
        {
                k -= 10;
                l++;
                si[c] = l;
        }
        si[1] = i % 10;
        for (z = 0; z < 2; z++)
        {
                _putchar('0' + si[z]);
        }
}


