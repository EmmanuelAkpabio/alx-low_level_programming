#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0; -1 if no element matches
 * or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i); /* return index if element matches */
	}

	return (-1); /* element does not match */
}
