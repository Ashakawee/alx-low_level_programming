#include "main.h"
/**
 * jack_bauer -prints every minute of the day
 * Return: alwyas 0
 */
void jack_bauer(void)
{
	int y, z;

	for (y = 0; y <= 23; y++)
	{
		for (z = 0; z <= 59; z++)
		{
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar(':');
			_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
			_putchar('\n');
		}
	}
}
