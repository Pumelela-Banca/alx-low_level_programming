/**
 * print_line - print  straight line
 *
 * @n: int number of underscores
 *
 * Return - void
 */

void print_line(int n)
{
	int start, end;

	end = n + 1;

	if (n == 0)
		_putchar('\n');

	for (start = 1; start < end; start++)
	{
		if (n == 0)
		{
			break;
		}
		_putchar(95);
	}
	_putchar('\n');
}
