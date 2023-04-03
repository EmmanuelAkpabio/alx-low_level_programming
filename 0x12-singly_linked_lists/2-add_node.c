#include "lists.h"
#include <string.h>

int _strlen(const char *s);

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: pointer to head node
 * @str: string field of node
 *
 * Return: the address of the new element on success,
 * otherwise, NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = new;
		temp->next = *head;
		*head = new;
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

