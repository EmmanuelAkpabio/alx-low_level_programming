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
 * _strcpy - copies the string pointed to by src,
 * including the termination null byte (\0) to the buffer pointed
 * to by dest
 * @dest: buffer
 * @src: source
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = _strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}



