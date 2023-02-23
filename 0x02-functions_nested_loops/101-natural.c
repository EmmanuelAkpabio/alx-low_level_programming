#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of all multiples of 3 and 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int i;
	int sum;

	n = 1024;
	sum = 0;
	for (i = 3; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		else
			;
	}
	printf("%d\n", sum);

	return (0);
}
