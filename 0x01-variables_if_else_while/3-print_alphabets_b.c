#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,and then in uppercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char apha;

	for (apha = 'a'; apha <= 'z'; apha++)
	{
		putchar(apha);
	}
	putchar('\n');
	for (apha = 'A'; apha <= 'Z'; apha++)
	{
		putchar(apha);
	}
	return (0);
}
