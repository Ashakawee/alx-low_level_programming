#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if a letter is greater than 5,0 or not equal to 6 and 0
 *
 * Return: 0
 *
 */
int main(void)
{
	int n, 1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, 1);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}
	return (0);
}
