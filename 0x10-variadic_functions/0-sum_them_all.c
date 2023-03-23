#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: parameter count
 *
 * Return: 0, if n is 0; otherwise, sum of optional parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n); /* initialize the argument list */

	for (i = 0; i < n; i++)
		sum += va_arg(args, int); /* get the next argument val */

	va_end(args); /* end list transversing */

	return (sum);
}
