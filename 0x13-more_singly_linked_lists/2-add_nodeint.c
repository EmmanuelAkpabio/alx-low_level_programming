#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of af listint_t list
 * @head: double pointer to the head of list
 * @n: the integer to add to list
 *
 * Return: the address of the new element on success; NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
		temp = new;
		temp->next = *head;
		*head = new;
	}

	return (*head);
}

