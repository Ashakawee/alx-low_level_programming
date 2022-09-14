#include <stdio.h>
/**
 * main - printing all possible combination of two numbers
 *
 * Return: 0 if success
 *
 */
int main(void)
{
	int y, z;
	int a, b, c, d;

	for (y = 0; y < 100; y++)
	{
		a = y / 10; /* double fnum */
		b = y % 10; /* single fnum */

		for (z = 0; z < 100; z++)
		{
			c = z / 10; /* double fnum */
			d = z % 10; /* single fnum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(31);
				putchar(c + '0');
				putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
