#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: double pointer to the head node
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 on success; -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	/* handle when list is empty */
	if (*head == NULL)
		return (-1);

	temp = *head;
	prev = temp;

	/* handle deletion of first node */
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	/* go to the node that needs deletion */
	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	/* check if the index exist */
	if (temp == NULL)
		return (-1);

	/* otherwise, delete the node */
	prev->next = temp->next;
	free(temp);

	return (1);
}

