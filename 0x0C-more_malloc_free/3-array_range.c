#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting value of array
 * @max: last value of array
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, j, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min;

	arr = malloc(sizeof(int) * (size + 1)); /* memory allocation */

	if (arr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		arr[j] = i;

	return (arr);
}

