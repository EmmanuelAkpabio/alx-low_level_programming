#include "main.h"

/**
 * _islower - checks if c is a lowercase character
 * @c: the character to carry check on
 *
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	int value;

	if (c >= 97 && c <= 122)
		value = 1;
	else
		value = 0;

	return (value);
}
