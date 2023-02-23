#include <stdio.h>

/**
 * printBig - prints a long long to long
 * @n: long long integer
 *
 * Return: nothing
 */
void printBig(long int n)
{
	printf("%ld", n / 10000000000);
	printf("%ld", n % 10000000000);
}

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
			if (num1 > 10000000000)
				printBig(num1);
			printf("%ld\n", num1);
		}
		else
		{
			if (num1 > 10000000000)
			{
				printBig(num1);
				printf(", ");
				sum = num1 + num2;
				num1 = num2;
				num2 = sum;
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
}

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	n = 98;
	getFibonacci(n);

	return (0);
}
