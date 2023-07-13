#include "search_algos.h"
/**
 * b_search - Function searches for value in a sorted
 * array of integers.
 *
 * @array: A pointer to first element of array to search in.
 * @low: Left index in array.
 * @high: right index in array.
 * @value: Value to search for in array.
 *
 * Return: The first index where value is located
 * or -1 if value is not found.
 */

int b_search(int *array, size_t low, size_t high, int value)
{
	size_t start = low;
	size_t end = high - 1;
	size_t mid = 0;
	size_t i = 0;

	if (array != NULL)
	{
		while (start <= end)
		{
			mid = (start + end) / 2;
			printf("Searching in array: ");
			for (i = start; i < end; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[mid] < value)
			{
				start = mid + 1;
			}
			else if (array[mid] > value)
			{
				end = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}


/**
 * exponential_search - Function searches for value in a sorted array
 * of integers. 
 * 
 * @array: Pointer to first element of array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for in the array.
 *
 * Return: The first index where value is located
 * or -1 if value is not found.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t min = 0;
	int r;

	if (array != NULL)
	{
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		if (bound + 1 < size)
			min = bound + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min - 1);
		result = b_search(array, bound / 2,  min, value);
		if (r != -1)
			return (r);
	}
	return (-1);
}
