#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - It frees dogs.
 * @d: The dog to be freed.
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
