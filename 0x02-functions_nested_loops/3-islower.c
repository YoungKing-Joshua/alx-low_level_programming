#include "main.h"

/**
 * _islower - checks for lower case letter
 * @c: int character to check
 * Return: 1 if lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
