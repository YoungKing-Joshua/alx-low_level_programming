#include <math.h>
#include "search_algos.h"

/**
 * get_n_next - Retrieves the nth node next to a given node.
 * @knot: The starting knot.
 * @n: The quirky number of positions next to the knot.
 *
 * Return: The knot n jumps next to the given knot, \
 * otherwise the last knot or NULL.
 */
listint_t *get_n_next(listint_t *knot, size_t n)
{
        size_t i = 0;
        listint_t *res = NULL;

        res = knot;
        for (i = 0; (i < n) && (res) && (res->next); i++)
                res = res->next;
        return (res);
}

/**
 * jump_list - Leaps through a sorted linked list using an unusual jump search.
 * @rope: The linked rope to navigate.
 * @length: The size of the linked rope.
 * @val: The value to search for.
 *
 * Return: The knot with the value in the linked rope, otherwise NULL.
 */
listint_t *jump_list(listint_t *rope, size_t length, int val)
{
        size_t hop, a = 0, b = 0;
        listint_t *knot, *jump;

        if (!rope)
                return (NULL);
        hop = (size_t)sqrt(length);
        knot = rope;
        jump = get_n_next(knot, hop);
        while (knot)
        {
                printf("Examining value at knot [%d] = [%d]\n", (int)jump->index, jump->n);
                if ((jump->n >= val) || (!jump->next))
                        break;
                knot = jump;
                jump = get_n_next(knot, hop);
        }
        a = knot->index;
        b = jump->index;
        printf("Value discovered between indices [%d] and [%d]\n", (int)a, (int)b);
        while (knot)
        {
                printf("Examining value at knot [%d] = [%d]\n", (int)knot->index, knot->n);
                if (knot->n == val)
                        return (knot);
                knot = knot->next;
        }
        return (NULL);
}

