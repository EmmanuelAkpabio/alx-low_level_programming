#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 *
 * Return: nothing
 */

void print_number(int n)
{
	int count;
	int num;
	int zero;

	count = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	num = n;

	while (num >= 10)
	{
		while (n >= 10)
		{
			n = n / 10;
			count = count * 10;
		}
		_putchar(n + '0');

		num = num % count;
		if (num < (count / 10))
		{
			zero = count / 10;
			while(zero > 1)
			{
				_putchar((num / zero) + '0');
				zero = zero / 10;
			}
			num = num % 10;
		}
		count = 1;
	}
	_putchar(num + '0');
}
