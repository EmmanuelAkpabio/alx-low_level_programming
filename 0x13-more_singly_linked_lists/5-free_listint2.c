#include "lists.h"

/**
 * free_listint2 - functions that frees a listint_t list
 * and sets head to NULL
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL; /* sets head to NULL */
}

