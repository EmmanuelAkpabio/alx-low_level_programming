#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the accepting string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if the c is not found
 */

char *_strpbrk(char *s, char *accept)
{
	char *copy;

	copy = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		accept = copy;
		s++;
	}

	return ('\0');
}
