#include "_putchar.c"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int sum;
	int name[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	
	sum = 0;
	while (sum < 9)
	{
		_putchar(name[sum]);
		++sum;
	}
	_putchar('\n');
	return (0);
}
