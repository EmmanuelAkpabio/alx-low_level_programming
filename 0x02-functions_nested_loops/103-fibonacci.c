#include <stdio.h>

/**
 * getFibonacci - generates the nth fibonacci number
 * @n: the nth fibonacci number
 *
 * Return: the nth fibonacci number
 */
int getFibonacci(int n)
{
	long int num1;
	long int num2;
	long int sum;
	long int i;
	long int ret;

	num1 = 1;
	num2 = 1;

	for (i = 1; i <= n; i++)
	{
		if (i != n)
		{
			sum = num1 + num2;
			num1 = num2;
			num2 = sum;
		}
		else
			ret = num2;
	}
	return (ret);
}

/**
 * main - prints the sum of even fibonacci numbers less than
 * or equal to 89
 *
 * Return: Always 0
 */

int main(void)
{
	long int loop;
	long int fib;
	long int endNum;
	long int sum;

	loop = 1;
	endNum = 4000000;
	sum = 0;

	while (loop)
	{
		fib = getFibonacci(loop);
		if (fib % 2 == 0 && fib <= endNum)
			sum = sum + fib;
		if (fib > endNum)
			loop = 0;
		if (loop != 0)
			loop++;
	}
	printf("%ld\n", sum);

	return (0);
}
