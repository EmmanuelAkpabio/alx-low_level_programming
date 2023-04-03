#include "lists.h"

/**
 * list_len - returns the number of elements in a linked linst_t list
 * @h: pointer to head of list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}