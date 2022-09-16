#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Entrypoint
 * @x: Evaluating value
 * Return: on success 1
 */
int print_last_digit(int x)
{
	int m;

	m = x % 10;
	m = abs(m);
	_putchar(m + '0');
	return (m);
}
