#include "main.h"

/**
 * _isdigit - checks for a difit (0 through 9)
 * @c: digit to chech
 *
 * Return: 1 if c is digit, otherwise, 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
