#include "main.h"
/**
 * print_last_digit - entry point
 * @x: Evaluating value
 * Return: on last value success
 * On failure, -1
 */
int print_last_digit(int x)
{
	int m;

	m = x % 10;
	m = abs(m);
	_putchar(m + '0');
	return (m);
}
