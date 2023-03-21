#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struct dog
 * @d: pointer to struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* free name or owner that exist */

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);

	/* free whole struct */
	free(d);
}
