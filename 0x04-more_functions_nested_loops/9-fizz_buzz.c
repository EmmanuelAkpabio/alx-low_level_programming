#include <stdio.h>

/**
 * main - prints the numbers form 1 to 100, followed by a new line.
 * For multiples of 3 print Fizz instead of the number.
 * For multiples of 5 print Buzz.
 * For multiples of both 3 and 5, print FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
