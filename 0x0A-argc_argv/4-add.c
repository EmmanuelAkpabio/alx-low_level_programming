#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_num(char *arg);

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Description: Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 *
 * Return: 0 if successful, otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (is_num(argv[i])) /* check if string is number */
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}

/**
 * is_num - iterate through each argv to check if every character is a number
 * @arg: a argv
 * Return: true if entire argv is number, otherwise, false
 */

bool is_num(char *arg)
{
	int i;

	for (i = 0; arg[i]; i++)
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (false);
	}

	return (true);
}
