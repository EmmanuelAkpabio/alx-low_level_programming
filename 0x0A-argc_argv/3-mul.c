#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers (arguments)
 * if the program does not recieve two arguments, it prints Error,
 * followed by a new line, and return 1.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
