#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to examine
 *
 * Return: the absolute value
 */

int _abs(int n)
{
	int value;

	value = n >= 0 ? n : -n;

	return (value);
}

