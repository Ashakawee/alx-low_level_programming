#include <stdio.h>
/**
 * main - printing lower and upper case
 *
 * Return: 0
 *
 */
int main(void)
{
	char musa[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;

	for (n = 0; n < 52; n++)
	{
		putchar(musa[n]);
	}
	putcahr('\n');
	return (0);
}
