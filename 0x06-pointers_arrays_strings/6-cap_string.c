#include "main.h"

/**
 *cap_string - capitalizes every first letter of a word in a string.
 *
 * @n: pointer to string.
 *
 * Return: pointer to n
 */

char *cap_string(char *n)
{
	int l;

	l = 0;

	while (n[l] != '\0')
	{
		if (n[0] >= 97 && n[0] < 123)
		{
			n[0] = n[0] - 32;
		}

		if (n[l] == ' ' || n[l] == '\t' || n[l] == '\n'
		    || n[l] == ',' || n[l] == ';' || n[l] == '.'
		    || n[l] == '.' || n[l] == '!' || n[l] == '?'
		    || n[l] == '"' || n[l] == '(' || n[l] == ')'
		    || n[l] == '{' || n[l] == '}')
		{
			if (n[l + 1] >= 97 && n[l + 1] < 123)
			{
				n[l + 1] = n[l + 1] - 32;
			}
		}
		l++;
	}
	return (n);
}
