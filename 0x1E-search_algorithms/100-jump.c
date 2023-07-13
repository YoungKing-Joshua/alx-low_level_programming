#include "search_algos.h"

/**
 * jump_search - Function that searches for value in a
 * sorted array of integers.
 *
 * @array: It is a pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for in the array.
 *
 * Return: The first index where value is located
 * or -1 if value is not found.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t l = 0;
	size_t h = 0;

	if (array != NULL)
	{
		while (h < size && array[h] < value)
		{
			l = h;
			h = h + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       l, array[l]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       l, h);
		for (i = l; i <= h; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
