#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @n: the int value to be called
 * Return: returns the last digit to calling function
*/

int print_last_digit(int n)
{
	if (n >= 0 && n <= 9)
		return (n);

	else
	{
		n = _abs(n % 10);
		return (n);
	}
}
