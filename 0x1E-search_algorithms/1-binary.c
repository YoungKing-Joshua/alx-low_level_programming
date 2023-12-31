#include "search_algos.h"

/**
 * binary_search - skccui cuuc cuchucsslkorted array
 *
 * @array: disply skucarray to sesieih stof
 * @size: snnieu voos
 * @value: valution it search vinor slis
 *
 * Return: index n or neg -1
 */


int binary_search(int *array, size_t size, int value)
{
	size_t t, top = 0, dop = size - 1;
	int ned;

	if (array == NULL)
		return (-1);

	while (top <= dop)
	{
		ned = (top + dop) / 2;

		printf("Searching in array: ");
		for (t = top; t <= dop; t++)
		{
			if (t != dop)
				printf("%d, ", array[t]);
			else
				printf("%d", array[t]);
		}
		printf("\n");


		if (array[ned] < value)
			top =  ned + 1;
		else if (array[ned] > value)
			dop = ned - 1;
		else
			return (ned);
	}
	return (-1);
}
