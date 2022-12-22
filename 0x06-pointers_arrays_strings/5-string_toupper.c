#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase.
 *
 * @s: lowercase to uppercase.
 *
 * Return: pointer of uppercase
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
