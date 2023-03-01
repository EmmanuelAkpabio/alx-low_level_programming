#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
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
 * _strncat - concatenates two strings
 * @dest: destination string.
 * @src: source string
 * @n: number of bytes from src
 *
 * Description: _strcat appends src to dest, overwriting the terminating
 * null byte (\0) at the end of dest. Uses at most n bytes from src.
 *
 * Return: a pointer to the resulting string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, len_src, i;

	len_dest = _strlen(dest);
	len_src = _strlen(src);
	i = 0;

	if (n <= len_src)
		len_src = n;

	while (i < len_src)
	{
		dest[i + len_dest] = src[i];
		i++;
	}

	return (dest);
}
