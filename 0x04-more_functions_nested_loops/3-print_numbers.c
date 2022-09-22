#include "main.h"
/**
* print_numbers - printing a number between 0 to 9
*
* Return: seccess always
*/

void print_numbers(void)
{
	int o;

	for (o = '0'; o <= '9'; o++)
	{
		_putchar(o);
	}
	_putchar('\n');
}
