#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 *
 * @b: size bytes
 *
 * Return: pointer new allocated memory if fails, exit value of 98
 */

void *malloc_checked(unsigned int b)
{
	double *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);

}
