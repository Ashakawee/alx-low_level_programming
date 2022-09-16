#include "main.h"
/**
 * print_alphabet_x10 - Check holberton
 *
 * Description: function uses _putchar function to print
 *
 * alphabet in lowercase 10 times
 * 
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	char l;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (l = 'a'; l < 'z'; l++)
		_putchar(l);
		_putchar('\n');
	}
}

