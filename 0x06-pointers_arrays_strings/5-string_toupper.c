#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: the string
 *
 * Return: a pointer to a string
 */

char *string_toupper(char *s)
{
	char *copy;

	copy = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32; /* convert to uppercase */
		s++;
	}

	return (copy);
}
