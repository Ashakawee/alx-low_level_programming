#include "main.h"
/**
 * _islower - Entry point for lowercase
 * lowercase character. Another cases, shows 0
 * @c: The character in ASCII code
 * Return: 1 for lower case and return 0 for other
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
