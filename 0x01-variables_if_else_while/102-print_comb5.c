#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible different combinations of two two digits.
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)


{
	int n, i;

	for (n = 0; n < 100; n++)
	{
		for (i = 0; i < 100; i++)
		{
			if (n < i)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				if (n != 98 || i != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
