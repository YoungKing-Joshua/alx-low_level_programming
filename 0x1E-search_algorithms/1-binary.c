#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t n = 0;
	size_t start = 0;
	size_t end = size - 1;
	size_t mid = 0;

	if (array != NULL)
	{
		while (start <= end)
		{
			mid = (start + end) / 2;
			printf("Searching in array: ");
			for (n = start; n < end; n++)
			{
				printf("%d, ", array[n]);
			}
			printf("%d\n", array[n]);
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
