#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements of array
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int num, n, i;
	char *arr;

	num = nmemb;
	n = size;

	if (num <= 0 || n <= 0)
		return (NULL);

	arr = malloc(num * n); /* memory allocation */

	if (arr == NULL)
		return (NULL);
	/* set memory to 0 */

	for (i = 0; i < num; i++)
		arr[i] = 0;

	return (arr);
}

