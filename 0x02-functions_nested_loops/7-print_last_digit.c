#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @n: the int value to be called
 * Return: returns the last digit to calling function
*/

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n = -n;

	d = n % 10;

	if (d < 0)
		d = -d;

	_putchar(d + '0');

	return (d);
}
