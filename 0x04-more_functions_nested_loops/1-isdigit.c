#include "main.h"
#include <stdio.h

/**
* _isdigit - cheking a digit between 0 t0 9
* @c: cheking if c is chracter or digit
* Return: 1 if c in digit 0 for other
*/

int main(void)
{
	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
