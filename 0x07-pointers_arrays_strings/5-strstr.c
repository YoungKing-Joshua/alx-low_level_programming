#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string to be looked through
 * @needle: substring to be searched for in haystack
 *
 * Return: first occurence of the substring or Null
 */

char *_strstr(char *haystack, char *needle)
{
	int n;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		n = 0;

		if (haystack[n] == needle[n])
		{
			do {
				if (needle[n + 1] == '\0')
					return (haystack);

				n++;

			} while (haystack[n] == needle[n]);
		}

		haystack++;
	}

	return ('\0');
}
