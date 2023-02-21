#include "main.h"

/**
 * print_sign - prints the sign of a number, n
 * @n: the number
 *
 * Description: returns 1 and pront + if n is greater than zero
 * returns 0 and prints 0 if n is zero
 * returns -1 and prints - if n is less than zero
 *
 * Return: 1, 0 or -1
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		value = 0;
	}
	else
	{
		_putchar('-');
		value = -1;
	}

	return (value);
}


