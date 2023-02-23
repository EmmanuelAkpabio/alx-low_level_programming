#include <stdio.h>

/**
 * getFibonacci - generates fibonacci numbers up to n
 * @n: total count of numbers
 *
 * Return: nothing
 */
void getFibonacci(int n)
{
	long int num1;
	long int num2;
	long int sum;
	int i;

	num1 = 1;
	num2 = 2;

	for (i = 1; i <= n; i++)
	{
		if (i == n)
		{
			printf("%ld\n", num1);
		}
		else
		{
			printf("%ld, ", num1);
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
