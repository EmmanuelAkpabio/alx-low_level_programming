#include "lists.h"
#include <string.h>

int _strlen(const char *s);

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: double pointer to head node
 * @str: string field of node
 *
 * Return: the address of the new element on success,
 * otherwise, NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL) /* validate memory allocation */
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL) /* list is initially empty */
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}

/**
 * _strlen - returns the length of string
 * @s: the string
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

