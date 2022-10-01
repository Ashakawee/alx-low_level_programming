#include "main.h"

/**
* print_line - printing a straight line
* @n: number of times for character
* Return: seccess always 0
*/

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; ++i)
			_putchar('_');
		_putchar('\n');
	}
}
