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

	for (y = 'Z''; y >= 'A'; y--)
	{
		putchar("%d", y);
	}
	putchar('\n');
	return (0);
}
