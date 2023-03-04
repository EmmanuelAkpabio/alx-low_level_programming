#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line.
* @size: size of the triangle
*
* Return: nothing
*/

void print_triangle(int size)
{
	int i;
	int space;
	int hash;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (space = 0; space < (size - i); space++)
				_putchar(' ');
			for (hash = 0; hash < i; hash++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
