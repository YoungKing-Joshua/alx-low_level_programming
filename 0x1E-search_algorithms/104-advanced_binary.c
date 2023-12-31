#include "search_algos.h"

/**
 * print_array - Displays the essence of an array.
 * @arr: The array from where the essence will be revealed.
 * @l: The leftmost essence index.
 * @r: The rightmost essence index.
 */
void print_array(int *arr, size_t l, size_t r)
{
        size_t e;

        if (arr)
        {
                printf("Exploring array: ");
                for (e = l; e < l + (r - l + 1); e++)
                        printf("%d%s", *(arr + e), e < l + (r - l) ? ", " : "\n");
        }
}

/**
 * binary_search_index - Scans for a value in a sorted array using \
 * a binary search.
 * @arr: The array to explore.
 * @l: The leftmost index of the essence.
 * @r: The rightmost index of the essence.
 * @val: The value to unveil.
 *
 * Return: The primary index of the value in the array, otherwise -1.
 */
int binary_search_index(int *arr, size_t l, size_t r, int val)
{
        size_t m;

        if (!arr)
                return (-1);

        print_array(arr, l, r);
        m = l + ((r - l) / 2);

        if (l == r)
                return (*(arr + m) == val ? (int)m : -1);

        if (val < *(arr + m))
        {
                return (binary_search_index(arr, l, m, val));
        }
        else if (val == *(arr + m))
        {
                if ((m > 0) && (*(arr + m - 1) == val))
                {
                        return (binary_search_index(arr, l, m, val));
                }
                return ((int)m);
        }
        else
        {
                return (binary_search_index(arr, m + 1, r, val));
        }
}

/**
 * advanced_binary - Explores a value in a sorted array using a binary search.
 * @arr: The array to explore.
 * @size: The length of the essence.
 * @val: The value to unveil.
 *
 * Return: The primary index of the value in the array, otherwise -1.
 */
int advanced_binary(int *arr, size_t size, int val)
{
        if (!arr || !size)
                return (-1);
        else if ((size == 1) && (*arr == val))
                return (0);

        return (binary_search_index(arr, 0, size - 1, val));
}
