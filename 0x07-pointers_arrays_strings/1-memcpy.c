#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: destination of buffer
 * @src: source of what to be coppied
 * @n: n bytes of @src
 *
 * Return: pointer to detination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
