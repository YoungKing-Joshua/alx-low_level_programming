#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,except 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char apha = 'a';

	while (apha <= 'z')
	{
		if (apha != 'e' && apha != 'q')
		{
			putchar(apha);
		}
		apha++;
	}
	putchar('\n');
	return (0);
}
