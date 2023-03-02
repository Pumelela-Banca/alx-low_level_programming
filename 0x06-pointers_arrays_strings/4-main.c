#include "main.h"
#include <stdio.h>

void reverse_array(int *a, int n)
{
	int limit, bottom;

	int hold[1000];

	for (limit = 0; limit < n; limit++)
	{
		hold[limit] = a[limit];
        if (limit == n)
        {
            break;
        }
	}
	bottom = 0;
    limit--;
	while (limit > -1)
	{
		a[bottom] = hold[limit];
		limit--;
		bottom++;
	}
}

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
