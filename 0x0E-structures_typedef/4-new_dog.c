#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *name_copy, *owner_copy;

	new = malloc(sizeof(dog_t));
	if (new == NULL) /* validate new */
		return (NULL);

	new->age = age; /* age is not copied */

	/* copy the name */
	if (name != NULL)
	{
		name_copy = malloc(_strlen(name) + 1);
		if (name_copy == NULL) /* free all memory, return NULL */
		{
			free(new);
			return (NULL);
		}
		/* otherwise, copy sting into name_copy */
		new->name = _strcpy(name_copy, name);
	}
	else
		new->name = NULL; /* leave as NULL if initially NULL */

	/* copy the owner */
	if (owner != NULL)
	{
		owner_copy = malloc(_strlen(owner) + 1);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(new);
			return (NULL);
		}
		new->owner = _strcpy(owner_copy, owner);
	}
	else
		new->owner = NULL;

	return (new);
}

/**
 * _strcpy - copy one string into another
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

/**
 * _strlen - returns the length of string
 * @s: the string
 *
 * Return: the length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
