#include <stdio.h>

/**
 * main - prints the number of arguments passed into it,
 * followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}
