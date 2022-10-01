#include "main.h"
/**
 * print_alphabet - function to print alphabets
 *
 * Return: 0 always seccess
 *
 */
void print_alphabet(void)
{
	int k;

	for (k = 97; k < 123; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
