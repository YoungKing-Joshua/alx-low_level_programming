#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 */


void print_number(int n)
{
	unsigned int i, j, m;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	m = 1;

	while (j > 9)
	{
		j /= 10;
		m *= 10;
	}

	for (; m >= 1; m /= 10)
	{
		_putchar(((i / m) % 10) + 48);
	}
}
