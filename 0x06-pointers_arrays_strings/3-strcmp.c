#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Description: compares every character of s1 and s2, until it finds the
 * first different character. Computes the Ascii difference of this character
 *
 * Return: the Ascii difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
