#include "main.h"

/**
 * print_number- print number
 *
 * @n: input number
 *
 * Return: void no return
 */

void print_number(int n)
{
	char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char loc;

	loc = nums[n];
	_putchar(loc);
}
