#include "main.h"

/**
 * *_strncat - concatenates two strings use at most n bytes
 * @dest: pointer to destination string.
 * @src: pointer to source destination
 * @n: number of bites
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int m, l;

	for (m = 0; dest[m] != '\0'; m++)
		;

	for (l = 0; src[l] != '\0' && l < n; l++)
	{
		dest[m + l] = src[l];
	}
	dest[m + l] = '\0';

	return (dest);
}
