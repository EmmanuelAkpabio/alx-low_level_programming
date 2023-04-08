#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number in base 10
 * @index: the index, starting from 0 of the bit
 *
 * Return: the value on success; -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1, len = 0;
	int value = -1, num = n;
	
	/* handle negative num */
	if (num < 0)
		return (-1);

	/* handle when num is 0 */
	if (num == 0 && index == 0)
		return (0);

	/* get bit-lenght of num */
	while (num > 0)
	{
		num >>= 1;
		len++;
	}

	/* check if index is valid */
	if (index < len)
	{
		/* update mask based on index */
		mask <<= index;

		/* get the value at index */
		value = (n & mask) ? 1 : 0;
	}

	return (value);
}
