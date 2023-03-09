#include "main.h"
int _sqrt(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: -1, if n does not have a narural square root, otherwise, the root.
 */

int _sqrt_recursion(int n)
{
	/* return -1 for negative number */
	if (n < 0)
		return (-1);
	/* return 0 for zero */
	if (n == 0)
		return (0);

	/* recursivelt calculate square root with intial guess root of 1 */
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate the square root of a number using Newton-Raphson method
 * @n: the number
 * @guess: initially, the guess root is 1
 *
 * Return: natural square root of n
 */

int _sqrt(int n, int guess)
{
	int root;

	root = (guess + n / guess) / 2; /* Newton-Raphson's */

	/* check if root is closed enough to the actual square root */
	if (root == guess || root == n / guess)
	{
		if (root * root == n)
			return (root);
		else
			return (-1);
	}
	else
		return (_sqrt(n, root));
}

