#include "search_algos.h"

/**
 * print_array - Outputs the contents of an array.
 * @array: The source array to display.
 * @l: The left index of the array.
 * @r: The right index of the array.
 */
void print_array(int *array, size_t l, size_t r)
{
        size_t i;

        if (array)
        {
                printf("Array to Search: ");
                for (i = l; i < l + (r - l + 1); i++)
                        printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
        }
}

/**
 * binary_search_index1 - Locates a value in a sorted array using \
 * a binary search.
 * @arr: The array to search in.
 * @left: The left index of the array.
 * @right: The right index of the array.
 * @val: The value to find.
 *
 * Return: The initial index of the value in the array, or -1 if not found.
 */
int binary_search_index1(int *arr, size_t left, size_t right, int val)
{
        size_t mid;

        if (!arr)
                return (-1);
        
        print_array(arr, left, right);
        mid = left + ((right - left) / 2);

        if (left == right)
                return (*(arr + mid) == val ? (int)mid : -1);

        if (val < *(arr + mid))
                return (binary_search_index1(arr, left, mid - 1, val));
        else if (val == *(arr + mid))
                return ((int)mid);
        else
                return (binary_search_index1(arr, mid + 1, right, val));
}

/**
 * exponential_search - Searches for a value in a sorted array using \
 * an exponential search.
 * @arr: The array to search in.
 * @n: The size of the array.
 * @val: The value to search for.
 *
 * Return: The index of the value in the array, or -1 if not found.
 */
int exponential_search(int *arr, size_t n, int val)
{
        size_t nid = 1, fit = 2;

        if (!arr || !n)
                return (-1);

        if (n < 2)
        {
                nid = 0;
                fit = 1;
        }
        else
        {
                while (nid < n)
                {
                        printf("Checked arr[%lu] = [%d]\n", nid, arr[nid]);
                        
                        if (((arr[nid] <= val) && (arr[fit] >= val))
                                || ((nid * 2) >= n))
                                break;

                        nid *= 2;
                        fit = fit * 2 < n ? fit * 2 : n - 1;
                }
        }

        printf("Value between indexes [%lu] and [%lu]\n", nid, fit);
        return (binary_search_index1(arr, nid, fit, val));
}
