#include "main.h"
/**
 * _isalpha - a function to check for alphabets
 *
 * lowercase character. Another cases, shows 0,
 *
 *  @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
