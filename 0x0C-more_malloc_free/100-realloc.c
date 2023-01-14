#include <stdio.h>
#include <stdlib.h>
#include "main"

/**
 * _realloc - reallocate a memory block using malloc and free
 *
 * @ptr: pointer to previous memory
 * @old_size: old memory array size
 * @new_size: new memory array size
 *
 * Return: pointer to new memory, NULL if it fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_size, *temp_ptr;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	temp_ptr = ptr;
	for (n = 0; n < old_size; n++)
		new_ptr[n] = temp_ptr[n];
	free(ptr);
	return (new_ptr);
}
