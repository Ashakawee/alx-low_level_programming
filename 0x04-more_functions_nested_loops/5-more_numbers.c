#include "main.h"
/**
* more_numbers - printing a numbers between 0 to 14 ten times
* Return: sucess always
*/

void more_numbers(void)
{
	int i, t;

	i = 0;
	while (i < 10)
	{
		for (t = '0'; t < '15'; t++)
		{
			_putchat("%d", t);
		}
		_putchar('\n');
	}
	_putchar('\n');	
}
