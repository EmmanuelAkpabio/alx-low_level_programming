#include <stdio.h>

/**
 * main - prints the numbers of base 16 in lowercase.
 * Uses only putchar three times.
 *
 * Return: 0
 */

int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
