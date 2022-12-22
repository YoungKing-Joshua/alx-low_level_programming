#include "main.h"

/**
 * leet - a function that encodes a string
 *
 * @s: string input
 *
 * Return: pointer to s
*/

char *leet(char *s)
{
	int i;
	int j = 0;
	int lp[] = {97, 101, 111, 116, 108};
	int mp[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[j] == lp[i] || s[j] == mp[i])
			{
				s[j] = n[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
