#include "main.h"

/**
 * _strcat - function that concatenates
 * two strings.
 *
 * @dest: pointer to destnation input
 *
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int s1, s2;

	s1 = 0;

	while (dest[s1])
		s1++;

	for (s2 = 0; src[s2]; s2++)
		dest[s1++] = src[s2];

	return (dest);
}
