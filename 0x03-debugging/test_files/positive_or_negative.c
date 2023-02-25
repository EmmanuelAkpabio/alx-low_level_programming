#include <stdio.h>

/**
 * main - Checks if a number is positive, negative or zero
 *
 * Return: nothing
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
