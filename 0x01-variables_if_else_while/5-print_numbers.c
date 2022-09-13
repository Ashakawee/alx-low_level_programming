#include <stdio.h>
/**
 * main - printing decimals numbers
 *
 * Return: 0 always (success)
 *
 */
int main(void)
{
	char alx[9] = "0123456789";
	int z;

	for (z = 0; z < 9; z++)
	{
		putchar(alx[z]);
	}
	putchar('\n');
	return (0);
}
