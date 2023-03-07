#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to the first occurence of the character c
 * or NULL if the c is not found
 */

char *_strchr(char *s, char c)
{
	long unsigned int i;

	i = 0;

	while (i < strlen(s))
	{
		if (*s == c)
			return (s);
		s++;
		i++;
	}

	return (NULL);
}
