#include <stdio.h>
/**
 * main - print lower case alphabets to uppercase
 *
 * Return: 0
 *
 */
int main(void)
{
	char ashaka[27] = "ABCDEFGHIJKLMNOPQRSTUVWXZ";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(ashaka[i]);
	}
	putchar('\n');
	return (0);
}
