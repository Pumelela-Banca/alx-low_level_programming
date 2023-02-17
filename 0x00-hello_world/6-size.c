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

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of a long long: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}
