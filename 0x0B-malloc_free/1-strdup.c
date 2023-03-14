#include "main.h"
#include "stdlib.h"

/**
 * _strdup - returns a pointer to a new string,
 * which is a duplicate of the string str.
 * @str: the string
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *copy;
	int size = 0, i;

	if (str == NULL) /* return NULL for empty string */
		return (NULL);

	/* compute size of string */
	while (*str != '\0')
		size++, str++;

	str = str - size; /* point back to str[0] */
	size++; /* adjust size to include null character */

	copy = malloc(sizeof(char) * size);

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		copy[i] = str[i];

	return (copy);
}
