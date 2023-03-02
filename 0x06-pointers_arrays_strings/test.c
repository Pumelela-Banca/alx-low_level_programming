#include <stdio.h>
#include "_putchar.c"

void main(void)
{
    int ho, index;
    char names[76] = "0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "[\\]^_`abcdefghijklmnopqrstuvwxyz";

    for (ho = 33; ho < 123; ho++)
    {
        _putchar(ho);
        //_putchar(index +  48);
    }
}