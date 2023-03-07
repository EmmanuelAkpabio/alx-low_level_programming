#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *copy;

	copy = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (copy);
}
