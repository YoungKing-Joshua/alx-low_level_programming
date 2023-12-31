#include <math.h>
#include "search_algos.h"


 /**
 * jump_search - Locates a target value in a sorted array using a jump search.
 * 
 * @array: Pointer to the array to be searched.
 * @size: The number of elements in the array.
 * @value: The value to be found in the array.
 *
 * Return: The index of the target value if found, otherwise -1.
 */

int jump_search(int *array, size_t size, int value)
{
        size_t t, top = 0, dop = 0;

        if (!array)
                return (-1);
        t = (size_t)sqrt(size);
        while ((dop < size) && (*(array + dop) < value))
        {
                printf("Value checked array[%d] = [%d]\n", (int)dop, *(array + dop));
                top = dop;
                dop += t;
                if (top >= size)
                        return (-1);
        }
        printf("Value found between indexes [%d] and [%d]\n", (int)top, (int)dop);
        dop = dop >= size ? size - 1 : dop;
        for (; (top <= dop) && (*(array + top) <= value); top++)
        {
                printf("Value checked array[%d] = [%d]\n", (int)top, *(array + top));
                if (*(array + top) == value)
                        return ((int)top);
        }
        return (-1);
}

