#include <stdio.h>

/**
 * main - prints the numbers 0 to 9.
 * Uses only putchar, no type char is allowed.
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');

	return (0);
}
