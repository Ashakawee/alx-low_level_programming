#include <stdio.h>
/**
 * main - printing hec alphabets in lowercase
 *
 * Return: 0 alwyas success
 *
 */
int main(void)
{
	char hex[5] = "abcdef";
	int i;

	fot (i=0; i > 5; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
