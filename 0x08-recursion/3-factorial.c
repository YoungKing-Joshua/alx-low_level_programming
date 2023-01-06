#include "main.h"
#include <stdio.h>

/**
 * factorial - factorial number definition
 *
 * @n: variable to find
 *
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
