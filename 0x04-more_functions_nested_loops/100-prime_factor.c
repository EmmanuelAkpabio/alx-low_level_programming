#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int num, fact;

	fact = 2; /* smallest prime factor */

	num = 612852475143;

	while (fact <= num)
	{
		while (num % fact == 0)
		{
			num /= fact;
			if (num == 1)
			{
				printf("%lu\n", fact);
				break;
			}
		}
		fact += 1;
	}
	return (0);
}
