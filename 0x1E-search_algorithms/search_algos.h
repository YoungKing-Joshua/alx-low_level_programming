#ifndef SEARCH_H
#define SEARCH_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - singly linked list.
 *
 * @n: Integer stored at the node.
 * @index: Index of the node in the list.
 * @next: Pointer to the next node.
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;


int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

int jump_search(int *array, size_t size, int value);

int interpolation_search(int *array, size_t size, int value);

int exponential_search(int *array, size_t size, int value);

listint_t *jump_list(listint_t *list, size_t size, int value);

 /* print_list - Prints the content of a listint_t */
void print_list(const listint_t *list);

/* create_list - Creates a single linked list */
listint_t *create_list(int *array, size_t size);

/* free_list - Deallocates a singly linked list */
void free_list(listint_t *list);

#endif /* SEARCH_H */
