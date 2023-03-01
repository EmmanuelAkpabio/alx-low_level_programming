#include "main.h"

/**
 * _isupper - checks if c is an uppercase character
 * @c: the character to carry check on
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	int value;

	if (c >= 65 && c <= 90)
		value = 1;
	else
		value = 0;

	return (value);
}
