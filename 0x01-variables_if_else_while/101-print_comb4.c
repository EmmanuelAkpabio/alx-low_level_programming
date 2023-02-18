#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Uses only putchar 6 times max, no type char is allowed.
 *
 * Description: number is ijk
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++) /*hundreds place*/
	{
		for (j = (i + 1); j <= '9'; j++) /*tens=100s+1*/
		{
			for (k = (j + 1); k <= '9'; k++) /*ones*/
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7' || j != '8' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
