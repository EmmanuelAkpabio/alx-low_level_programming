#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg;

	if (n > 0)
	{
		va_start(arg, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(arg, char*);

			/* print all strings */
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
		}

		va_end(arg);
	}
	printf("\n");
}
