

/**
 * pri_in -  print numbers over 10 using putchar
 * 
 * @i: int value to be printed
 * 
 * Return: Void
*/

void pri_in(int i)
{
	int z, c, k, l;
	int si[2];

	c = 0;
	k = i;
	l = 0;

	while (k > 9)
	{
		k -= 10;
		l++;
		si[c] = l;
	}
	si[1] = i % 10;
	for (z = 0; z < 2; z++)
	{
		_putchar('0' + si[z]);
	}
}
