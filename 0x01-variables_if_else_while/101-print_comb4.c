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

	for (i = '0'; i <= '7'; i++)
	{
		for (j = (i + 1); j <= '8'; j++)
		{
			for (k = (j + 1); k <= '9'; k++)
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

/* Alternative code */

/*
int main(void)
{
	int i;
	int j;
	int k;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar(i + '0'); // converts to char //
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putcar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
*/
