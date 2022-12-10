#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char apha;

	for (apha = 'z'; apha >= 'a'; apha--)
	{
		putchar(apha);
	}
	putchar('\n');
	return (0);
}
