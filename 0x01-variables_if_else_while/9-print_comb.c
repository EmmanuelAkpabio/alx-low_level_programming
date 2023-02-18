#include <stdio.h>

/**
 * main - prints the numbers 0 to 9 separated by ", "
 * Uses only putchar 4 times max, no type char is allowed.
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
