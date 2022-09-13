#include <stdio.h>
/**
 * main- printint mirro alphabets
 *
 * Return: 0 always (success)
 *
 */
int main(void)
{
	char asha[26] = "abcdefghijklmnopqrstuvwxyz";
	int y;

	for (y = 0; y < 26; y--)
	{
		putchar(asha[y]);
	}
	putchar('\n');
	return (0);
}
