#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
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
 * puts2 - prints every even character of a string,
 * starting with the first character. Followed by a new line.
 * @str: the string
 * Description: for example when passed '0123456789', prints '02468'
 *
 * Returns: nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (i <= _strlen(str) - 1)
	{
		_putchar(str[i]);
		i = i +2;
	}
	_putchar('\n');
}
