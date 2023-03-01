#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int swap;
	int i;
	int j;

	i = 0;
	j = n - 1; /* last index of array */

	while (i < j)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;

		i++;
		j--;
	}
}


