#include <stdio.h>
/**
 * main- printint mirro alphabets
 *
 * Return: 0 always (success)
 *
 */
int main(void)
{
	int y;

	for (y = 122; y > 96; y--)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
