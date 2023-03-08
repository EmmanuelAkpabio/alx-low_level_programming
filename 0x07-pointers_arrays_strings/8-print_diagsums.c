#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonal
 * of a square matrix of integers
 * @a: pointer to matrix
 * @size: matrix size
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, d1, d2;

	d1 = 0, d2 = 0; /* diagonals d1 and d2 are initial summed 0 */

	for (i = 0; i < size; i++)
		d1 += a[(i * size) + i];

	for (i = 1; i <= size; i++)
		d2 += a[(i * size) - i];

	printf("%d, %d\n", d1, d2);
}
