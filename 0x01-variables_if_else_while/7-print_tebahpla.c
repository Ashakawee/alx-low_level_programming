#include <sdtio.h>
/**
 * main- printint mirro alphabets
 *
 * Return: 0 always (success)
 *
 */
int main(void)
{
	char asha[24] = "abcdefghijklmnopkrstuvwxyz";
	int y;

	for (y = 0; y < 24; y--)
	{
		putchar(asha[y]);
	}
	putchar('\n');
	return (0);
}
