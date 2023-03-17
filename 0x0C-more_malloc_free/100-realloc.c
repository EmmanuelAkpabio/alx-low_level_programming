#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with malloc
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size: size, in bytes of the new memory block
 *
 * Return: pointer to the newly re-allocated memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size < 0 || old_size < 0)
		return (NULL);

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL) /* equivalent to malloc(new_size) */
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size); /* New memory allocation */

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* if new_size > old_size, the "added" memory is not initialized */

	for (i = 0; i < new_size && ((char *)ptr)[i] != '\0'; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);
	return (new_ptr);
}





