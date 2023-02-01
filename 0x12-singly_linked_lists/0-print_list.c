#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		c++;
		h = h->next;
	}
	return (c);
}
