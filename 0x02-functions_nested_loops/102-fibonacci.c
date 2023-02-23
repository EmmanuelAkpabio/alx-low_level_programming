#include <stdio.h>

/**
 * getFibonacci - generates fibonacci numbers up to n
 * @n: total count of numbers
 *
 * Return: nothing
 */
void getFibonacci(int n)
{
	int num1;
	int num2;
	int sum;
	int i;

	num1 = 1;
	num2 = 2;

	for (i = 1; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d\n", num1);
		}
		else
		{
			printf("%d, ", num1);
			sum = num1 + num2;
			num1 = num2;
			num2 = sum;
		}
	}
}

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	n = 50;
	getFibonacci(n);

	return (0);
}
