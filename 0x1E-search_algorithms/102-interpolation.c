#include "search_algos.h"

/**
 * interpolation_search - Function searches for value in a sorted array
 * of integers.
 *
 * @array: It a pointer to the first element of the array to search in.
 * @size: Represent number of elements in array.
 * @value: Value to search for in the array.
 *
 * Return: First index where value is located
 * or -1 if value is not found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0;
	size_t l = 0;
	size_t h = size - 1;

	if (array != NULL)
	{
		while ((array[h] != array[l]) &&
		       (value >= array[l]) &&
		       (value <= array[h]))
		{
			pos = l + (((double)(h - l) / (array[h] - array[l])) *
				     (value - array[l]));
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				l = pos + 1;
			else if (value < array[pos])
				h = pos - 1;
			else
				return (pos);
		}
		if (value == array[l])
			return (l);
		pos = l + (((double)(h - l) / (array[h] - array[l]))
			     * (value - array[l]));
		printf("Value checked array[%lu] is out of range\n", pos);
	}
	return (-1);
}
