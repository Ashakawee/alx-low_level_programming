#include "main.h"

/**
* print_diagonal - printing diagonal line
* @n:the number of times
* Return: 0 always seccess
*/

void print_diagonal(int n)
{
	int i = 0, k;

	if (n < 0)
	{
		for (; i < n; i++)
		{
			for (k = 0; k < i; k++)
			_putchar(' ');
		_putchar('92');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
