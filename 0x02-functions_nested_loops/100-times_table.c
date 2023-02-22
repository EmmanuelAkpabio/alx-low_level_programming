#include "main.h"

/**
 * one_digit - prints n that is one digit
 * @n: product of multiplication
 *
 * Return: nothing
 */

void one_digit(int n)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(n + '0');
}

/**
 * two_digits - prints n that is two-digit
 * @n: product
 */

void two_digits(int n)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

/**
 * three_digits - print n that is three-digits
 * @n: product
 */
void three_digits(int n)
{
	int rem;

	_putchar(' ');
	_putchar(n / 100 + '0');
	rem = n % 100;
	_putchar(rem / 10 + '0');
	_putchar(rem % 10 + '0');
}

/**
 * print_times_table - prints the 9 times table, starting with 0
 * @n: size of table
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int row;
	int column;
	int product;

	if (n < 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;
				if (column > 0)
				{
					_putchar(',');
					if (product < 10)
					{
						one_digit(product);
					}
					else if (product >= 10 && product < 100)
					{
						two_digits(product);
					}
					else
					{
						three_digits(product);
					}
				}
				else
				{
					_putchar(product + '0');
				}
			}
			_putchar('\n');
		}
	}
}
