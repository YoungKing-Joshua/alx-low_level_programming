#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list listva;

	va_start(listva, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(listva, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i + 1 < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(listva);
}
