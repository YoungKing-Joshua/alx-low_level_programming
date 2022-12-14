#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints sum of all multiple
 *
 * Return: Always 0(Success)
 */
int main(void)

{
	int n = 0;
	int m = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			m += n;
		}
		n++;
	}
	printf("%i\n", m);
	return (0);
}
