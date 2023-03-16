#include "main.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 * string_nconcat - concatenates two string by dynamic allocation
 * @s1: string 1
 * @s2: sring 2
 * @n: number of bytes of s2 to concatenate into s1
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len_s1, len_s2, size, n1;
	char *concat;

	n1 = n;

	/* treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n1 < 0) /* negative bytes is an errot */
		return (NULL);

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n1 >= len_s2)
		n1 = len_s2;

	size = len_s1 + n1;
	concat = malloc(sizeof(char) * (size + 1)); /* +1 for \0 */

	/* check for memory allocation error */
	if (concat == NULL)
		return (NULL);

	/* On success */
	for (i = 0; i < len_s1; i++) /* copy s1 into concat */
		concat[i] = s1[i];
	for (j = 0; i < size; i++, j++)
		concat[i] = s2[j];

	return (concat);
}

/**
 * _strlen - returns length of string
 * @s: the string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}


