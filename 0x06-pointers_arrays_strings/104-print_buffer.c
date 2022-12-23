#include <stdio.h>
#include "main.h"

/**
 * print_hex - prints bytes of buffer
 *
 * @c: buffer to print
 *
 * @m: bytes of buffer to print
 *
 * @n: line of buffer to print
 */

void print_hex(char *c, int m, int n)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= m)
			printf("%02x", c[n * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= m; k++)
	{
		if (c[n * 10 + k] > 31 && c[n * 10 + k] < 127)
			putchar(c[n * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 *
 * @b: buffer to print
 *
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int j;

	for (j = 0; j <= (size - 1) / 10 && size; j++)
	{
		printf("%08x: ", j * 10);
		if (j < size / 10)
		{
			print_hex(b, 9, j);
		}
		else
		{
			print_hex(b, size % 10 - 1, j);
		}
		putchar(10);
	}
	if (size == 0)
		putchar(10);
}
