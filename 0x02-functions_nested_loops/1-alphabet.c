#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	char apha;

	for (apha = 'a'; apha <= 'z'; apha++)
	{
		_putchar(apha);
	}

	_putchar('\n');

}
