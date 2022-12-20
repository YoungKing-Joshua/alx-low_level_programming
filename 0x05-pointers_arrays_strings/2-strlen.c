#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of string
 *
 * @s: a pointer for counting the strting lenth
 *
 * Return: int m
*/

int _strlen(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
		;

	return (m);
}
