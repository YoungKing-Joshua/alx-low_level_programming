#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int n, i;

	for (n = 48; n <= 56; n++)
	{
		for (i = 49; i <= 57; i++)
		{
			if (i > n)
			{
				putchar(n);
				putchar(i);
				if (n != 56 || i != 57)
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
