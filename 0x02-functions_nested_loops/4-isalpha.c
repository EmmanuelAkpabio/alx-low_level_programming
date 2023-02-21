#include "main.h"

/**
 * _isalpha - check if c is alphabetic, lower or uppercase
 * @c: character to check
 *
 * Return: 1 if c is alphabetic, otherwise 0
 */

int _isalpha(int c)
{
	int value;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		value = 1;
	else
		value = 0;

	return (value);
}


