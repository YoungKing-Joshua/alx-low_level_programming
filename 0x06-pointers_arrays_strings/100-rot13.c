#include "main.h"

/**
 * rot13 - encoder rot13
 *
 * @s: pointer to string params
 *
 * Return: pointer of string
 */

char *rot13(char *s)
{
	int m, n;

	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n <= 51; n++)
		{
			if (s[m] == l[n])
			{
				s[m] = r[n];
				break;
			}
		}
	}
	return (s);
}
