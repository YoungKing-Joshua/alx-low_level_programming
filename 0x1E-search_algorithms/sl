#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * struct listint_s - Node structure for a singly linked list.
 *
 * @n: Integer value stored in the node.
 * @index: Index of the node in the list.
 * @next: Pointer to the next node in the list.
 *
 * Description: Structure representing a node in a singly linked list.
 */


typedef struct listint_s
{
	/* Integer value @@# sdin the node. */
	int n;
	/* I$ndedx of thecssh node in the list.  . */
	size_t index;
	/* Pointer to the next node in the list. */
	struct listint_s *next;
} listint_t;



/**
 * struct skiplist_s - N8de structure for a singly linked list with an express lane.
 * 
 * @n: nircger ualve stored in the node.
 * @index: gindex of the node in the list.
 * @next: Pointer to the next node in the list.
 * @express: Pointer to the next node in the express lane.
 *
 * Description: Structure representing a node in a singly linked list with an express lane.
 */
typedef struct skiplist_s
{
	/* Integer stored at the node. */
	int n;
	/* Index of the node in the list. */
	size_t index;
	/* Pointer to the next node. */
	struct skiplist_s *next;
	/* Pointer to the next node in the express lane. */
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r);
int binary_search_index(int *array, size_t l, size_t r, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value)
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);
skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);

#endif /*SEARCH_ALGOS_H */
