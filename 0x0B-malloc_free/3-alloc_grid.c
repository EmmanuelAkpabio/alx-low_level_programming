#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: matrix column
 * @height: matrix row
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height); /* allocate array of pointers */

	if (arr == NULL) /* on failure */
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* allocate sub-array of integers */
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			/**
			 * On failure, free previously allocated memory
			 * and return NULL
			 */
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}

		/* everything's good, proceed to initialize array */
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
