/**
 * print_most_numbers - print from 1-9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
