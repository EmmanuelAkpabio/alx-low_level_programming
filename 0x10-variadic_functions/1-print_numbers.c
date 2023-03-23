#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg;

	if (n == 0)
		return; /* do nothing */

	va_start(arg, n);

	for (i = 0; i < (n - 1); i++)
	{
		/* print all numbers except last one */
		printf("%d", va_arg(arg, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(arg, int)); /* print last number */

	va_end(arg);
}
