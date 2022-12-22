#include "main.h"

/**
 * reverse_array - reverses the content of an array.
 *
 * @a: pointer of the array
 *
 * @n: number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int d, b, c;

	b = 0;
	c = n - 1;
	for (d = 0; d < n / 2; d++)
	{
		b = a[c];
		a[c] = a[d];
		a[d] = b;
		c--;
	}
}
