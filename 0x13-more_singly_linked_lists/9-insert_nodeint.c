#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: double pointer to the head node
 * @idx: index of the list where the new node should be added.
 * @n: the integer to add
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new;
	unsigned int i = 0;

	/* allocate memory for new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL) /* validate memory */
		return (NULL);

	/* fill new node with data */
	new->n = n;

	if (idx == 0) /* handle case where new node is at beginning*/
	{
		new->next = *head;
		*head = new;
		return (new);
	}


	/* find the node before the insertion point */
	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	/* check if the index is out or range */
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	/* insert the new node */
	new->next = temp->next;
	temp->next = new;

	return (new);
}
