#include <stdio.h>

/**
 * main - prints the executable function name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void) argc;

	return (0);
}
