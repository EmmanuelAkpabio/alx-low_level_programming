#include "main.h"
#include <stdlib.h>

int count_words(char *str);
char *_strncpy(char *dest, char *src, int n);

/**
 * strtow - splits a string into words
 * @str: the string
 *
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int i, j, k, num_words;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	/* allocate memory to pointer of each word */
	words = malloc(sizeof(char *) * (num_words + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < num_words; i++, k = 0)
	{
		while (*str == ' ') /* skip spaces */
			str++;

		while (str[k] != ' ' && str[k] != '\0') /* count word length */
			k++;

		words[i] = malloc(sizeof(char) * (k + 1));

		if (words[i] == NULL)
		{
			/* free memory for previously allocated words */
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);

			return (NULL);
		}

		_strncpy(words[i], str, k); /*copy k bytes into mem */
		words[i][k] = '\0'; /* add null terminator */

		str = str + k;
	}

	words[i] = NULL; /* add NULL terminator at the end of the array */

	return (words);
}

/**
 * count_words - counts the number of words in string
 * @str: the string
 *
 * Return: word count
 */

int count_words(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		while (*str == ' ') /* skip spaces */
			str++;
		if (*str != '\0') /* found a non-space character */
			count++;
		while (*str != ' ' && *str != '\0') /* skip word */
			str++;
	}

	return (count);
}

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
