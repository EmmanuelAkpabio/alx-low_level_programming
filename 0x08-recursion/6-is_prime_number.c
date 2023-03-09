#include "main.h"
int prime(int n, int fac);

/**
 * is_prime_number - determines if a number is prime or not
 * @n: the number
 *
 * Return: 1, if the number is prime, otherwise, 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (prime(n, 2));
}

/**
 * prime - divides a number n by 2 to (n - 1)
 * @n: the number
 * @fac: trial-factor
 *
 * Return: 1, if n is prime, else, 0
 */

int prime(int n, int fac)
{
	if (n % fac == 0) /* found a factor */
		return (0);
	fac++; /* consider next factor */
	if (fac < n)
		return (prime(n, fac));

	/* found no factors, number is prime */
	return (1);
}
