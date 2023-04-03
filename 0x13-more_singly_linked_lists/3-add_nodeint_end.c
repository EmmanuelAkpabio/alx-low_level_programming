#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: double pointer to the head of list
 * @n: the integer to add to list
 *
 * Return: the address of the head on success; NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;
	int num = n;

	new = malloc(sizeof(listint_t));
	if (new == NULL) /* validate memory allocation */
		return (NULL);

	new->n = num;
	new->next = NULL;

	if (*head == NULL)
		*head = new; /*point head to new node */

	else
	{
		temp = *head; /* point temp to head of list */

		/* transverse list until temp points to last node */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new; /* point temp to new node */
	}

	return (*head);
}

