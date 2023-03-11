#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * Description: uses unlimited number of coins of values 25, 10, 5,2 and 1 cent
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int cents, coin = 0, i = 0;
	int value[5] = {25, 10, 5, 2, 1};

	if (argc != 2) /*argumetns must be 2 */
		printf("Error\n");
	else
	{
		cents = atoi(argv[1]); /* converts string to integer */

		if (cents < 0)
			printf("0\n");
		if (cents == 0)
		{
			printf("0\n");
			return (1);
		}

		while (cents > 0)
		{
			if (cents >= value[i])
			{
				/* accumulate coins */
				/* and get remainder of cents */

				coin += (cents / value[i]);
				cents = cents % value[i];

				/* no more remainder, end program */
				if (cents == 0)
				{
					printf("%d\n", coin);
					return (0);
				}
			}
			else
				i++;
		}
	}

	return (1);
}
