#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Uses only putchar 5 times max, no type char is allowed.
 *
 * Return: 0
 */

int main(void)
{
	int first;
	int second;

	first = 0;

	while (first <= 8)
	{
		putchar(first + '0');
		second = first + 1;
		while (second <= 9)
		{
			putchar(second + '0');
			if (first != 8)
			{
				putchar(',');
				putchar(' ');
			}
			if (second != 9)
				putchar(first + '0');
			second++;
		}
		first++;
	}
	putchar('\n');

	return (0);
}
