#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: constant byte to fill s with
 * @n: number of bytes.
 *
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *copy;

	copy = s;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (copy);
}
