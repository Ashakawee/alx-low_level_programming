#include "main.h"
/**
* more_numbers - printing a numbers between 0 to 14 ten times
* Return: sucess always
*/

void more_numbers(void)
{
	int i, t;

	for (i = 0; i <= 9)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t >= 10)
				_putchat((t / 10) + 48);
				_putchar((t % 10) + 48);
		}
		_putchar('\n');
	}
}
