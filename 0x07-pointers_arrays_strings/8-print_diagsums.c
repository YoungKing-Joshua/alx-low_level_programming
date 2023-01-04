#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int t, s1 = 0, s2 = 0;

	for (t = 0; t < size; t++)
	{
		s1 = s1 + a[(size + 1) * t];
	}
	for (t = 1; t <= size; t++)
	{
		s2 = s2 + a[(size - 1) * t];
	}
	printf("%d, %d\n", s1, s2);
}
