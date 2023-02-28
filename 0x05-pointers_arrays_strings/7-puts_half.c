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
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int len;
	int n;

	len = _strlen(str);

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len / 2) + 1;

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}


