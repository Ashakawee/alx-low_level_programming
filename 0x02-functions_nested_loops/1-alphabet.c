#include "main.h"
/**
 * print_alphabets - function to print alphabets
 *
 * Return: 0 always seccess
 *
 */
void print_alphabet(void)
{
	int k;
	
	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
