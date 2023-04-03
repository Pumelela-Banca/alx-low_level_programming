#include <stdio.h>
void bef_main() __attribute__((constructor));

/**
 * bef_main - print string before main
 *
 * Return: void
 */

void bef_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
