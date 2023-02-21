#include "main.h"

/**
 * main - A program that prints _putchar, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char word[] = "_putchar";
	long unsigned int i;

	i = 0;

	while (i < sizeof(word) - 1)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
