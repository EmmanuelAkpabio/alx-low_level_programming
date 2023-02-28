#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int j;
	char swap;

	i = 0;
	j = _strlen(s) - 1; /* set last index of s properly */

	while (i < j)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;

		i++;
		j--;
	}
}

