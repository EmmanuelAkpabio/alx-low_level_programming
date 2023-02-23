#include <stdio.h>

/**
 * getFibonacci - generates the nth fibonacci number
 * @n: the nth fibonacci number
 *
 * Return: the nth fibonacci number
 */
int getFibonacci(int n)
{
	int num1;
	int num2;
	int sum;
	int i;
	int ret;

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
 * firstDigit - returns the first digit of a positive integer
 * @n: The positive integer
 *
 * Return: first digit
 */
int firstDigit(int n)
{
	while (n >= 10)
	{
		n /= 10;
	}
	return (n);
}

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0
 */

int main(void)
{
	int loop;
	int fib;
	int count;
	int endCount;

	loop = 1;
	count = 1;
	endCount = 50;
	while (loop)
	{
		fib = getFibonacci(loop);
		if (firstDigit(fib) == 1 || firstDigit(fib) == 2)
		{
			if (count < endCount)
			{
				printf("%d, ", fib);
				count++;
			}
			else
			{
				printf("%d\n", fib);
				loop = 0;
			}
		}
		if (loop != 0)
			loop++;
	}
	return (0);
}
