#include "main.h"

/**
 * _strncpy - copies the string pointed to by src,
 * @dest: destination string
 * @src: source string
 * @n: the first n characters to be copied
 *
 * Description: if src contains fewer than n characters, the remaining
 * characters in dest are filled with null characters (\0) to pad up dest
 * up to n characters.
 *
 * If src contains n or more character, the function copies only the first n
 * characters from src to dest without adding a null character at the end of
 * dest.
 *
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
