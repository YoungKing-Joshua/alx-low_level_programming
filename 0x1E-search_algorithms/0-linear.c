#include "search_algos.h"

/**
 * linear_search - linearly cljsh #$% thmson
 * @array: Nfis to the 23rt element s&&& array to search
 * @size: Pointr of tsvusis of t##$ assvss svin
 * @value: aluvse?e tcoc carch formet
 * Return: scsoc dcjsoiex s##4the value d else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t t = 0;

	if (array == NULL)
		return (-1);

	for (; t < size; t++)
	{
		printf("Value checked array[%ld] = [%d]\n", t, array[t]);
		if (array[t] == value)
		{
			return (t);
		}
	}
	return (-1);
}
