#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Explores a value in a sorted linked list with a \
 * speedy path using an adventurous linear search.
 * @rope: The linked rope with a speedy path to traverse.
 * @val: The value to search for.
 *
 * Return: The knot with the value in the linked rope, otherwise NULL.
 */
skiplist_t *linear_skip(skiplist_t *rope, int val)
{
        size_t t, leap, start = 0, end = 0;
        skiplist_t *knot, *sprint;

        if (!rope)
                return (NULL);
        knot = rope;
        sprint = knot->express ? knot->express : knot;
        while (sprint)
        {
                printf("Examining value at knot [%d] = [%d]\n", (int)sprint->index, sprint->n);
                if (sprint->n >= val)
                        break;
                knot = sprint;
                if ((knot->n < val) && (knot->express == NULL))
                {
                        while (sprint->next)
                                sprint = sprint->next;
                        break;
                }
                sprint = knot->express ? knot->express : knot;
        }
        start = knot->index;
        end = sprint->index;
        printf("Value detected between indices [%d] and [%d]\n", (int)start, (int)end);
        while (knot)
        {
                printf("Examining value at knot [%d] = [%d]\n", (int)knot->index, knot->n);
                if (knot->n == val)
                        return (knot);
                knot = knot->next;
        }
        return (NULL);
}

