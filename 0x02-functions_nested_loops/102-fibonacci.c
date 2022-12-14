#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: always (0) success
 */
int main(void)
{
	long int m, n, o, p;

	n = 1;

	o = 2;

	for (m = 1; m <= 50; ++m)
	{
		if (n != 20365011074)
		{
			printf("%ld, ", n);
		} else
		{
			printf("%ld\n", n);
		}
		p = n + o;
		n = o;
		o = p;
	}

	return (0);
}
