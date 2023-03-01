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
 * _strcat - concatenates two strings
 * @dest: destination string.
 * @src: source string
 *
 * Description: _strcat appends src to dest, overwriting the terminating
 * null byte (\0) at the end of dest, and then adds a termnating null byte.
 *
 * Return: a pointer to the resulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int len_dest, len_src, i;

	len_dest = _strlen(dest);
	len_src = _strlen(src);
	i = 0;

	while (i <= len_src)
	{
		dest[i + len_dest] = src[i];
		i++;
	}

	return (dest);
}
