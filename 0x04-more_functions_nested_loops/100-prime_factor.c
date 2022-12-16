#include <stdio.h>

/**
 * main - print largest prime factor
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, l = 612852475143;

	for (i = 3; i < 12057; i += 2)
	{
		while (l % i == 0 && l != i)
			l /= i;
	}
	printf("%lu\n", l);


	return (0);
}
