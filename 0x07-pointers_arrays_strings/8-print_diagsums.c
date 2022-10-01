#include <stdio.h>

/**
 * print_diagsums - print the sum of the two
 *                 diagonals of a square matrix
 *                 of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int t, s1, s2;

	s1 = 0;
	s2 = 0;
	for (t = 0; t < (size * size); t++)
	{
		if (t % (size + 1) == 0)
			s1 += a[t];
		if (t % (size - 1) == 0 && t != 0 && t < size * size - 1)
			s2 += a[t];
	}
	printf("%d, %d\n", s1, s2);
}
