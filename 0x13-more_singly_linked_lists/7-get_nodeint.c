#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: index of the node, starting at 0
 *
 * Return: NULL, if the node does not exist, otherwise, the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
