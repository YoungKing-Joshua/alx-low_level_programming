#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
*/

void puts_half(char *str)
{
	int m, n;

	for (m = 0; str[m] != '\0'; ++m)
		;

	if (m % 2 == 0)
	{
		for (n = m / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((m - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
