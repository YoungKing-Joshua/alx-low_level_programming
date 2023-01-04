#include "main.h"

/**
 * _strspn - a function that gets the length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int m, n, j;

	m = 0;
	while (s[m] != '\0')
	{
		n = 0;
		j = 1;
		while (accept[n] != '\0')
		{
			if (s[m] == accept[n])
			{
				j = 0;
				break;
			}
			n++;
		}
		if (j == 1)
			break;
		m++;
	}

	return (m);
}
