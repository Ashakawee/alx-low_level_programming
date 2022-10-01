#include "main.h"

/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing
*/

void print_chessboard(char (*a)[8])
{
	int t, r;

	t = 0;
	r = 0;
	while (t < 64)
	{
		if (t % 8 == 0 && t != 0)
		{
			r = t;
			_putchar('\n');
		}
		_putchar(a[t / 8][t - r]);
		t++;
	}
	_putchar('\n');
}
