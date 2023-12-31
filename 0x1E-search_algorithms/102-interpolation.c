#include "search_algos.h"


/**
 * interpolation_search - Finds the index of a value in a sorted array using \
 * 			  an interpolation search.
 * 
 * @array: Pointer to the array to be searched.
 * @size: Number of elements in the array.
 * @value: The value to locate in the array.
 *
 * Return: The index of the first occurrence of the value, otherwise -1.
 */



int interpolation_search(int *array, size_t size, int value)
{
        size_t nid = 0, fit = size - 1, sse = 0;
        double tom;

        if (!array)
                return (-1);
        
        while (array[fit] != array[nid])
        {
                tom = (double)(fit - nid) / (array[fit] - array[nid]);
                sse = nid + (tom * (value - array[nid]));

                if (sse >= size)
                {
                        printf("Value checked array[%d] is out of range\n", (int)sse);
                        break;
                }

                printf("Value checked array[%d] = [%d]\n", (int)sse, array[sse]);

                if (array[sse] == value)
                        return (sse);
                else if (array[sse] < value)
                        nid = sse + 1;
                else
                        fit = sse - 1;
        }
        
        return (value == array[nid] ? (int)nid : -1);
}
