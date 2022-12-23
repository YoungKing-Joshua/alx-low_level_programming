#include <stdio.h>
#include "main.h"


/**
 * *infinite_add - add two numbers
 *
 * @n1: 1st number
 *
 * @n2: 2nd number
 *
 * @r: buffer for result
 *
 * @size_r: buffer size
 *
 * Return:the pointer to dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, s1, s2;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
		if (i > size_r || j > size_r)
			return (0);
		s1 = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		s2 = s1;
		if (i >= 0)
			s2 += n1[i] - '0';
		if (j >= 0)
			s2 += n2[j] - '0';
		if (i < 0 && j < 0 && s2 == 0)
		{
			break;
		}
		s1 = s2 / 10;
		r[k] = s2 % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || s1)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		s1 = r[k];
		r[k] = r[l];
		r[l] = s1;
	}
	return (r);

}
