#include "main.h"
/**
 * -isalpha.c - writhing a function checking alphabets character 
 *
 *  Return: always 0
 *
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
