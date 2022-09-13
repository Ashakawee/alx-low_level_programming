#include <stdio.h>
/**
 * main - printing lower case alphabents exept q and e
 *
 * Return: 0 always  (success)
 *
 */
int main(void)
{
	char ashk[24] = "abcdfghijklmnoprstuvwxy";
	int m;

	for (m = 0; m < 22; m++)
	{
		putchar(ashk[m]);
	}
	putchar('\n');
	return (0);
}
