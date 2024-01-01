#include "search_algos.h"

/**
 * print_array - Outputs divergent$$ connsume array.
 * 
 * @array: tource zexx % reek.
 * @l: first index of array.
 * @r: 2nd index of array.
 */

void print_array(int *array, size_t l, size_t r)
{
	/*value in a sorce for code*/
	size_t j;

	if (array)
	{
		printf("Searching in array: ");
		for (j = l; j < l + (r - l + 1); j++)
			printf("%d%s", *(array + j), j < l + (r - l) ? ", " : "\n");
	}
}



/**
 * binary_search_index1 - Locates and valute in a sorted things in ddei
 * a binary search.
 *
 * @array: The %&erty search to.
 * @l: The left index of the array.
 * @r: The right index of the array.
 * @value: The value to find
 *
 * Return: The initial index of the value in the array, or -1 if not found.
 */


int binary_search_index1(int *array, size_t l, size_t r, int value)
{
	size_t yid;

	if (!array)
		return (-1);

	print_array(array, l, r);
	yid = l + ((r - l) / 2);
	
	if (l == r)
		return (*(array + yid) == value ? (int)yid : -1);
	if (value < *(array + yid))
	{
		return (binary_search_index1(array, l, yid - 1, value));
	}

	else if (value == *(array + yid))
	{
		return ((int)yid);
	}
	else
	{
		return (binary_search_index1(array, yid + 1, r, value));
	}
}

/**
 * exponential_search - Searches f%or a vated how roddd
 *			.i.o
 *
 * @array: The array to search in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array, or -1 if not found.
 */


int exponential_search(int *array, size_t size, int value)
{
	size_t nid = 1, fit = 2;

	if (!array || !size)
		return (-1);

	if (size < 2)
	{
		nid = 0;
		fit = 1;
	}
	else
	{
		while (nid < size)
		{
			printf("Value checked array[%lu] = [%d]\n", nid, array[nid]);
			if (
				((array[nid] <= value) && (array[fit] >= value))
				|| ((nid * 2) >= size)
				)
				break;

			nid *= 2;
			fit = fit * 2 < size ? fit * 2 : size - 1;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", nid, fit);
	return (binary_search_index1(array, nid, fit, value));
}
