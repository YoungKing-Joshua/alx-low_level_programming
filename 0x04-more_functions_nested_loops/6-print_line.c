#include "main.h"

/**
 * print_line - prints line
 * @n: the number of times to print _
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
