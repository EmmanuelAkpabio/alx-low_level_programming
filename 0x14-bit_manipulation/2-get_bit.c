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
	unsigned int len, mask = 1;
	int value;

	/* check if index is valid */
	len = sizeof(unsigned long int) * 8;
	if (index > len)
		return (-1);

	/* update mask based on index */
	mask <<= index;

	/* get the value at index */
	value = (n & mask) ? 1 : 0;

	return (value);
}
