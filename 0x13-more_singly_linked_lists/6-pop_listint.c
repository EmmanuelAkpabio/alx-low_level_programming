#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data
 * @head: double pointer to head node
 *
 * Return: 0, if the linked list is empty; otherwise the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	data = (*head)->n; /* copy the data into data variable */

	if (head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	free(temp);

	return (data);
}
