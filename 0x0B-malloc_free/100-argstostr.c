#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: arguments
 *
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char **arr;
	int i, j, size, total_len = 0;
	char *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/** allocate memory to each argument's pointer */
	arr = malloc(sizeof(char *) * ac);

	if (arr == NULL) /* on allocation failure */
		return (NULL);

	for (i = 0; i < ac; i++) /* on success */
	{
		size = _strlen(av[i]); /* get size of argument[i] */

		arr[i] = malloc(sizeof(char) * (size + 1)); /* allow for \0 */
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++) /* free previous memory */
				free(arr[j]);
			free(arr);
			return (NULL);
		}

		/* if memory is allocated without errors */
		_strcpy(arr[i], av[i]); /* copy argument into allocated mem */

		total_len += size;
	}

	/* allocate memory for concatenated string, +ac for '\n', +1 for \0 */
	concat_str = malloc(sizeof(char) * (total_len + ac + 1));
	if (concat_str == NULL) /* on allocation failure */
		free(concat_str);

	/* concatenate all the arguments into one string */
	for (i = 0; i < ac; i++)
	{
		_strcat(concat_str, arr[i]);
		_strcat(concat_str, "\n");
	}

	/* add null character at the end of the concatenated string */
	concat_str[total_len + ac] = '\0';

	return (concat_str);
}

/**
 * _strlen - returns the length of a string
 * @s: the argument
 *
 * Return: the length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
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
