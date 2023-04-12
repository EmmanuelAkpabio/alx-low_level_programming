#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: the integer
 * @index: the index, starting from 0 of the bit to be set
 *
 * Return: 1, if successful, otherwise, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int len;
	unsigned long int mask = 1;

	/* handle invalid index */
	len = sizeof(unsigned long int) * 8;
	if (index > len)
		return (-1);

	/* set mask based on index */
	mask <<= index;

	/* set value of bit to 1 at index */
	*n = *n | mask;

	return (1);
}
