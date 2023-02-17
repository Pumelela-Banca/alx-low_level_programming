#include<stdio.h>

/**
 * main - Prints the sizes of all the types.
 *
 * Return: 0 To show complete.
 */

int main(void)
{
	float f;
	char c;
	int i;
	long int a;
	long long int b;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long long: %lu byte(s)\n", sizeof(b));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
