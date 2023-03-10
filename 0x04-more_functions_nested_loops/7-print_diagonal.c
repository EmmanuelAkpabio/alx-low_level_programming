#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character '\' should be printed
 *
 * Description: The line should end with a \n
 * if n is 0 or less, the function should only print \n
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
