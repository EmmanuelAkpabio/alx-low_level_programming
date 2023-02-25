#include <stdio.h>

/**
 * getFibonacci - generates fibonacci numbers up to n
 * @n: total count of numbers
 *
 * Return: nothing
 */
void getFibonacci(int n)
{
	unsigned long int num1, num2, sum, over_flow, value;
	unsigned long int n_head, n_tail, m_head, m_tail, sum_head, sum_tail;
	int i;

	num1 = 1;
	num2 = 2;
	value = 10000000000;
	for (i = 0; i <= n; i++)
	{
		if (i == 90)
		{
			n_head = num1 / value;
			n_tail = num1 % value;
			m_head = num2 / value;
			m_tail = num2 % value;
		}
		if (i > 90)
		{
			over_flow = (n_tail + m_tail) / value;
			if (i == 98)
				printf("%lu%lu\n", n_head, n_tail);
			else
				printf("%lu%lu, ", n_head, n_tail);
			sum_head = (n_head + m_head) + over_flow;
			sum_tail = (n_tail + m_tail) - (over_flow * value);
			n_head = m_head;
			n_tail = m_tail;
			m_head = sum_head;
			m_tail = sum_tail;
		}
		else
		{
			printf("%lu, ", num1);
			sum = num1 + num2;
			num1 = num2;
			num2 = sum;
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
