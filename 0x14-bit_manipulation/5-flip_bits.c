#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip from one
 * number into another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, xor_copy, mask = 1;
	int len = 0, count = 0;

	xor = n ^ m;
	xor_copy = xor;

	/* get bit length of xor */
	while (xor_copy)
	{
		xor_copy >>= 1;
		len++;
	}

	/* set mask based on len */
	mask <<= (len - 1);

	/* count the number of 1's in xor */
	while (mask != 0)
	{
		if (xor & mask)
			count++;
		mask >>= 1;
	}

	return (count);
}
