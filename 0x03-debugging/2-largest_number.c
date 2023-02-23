/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second interger
 * @c: third interger
 * Return: largets number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largetst = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > b && b > a)
	{
		largest = c;
	}
	else if (c == a && c == b && a == b)
	{
		largest = a;
	}
	else if (c == a || c == b || a == b)
	{
		if (c == a && a > b)
			largest = a;
		if (c == b && c > b)
			largest = c;
		if (b == a && b > c)
			largest = b;
		if (b == a)
			largest = a;
		if (c == b)
		{
			largest = c;
		}
		else
		{
			largest = a;
		}
		largest = a;
	}

	return (largest);
}
