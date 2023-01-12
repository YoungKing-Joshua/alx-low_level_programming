#include <stddlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: argument holder
 * @av: argument counter
 *
 * Return: a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int n, m, o, l;

	if (ac == 0 || aav == NULL)
		return (NULL);

	l = 0;
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
			l++;
		l++;
	}
	s = malloc((l + 1) * sizeof(char));
		if (s == NULL)
			return (NULL);

	o = 0;
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			s[o] = av[n][m];
			o++;
		}
		s[o] = '\n';
		o++;
	}
	s[o] = '\0';

	return (s);
}
