#include "main.h"
int _strlen(const char *s);
unsigned int to_num(char s);

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
	unsigned int idx, pow, sum;

	if (b == NULL)
		return (0);

	pow = 0, sum = 0;

	idx = _strlen(b) - 1; /* get the last index of the string */

	while (idx + 1)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		/* get the powers of 2 which are 1, 2, 4, 8, 16, ... */
		pow = (pow == 0) ? 1 : pow * 2;

		sum += (to_num(b[idx]) * pow);
		idx--;
	}

	return (sum);
}

/**
 * to_num - convert '0' and '1' to their numbers
 * @s: either '0' or '1'
 *
 * Return: unsigned int 0 or 1
 */
unsigned int to_num(char s)
{
	if (s == '0')
		return (0);
	return (1);
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
