#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the base 10 number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int num, mask, len;

	num = n, mask = 1, len = 0;

	/* handle when num is equal to 0 */
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	/* get the bit length of num */
	while (num > 0)
	{
		num >>= 1;
		len++;
	}

	/* update mask based on bit-length of num */
	mask <<= (len - 1);

	/* print the binary representation of n */
	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}


