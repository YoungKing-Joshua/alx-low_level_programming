#include "main.h"

/**
 * _strcpy - This function copies a string pointed to src and dest
 *
 * @dest: poiter parameter
 *
 * @src: poiter parameter
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; *(src + m) != '\0'; m++)
	{
		dest[m] = *(src + m);
	}
	dest[m] = '\0';

	return (dest);
}
