#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */

void print_square(int size)
{
	int i, g;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (g = 0; g < size; g++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
