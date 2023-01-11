#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 *
 * @str: string for duplicate
 *
 * Return: pointer to new memory allocation
 */

char *_strdup(char *str)
{
	unsigned int i, s;
	char *p;

	if (str == NULL)
		return (NULL);

	for (s = 0; str[s] != '\0'; s++)
		;

	p = (char *)malloc(sizeof(char) * (s + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= s; i++)
		p[i] = str[i];

	return (p);
}
