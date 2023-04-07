#include "main.h"
int _strlen(const char *s);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number on success;
 * 0 if there is one or more chars in the string b that is not 0 0r 1;
 * 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int idx, pow, dec;

	if (b == NULL)
		return (0);

	pow = 0, dec = 0;

	idx = _strlen(b) - 1; /* get the last index of the string */

	while (idx + 1)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		/* get the powers of 2 which are 1, 2, 4, 8, 16, ... */
		pow = (pow == 0) ? 1 : pow * 2;

		dec += ((b[idx] - '0') * pow);
		idx--;
	}

	return (dec);
}

/**
 * _strlen - determines the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
