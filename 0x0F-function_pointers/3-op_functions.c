#include "3-calc.h"

/**
 * op_add - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - retuirns the quotient of two integers
 * @a: the dividend
 * @b: the divisor
 * Return: the quotient of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two integers
 * @a: dividend
 * @b: divisor
 *
 * Return: the remainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
