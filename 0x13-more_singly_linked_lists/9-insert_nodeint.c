#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a gien position
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
	int data = n;

	new = malloc(sizeof(listint_t)); /* create new node */
	if (new == NULL) /* validate memory */
		return (NULL);

	new->n = data;
	new->next = NULL;

	/* loop until idx is at the correct position or exceeds the postion */
	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL) /* the position does not exist */
		return (NULL);

	new->next = temp->next;
	temp->next = new;

	return (*head);
}
