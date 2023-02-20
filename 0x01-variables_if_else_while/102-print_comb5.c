#include <stdio.h>

/**
 * main - A program that prints all possible combinations of
 * two two-digit numbers.
 * Description: number is i j,
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			/* print tens part of digit i */
			putchar(i / 10 + '0');
			/* print unit part of digit i */
			putchar(i % 10 + '0');
			putchar(' ');
			/* print tens part of digit j */
			putchar(j / 10 + '0');
			/* print unit part of digit j */
			putchar(j % 10 + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
