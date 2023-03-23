#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, otherwise, something else
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;
	int (*op_func)(int, int); /* pointer to a function of type int */

	if (argc != 4) /* argument on terminal must be 4 */
	{
		printf("Error\n");
		exit(98);
	}

	/* check if the third argument is a valid operator */
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
			argv[2][0] != '/' && argv[2][0] != '%'
			 && argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* division or modulo by 0 is not allowed */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	/* convert arguments from strings to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* point function pointer to address of f(a, b) */
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(num1, num2);

	printf("%d\n", result);

	return (0);
}
