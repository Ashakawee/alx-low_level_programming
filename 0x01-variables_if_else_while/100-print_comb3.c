#include <stdio.h>
/**
 * main - printin all possible combination numbers
 *
 * Return: 0 always if success
 *
 */
int main(void)
{
	int t = 48;
	int z = 48;

	while (z < 58)
	{
		t = 48;
		while (t < 58)
		{
			if (z != t && z < t)
			{
				putchar(z);
				putchar(t);
				if (t == 57 && z == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			t++;
		}
		z++;
	}
	putchar('\n');
	return (0);
}
