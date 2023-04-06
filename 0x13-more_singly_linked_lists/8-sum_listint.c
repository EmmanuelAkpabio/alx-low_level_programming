#include "lists.h"

/**
 * sum_listint - sums up all the data of the listint_t linked list
 * @head: pointer to head node
 *
 * Return: the sum, otherwise, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

