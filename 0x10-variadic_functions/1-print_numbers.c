#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers in the main funtion, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listva;
	unsigned int i;

	va_start(listva, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(listva, int));
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(listva);
}
