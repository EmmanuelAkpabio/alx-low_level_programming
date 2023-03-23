#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user.
 * @s: the operator
 *
 * Return: a pointer to the function that corresponds to
 * the operator "s"
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	/* iterate through ops until operator matches */
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f); /* return pointer to function */
		i++;
	}

	return (NULL);
}
