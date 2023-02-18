#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line. Prints all the letters except q and e
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
