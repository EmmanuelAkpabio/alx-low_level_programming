#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int place_value, digit, num;
	double multiple;

	num = n;
	multiple = 1;

	/* deal with simple case: 0 */
	if (n == 0)
		_putchar('0');
	else
	{
		/* make num positive, if negative */

		if (n < 0)
		{
			num = -n;
			_putchar('-');
		}

		/* get the place value of num */

		while (multiple <= num)
			multiple = multiple * 10;
		place_value = multiple / 10;

		/* print each digit of num */

		while (place_value >= 1)
		{
			digit = num / place_value;
			_putchar(digit + '0');
			num = num - (place_value * digit);
			place_value = place_value / 10;
		}
	}
}
