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
	unsigned int i;
	void *arr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	arr = malloc(nmemb * size); /* memory allocation */

	if (arr == NULL)
		return (NULL);
	/* set memory to 0 */

	for (i = 0; i < (nmemb * size); i++)
		((char *)arr)[i] = 0; /*typecast void to char */

	return (arr);
}

