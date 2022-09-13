#include <stdio.h>
/**
 * main - printing and a base ten numbers
 *
 * Return: 0 always (success)
 *
 */
int main(void)
{
	int t;

	for (t = 10; t > 0; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
