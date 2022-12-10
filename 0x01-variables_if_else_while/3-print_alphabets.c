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
	char apha, apha1;

	for (apha = 'a'; apha <= 'z'; apha++)
	{
		putchar(apha);
	}
	putchar('\n');
	for (apha1 = 'A'; apha1 <= 'Z'; apha1++)
	{
		putchar(apha1);
	}
	return (0);
}
