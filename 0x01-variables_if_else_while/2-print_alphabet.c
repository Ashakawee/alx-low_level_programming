#include <stdio.h>
/**
 * main - print lower case alphabets to uppercase
 *
 * Return; 0
 *
 */
int main(void)
{
	char ashaka[53] = "ABCDEFGHIJKLMNOPQRSTUVWXZQWERTYUOKJHGFSDXCVTYASHAKWEE";
	int i;
	for (i = 0; i < 53; i++)
	{
		putchar(ashaka[i]);
	}
	putchar('\n');
	return (0);
}
