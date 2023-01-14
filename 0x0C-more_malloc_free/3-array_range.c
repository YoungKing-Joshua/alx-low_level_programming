#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: min number of elements
 * @max: max number of elements
 *
 * Return: array pointer address, NULL if it fails
 */

int *array_range(int min, int max)
{
	int i, *a;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
