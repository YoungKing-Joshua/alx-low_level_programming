#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char apha;
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (apha = 'a'; apha <= 'f'; apha++)
	{
		putchar(apha);
	}
	putchar('\n');
	return (0);
}
