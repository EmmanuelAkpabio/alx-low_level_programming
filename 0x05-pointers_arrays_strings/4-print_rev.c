#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: string length
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
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: string to be printed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
